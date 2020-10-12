// VR IK Body Component
// (c) Yuri N Kalinin, 2017, ykasczc@gmail.com. All right reserved.

#include "VMKFingersSolverEditor.h"
#include "Framework/Application/SlateApplication.h"
#include "Modules/ModuleManager.h"
#include "ContentBrowserModule.h"
#include "Animation/AnimSequence.h"
#include "Framework/Commands/UICommandInfo.h"
#include "Framework/Commands/UICommandList.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "AssetData.h"
#include "Textures/SlateIcon.h"
#include "EditorDirectories.h"
#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#include "AnimationExportFunctionLibrary.h"

#define LOCTEXT_NAMESPACE "FVMKFingersSolverEditor"

void FVMKFingersSolverEditor::StartupModule()
{
	CommandList = MakeShareable(new FUICommandList);

	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	ContentBrowserModule.GetAllAssetViewContextMenuExtenders().Add(FContentBrowserMenuExtender_SelectedAssets::CreateLambda([this](const TArray<FAssetData>& SelectedAssets)
	{
		TSharedRef<FExtender> Extender = MakeShared<FExtender>();

		if (SelectedAssets.ContainsByPredicate([](const FAssetData& AssetData) { return AssetData.GetClass() == UAnimSequence::StaticClass(); }))
		{
			Extender->AddMenuExtension(
				"AssetContextMoveActions",
				EExtensionHook::After,
				CommandList,
				FMenuExtensionDelegate::CreateLambda([this, SelectedAssets](FMenuBuilder& MenuBuilder)
			{
				MenuBuilder.AddMenuEntry(
					LOCTEXT("VMK_ExportAnimationBVH", "Export Animation (BVH)..."),
					LOCTEXT("VMK_ExportAnimationBVHToolTip", "Export animation sequence to BVH file"),
					FSlateIcon(),
					FUIAction(FExecuteAction::CreateRaw(this, &FVMKFingersSolverEditor::ExportAnimSequenceToBVH, SelectedAssets)));
			}));
		}

		return Extender;
	}));
	ContentBrowserMenuExtenderHandle = ContentBrowserModule.GetAllAssetViewContextMenuExtenders().Last().GetHandle();
}

void FVMKFingersSolverEditor::ExportAnimSequenceToBVH(TArray<FAssetData> SelectedAssets)
{
	IDesktopPlatform* const DesktopPlatform = FDesktopPlatformModule::Get();

	const void* ParentWindowWindowHandle = FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr);

	for (const auto& Asset : SelectedAssets)
	{
		if (Asset.GetClass() == UAnimSequence::StaticClass())
		{
			const FString DefaultPath = FEditorDirectories::Get().GetLastDirectory(ELastDirectory::GENERIC_EXPORT);

			TArray<FString> OutFiles;
			if (DesktopPlatform->SaveFileDialog(
				ParentWindowWindowHandle,
				LOCTEXT("ExportAnimationBVHTitle", "Choose file name to save...").ToString(),
				DefaultPath,
				TEXT(""),//TEXT("Curve Table JSON (*.json)|*.json");
				TEXT("Biovision Hierarchical Data (*.bvh)|*.bvh"),
				EFileDialogFlags::None,
				OutFiles
			))
			{
				const UAnimSequence* AnimSequence = Cast<UAnimSequence>(Asset.GetAsset());
				if (AnimSequence && OutFiles.Num() > 0)
				{
					UAnimationExportFunctionLibrary::ExportAnimSequenceToBVH(AnimSequence, OutFiles[0], true, true);
				}
			}
		}
	}
}

void FVMKFingersSolverEditor::ShutdownModule()
{
	FContentBrowserModule* ContentBrowserModule = FModuleManager::GetModulePtr<FContentBrowserModule>(TEXT("ContentBrowser"));
	if (ContentBrowserModule)
	{
		ContentBrowserModule->GetAllAssetViewContextMenuExtenders().RemoveAll([=](const FContentBrowserMenuExtender_SelectedAssets& InDelegate) { return ContentBrowserMenuExtenderHandle == InDelegate.GetHandle(); });
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FVMKFingersSolverEditor, VMKFingersSolverEditor)
