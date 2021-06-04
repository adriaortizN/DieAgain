#include "NativizedAssets.h"
#include "MyDialogueWidget__pf596304771.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Widget_Information__pf3975599377.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Animation/MovieSceneMarginTrack.h"
#include "Runtime/UMG/Public/Animation/MovieSceneMarginSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "MyGameInstance__pf2410127383.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "MyReplyWidget__pf596304771.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "BaseCharacter__pf1010915279.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Conversation_Actor__pf2744501483.h"
#include "Runtime/Engine/Classes/Kismet/KismetInputLibrary.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/DialogueUserWidget.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "DieAgainGamemode__pf1010915279.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UMyDialogueWidget_C__pf596304771::UMyDialogueWidget_C__pf596304771(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__ContinueSelectedBackground__pf = nullptr;
	bpv__HorizontalBox_120__pf = nullptr;
	bpv__Image_403__pf = nullptr;
	bpv__Image_404__pf = nullptr;
	bpv__Image_405__pf = nullptr;
	bpv__Image_406__pf = nullptr;
	bpv__Image_407__pf = nullptr;
	bpv__Image_870__pf = nullptr;
	bpv__NextButton__pf = nullptr;
	bpv__NextButtonContainer__pf = nullptr;
	bpv__NextText__pf = nullptr;
	bpv__NPCText__pf = nullptr;
	bpv__PlayerVBox__pf = nullptr;
	bpv__Skip__pf = nullptr;
	bpv__SpeakerName__pf = nullptr;
	bpv__InDialogue__pf = nullptr;
	bpv__CurrentNode__pf.id = 0;
	bpv__CurrentPlayerNode__pf.id = 0;
	bpv__currentlySelectedReply__pf = 0;
	bpv__Sound2D__pf = nullptr;
	bpv__KeyboardKey__pf = FKey(TEXT("None"));
	bpv__StringArray__pf = TArray<FString> ();
	bpv__PrintString__pf = FString(TEXT(""));
	bpv__Counter__pf = -1;
	bpv__OwnerActor__pf = nullptr;
	bIsFocusable = true;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMyDialogueWidget_C__pf596304771::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMyDialogueWidget_C__pf596304771::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UMyGameInstance_C__pf2410127383::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMyReplyWidget_C__pf596304771::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABaseCharacter_C__pf1010915279::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGamepadInteraction_C__pf197907997::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AConversation_Actor_C__pf2744501483::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWidget_Information_C__pf3975599377::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Arrow1Anim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Arrow2Anim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Arrow3Anim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	auto __Local__5 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Arrow4Anim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	auto __Local__6 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Arrow5Anim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__6);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[0];
	__Local__7.ComponentPropertyName = FName(TEXT("NextButton"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__8 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(6);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = -852.960938f;
	__Local__10->LayoutData.Offsets.Top = -425.081055f;
	__Local__10->LayoutData.Offsets.Right = 1679.090210f;
	__Local__10->LayoutData.Offsets.Bottom = 347.673248f;
	__Local__10->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__10->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UImage>(__Local__1, TEXT("Image_870"), (EObjectFlags)0x00280008);
	__Local__11->Brush.ImageSize = FVector2D(1853.000000, 389.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<UObject* >(&(__Local__11->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__12 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__13->LayoutData.Offsets.Left = -24.598328f;
	__Local__13->LayoutData.Offsets.Top = -341.081055f;
	__Local__13->LayoutData.Offsets.Right = 1512.725220f;
	__Local__13->LayoutData.Offsets.Bottom = 223.318237f;
	__Local__13->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__13->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__13->LayoutData.Alignment = FVector2D(0.500000, 0.000000);
	__Local__13->Parent = __Local__8;
	auto __Local__14 = NewObject<UTextBlock>(__Local__1, TEXT("NPCText"), (EObjectFlags)0x00280008);
	__Local__14->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"\", \"213F42A24D404CB33F23569EC2ED287B\", \"Greetings, traveler! Welcome to the Great Emporium of Vrykolas, the best magical store you\\'ll find in this life or the next! Every item you see (or don\\'t see!) is a mystery in its own right, and a")
		TEXT("n item of great magical potency! Flying tapestry, talking weaponry, self-reading books, eternal lanterns. You name it, we have it. How can I help you, friend?\")")	);
	__Local__14->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__14->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__14->Font.Size = 30;
	auto& __Local__15 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__14), UTextLayoutWidget::__PPO__Justification() )));
	__Local__15 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__17{};
	const FProperty* __Local__16 = __Local__17.Get();
	if (nullptr == __Local__16)
	{
		__Local__16 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__16);
		__Local__17 = __Local__16;
	}
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((__Local__14), true, 0));
	auto& __Local__18 = (*(AccessPrivateProperty<float >((__Local__14), UTextLayoutWidget::__PPO__LineHeightPercentage() )));
	__Local__18 = 1.200000f;
	__Local__14->Slot = __Local__13;
	__Local__14->bIsVariable = true;
	__Local__13->Content = __Local__14;
	__Local__9.Add(__Local__13);
	auto __Local__19 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_229"), (EObjectFlags)0x00280008);
	__Local__19->LayoutData.Offsets.Left = -759.023682f;
	__Local__19->LayoutData.Offsets.Top = -572.000000f;
	__Local__19->LayoutData.Offsets.Right = 708.878296f;
	__Local__19->LayoutData.Offsets.Bottom = 322.504761f;
	__Local__19->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__19->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__19->Parent = __Local__8;
	auto __Local__20 = NewObject<UVerticalBox>(__Local__1, TEXT("PlayerVBox"), (EObjectFlags)0x00280008);
	__Local__20->Slot = __Local__19;
	__Local__20->bIsVariable = true;
	__Local__19->Content = __Local__20;
	__Local__9.Add(__Local__19);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Left = -1781.921875f;
	__Local__21->LayoutData.Offsets.Top = -421.081055f;
	__Local__21->LayoutData.Offsets.Right = 215.197510f;
	__Local__21->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__21->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__21->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__21->Parent = __Local__8;
	auto __Local__22 = NewObject<UTextBlock>(__Local__1, TEXT("SpeakerName"), (EObjectFlags)0x00280008);
	__Local__22->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"\", \"3CD7A2A041074EF77C8EA09D85877EA0\", \"Merchant\")")	);
	__Local__22->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__22->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__22->Font.Size = 30;
	__Local__22->Slot = __Local__21;
	__Local__22->bIsVariable = true;
	__Local__21->Content = __Local__22;
	__Local__9.Add(__Local__21);
	auto __Local__23 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_17"), (EObjectFlags)0x00280008);
	__Local__23->LayoutData.Offsets.Left = -361.921875f;
	__Local__23->LayoutData.Offsets.Top = -425.081055f;
	__Local__23->LayoutData.Offsets.Right = 219.619629f;
	__Local__23->LayoutData.Offsets.Bottom = 57.670525f;
	__Local__23->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__23->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__23->Parent = __Local__8;
	auto __Local__24 = NewObject<UOverlay>(__Local__1, TEXT("NextButtonContainer"), (EObjectFlags)0x00280008);
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__24), UPanelWidget::__PPO__Slots() )));
	__Local__25 = TArray<UPanelSlot*> ();
	__Local__25.Reserve(7);
	auto __Local__26 = NewObject<UOverlaySlot>(__Local__24, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__26->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__26->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__26->Parent = __Local__24;
	auto __Local__27 = NewObject<UImage>(__Local__1, TEXT("ContinueSelectedBackground"), (EObjectFlags)0x00280008);
	__Local__27->Brush.ImageSize = FVector2D(436.000000, 414.000000);
	auto& __Local__28 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__27->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__28 = FLinearColor(0.000000, 0.775822, 1.000000, 1.000000);
	__Local__27->ColorAndOpacity = FLinearColor(0.838799, 0.838799, 0.838799, 0.215686);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__25.Add(__Local__26);
	auto __Local__29 = NewObject<UOverlaySlot>(__Local__24, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__29->Padding.Left = 170.000000f;
	__Local__29->Parent = __Local__24;
	auto __Local__30 = NewObject<UImage>(__Local__1, TEXT("Image_403"), (EObjectFlags)0x00280008);
	__Local__30->Brush.ImageSize = FVector2D(50.000000, 500.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__30->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__30->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__25.Add(__Local__29);
	auto __Local__32 = NewObject<UOverlaySlot>(__Local__24, TEXT("OverlaySlot_2"), (EObjectFlags)0x00280008);
	__Local__32->Padding.Left = 170.000000f;
	__Local__32->Parent = __Local__24;
	auto __Local__33 = NewObject<UImage>(__Local__1, TEXT("Image_404"), (EObjectFlags)0x00280008);
	__Local__33->Brush.ImageSize = FVector2D(50.000000, 500.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__33->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__25.Add(__Local__32);
	auto __Local__35 = NewObject<UOverlaySlot>(__Local__24, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__35->Padding.Left = 170.000000f;
	__Local__35->Parent = __Local__24;
	auto __Local__36 = NewObject<UImage>(__Local__1, TEXT("Image_405"), (EObjectFlags)0x00280008);
	__Local__36->Brush.ImageSize = FVector2D(50.000000, 500.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__36->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__36->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__25.Add(__Local__35);
	auto __Local__38 = NewObject<UOverlaySlot>(__Local__24, TEXT("OverlaySlot_6"), (EObjectFlags)0x00280008);
	__Local__38->Padding.Left = 170.000000f;
	__Local__38->Parent = __Local__24;
	auto __Local__39 = NewObject<UImage>(__Local__1, TEXT("Image_406"), (EObjectFlags)0x00280008);
	__Local__39->Brush.ImageSize = FVector2D(50.000000, 500.000000);
	auto& __Local__40 = (*(AccessPrivateProperty<UObject* >(&(__Local__39->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__40 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__39->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__25.Add(__Local__38);
	auto __Local__41 = NewObject<UOverlaySlot>(__Local__24, TEXT("OverlaySlot_11"), (EObjectFlags)0x00280008);
	__Local__41->Padding.Left = 170.000000f;
	__Local__41->Parent = __Local__24;
	auto __Local__42 = NewObject<UImage>(__Local__1, TEXT("Image_407"), (EObjectFlags)0x00280008);
	__Local__42->Brush.ImageSize = FVector2D(50.000000, 100.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<UObject* >(&(__Local__42->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__43 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__42->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__25.Add(__Local__41);
	auto __Local__44 = NewObject<UOverlaySlot>(__Local__24, TEXT("OverlaySlot_5"), (EObjectFlags)0x00280008);
	__Local__44->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__44->Parent = __Local__24;
	auto __Local__45 = NewObject<UButton>(__Local__1, TEXT("NextButton"), (EObjectFlags)0x00280008);
	__Local__45->WidgetStyle.Normal.ImageSize = FVector2D(1873.000000, 430.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__45->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__46 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__45->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__48 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__45->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__48 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__45), UPanelWidget::__PPO__Slots() )));
	__Local__49 = TArray<UPanelSlot*> ();
	__Local__49.Reserve(1);
	auto __Local__50 = NewObject<UButtonSlot>(__Local__45, TEXT("ButtonSlot_120"), (EObjectFlags)0x00280008);
	__Local__50->Parent = __Local__45;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, TEXT("NextText"), (EObjectFlags)0x00280008);
	__Local__51->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__51->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__51->Font.Size = 30;
	__Local__51->Slot = __Local__50;
	__Local__51->bIsVariable = true;
	__Local__50->Content = __Local__51;
	__Local__49.Add(__Local__50);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__25.Add(__Local__44);
	__Local__24->Slot = __Local__23;
	__Local__24->bIsVariable = true;
	auto __Local__52 = NewObject<UWidgetNavigation>(__Local__24, TEXT("WidgetNavigation_0"), (EObjectFlags)0x00280008);
	__Local__52->Up.Rule = EUINavigationRule::Stop;
	__Local__52->Down.Rule = EUINavigationRule::Stop;
	__Local__52->Left.Rule = EUINavigationRule::Stop;
	__Local__52->Right.Rule = EUINavigationRule::Stop;
	__Local__24->Navigation = __Local__52;
	__Local__23->Content = __Local__24;
	__Local__9.Add(__Local__23);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__53->LayoutData.Offsets.Top = 101.457504f;
	__Local__53->LayoutData.Offsets.Right = 4.548950f;
	__Local__53->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__53->Parent = __Local__8;
	auto __Local__54 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_120"), (EObjectFlags)0x00280008);
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__54), UPanelWidget::__PPO__Slots() )));
	__Local__55 = TArray<UPanelSlot*> ();
	__Local__55.Reserve(1);
	auto __Local__56 = NewObject<UHorizontalBoxSlot>(__Local__54, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__56->Parent = __Local__54;
	auto __Local__57 = NewObject<USizeBox>(__Local__1, TEXT("SizeBox_133"), (EObjectFlags)0x00280008);
	__Local__57->WidthOverride = 640.462402f;
	__Local__57->bOverride_WidthOverride = true;
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(1);
	auto __Local__59 = NewObject<USizeBoxSlot>(__Local__57, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__59->Parent = __Local__57;
	auto __Local__60 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_133"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__61 = TArray<UPanelSlot*> ();
	__Local__61.Reserve(1);
	auto __Local__62 = NewObject<UCanvasPanelSlot>(__Local__60, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__62->LayoutData.Offsets.Right = 600.000000f;
	__Local__62->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__62->Parent = __Local__60;
	auto __Local__63 = NewObject<UWidget_Information_C__pf3975599377>(__Local__1, TEXT("Skip"), (EObjectFlags)0x00280008);
	__Local__63->bpv__KeyToShow__pf = E__Enum_Keys__pf::NewEnumerator10;
	__Local__63->bpv__InputToShow__pf = E__Enum_Gamepad__pf::NewEnumerator6;
	__Local__63->bpv__Text__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4F10681A4A2ED9B49AC18CA7A259DA73]\", \"A40AEFC0497E035FBFFB3DBE7E9EE982\", \"skip\")")	);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__61.Add(__Local__62);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__55.Add(__Local__56);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__9.Add(__Local__53);
	__Local__1->RootWidget = __Local__8;
	auto __Local__64 = NewObject<UMovieScene>(__Local__2, TEXT("Arrow1Anim"), (EObjectFlags)0x00280008);
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__64), UMovieScene::__PPO__Possessables() )));
	__Local__65 = TArray<FMovieScenePossessable> ();
	__Local__65.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__65.GetData(), 2);
	auto& __Local__66 = __Local__65[0];
	auto& __Local__67 = (*(AccessPrivateProperty<FGuid >(&(__Local__66), FMovieScenePossessable::__PPO__Guid() )));
	__Local__67 = FGuid(0xCE5C6BA1, 0x429F640E, 0xA37095A2, 0x095D29E7);
	auto& __Local__68 = (*(AccessPrivateProperty<FString >(&(__Local__66), FMovieScenePossessable::__PPO__Name() )));
	__Local__68 = FString(TEXT("OverlaySlot_3"));
	auto& __Local__69 = (*(AccessPrivateProperty<UClass* >(&(__Local__66), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__69 = UOverlaySlot::StaticClass();
	auto& __Local__70 = (*(AccessPrivateProperty<FGuid >(&(__Local__66), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__70 = FGuid(0xA4609FF2, 0x4F45D086, 0xA985E48A, 0x2AF029AA);
	auto& __Local__71 = __Local__65[1];
	auto& __Local__72 = (*(AccessPrivateProperty<FGuid >(&(__Local__71), FMovieScenePossessable::__PPO__Guid() )));
	__Local__72 = FGuid(0xA4609FF2, 0x4F45D086, 0xA985E48A, 0x2AF029AA);
	auto& __Local__73 = (*(AccessPrivateProperty<FString >(&(__Local__71), FMovieScenePossessable::__PPO__Name() )));
	__Local__73 = FString(TEXT("Image_403"));
	auto& __Local__74 = (*(AccessPrivateProperty<UClass* >(&(__Local__71), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__74 = UImage::StaticClass();
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__64), UMovieScene::__PPO__ObjectBindings() )));
	__Local__75 = TArray<FMovieSceneBinding> ();
	__Local__75.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__75.GetData(), 2);
	auto& __Local__76 = __Local__75[0];
	auto& __Local__77 = (*(AccessPrivateProperty<FGuid >(&(__Local__76), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__77 = FGuid(0xCE5C6BA1, 0x429F640E, 0xA37095A2, 0x095D29E7);
	auto& __Local__78 = (*(AccessPrivateProperty<FString >(&(__Local__76), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__78 = FString(TEXT("OverlaySlot_3"));
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__76), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__79 = TArray<UMovieSceneTrack*> ();
	__Local__79.Reserve(1);
	auto __Local__80 = NewObject<UMovieSceneMarginTrack>(__Local__64, TEXT("MovieSceneMarginTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__81 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__80), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__81.PropertyName = FName(TEXT("Padding"));
	__Local__81.PropertyPath = FName(TEXT("Padding"));
	__Local__81.bCanUseClassLookup = true;
	auto& __Local__82 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__80), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__82 = TArray<UMovieSceneSection*> ();
	__Local__82.Reserve(1);
	auto __Local__83 = NewObject<UMovieSceneMarginSection>(__Local__80, TEXT("MovieSceneMarginSection_0"), (EObjectFlags)0x00280008);
	auto __Local__84 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__83->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__85 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__83->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__84)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__85)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__83->LeftCurve), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__86 = TArray<FFrameNumber> ();
	__Local__86.Reserve(2);
	__Local__86.Add(FFrameNumber{});
	__Local__86.Add(FFrameNumber{});
	__Local__86[1].Value = 150000;
	auto& __Local__87 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__83->LeftCurve), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__87 = TArray<FMovieSceneFloatValue> ();
	__Local__87.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__87.GetData(), 2);
	auto& __Local__88 = __Local__87[0];
	auto& __Local__89 = __Local__87[1];
	__Local__89.Value = 170.000000f;
	__Local__83->Easing.EaseIn = __Local__84;
	__Local__83->Easing.EaseOut = __Local__85;
	__Local__83->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(150000)));
	auto& __Local__90 = (*(AccessPrivateProperty<FGuid >((__Local__83), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__90 = FGuid(0x0B401933, 0x402A5537, 0x91A215B4, 0x3928B66D);
	__Local__82.Add(__Local__83);
	auto& __Local__91 = (*(AccessPrivateProperty<FGuid >((__Local__80), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__91 = FGuid(0x66BBDF88, 0x40249234, 0xFB2A77BA, 0xD02A2E43);
	auto& __Local__92 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__80), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__92.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__92.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__92.Entries.GetData(), 1);
	auto& __Local__93 = __Local__92.Entries[0];
	__Local__93.Section = __Local__83;
	static TWeakFieldPtr<FProperty> __Local__95{};
	const FProperty* __Local__94 = __Local__95.Get();
	if (nullptr == __Local__94)
	{
		__Local__94 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__94);
		__Local__95 = __Local__94;
	}
	auto& __Local__96 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__93.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__98{};
	const FProperty* __Local__97 = __Local__98.Get();
	if (nullptr == __Local__97)
	{
		__Local__97 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__97);
		__Local__98 = __Local__97;
	}
	auto& __Local__99 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__96), 0)));
	__Local__99 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__101{};
	const FProperty* __Local__100 = __Local__101.Get();
	if (nullptr == __Local__100)
	{
		__Local__100 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__100);
		__Local__101 = __Local__100;
	}
	auto& __Local__102 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__93.Range), 0)));
	auto& __Local__103 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__102), 0)));
	__Local__103 = ERangeBoundTypes::Type::Exclusive;
	static TWeakFieldPtr<FProperty> __Local__105{};
	const FProperty* __Local__104 = __Local__105.Get();
	if (nullptr == __Local__104)
	{
		__Local__104 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__104);
		__Local__105 = __Local__104;
	}
	auto& __Local__106 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__102), 0)));
	__Local__106.Value = 150000;
	__Local__93.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__107 = (*(AccessPrivateProperty<FGuid >((__Local__80), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__107 = FGuid(0x66BBDF88, 0x40249234, 0xFB2A77BA, 0xD02A2E43);
	__Local__79.Add(__Local__80);
	auto& __Local__108 = __Local__75[1];
	auto& __Local__109 = (*(AccessPrivateProperty<FGuid >(&(__Local__108), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__109 = FGuid(0xA4609FF2, 0x4F45D086, 0xA985E48A, 0x2AF029AA);
	auto& __Local__110 = (*(AccessPrivateProperty<FString >(&(__Local__108), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__110 = FString(TEXT("Image_403"));
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__108), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__111 = TArray<UMovieSceneTrack*> ();
	__Local__111.Reserve(1);
	auto __Local__112 = NewObject<UMovieSceneColorTrack>(__Local__64, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__113 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__112), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__113.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__113.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__113.bCanUseClassLookup = true;
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__112), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__114 = TArray<UMovieSceneSection*> ();
	__Local__114.Reserve(1);
	auto __Local__115 = NewObject<UMovieSceneColorSection>(__Local__112, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__116 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__115->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__117 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__115->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__116)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__117)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__118 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__115), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__119 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__118), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__119 = TArray<FFrameNumber> ();
	__Local__119.Reserve(4);
	__Local__119.Add(FFrameNumber{});
	__Local__119.Add(FFrameNumber{});
	__Local__119[1].Value = 30000;
	__Local__119.Add(FFrameNumber{});
	__Local__119[2].Value = 120000;
	__Local__119.Add(FFrameNumber{});
	__Local__119[3].Value = 150000;
	auto& __Local__120 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__118), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__120 = TArray<FMovieSceneFloatValue> ();
	__Local__120.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__120.GetData(), 4);
	auto& __Local__121 = __Local__120[0];
	auto& __Local__122 = __Local__120[1];
	__Local__122.Value = 1.000000f;
	auto& __Local__123 = __Local__120[2];
	__Local__123.Value = 1.000000f;
	auto& __Local__124 = __Local__120[3];
	__Local__115->Easing.EaseIn = __Local__116;
	__Local__115->Easing.EaseOut = __Local__117;
	__Local__115->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__125 = (*(AccessPrivateProperty<FGuid >((__Local__115), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__125 = FGuid(0x4AE5D2C0, 0x4A826C37, 0x6F1623A7, 0x7DA85FC3);
	__Local__114.Add(__Local__115);
	auto& __Local__126 = (*(AccessPrivateProperty<FGuid >((__Local__112), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__126 = FGuid(0xA651F196, 0x4480E843, 0x84233CAF, 0xF9A6D0D9);
	auto& __Local__127 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__112), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__127.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__127.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__127.Entries.GetData(), 1);
	auto& __Local__128 = __Local__127.Entries[0];
	__Local__128.Section = __Local__115;
	auto& __Local__129 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__128.Range), 0)));
	auto& __Local__130 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__129), 0)));
	__Local__130 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__131 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__128.Range), 0)));
	auto& __Local__132 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__131), 0)));
	__Local__132 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__133 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__131), 0)));
	__Local__133.Value = 150000;
	__Local__128.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__134 = (*(AccessPrivateProperty<FGuid >((__Local__112), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__134 = FGuid(0xA651F196, 0x4480E843, 0x84233CAF, 0xF9A6D0D9);
	__Local__111.Add(__Local__112);
	auto& __Local__135 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__64), UMovieScene::__PPO__PlaybackRange() )));
	__Local__135 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(150001)));
	auto& __Local__136 = (*(AccessPrivateProperty<FFrameRate >((__Local__64), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__138{};
	const FProperty* __Local__137 = __Local__138.Get();
	if (nullptr == __Local__137)
	{
		__Local__137 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__137);
		__Local__138 = __Local__137;
	}
	auto& __Local__139 = (*(__Local__137->ContainerPtrToValuePtr<int32 >(&(__Local__136), 0)));
	__Local__139 = 20;
	auto& __Local__140 = (*(AccessPrivateProperty<FGuid >((__Local__64), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__140 = FGuid(0xD1A461D0, 0x47C423A9, 0x07C6268C, 0xE3A60753);
	__Local__2->MovieScene = __Local__64;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 2);
	auto& __Local__141 = __Local__2->AnimationBindings[0];
	__Local__141.WidgetName = FName(TEXT("Image_403"));
	__Local__141.AnimationGuid = FGuid(0xA4609FF2, 0x4F45D086, 0xA985E48A, 0x2AF029AA);
	auto& __Local__142 = __Local__2->AnimationBindings[1];
	__Local__142.WidgetName = FName(TEXT("Image_403"));
	__Local__142.SlotWidgetName = FName(TEXT("OverlaySlot_3"));
	__Local__142.AnimationGuid = FGuid(0xCE5C6BA1, 0x429F640E, 0xA37095A2, 0x095D29E7);
	auto& __Local__143 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__143 = FString(TEXT("Arrow1Anim"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__144 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__144 = FGuid(0xE5BF0E48, 0x40CC5E81, 0x5686F690, 0x267778F1);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__145 = NewObject<UMovieScene>(__Local__3, TEXT("Arrow2Anim"), (EObjectFlags)0x00280008);
	auto& __Local__146 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__145), UMovieScene::__PPO__Possessables() )));
	__Local__146 = TArray<FMovieScenePossessable> ();
	__Local__146.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__146.GetData(), 2);
	auto& __Local__147 = __Local__146[0];
	auto& __Local__148 = (*(AccessPrivateProperty<FGuid >(&(__Local__147), FMovieScenePossessable::__PPO__Guid() )));
	__Local__148 = FGuid(0xEAD263D1, 0x4419A227, 0x87BF3B9B, 0x43D555BB);
	auto& __Local__149 = (*(AccessPrivateProperty<FString >(&(__Local__147), FMovieScenePossessable::__PPO__Name() )));
	__Local__149 = FString(TEXT("OverlaySlot_7"));
	auto& __Local__150 = (*(AccessPrivateProperty<UClass* >(&(__Local__147), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__150 = UOverlaySlot::StaticClass();
	auto& __Local__151 = (*(AccessPrivateProperty<FGuid >(&(__Local__147), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__151 = FGuid(0x47B11DF9, 0x4CFF31F4, 0x5C567B86, 0x8611F342);
	auto& __Local__152 = __Local__146[1];
	auto& __Local__153 = (*(AccessPrivateProperty<FGuid >(&(__Local__152), FMovieScenePossessable::__PPO__Guid() )));
	__Local__153 = FGuid(0x47B11DF9, 0x4CFF31F4, 0x5C567B86, 0x8611F342);
	auto& __Local__154 = (*(AccessPrivateProperty<FString >(&(__Local__152), FMovieScenePossessable::__PPO__Name() )));
	__Local__154 = FString(TEXT("Image_404"));
	auto& __Local__155 = (*(AccessPrivateProperty<UClass* >(&(__Local__152), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__155 = UImage::StaticClass();
	auto& __Local__156 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__145), UMovieScene::__PPO__ObjectBindings() )));
	__Local__156 = TArray<FMovieSceneBinding> ();
	__Local__156.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__156.GetData(), 2);
	auto& __Local__157 = __Local__156[0];
	auto& __Local__158 = (*(AccessPrivateProperty<FGuid >(&(__Local__157), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__158 = FGuid(0xEAD263D1, 0x4419A227, 0x87BF3B9B, 0x43D555BB);
	auto& __Local__159 = (*(AccessPrivateProperty<FString >(&(__Local__157), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__159 = FString(TEXT("OverlaySlot_7"));
	auto& __Local__160 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__157), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__160 = TArray<UMovieSceneTrack*> ();
	__Local__160.Reserve(1);
	auto __Local__161 = NewObject<UMovieSceneMarginTrack>(__Local__145, TEXT("MovieSceneMarginTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__162 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__161), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__162.PropertyName = FName(TEXT("Padding"));
	__Local__162.PropertyPath = FName(TEXT("Padding"));
	__Local__162.bCanUseClassLookup = true;
	auto& __Local__163 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__161), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__163 = TArray<UMovieSceneSection*> ();
	__Local__163.Reserve(1);
	auto __Local__164 = NewObject<UMovieSceneMarginSection>(__Local__161, TEXT("MovieSceneMarginSection_0"), (EObjectFlags)0x00280008);
	auto __Local__165 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__164->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__166 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__164->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__165)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__166)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__167 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__164->LeftCurve), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__167 = TArray<FFrameNumber> ();
	__Local__167.Reserve(2);
	__Local__167.Add(FFrameNumber{});
	__Local__167.Add(FFrameNumber{});
	__Local__167[1].Value = 150000;
	auto& __Local__168 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__164->LeftCurve), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__168 = TArray<FMovieSceneFloatValue> ();
	__Local__168.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__168.GetData(), 2);
	auto& __Local__169 = __Local__168[0];
	auto& __Local__170 = __Local__168[1];
	__Local__170.Value = 170.000000f;
	__Local__164->Easing.EaseIn = __Local__165;
	__Local__164->Easing.EaseOut = __Local__166;
	__Local__164->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__171 = (*(AccessPrivateProperty<FGuid >((__Local__164), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__171 = FGuid(0x8D18740D, 0x446F3BBF, 0xC217E4BB, 0xB7677343);
	__Local__163.Add(__Local__164);
	auto& __Local__172 = (*(AccessPrivateProperty<FGuid >((__Local__161), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__172 = FGuid(0x7BDA7881, 0x4BDD6A5A, 0xC03E5395, 0xE6BE142A);
	auto& __Local__173 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__161), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__173.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__173.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__173.Entries.GetData(), 1);
	auto& __Local__174 = __Local__173.Entries[0];
	__Local__174.Section = __Local__164;
	auto& __Local__175 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__174.Range), 0)));
	auto& __Local__176 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__175), 0)));
	__Local__176 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__177 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__174.Range), 0)));
	auto& __Local__178 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__177), 0)));
	__Local__178 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__179 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__177), 0)));
	__Local__179.Value = 150000;
	__Local__174.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__180 = (*(AccessPrivateProperty<FGuid >((__Local__161), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__180 = FGuid(0x7BDA7881, 0x4BDD6A5A, 0xC03E5395, 0xE6BE142A);
	__Local__160.Add(__Local__161);
	auto& __Local__181 = __Local__156[1];
	auto& __Local__182 = (*(AccessPrivateProperty<FGuid >(&(__Local__181), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__182 = FGuid(0x47B11DF9, 0x4CFF31F4, 0x5C567B86, 0x8611F342);
	auto& __Local__183 = (*(AccessPrivateProperty<FString >(&(__Local__181), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__183 = FString(TEXT("Image_404"));
	auto& __Local__184 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__181), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__184 = TArray<UMovieSceneTrack*> ();
	__Local__184.Reserve(1);
	auto __Local__185 = NewObject<UMovieSceneColorTrack>(__Local__145, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__186 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__185), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__186.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__186.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__186.bCanUseClassLookup = true;
	auto& __Local__187 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__185), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__187 = TArray<UMovieSceneSection*> ();
	__Local__187.Reserve(1);
	auto __Local__188 = NewObject<UMovieSceneColorSection>(__Local__185, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__189 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__188->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__190 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__188->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__189)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__190)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__191 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__188), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__192 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__191), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__192 = TArray<FFrameNumber> ();
	__Local__192.Reserve(4);
	__Local__192.Add(FFrameNumber{});
	__Local__192.Add(FFrameNumber{});
	__Local__192[1].Value = 30000;
	__Local__192.Add(FFrameNumber{});
	__Local__192[2].Value = 120000;
	__Local__192.Add(FFrameNumber{});
	__Local__192[3].Value = 150000;
	auto& __Local__193 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__191), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__193 = TArray<FMovieSceneFloatValue> ();
	__Local__193.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__193.GetData(), 4);
	auto& __Local__194 = __Local__193[0];
	auto& __Local__195 = __Local__193[1];
	__Local__195.Value = 1.000000f;
	auto& __Local__196 = __Local__193[2];
	__Local__196.Value = 1.000000f;
	auto& __Local__197 = __Local__193[3];
	__Local__188->Easing.EaseIn = __Local__189;
	__Local__188->Easing.EaseOut = __Local__190;
	__Local__188->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__198 = (*(AccessPrivateProperty<FGuid >((__Local__188), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__198 = FGuid(0x4E2CE10B, 0x42FF0768, 0x26B4B2B6, 0x51B375B2);
	__Local__187.Add(__Local__188);
	auto& __Local__199 = (*(AccessPrivateProperty<FGuid >((__Local__185), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__199 = FGuid(0x6C7676E4, 0x45D5113E, 0xE857FDB1, 0x00886A7B);
	auto& __Local__200 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__185), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__200.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__200.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__200.Entries.GetData(), 1);
	auto& __Local__201 = __Local__200.Entries[0];
	__Local__201.Section = __Local__188;
	auto& __Local__202 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__201.Range), 0)));
	auto& __Local__203 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__202), 0)));
	__Local__203 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__204 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__201.Range), 0)));
	auto& __Local__205 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__204), 0)));
	__Local__205 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__206 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__204), 0)));
	__Local__206.Value = 150000;
	__Local__201.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__207 = (*(AccessPrivateProperty<FGuid >((__Local__185), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__207 = FGuid(0x6C7676E4, 0x45D5113E, 0xE857FDB1, 0x00886A7B);
	__Local__184.Add(__Local__185);
	auto& __Local__208 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__145), UMovieScene::__PPO__PlaybackRange() )));
	__Local__208 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(150001)));
	auto& __Local__209 = (*(AccessPrivateProperty<FFrameRate >((__Local__145), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__210 = (*(__Local__137->ContainerPtrToValuePtr<int32 >(&(__Local__209), 0)));
	__Local__210 = 20;
	auto& __Local__211 = (*(AccessPrivateProperty<FGuid >((__Local__145), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__211 = FGuid(0x23AEC39E, 0x44443764, 0xC6CADDAE, 0x0854439B);
	__Local__3->MovieScene = __Local__145;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 2);
	auto& __Local__212 = __Local__3->AnimationBindings[0];
	__Local__212.WidgetName = FName(TEXT("Image_404"));
	__Local__212.AnimationGuid = FGuid(0x47B11DF9, 0x4CFF31F4, 0x5C567B86, 0x8611F342);
	auto& __Local__213 = __Local__3->AnimationBindings[1];
	__Local__213.WidgetName = FName(TEXT("Image_404"));
	__Local__213.SlotWidgetName = FName(TEXT("OverlaySlot_7"));
	__Local__213.AnimationGuid = FGuid(0xEAD263D1, 0x4419A227, 0x87BF3B9B, 0x43D555BB);
	auto& __Local__214 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__214 = FString(TEXT("Arrow2Anim"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__215 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__215 = FGuid(0x1F30F52A, 0x49E50C6F, 0x46BEA292, 0xF2BAEE98);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__216 = NewObject<UMovieScene>(__Local__4, TEXT("Arrow3Anim"), (EObjectFlags)0x00280008);
	auto& __Local__217 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__216), UMovieScene::__PPO__Possessables() )));
	__Local__217 = TArray<FMovieScenePossessable> ();
	__Local__217.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__217.GetData(), 2);
	auto& __Local__218 = __Local__217[0];
	auto& __Local__219 = (*(AccessPrivateProperty<FGuid >(&(__Local__218), FMovieScenePossessable::__PPO__Guid() )));
	__Local__219 = FGuid(0x8F0F1DD0, 0x4004956B, 0x3DDA3BBD, 0x201921A0);
	auto& __Local__220 = (*(AccessPrivateProperty<FString >(&(__Local__218), FMovieScenePossessable::__PPO__Name() )));
	__Local__220 = FString(TEXT("OverlaySlot_8"));
	auto& __Local__221 = (*(AccessPrivateProperty<UClass* >(&(__Local__218), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__221 = UOverlaySlot::StaticClass();
	auto& __Local__222 = (*(AccessPrivateProperty<FGuid >(&(__Local__218), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__222 = FGuid(0x55561D0D, 0x44B2570E, 0x19339ABE, 0x5CA8A1E3);
	auto& __Local__223 = __Local__217[1];
	auto& __Local__224 = (*(AccessPrivateProperty<FGuid >(&(__Local__223), FMovieScenePossessable::__PPO__Guid() )));
	__Local__224 = FGuid(0x55561D0D, 0x44B2570E, 0x19339ABE, 0x5CA8A1E3);
	auto& __Local__225 = (*(AccessPrivateProperty<FString >(&(__Local__223), FMovieScenePossessable::__PPO__Name() )));
	__Local__225 = FString(TEXT("Image_405"));
	auto& __Local__226 = (*(AccessPrivateProperty<UClass* >(&(__Local__223), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__226 = UImage::StaticClass();
	auto& __Local__227 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__216), UMovieScene::__PPO__ObjectBindings() )));
	__Local__227 = TArray<FMovieSceneBinding> ();
	__Local__227.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__227.GetData(), 2);
	auto& __Local__228 = __Local__227[0];
	auto& __Local__229 = (*(AccessPrivateProperty<FGuid >(&(__Local__228), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__229 = FGuid(0x8F0F1DD0, 0x4004956B, 0x3DDA3BBD, 0x201921A0);
	auto& __Local__230 = (*(AccessPrivateProperty<FString >(&(__Local__228), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__230 = FString(TEXT("OverlaySlot_8"));
	auto& __Local__231 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__228), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__231 = TArray<UMovieSceneTrack*> ();
	__Local__231.Reserve(1);
	auto __Local__232 = NewObject<UMovieSceneMarginTrack>(__Local__216, TEXT("MovieSceneMarginTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__233 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__232), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__233.PropertyName = FName(TEXT("Padding"));
	__Local__233.PropertyPath = FName(TEXT("Padding"));
	__Local__233.bCanUseClassLookup = true;
	auto& __Local__234 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__232), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__234 = TArray<UMovieSceneSection*> ();
	__Local__234.Reserve(1);
	auto __Local__235 = NewObject<UMovieSceneMarginSection>(__Local__232, TEXT("MovieSceneMarginSection_0"), (EObjectFlags)0x00280008);
	auto __Local__236 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__235->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__237 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__235->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__236)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__237)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__238 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__235->LeftCurve), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__238 = TArray<FFrameNumber> ();
	__Local__238.Reserve(2);
	__Local__238.Add(FFrameNumber{});
	__Local__238.Add(FFrameNumber{});
	__Local__238[1].Value = 150000;
	auto& __Local__239 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__235->LeftCurve), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__239 = TArray<FMovieSceneFloatValue> ();
	__Local__239.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__239.GetData(), 2);
	auto& __Local__240 = __Local__239[0];
	auto& __Local__241 = __Local__239[1];
	__Local__241.Value = 170.000000f;
	__Local__235->Easing.EaseIn = __Local__236;
	__Local__235->Easing.EaseOut = __Local__237;
	__Local__235->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__242 = (*(AccessPrivateProperty<FGuid >((__Local__235), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__242 = FGuid(0xD293E07A, 0x42E22C96, 0xDFCFCFAC, 0x0BA9631C);
	__Local__234.Add(__Local__235);
	auto& __Local__243 = (*(AccessPrivateProperty<FGuid >((__Local__232), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__243 = FGuid(0xC8315852, 0x4D0AFD5F, 0xFC8848AA, 0x35249FC9);
	auto& __Local__244 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__232), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__244.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__244.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__244.Entries.GetData(), 1);
	auto& __Local__245 = __Local__244.Entries[0];
	__Local__245.Section = __Local__235;
	auto& __Local__246 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__245.Range), 0)));
	auto& __Local__247 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__246), 0)));
	__Local__247 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__248 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__245.Range), 0)));
	auto& __Local__249 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__248), 0)));
	__Local__249 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__250 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__248), 0)));
	__Local__250.Value = 150000;
	__Local__245.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__251 = (*(AccessPrivateProperty<FGuid >((__Local__232), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__251 = FGuid(0xC8315852, 0x4D0AFD5F, 0xFC8848AA, 0x35249FC9);
	__Local__231.Add(__Local__232);
	auto& __Local__252 = __Local__227[1];
	auto& __Local__253 = (*(AccessPrivateProperty<FGuid >(&(__Local__252), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__253 = FGuid(0x55561D0D, 0x44B2570E, 0x19339ABE, 0x5CA8A1E3);
	auto& __Local__254 = (*(AccessPrivateProperty<FString >(&(__Local__252), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__254 = FString(TEXT("Image_405"));
	auto& __Local__255 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__252), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__255 = TArray<UMovieSceneTrack*> ();
	__Local__255.Reserve(1);
	auto __Local__256 = NewObject<UMovieSceneColorTrack>(__Local__216, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__257 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__256), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__257.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__257.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__257.bCanUseClassLookup = true;
	auto& __Local__258 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__256), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__258 = TArray<UMovieSceneSection*> ();
	__Local__258.Reserve(1);
	auto __Local__259 = NewObject<UMovieSceneColorSection>(__Local__256, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__260 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__259->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__261 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__259->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__260)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__261)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__262 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__259), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__263 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__262), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__263 = TArray<FFrameNumber> ();
	__Local__263.Reserve(4);
	__Local__263.Add(FFrameNumber{});
	__Local__263.Add(FFrameNumber{});
	__Local__263[1].Value = 30000;
	__Local__263.Add(FFrameNumber{});
	__Local__263[2].Value = 120000;
	__Local__263.Add(FFrameNumber{});
	__Local__263[3].Value = 150000;
	auto& __Local__264 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__262), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__264 = TArray<FMovieSceneFloatValue> ();
	__Local__264.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__264.GetData(), 4);
	auto& __Local__265 = __Local__264[0];
	auto& __Local__266 = __Local__264[1];
	__Local__266.Value = 1.000000f;
	auto& __Local__267 = __Local__264[2];
	__Local__267.Value = 1.000000f;
	auto& __Local__268 = __Local__264[3];
	__Local__259->Easing.EaseIn = __Local__260;
	__Local__259->Easing.EaseOut = __Local__261;
	__Local__259->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__269 = (*(AccessPrivateProperty<FGuid >((__Local__259), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__269 = FGuid(0x8C4DA933, 0x47DDBAFD, 0xCEEE2EBB, 0xA79ACD58);
	__Local__258.Add(__Local__259);
	auto& __Local__270 = (*(AccessPrivateProperty<FGuid >((__Local__256), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__270 = FGuid(0xAF12D32C, 0x4C7A9340, 0x933550B9, 0x1F7D58AC);
	auto& __Local__271 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__256), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__271.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__271.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__271.Entries.GetData(), 1);
	auto& __Local__272 = __Local__271.Entries[0];
	__Local__272.Section = __Local__259;
	auto& __Local__273 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__272.Range), 0)));
	auto& __Local__274 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__273), 0)));
	__Local__274 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__275 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__272.Range), 0)));
	auto& __Local__276 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__275), 0)));
	__Local__276 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__277 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__275), 0)));
	__Local__277.Value = 150000;
	__Local__272.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__278 = (*(AccessPrivateProperty<FGuid >((__Local__256), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__278 = FGuid(0xAF12D32C, 0x4C7A9340, 0x933550B9, 0x1F7D58AC);
	__Local__255.Add(__Local__256);
	auto& __Local__279 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__216), UMovieScene::__PPO__PlaybackRange() )));
	__Local__279 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(150001)));
	auto& __Local__280 = (*(AccessPrivateProperty<FFrameRate >((__Local__216), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__281 = (*(__Local__137->ContainerPtrToValuePtr<int32 >(&(__Local__280), 0)));
	__Local__281 = 20;
	auto& __Local__282 = (*(AccessPrivateProperty<FGuid >((__Local__216), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__282 = FGuid(0xEA303CB6, 0x4E4FFC1F, 0x49FA3A96, 0x716395F4);
	__Local__4->MovieScene = __Local__216;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 2);
	auto& __Local__283 = __Local__4->AnimationBindings[0];
	__Local__283.WidgetName = FName(TEXT("Image_405"));
	__Local__283.AnimationGuid = FGuid(0x55561D0D, 0x44B2570E, 0x19339ABE, 0x5CA8A1E3);
	auto& __Local__284 = __Local__4->AnimationBindings[1];
	__Local__284.WidgetName = FName(TEXT("Image_405"));
	__Local__284.SlotWidgetName = FName(TEXT("OverlaySlot_8"));
	__Local__284.AnimationGuid = FGuid(0x8F0F1DD0, 0x4004956B, 0x3DDA3BBD, 0x201921A0);
	auto& __Local__285 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__285 = FString(TEXT("Arrow3Anim"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__286 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__286 = FGuid(0x93D88E76, 0x4686CDEE, 0x5A06E0B5, 0x4AE34EE8);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
	auto __Local__287 = NewObject<UMovieScene>(__Local__5, TEXT("Arrow4Anim"), (EObjectFlags)0x00280008);
	auto& __Local__288 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__287), UMovieScene::__PPO__Possessables() )));
	__Local__288 = TArray<FMovieScenePossessable> ();
	__Local__288.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__288.GetData(), 2);
	auto& __Local__289 = __Local__288[0];
	auto& __Local__290 = (*(AccessPrivateProperty<FGuid >(&(__Local__289), FMovieScenePossessable::__PPO__Guid() )));
	__Local__290 = FGuid(0x5AEBF6FD, 0x4EF654B1, 0x0A635285, 0xFDADCBA8);
	auto& __Local__291 = (*(AccessPrivateProperty<FString >(&(__Local__289), FMovieScenePossessable::__PPO__Name() )));
	__Local__291 = FString(TEXT("OverlaySlot_9"));
	auto& __Local__292 = (*(AccessPrivateProperty<UClass* >(&(__Local__289), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__292 = UOverlaySlot::StaticClass();
	auto& __Local__293 = (*(AccessPrivateProperty<FGuid >(&(__Local__289), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__293 = FGuid(0x692F0EAC, 0x41390454, 0xE5F74CB8, 0x5B73A601);
	auto& __Local__294 = __Local__288[1];
	auto& __Local__295 = (*(AccessPrivateProperty<FGuid >(&(__Local__294), FMovieScenePossessable::__PPO__Guid() )));
	__Local__295 = FGuid(0x692F0EAC, 0x41390454, 0xE5F74CB8, 0x5B73A601);
	auto& __Local__296 = (*(AccessPrivateProperty<FString >(&(__Local__294), FMovieScenePossessable::__PPO__Name() )));
	__Local__296 = FString(TEXT("Image_406"));
	auto& __Local__297 = (*(AccessPrivateProperty<UClass* >(&(__Local__294), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__297 = UImage::StaticClass();
	auto& __Local__298 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__287), UMovieScene::__PPO__ObjectBindings() )));
	__Local__298 = TArray<FMovieSceneBinding> ();
	__Local__298.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__298.GetData(), 2);
	auto& __Local__299 = __Local__298[0];
	auto& __Local__300 = (*(AccessPrivateProperty<FGuid >(&(__Local__299), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__300 = FGuid(0x5AEBF6FD, 0x4EF654B1, 0x0A635285, 0xFDADCBA8);
	auto& __Local__301 = (*(AccessPrivateProperty<FString >(&(__Local__299), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__301 = FString(TEXT("OverlaySlot_9"));
	auto& __Local__302 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__299), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__302 = TArray<UMovieSceneTrack*> ();
	__Local__302.Reserve(1);
	auto __Local__303 = NewObject<UMovieSceneMarginTrack>(__Local__287, TEXT("MovieSceneMarginTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__304 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__303), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__304.PropertyName = FName(TEXT("Padding"));
	__Local__304.PropertyPath = FName(TEXT("Padding"));
	__Local__304.bCanUseClassLookup = true;
	auto& __Local__305 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__303), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__305 = TArray<UMovieSceneSection*> ();
	__Local__305.Reserve(1);
	auto __Local__306 = NewObject<UMovieSceneMarginSection>(__Local__303, TEXT("MovieSceneMarginSection_0"), (EObjectFlags)0x00280008);
	auto __Local__307 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__306->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__308 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__306->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__307)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__308)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__309 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__306->LeftCurve), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__309 = TArray<FFrameNumber> ();
	__Local__309.Reserve(2);
	__Local__309.Add(FFrameNumber{});
	__Local__309.Add(FFrameNumber{});
	__Local__309[1].Value = 150000;
	auto& __Local__310 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__306->LeftCurve), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__310 = TArray<FMovieSceneFloatValue> ();
	__Local__310.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__310.GetData(), 2);
	auto& __Local__311 = __Local__310[0];
	auto& __Local__312 = __Local__310[1];
	__Local__312.Value = 170.000000f;
	__Local__306->Easing.EaseIn = __Local__307;
	__Local__306->Easing.EaseOut = __Local__308;
	__Local__306->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__313 = (*(AccessPrivateProperty<FGuid >((__Local__306), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__313 = FGuid(0x22504FC1, 0x4413713B, 0x270794A6, 0xF7894DA6);
	__Local__305.Add(__Local__306);
	auto& __Local__314 = (*(AccessPrivateProperty<FGuid >((__Local__303), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__314 = FGuid(0x25F6463F, 0x494ACD05, 0x917C9DA4, 0xA41138D4);
	auto& __Local__315 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__303), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__315.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__315.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__315.Entries.GetData(), 1);
	auto& __Local__316 = __Local__315.Entries[0];
	__Local__316.Section = __Local__306;
	auto& __Local__317 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__316.Range), 0)));
	auto& __Local__318 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__317), 0)));
	__Local__318 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__319 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__316.Range), 0)));
	auto& __Local__320 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__319), 0)));
	__Local__320 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__321 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__319), 0)));
	__Local__321.Value = 150000;
	__Local__316.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__322 = (*(AccessPrivateProperty<FGuid >((__Local__303), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__322 = FGuid(0x25F6463F, 0x494ACD05, 0x917C9DA4, 0xA41138D4);
	__Local__302.Add(__Local__303);
	auto& __Local__323 = __Local__298[1];
	auto& __Local__324 = (*(AccessPrivateProperty<FGuid >(&(__Local__323), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__324 = FGuid(0x692F0EAC, 0x41390454, 0xE5F74CB8, 0x5B73A601);
	auto& __Local__325 = (*(AccessPrivateProperty<FString >(&(__Local__323), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__325 = FString(TEXT("Image_406"));
	auto& __Local__326 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__323), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__326 = TArray<UMovieSceneTrack*> ();
	__Local__326.Reserve(1);
	auto __Local__327 = NewObject<UMovieSceneColorTrack>(__Local__287, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__328 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__327), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__328.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__328.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__328.bCanUseClassLookup = true;
	auto& __Local__329 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__327), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__329 = TArray<UMovieSceneSection*> ();
	__Local__329.Reserve(1);
	auto __Local__330 = NewObject<UMovieSceneColorSection>(__Local__327, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__331 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__330->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__332 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__330->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__331)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__332)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__333 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__330), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__334 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__333), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__334 = TArray<FFrameNumber> ();
	__Local__334.Reserve(4);
	__Local__334.Add(FFrameNumber{});
	__Local__334.Add(FFrameNumber{});
	__Local__334[1].Value = 30000;
	__Local__334.Add(FFrameNumber{});
	__Local__334[2].Value = 120000;
	__Local__334.Add(FFrameNumber{});
	__Local__334[3].Value = 150000;
	auto& __Local__335 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__333), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__335 = TArray<FMovieSceneFloatValue> ();
	__Local__335.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__335.GetData(), 4);
	auto& __Local__336 = __Local__335[0];
	auto& __Local__337 = __Local__335[1];
	__Local__337.Value = 1.000000f;
	auto& __Local__338 = __Local__335[2];
	__Local__338.Value = 1.000000f;
	auto& __Local__339 = __Local__335[3];
	__Local__330->Easing.EaseIn = __Local__331;
	__Local__330->Easing.EaseOut = __Local__332;
	__Local__330->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__340 = (*(AccessPrivateProperty<FGuid >((__Local__330), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__340 = FGuid(0x1E257C34, 0x4FE2A0D3, 0xD94026B4, 0xB4D9D9CC);
	__Local__329.Add(__Local__330);
	auto& __Local__341 = (*(AccessPrivateProperty<FGuid >((__Local__327), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__341 = FGuid(0xFAF55FF1, 0x49292ABB, 0xC65708B7, 0x59ED5E50);
	auto& __Local__342 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__327), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__342.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__342.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__342.Entries.GetData(), 1);
	auto& __Local__343 = __Local__342.Entries[0];
	__Local__343.Section = __Local__330;
	auto& __Local__344 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__343.Range), 0)));
	auto& __Local__345 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__344), 0)));
	__Local__345 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__346 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__343.Range), 0)));
	auto& __Local__347 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__346), 0)));
	__Local__347 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__348 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__346), 0)));
	__Local__348.Value = 150000;
	__Local__343.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__349 = (*(AccessPrivateProperty<FGuid >((__Local__327), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__349 = FGuid(0xFAF55FF1, 0x49292ABB, 0xC65708B7, 0x59ED5E50);
	__Local__326.Add(__Local__327);
	auto& __Local__350 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__287), UMovieScene::__PPO__PlaybackRange() )));
	__Local__350 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(150001)));
	auto& __Local__351 = (*(AccessPrivateProperty<FFrameRate >((__Local__287), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__352 = (*(__Local__137->ContainerPtrToValuePtr<int32 >(&(__Local__351), 0)));
	__Local__352 = 20;
	auto& __Local__353 = (*(AccessPrivateProperty<FGuid >((__Local__287), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__353 = FGuid(0x0023EA59, 0x4E1DA213, 0x8CA3E1B5, 0xB5F98D22);
	__Local__5->MovieScene = __Local__287;
	__Local__5->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__5->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__5->AnimationBindings.GetData(), 2);
	auto& __Local__354 = __Local__5->AnimationBindings[0];
	__Local__354.WidgetName = FName(TEXT("Image_406"));
	__Local__354.AnimationGuid = FGuid(0x692F0EAC, 0x41390454, 0xE5F74CB8, 0x5B73A601);
	auto& __Local__355 = __Local__5->AnimationBindings[1];
	__Local__355.WidgetName = FName(TEXT("Image_406"));
	__Local__355.SlotWidgetName = FName(TEXT("OverlaySlot_9"));
	__Local__355.AnimationGuid = FGuid(0x5AEBF6FD, 0x4EF654B1, 0x0A635285, 0xFDADCBA8);
	auto& __Local__356 = (*(AccessPrivateProperty<FString >((__Local__5), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__356 = FString(TEXT("Arrow4Anim"));
	__Local__5->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__357 = (*(AccessPrivateProperty<FGuid >((__Local__5), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__357 = FGuid(0xFBAA8099, 0x467F2807, 0xFDD9E4AF, 0x01D57A7B);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__5);
	auto __Local__358 = NewObject<UMovieScene>(__Local__6, TEXT("Arrow5Anim"), (EObjectFlags)0x00280008);
	auto& __Local__359 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__358), UMovieScene::__PPO__Possessables() )));
	__Local__359 = TArray<FMovieScenePossessable> ();
	__Local__359.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__359.GetData(), 2);
	auto& __Local__360 = __Local__359[0];
	auto& __Local__361 = (*(AccessPrivateProperty<FGuid >(&(__Local__360), FMovieScenePossessable::__PPO__Guid() )));
	__Local__361 = FGuid(0x355DCC04, 0x416C32F4, 0x82AF42B4, 0xB73899BE);
	auto& __Local__362 = (*(AccessPrivateProperty<FString >(&(__Local__360), FMovieScenePossessable::__PPO__Name() )));
	__Local__362 = FString(TEXT("OverlaySlot_10"));
	auto& __Local__363 = (*(AccessPrivateProperty<UClass* >(&(__Local__360), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__363 = UOverlaySlot::StaticClass();
	auto& __Local__364 = (*(AccessPrivateProperty<FGuid >(&(__Local__360), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__364 = FGuid(0x2CF60FD1, 0x4782DDD6, 0x6E92BAA0, 0x1B310BC8);
	auto& __Local__365 = __Local__359[1];
	auto& __Local__366 = (*(AccessPrivateProperty<FGuid >(&(__Local__365), FMovieScenePossessable::__PPO__Guid() )));
	__Local__366 = FGuid(0x2CF60FD1, 0x4782DDD6, 0x6E92BAA0, 0x1B310BC8);
	auto& __Local__367 = (*(AccessPrivateProperty<FString >(&(__Local__365), FMovieScenePossessable::__PPO__Name() )));
	__Local__367 = FString(TEXT("Image_407"));
	auto& __Local__368 = (*(AccessPrivateProperty<UClass* >(&(__Local__365), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__368 = UImage::StaticClass();
	auto& __Local__369 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__358), UMovieScene::__PPO__ObjectBindings() )));
	__Local__369 = TArray<FMovieSceneBinding> ();
	__Local__369.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__369.GetData(), 2);
	auto& __Local__370 = __Local__369[0];
	auto& __Local__371 = (*(AccessPrivateProperty<FGuid >(&(__Local__370), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__371 = FGuid(0x355DCC04, 0x416C32F4, 0x82AF42B4, 0xB73899BE);
	auto& __Local__372 = (*(AccessPrivateProperty<FString >(&(__Local__370), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__372 = FString(TEXT("OverlaySlot_10"));
	auto& __Local__373 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__370), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__373 = TArray<UMovieSceneTrack*> ();
	__Local__373.Reserve(1);
	auto __Local__374 = NewObject<UMovieSceneMarginTrack>(__Local__358, TEXT("MovieSceneMarginTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__375 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__374), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__375.PropertyName = FName(TEXT("Padding"));
	__Local__375.PropertyPath = FName(TEXT("Padding"));
	__Local__375.bCanUseClassLookup = true;
	auto& __Local__376 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__374), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__376 = TArray<UMovieSceneSection*> ();
	__Local__376.Reserve(1);
	auto __Local__377 = NewObject<UMovieSceneMarginSection>(__Local__374, TEXT("MovieSceneMarginSection_0"), (EObjectFlags)0x00280008);
	auto __Local__378 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__377->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__379 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__377->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__378)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__379)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__380 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__377->LeftCurve), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__380 = TArray<FFrameNumber> ();
	__Local__380.Reserve(2);
	__Local__380.Add(FFrameNumber{});
	__Local__380.Add(FFrameNumber{});
	__Local__380[1].Value = 150000;
	auto& __Local__381 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__377->LeftCurve), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__381 = TArray<FMovieSceneFloatValue> ();
	__Local__381.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__381.GetData(), 2);
	auto& __Local__382 = __Local__381[0];
	auto& __Local__383 = __Local__381[1];
	__Local__383.Value = 170.000000f;
	__Local__377->Easing.EaseIn = __Local__378;
	__Local__377->Easing.EaseOut = __Local__379;
	__Local__377->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__384 = (*(AccessPrivateProperty<FGuid >((__Local__377), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__384 = FGuid(0x87E9CD9E, 0x4C5B744A, 0x8BDC388D, 0x1AC59092);
	__Local__376.Add(__Local__377);
	auto& __Local__385 = (*(AccessPrivateProperty<FGuid >((__Local__374), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__385 = FGuid(0x15B77A11, 0x470B2259, 0x4AE8D3AE, 0x17552DD0);
	auto& __Local__386 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__374), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__386.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__386.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__386.Entries.GetData(), 1);
	auto& __Local__387 = __Local__386.Entries[0];
	__Local__387.Section = __Local__377;
	auto& __Local__388 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__387.Range), 0)));
	auto& __Local__389 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__388), 0)));
	__Local__389 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__390 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__387.Range), 0)));
	auto& __Local__391 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__390), 0)));
	__Local__391 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__392 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__390), 0)));
	__Local__392.Value = 150000;
	__Local__387.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__393 = (*(AccessPrivateProperty<FGuid >((__Local__374), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__393 = FGuid(0x15B77A11, 0x470B2259, 0x4AE8D3AE, 0x17552DD0);
	__Local__373.Add(__Local__374);
	auto& __Local__394 = __Local__369[1];
	auto& __Local__395 = (*(AccessPrivateProperty<FGuid >(&(__Local__394), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__395 = FGuid(0x2CF60FD1, 0x4782DDD6, 0x6E92BAA0, 0x1B310BC8);
	auto& __Local__396 = (*(AccessPrivateProperty<FString >(&(__Local__394), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__396 = FString(TEXT("Image_407"));
	auto& __Local__397 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__394), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__397 = TArray<UMovieSceneTrack*> ();
	__Local__397.Reserve(1);
	auto __Local__398 = NewObject<UMovieSceneColorTrack>(__Local__358, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__399 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__398), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__399.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__399.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__399.bCanUseClassLookup = true;
	auto& __Local__400 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__398), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__400 = TArray<UMovieSceneSection*> ();
	__Local__400.Reserve(1);
	auto __Local__401 = NewObject<UMovieSceneColorSection>(__Local__398, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__402 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__401->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__403 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__401->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__402)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__403)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__404 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__401), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__405 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__404), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__405 = TArray<FFrameNumber> ();
	__Local__405.Reserve(4);
	__Local__405.Add(FFrameNumber{});
	__Local__405.Add(FFrameNumber{});
	__Local__405[1].Value = 30000;
	__Local__405.Add(FFrameNumber{});
	__Local__405[2].Value = 120000;
	__Local__405.Add(FFrameNumber{});
	__Local__405[3].Value = 150000;
	auto& __Local__406 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__404), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__406 = TArray<FMovieSceneFloatValue> ();
	__Local__406.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__406.GetData(), 4);
	auto& __Local__407 = __Local__406[0];
	auto& __Local__408 = __Local__406[1];
	__Local__408.Value = 1.000000f;
	auto& __Local__409 = __Local__406[2];
	__Local__409.Value = 1.000000f;
	auto& __Local__410 = __Local__406[3];
	__Local__401->Easing.EaseIn = __Local__402;
	__Local__401->Easing.EaseOut = __Local__403;
	__Local__401->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(150000)));
	auto& __Local__411 = (*(AccessPrivateProperty<FGuid >((__Local__401), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__411 = FGuid(0x06398FD5, 0x49C2F2A4, 0x01974FB2, 0xA24A7224);
	__Local__400.Add(__Local__401);
	auto& __Local__412 = (*(AccessPrivateProperty<FGuid >((__Local__398), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__412 = FGuid(0x13B3CA3A, 0x49656318, 0xC1ADD390, 0x674746B8);
	auto& __Local__413 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__398), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__413.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__413.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__413.Entries.GetData(), 1);
	auto& __Local__414 = __Local__413.Entries[0];
	__Local__414.Section = __Local__401;
	auto& __Local__415 = (*(__Local__94->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__414.Range), 0)));
	auto& __Local__416 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__415), 0)));
	__Local__416 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__417 = (*(__Local__100->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__414.Range), 0)));
	auto& __Local__418 = (*(__Local__97->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__417), 0)));
	__Local__418 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__419 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__417), 0)));
	__Local__419.Value = 150000;
	__Local__414.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__420 = (*(AccessPrivateProperty<FGuid >((__Local__398), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__420 = FGuid(0x13B3CA3A, 0x49656318, 0xC1ADD390, 0x674746B8);
	__Local__397.Add(__Local__398);
	auto& __Local__421 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__358), UMovieScene::__PPO__PlaybackRange() )));
	__Local__421 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(150001)));
	auto& __Local__422 = (*(AccessPrivateProperty<FFrameRate >((__Local__358), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__423 = (*(__Local__137->ContainerPtrToValuePtr<int32 >(&(__Local__422), 0)));
	__Local__423 = 20;
	auto& __Local__424 = (*(AccessPrivateProperty<FGuid >((__Local__358), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__424 = FGuid(0x104DB35C, 0x4C5AACEB, 0xB66DDF84, 0x3EE8E409);
	__Local__6->MovieScene = __Local__358;
	__Local__6->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__6->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__6->AnimationBindings.GetData(), 2);
	auto& __Local__425 = __Local__6->AnimationBindings[0];
	__Local__425.WidgetName = FName(TEXT("Image_407"));
	__Local__425.AnimationGuid = FGuid(0x2CF60FD1, 0x4782DDD6, 0x6E92BAA0, 0x1B310BC8);
	auto& __Local__426 = __Local__6->AnimationBindings[1];
	__Local__426.WidgetName = FName(TEXT("Image_407"));
	__Local__426.SlotWidgetName = FName(TEXT("OverlaySlot_10"));
	__Local__426.AnimationGuid = FGuid(0x355DCC04, 0x416C32F4, 0x82AF42B4, 0xB73899BE);
	auto& __Local__427 = (*(AccessPrivateProperty<FString >((__Local__6), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__427 = FString(TEXT("Arrow5Anim"));
	__Local__6->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__428 = (*(AccessPrivateProperty<FGuid >((__Local__6), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__428 = FGuid(0x0164A76D, 0x4CFCF9D7, 0x9D9419B2, 0x162727E4);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__6);
}
PRAGMA_ENABLE_OPTIMIZATION
void UMyDialogueWidget_C__pf596304771::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__429;
	SlotNames.Append(__Local__429);
}
void UMyDialogueWidget_C__pf596304771::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__430;
	__Local__430.Reserve(5);
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->MiscConvertedSubobjects[3]));
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->MiscConvertedSubobjects[4]));
	__Local__430.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->MiscConvertedSubobjects[5]));
	TArray<FDelegateRuntimeBinding>  __Local__431;
	__Local__431.AddUninitialized(2);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__431.GetData(), 2);
	auto& __Local__432 = __Local__431[0];
	__Local__432.ObjectName = FString(TEXT("NextText"));
	__Local__432.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__432.FunctionName = FName(TEXT("GetColorAndOpacity_0"));
	auto& __Local__433 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__432.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__433 = TArray<FPropertyPathSegment> ();
	__Local__433.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__433.GetData(), 1);
	auto& __Local__434 = __Local__433[0];
	__Local__434.Name = FName(TEXT("GetContinueColorAndOpacity"));
	auto& __Local__435 = __Local__431[1];
	__Local__435.ObjectName = FString(TEXT("HorizontalBox_120"));
	__Local__435.PropertyName = FName(TEXT("Visibility"));
	__Local__435.FunctionName = FName(TEXT("GetVisibility_0"));
	auto& __Local__436 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__435.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__436 = TArray<FPropertyPathSegment> ();
	__Local__436.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__436.GetData(), 1);
	auto& __Local__437 = __Local__436[0];
	__Local__437.Name = FName(TEXT("GetVisibility_0"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UMyDialogueWidget_C__pf596304771::StaticClass())->MiscConvertedSubobjects[0]), __Local__430, __Local__431);
}
void UMyDialogueWidget_C__pf596304771::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_0(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	bpf__ResetWidget__pf(this);
	bpf__InitFocus__pf();
	bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
	b1l__K2Node_DynamicCast_AsBase_Character__pf = Cast<ABaseCharacter_C__pf1010915279>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
	b1l__K2Node_DynamicCast_bSuccess_5__pf = (b1l__K2Node_DynamicCast_AsBase_Character__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_5__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsBase_Character__pf))
	{
		b1l__K2Node_DynamicCast_AsBase_Character__pf->bpv__blockMenu__pf = true;
	}
	bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf = UGameplayStatics::GetGameInstance(this);
	if(::IsValid(bpv__InDialogue__pf))
	{
		bpv__InDialogue__pf->UDialogue::AssignPersistentOuter(bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf);
	}
	TArray<FDialogueNode>  __Local__438 = {};
	FCustomThunkTemplates::Array_Get(((::IsValid(bpv__InDialogue__pf)) ? (bpv__InDialogue__pf->Data) : (__Local__438)), 0, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
	bpf__ToNpcReply__pf(b1l__CallFunc_Array_Get_Item__pf, true);
	if(::IsValid(bpv__SpeakerName__pf))
	{
		FText  __Local__439 = FText::GetEmpty();
		bpv__SpeakerName__pf->SetText(((::IsValid(bpv__InDialogue__pf)) ? (bpv__InDialogue__pf->Name) : (__Local__439)));
	}
	bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__Arrow1Anim__pf, 0.000000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
	bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__Arrow2Anim__pf, 0.500000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
	bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__Arrow3Anim__pf, 1.000000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
	bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf = UUserWidget::PlayAnimation(bpv__Arrow4Anim__pf, 1.500000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
	bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf = UUserWidget::PlayAnimation(bpv__Arrow5Anim__pf, 2.000000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
	return; //KCST_EndOfThread
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_1(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_7__pf{};
	check(bpp__EntryPoint__pf == 134);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue_7__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(bpfv__CallFunc_GetPlayerController_ReturnValue_7__pf, bpv__PlayerVBox__pf, EMouseLockMode::DoNotLock, false);
	return; //KCST_EndOfThread
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	UMyReplyWidget_C__pf596304771* bpfv__CallFunc_Create_ReturnValue__pf{};
	UVerticalBoxSlot* bpfv__CallFunc_AddChildToVerticalBox_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_6__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				__StateStack.Push(22);
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(b1l__K2Node_CustomEvent_Replies__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				bpf__CheckConditions__pf(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_CheckConditions_Ok__pf);
				if (!b1l__CallFunc_CheckConditions_Ok__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UMyReplyWidget_C__pf596304771>(UWidgetBlueprintLibrary::Create(this, UMyReplyWidget_C__pf596304771::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 16:
			{
				UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("OwnerWidget")), this);
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(b1l__K2Node_CustomEvent_Replies__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("ReplyNode")), b1l__CallFunc_Array_Get_Item_2__pf);
			}
		case 18:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_AddChildToVerticalBox_ReturnValue__pf = bpv__PlayerVBox__pf->UVerticalBox::AddChildToVerticalBox(bpfv__CallFunc_Create_ReturnValue__pf);
				}
			}
		case 19:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_6__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(bpfv__CallFunc_GetPlayerController_ReturnValue_6__pf, bpv__PlayerVBox__pf, EMouseLockMode::DoNotLock, false);
			}
		case 20:
			{
				bpv__currentlySelectedReply__pf = 0;
			}
		case 21:
			{
				bpf__HighlightSelectedReply__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 23:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(b1l__K2Node_CustomEvent_Replies__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				b1l__Temp_int_Array_Index_Variable__pf = b1l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 13;
				break;
			}
		case 61:
			{
				__CurrentState = 62;
				break;
			}
		case 62:
			{
				b1l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 63:
			{
				b1l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 23;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_3(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpv__Counter__pf, 1);
				bpv__Counter__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpv__StringArray__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpv__Counter__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Get(bpv__StringArray__pf, bpv__Counter__pf, /*out*/ b1l__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpv__PrintString__pf, b1l__CallFunc_Array_Get_Item_3__pf);
				bpv__PrintString__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpv__PrintString__pf);
				if(::IsValid(bpv__NPCText__pf))
				{
					bpv__NPCText__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 6:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(1, 87587962, TEXT("ExecuteUbergraph_MyDialogueWidget_3"), this));
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpv__StringArray__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpv__Counter__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 131:
			{
				__CurrentState = 132;
				break;
			}
		case 132:
			{
				b1l__CallFunc_GetCharacterArrayFromString_ReturnValue__pf = UKismetStringLibrary::GetCharacterArrayFromString(b1l__K2Node_CustomEvent_Text__pf);
				bpv__StringArray__pf = b1l__CallFunc_GetCharacterArrayFromString_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_4(int32 bpp__EntryPoint__pf)
{
	FEventReply bpfv__CallFunc_OnKeyboardDown_ReturnValue__pf{};
	FEventReply bpfv__CallFunc_OnKeyboardDown_ReturnValue_1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf{};
	bool bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_1__pf{};
	bool bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_2__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_4__pf{};
	bool bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_3__pf{};
	bool bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_4__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_5__pf{};
	bool bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_5__pf{};
	FEventReply bpfv__CallFunc_OnKeyboardDown_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 118:
			{
				auto __Local__441 = FKeyEvent{};
				bpfv__CallFunc_OnKeyboardDown_ReturnValue__pf = bpf__OnKeyboardDown__pf(__Local__441, bpv__KeyboardKey__pf);
				__CurrentState = -1;
				break;
			}
		case 119:
			{
				__CurrentState = 120;
				break;
			}
		case 120:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					const UScriptStruct* __Local__443 = FKey::StaticStruct();
					uint8* __Local__444 = (uint8*)FMemory_Alloca(__Local__443->GetStructureSize());
					__Local__443->InitializeStruct(__Local__444);
					FKey& __Local__442 = *reinterpret_cast<FKey*>(__Local__444);
					auto& __Local__445 = (*(AccessPrivateProperty<FName >(&(__Local__442), FKey::__PPO__KeyName() )));
					__Local__445 = FName(TEXT("W"));
					bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::WasInputKeyJustPressed(__Local__442);
				}
				if (!bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue__pf)
				{
					__CurrentState = 123;
					break;
				}
			}
		case 121:
			{
				const UScriptStruct* __Local__447 = FKey::StaticStruct();
				uint8* __Local__448 = (uint8*)FMemory_Alloca(__Local__447->GetStructureSize());
				__Local__447->InitializeStruct(__Local__448);
				FKey& __Local__446 = *reinterpret_cast<FKey*>(__Local__448);
				auto& __Local__449 = (*(AccessPrivateProperty<FName >(&(__Local__446), FKey::__PPO__KeyName() )));
				__Local__449 = FName(TEXT("W"));
				bpv__KeyboardKey__pf = __Local__446;
			}
		case 122:
			{
				auto __Local__450 = FKeyEvent{};
				bpfv__CallFunc_OnKeyboardDown_ReturnValue_2__pf = bpf__OnKeyboardDown__pf(__Local__450, bpv__KeyboardKey__pf);
				__CurrentState = -1;
				break;
			}
		case 123:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf))
				{
					const UScriptStruct* __Local__452 = FKey::StaticStruct();
					uint8* __Local__453 = (uint8*)FMemory_Alloca(__Local__452->GetStructureSize());
					__Local__452->InitializeStruct(__Local__453);
					FKey& __Local__451 = *reinterpret_cast<FKey*>(__Local__453);
					auto& __Local__454 = (*(AccessPrivateProperty<FName >(&(__Local__451), FKey::__PPO__KeyName() )));
					__Local__454 = FName(TEXT("Up"));
					bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_3__pf = bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf->APlayerController::WasInputKeyJustPressed(__Local__451);
				}
				if (!bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_3__pf)
				{
					__CurrentState = 124;
					break;
				}
				__CurrentState = 121;
				break;
			}
		case 124:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf))
				{
					const UScriptStruct* __Local__456 = FKey::StaticStruct();
					uint8* __Local__457 = (uint8*)FMemory_Alloca(__Local__456->GetStructureSize());
					__Local__456->InitializeStruct(__Local__457);
					FKey& __Local__455 = *reinterpret_cast<FKey*>(__Local__457);
					auto& __Local__458 = (*(AccessPrivateProperty<FName >(&(__Local__455), FKey::__PPO__KeyName() )));
					__Local__458 = FName(TEXT("S"));
					bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_1__pf = bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf->APlayerController::WasInputKeyJustPressed(__Local__455);
				}
				if (!bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_1__pf)
				{
					__CurrentState = 127;
					break;
				}
			}
		case 125:
			{
				const UScriptStruct* __Local__460 = FKey::StaticStruct();
				uint8* __Local__461 = (uint8*)FMemory_Alloca(__Local__460->GetStructureSize());
				__Local__460->InitializeStruct(__Local__461);
				FKey& __Local__459 = *reinterpret_cast<FKey*>(__Local__461);
				auto& __Local__462 = (*(AccessPrivateProperty<FName >(&(__Local__459), FKey::__PPO__KeyName() )));
				__Local__462 = FName(TEXT("S"));
				bpv__KeyboardKey__pf = __Local__459;
			}
		case 126:
			{
				auto __Local__463 = FKeyEvent{};
				bpfv__CallFunc_OnKeyboardDown_ReturnValue_1__pf = bpf__OnKeyboardDown__pf(__Local__463, bpv__KeyboardKey__pf);
				__CurrentState = -1;
				break;
			}
		case 127:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_4__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_4__pf))
				{
					const UScriptStruct* __Local__465 = FKey::StaticStruct();
					uint8* __Local__466 = (uint8*)FMemory_Alloca(__Local__465->GetStructureSize());
					__Local__465->InitializeStruct(__Local__466);
					FKey& __Local__464 = *reinterpret_cast<FKey*>(__Local__466);
					auto& __Local__467 = (*(AccessPrivateProperty<FName >(&(__Local__464), FKey::__PPO__KeyName() )));
					__Local__467 = FName(TEXT("Down"));
					bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_4__pf = bpfv__CallFunc_GetPlayerController_ReturnValue_4__pf->APlayerController::WasInputKeyJustPressed(__Local__464);
				}
				if (!bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_4__pf)
				{
					__CurrentState = 128;
					break;
				}
				__CurrentState = 125;
				break;
			}
		case 128:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf))
				{
					const UScriptStruct* __Local__469 = FKey::StaticStruct();
					uint8* __Local__470 = (uint8*)FMemory_Alloca(__Local__469->GetStructureSize());
					__Local__469->InitializeStruct(__Local__470);
					FKey& __Local__468 = *reinterpret_cast<FKey*>(__Local__470);
					auto& __Local__471 = (*(AccessPrivateProperty<FName >(&(__Local__468), FKey::__PPO__KeyName() )));
					__Local__471 = FName(TEXT("SpaceBar"));
					bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_2__pf = bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf->APlayerController::WasInputKeyJustPressed(__Local__468);
				}
				if (!bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_2__pf)
				{
					__CurrentState = 130;
					break;
				}
			}
		case 129:
			{
				const UScriptStruct* __Local__473 = FKey::StaticStruct();
				uint8* __Local__474 = (uint8*)FMemory_Alloca(__Local__473->GetStructureSize());
				__Local__473->InitializeStruct(__Local__474);
				FKey& __Local__472 = *reinterpret_cast<FKey*>(__Local__474);
				auto& __Local__475 = (*(AccessPrivateProperty<FName >(&(__Local__472), FKey::__PPO__KeyName() )));
				__Local__475 = FName(TEXT("SpaceBar"));
				bpv__KeyboardKey__pf = __Local__472;
				__CurrentState = 118;
				break;
			}
		case 130:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_5__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_5__pf))
				{
					const UScriptStruct* __Local__477 = FKey::StaticStruct();
					uint8* __Local__478 = (uint8*)FMemory_Alloca(__Local__477->GetStructureSize());
					__Local__477->InitializeStruct(__Local__478);
					FKey& __Local__476 = *reinterpret_cast<FKey*>(__Local__478);
					auto& __Local__479 = (*(AccessPrivateProperty<FName >(&(__Local__476), FKey::__PPO__KeyName() )));
					__Local__479 = FName(TEXT("Enter"));
					bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_5__pf = bpfv__CallFunc_GetPlayerController_ReturnValue_5__pf->APlayerController::WasInputKeyJustPressed(__Local__476);
				}
				if (!bpfv__CallFunc_WasInputKeyJustPressed_ReturnValue_5__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 129;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 115);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__Sound2D__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(bpv__Sound2D__pf))
	{
		bpv__Sound2D__pf->Stop();
	}
	return; //KCST_EndOfThread
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_6(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSound2D_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bool  __Local__480 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsVoiceActive__pf) : (__Local__480)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_SpawnSound2D_ReturnValue__pf = UGameplayStatics::SpawnSound2D(this, b1l__K2Node_CustomEvent_Sound__pf, 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), false, true);
			}
		case 11:
			{
				bpv__Sound2D__pf = bpfv__CallFunc_SpawnSound2D_ReturnValue__pf;
			}
		case 12:
			{
				if(::IsValid(bpv__Sound2D__pf))
				{
					bpv__Sound2D__pf->Play(0.000000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 111:
			{
				__CurrentState = 112;
				break;
			}
		case 112:
			{
				__StateStack.Push(114);
			}
		case 113:
			{
				bpf__StopDialogueSound__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 114:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(b1l__K2Node_CustomEvent_Sound__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 8;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	FText bpfv__CallFunc_ReplaceVarStrings_ReturnValue_1__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 95:
			{
				__CurrentState = 96;
				break;
			}
		case 96:
			{
				bpv__CurrentPlayerNode__pf = b1l__K2Node_CustomEvent_PlayerNode__pf;
			}
		case 97:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b1l__K2Node_CustomEvent_PlayerNode__pf.Sound);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 105;
					break;
				}
			}
		case 98:
			{
				bpf__PlayDialogueSound__pf(b1l__K2Node_CustomEvent_PlayerNode__pf.Sound);
			}
		case 99:
			{
				float  __Local__481 = 0.000000;
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(((::IsValid(b1l__K2Node_CustomEvent_PlayerNode__pf.Sound)) ? (b1l__K2Node_CustomEvent_PlayerNode__pf.Sound->Duration) : (__Local__481)), 0.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 105;
					break;
				}
			}
		case 100:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("GoToNpcReplyTimer")));
				float  __Local__482 = 0.000000;
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b1l__K2Node_CreateDelegate_OutputDelegate__pf, ((::IsValid(b1l__K2Node_CustomEvent_PlayerNode__pf.Sound)) ? (b1l__K2Node_CustomEvent_PlayerNode__pf.Sound->Duration) : (__Local__482)), false, 0.000000, 0.000000);
			}
		case 101:
			{
				bpv__PlayerReplyTimer__pf = bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf;
			}
		case 102:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpv__PlayerVBox__pf->ClearChildren();
				}
			}
		case 103:
			{
				if(::IsValid(bpv__NextButtonContainer__pf))
				{
					bpv__NextButtonContainer__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 104:
			{
				bpfv__CallFunc_ReplaceVarStrings_ReturnValue_1__pf = ReplaceVarStrings(bpv__CurrentPlayerNode__pf.Text);
				if(::IsValid(bpv__NPCText__pf))
				{
					bpv__NPCText__pf->SetText(bpfv__CallFunc_ReplaceVarStrings_ReturnValue_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 105:
			{
				bpf__ToNpcReply__pf(bpv__CurrentPlayerNode__pf, true);
				__CurrentState = -1;
				break;
			}
		case 106:
			{
				__CurrentState = 105;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_8(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue_1__pf{};
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 85:
			{
				__StateStack.Push(88);
			}
		case 86:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue_3__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildAt(b1l__Temp_int_Variable_1__pf);
				}
				b1l__K2Node_DynamicCast_AsMy_Reply_Widget_3__pf = Cast<UMyReplyWidget_C__pf596304771>(bpfv__CallFunc_GetChildAt_ReturnValue_3__pf);
				b1l__K2Node_DynamicCast_bSuccess_4__pf = (b1l__K2Node_DynamicCast_AsMy_Reply_Widget_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 87:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Reply_Widget_3__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Reply_Widget_3__pf->bpv__isSelected__pf = false;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 88:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Variable_1__pf, 1);
				b1l__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 89:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(b1l__Temp_int_Variable_1__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 90;
					break;
				}
				__CurrentState = 85;
				break;
			}
		case 90:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue_1__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildAt(bpv__currentlySelectedReply__pf);
				}
				b1l__K2Node_DynamicCast_AsMy_Reply_Widget_1__pf = Cast<UMyReplyWidget_C__pf596304771>(bpfv__CallFunc_GetChildAt_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_2__pf = (b1l__K2Node_DynamicCast_AsMy_Reply_Widget_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 91:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Reply_Widget_1__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Reply_Widget_1__pf->bpv__isSelected__pf = true;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 108:
			{
				__CurrentState = 109;
				break;
			}
		case 109:
			{
				b1l__Temp_int_Variable_1__pf = 0;
				__CurrentState = 89;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf{};
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 64:
			{
				bpv__currentlySelectedReply__pf = b1l__Temp_int_Variable__pf;
			}
		case 65:
			{
				b1l__Temp_bool_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				b1l__Temp_int_Variable__pf = 0;
			}
		case 67:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b1l__Temp_bool_Variable__pf);
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(b1l__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 73;
					break;
				}
			}
		case 68:
			{
				__StateStack.Push(71);
			}
		case 69:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue_2__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildAt(b1l__Temp_int_Variable__pf);
				}
				b1l__K2Node_DynamicCast_AsMy_Reply_Widget_2__pf = Cast<UMyReplyWidget_C__pf596304771>(bpfv__CallFunc_GetChildAt_ReturnValue_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_3__pf = (b1l__K2Node_DynamicCast_AsMy_Reply_Widget_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 70:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b1l__K2Node_DynamicCast_AsMy_Reply_Widget_2__pf, b1l__K2Node_CustomEvent_WidgetThatWantsSelection__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 64;
				break;
			}
		case 71:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b1l__Temp_bool_Variable__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 73;
					break;
				}
			}
		case 72:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Variable__pf, 1);
				b1l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 67;
				break;
			}
		case 73:
			{
				bpf__HighlightSelectedReply__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 107:
			{
				b1l__Temp_bool_Variable__pf = false;
				__CurrentState = 66;
				break;
			}
		case 110:
			{
				__CurrentState = 107;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_10(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_ReplaceVarStrings_ReturnValue__pf{};
	bool bpfv__CallFunc_TextIsEmpty_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 38:
			{
				__CurrentState = 39;
				break;
			}
		case 39:
			{
				bpv__CurrentNode__pf = b1l__K2Node_CustomEvent_NpcNode__pf;
			}
		case 40:
			{
				bpf__DoEvents__pf(b1l__K2Node_CustomEvent_NpcNode__pf);
			}
		case 41:
			{
				bpf__PlayDialogueSound__pf(b1l__K2Node_CustomEvent_NpcNode__pf.Sound);
			}
		case 42:
			{
				if(::IsValid(bpv__NextButtonContainer__pf))
				{
					bpv__NextButtonContainer__pf->SetVisibility(ESlateVisibility::Collapsed);
				}
			}
		case 43:
			{
				if(::IsValid(bpv__InDialogue__pf))
				{
					b1l__CallFunc_GetNextNodes_ReturnValue__pf = bpv__InDialogue__pf->UDialogue::GetNextNodes(b1l__K2Node_CustomEvent_NpcNode__pf);
				}
			}
		case 44:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpv__PlayerVBox__pf->ClearChildren();
				}
			}
		case 45:
			{
				bpfv__CallFunc_ReplaceVarStrings_ReturnValue__pf = ReplaceVarStrings(b1l__K2Node_CustomEvent_NpcNode__pf.Text);
				if(::IsValid(bpv__NPCText__pf))
				{
					bpv__NPCText__pf->SetText(bpfv__CallFunc_ReplaceVarStrings_ReturnValue__pf);
				}
			}
		case 46:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetNextNodes_ReturnValue__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 49;
					break;
				}
			}
		case 47:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetNextNodes_ReturnValue__pf, 0, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				if (!b1l__CallFunc_Array_Get_Item_1__pf.isPlayer)
				{
					__CurrentState = 50;
					break;
				}
			}
		case 48:
			{
				bpf__DisplayReplies__pf(b1l__CallFunc_GetNextNodes_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				if(::IsValid(bpv__NextButtonContainer__pf))
				{
					bpv__NextButtonContainer__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		case 50:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetNextNodes_ReturnValue__pf, 0, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_TextIsEmpty_ReturnValue__pf = UKismetTextLibrary::TextIsEmpty(b1l__CallFunc_Array_Get_Item_1__pf.Text);
				if (!bpfv__CallFunc_TextIsEmpty_ReturnValue__pf)
				{
					__CurrentState = 54;
					break;
				}
			}
		case 51:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetNextNodes_ReturnValue__pf, 0, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				bpf__DoEvents__pf(b1l__CallFunc_Array_Get_Item_1__pf);
			}
		case 52:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetNextNodes_ReturnValue__pf, 0, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpv__InDialogue__pf))
				{
					b1l__CallFunc_GetNextNodes_ReturnValue_1__pf = bpv__InDialogue__pf->UDialogue::GetNextNodes(b1l__CallFunc_Array_Get_Item_1__pf);
				}
			}
		case 53:
			{
				bpf__DisplayReplies__pf(b1l__CallFunc_GetNextNodes_ReturnValue_1__pf);
				__CurrentState = -1;
				break;
			}
		case 54:
			{
				if(::IsValid(bpv__NextButtonContainer__pf))
				{
					bpv__NextButtonContainer__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 55:
			{
				bpv__currentlySelectedReply__pf = 0;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_11(int32 bpp__EntryPoint__pf)
{
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 74:
			{
				__CurrentState = 75;
				break;
			}
		case 75:
			{
				if(::IsValid(bpv__NextButtonContainer__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__NextButtonContainer__pf->UWidget::IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
				{
					__CurrentState = 79;
					break;
				}
			}
		case 76:
			{
				if (!b1l__K2Node_CustomEvent_Click__pf)
				{
					__CurrentState = 78;
					break;
				}
			}
		case 77:
			{
				bpf__SimulateNextClicked__pf();
				__CurrentState = -1;
				break;
			}
		case 78:
			{
				bpf__SimulateNextHovered__pf();
				__CurrentState = -1;
				break;
			}
		case 79:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildAt(b1l__K2Node_CustomEvent_Index__pf);
				}
				b1l__K2Node_DynamicCast_AsMy_Reply_Widget__pf = Cast<UMyReplyWidget_C__pf596304771>(bpfv__CallFunc_GetChildAt_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_1__pf = (b1l__K2Node_DynamicCast_AsMy_Reply_Widget__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 80:
			{
				if (!b1l__K2Node_CustomEvent_Click__pf)
				{
					__CurrentState = 82;
					break;
				}
			}
		case 81:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Reply_Widget__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Reply_Widget__pf->bpf__SimulateClick__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 82:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Reply_Widget__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Reply_Widget__pf->bpf__SimulateHover__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_12(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_IsTimerActiveHandle_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 56:
			{
				__CurrentState = 57;
				break;
			}
		case 57:
			{
				bpfv__CallFunc_K2_IsTimerActiveHandle_ReturnValue__pf = UKismetSystemLibrary::K2_IsTimerActiveHandle(this, bpv__PlayerReplyTimer__pf);
				if (!bpfv__CallFunc_K2_IsTimerActiveHandle_ReturnValue__pf)
				{
					__CurrentState = 60;
					break;
				}
			}
		case 58:
			{
				bpf__GoToNpcReplyTimer__pf();
			}
		case 59:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__PlayerReplyTimer__pf);
				__CurrentState = -1;
				break;
			}
		case 60:
			{
				bpf__ToNpcReply__pf(bpv__CurrentNode__pf, false);
				__CurrentState = -1;
				break;
			}
		case 83:
			{
				__CurrentState = 84;
				break;
			}
		case 84:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.420000,0.420000,0.420000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				if(::IsValid(bpv__NextText__pf))
				{
					bpv__NextText__pf->UTextBlock::SetColorAndOpacity(b1l__K2Node_MakeStruct_SlateColor__pf);
				}
				__CurrentState = 57;
				break;
			}
		case 92:
			{
				__CurrentState = 93;
				break;
			}
		case 93:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				if(::IsValid(bpv__NextText__pf))
				{
					bpv__NextText__pf->UTextBlock::SetColorAndOpacity(b1l__K2Node_MakeStruct_SlateColor_1__pf);
				}
				__CurrentState = 57;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMyDialogueWidget_C__pf596304771::bpf__ExecuteUbergraph_MyDialogueWidget__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 94);
	return; //KCST_EndOfThread
}
void UMyDialogueWidget_C__pf596304771::bpf__InitFocus__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_1(134);
}
void UMyDialogueWidget_C__pf596304771::bpf__TypeWriteText__pf(const FString& bpp__Text__pf__const)
{
	typedef FString  T__Local__483;
	T__Local__483& bpp__Text__pf = *const_cast<T__Local__483 *>(&bpp__Text__pf__const);
	b1l__K2Node_CustomEvent_Text__pf = bpp__Text__pf;
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_3(131);
}
void UMyDialogueWidget_C__pf596304771::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b1l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b1l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_4(119);
}
void UMyDialogueWidget_C__pf596304771::bpf__StopDialogueSound__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_5(115);
}
void UMyDialogueWidget_C__pf596304771::bpf__PlayDialogueSound__pf(USoundBase* bpp__Sound__pf)
{
	b1l__K2Node_CustomEvent_Sound__pf = bpp__Sound__pf;
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_6(111);
}
void UMyDialogueWidget_C__pf596304771::bpf__MouseSelectReply__pf(UMyReplyWidget_C__pf596304771* bpp__WidgetThatWantsSelection__pf)
{
	b1l__K2Node_CustomEvent_WidgetThatWantsSelection__pf = bpp__WidgetThatWantsSelection__pf;
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_9(110);
}
void UMyDialogueWidget_C__pf596304771::bpf__HighlightSelectedReply__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_8(108);
}
void UMyDialogueWidget_C__pf596304771::bpf__GoToNpcReplyTimer__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_7(106);
}
void UMyDialogueWidget_C__pf596304771::bpf__PlayPlayerReply__pf(FDialogueNode bpp__PlayerNode__pf)
{
	b1l__K2Node_CustomEvent_PlayerNode__pf = bpp__PlayerNode__pf;
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_7(95);
}
void UMyDialogueWidget_C__pf596304771::bpf__Destruct__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_13(94);
}
void UMyDialogueWidget_C__pf596304771::bpf__SimulateNextHovered__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_12(92);
}
void UMyDialogueWidget_C__pf596304771::bpf__SimulateNextClicked__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_12(83);
}
void UMyDialogueWidget_C__pf596304771::bpf__GamepadReply__pf(int32 bpp__Index__pf, bool bpp__Click__pf)
{
	b1l__K2Node_CustomEvent_Index__pf = bpp__Index__pf;
	b1l__K2Node_CustomEvent_Click__pf = bpp__Click__pf;
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_11(74);
}
void UMyDialogueWidget_C__pf596304771::bpf__DisplayReplies__pf(TArray<FDialogueNode> const& bpp__Replies__pf__const)
{
	typedef TArray<FDialogueNode>  T__Local__484;
	T__Local__484& bpp__Replies__pf = *const_cast<T__Local__484 *>(&bpp__Replies__pf__const);
	b1l__K2Node_CustomEvent_Replies__pf = bpp__Replies__pf;
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_2(61);
}
void UMyDialogueWidget_C__pf596304771::bpf__BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_12(56);
}
void UMyDialogueWidget_C__pf596304771::bpf__DisplayNpcNode__pf(FDialogueNode bpp__NpcNode__pf)
{
	b1l__K2Node_CustomEvent_NpcNode__pf = bpp__NpcNode__pf;
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_10(38);
}
void UMyDialogueWidget_C__pf596304771::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_MyDialogueWidget__pf_0(25);
}
FSlateColor  UMyDialogueWidget_C__pf596304771::bpf__GetContinueColorAndOpacity__pf()
{
	FSlateColor bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	FLinearColor bpfv__Temp_struct_Variable__pf(EForceInit::ForceInit);
	FLinearColor bpfv__Temp_struct_Variable_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsHovered_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	FLinearColor bpfv__K2Node_Select_Default__pf(EForceInit::ForceInit);
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor__pf{};
	bpfv__Temp_struct_Variable__pf = FLinearColor(1.000000,1.000000,1.000000,1.000000);
	bpfv__Temp_struct_Variable_1__pf = FLinearColor(0.302083,0.302083,0.302083,1.000000);
	bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__currentlySelectedReply__pf, 0);
	if(::IsValid(bpv__NextButton__pf))
	{
		bpfv__CallFunc_IsHovered_ReturnValue__pf = bpv__NextButton__pf->IsHovered();
	}
	bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf, bpfv__CallFunc_IsHovered_ReturnValue__pf);
	bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_BooleanOR_ReturnValue__pf;
	(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = TSwitchValue<bool , FLinearColor >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FLinearColor >(false, bpfv__Temp_struct_Variable_1__pf), TSwitchPair<bool , FLinearColor >(true, bpfv__Temp_struct_Variable__pf));
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	bpp__ReturnValue__pf = bpfv__K2Node_MakeStruct_SlateColor__pf;
	return bpp__ReturnValue__pf;
}
void UMyDialogueWidget_C__pf596304771::bpf__CheckConditions__pf(FDialogueNode bpp__Node__pf, /*out*/ bool& bpp__Ok__pf)
{
	bool bpfv__CallFunc_IsConditionsMetForNode_ReturnValue__pf{};
	bpfv__CallFunc_IsConditionsMetForNode_ReturnValue__pf = IsConditionsMetForNode(bpp__Node__pf);
	bpp__Ok__pf = bpfv__CallFunc_IsConditionsMetForNode_ReturnValue__pf;
}
void UMyDialogueWidget_C__pf596304771::bpf__DoEvents__pf(FDialogueNode bpp__Node__pf)
{
	RunEventsForNode(bpp__Node__pf);
}
void UMyDialogueWidget_C__pf596304771::bpf__ToNpcReply__pf(FDialogueNode bpp__PlayerReply__pf, bool bpp__FireEvents__pf)
{
	bool bpfv__foundValid__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	ABaseCharacter_C__pf1010915279* bpfv__K2Node_DynamicCast_AsBase_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	TArray<FDialogueNode> bpfv__CallFunc_GetNextNodes_ReturnValue__pf{};
	FDialogueNode bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_CheckConditions_Ok__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__foundValid__pf = false;
			}
		case 2:
			{
				if (!bpp__FireEvents__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpf__DoEvents__pf(bpp__PlayerReply__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__InDialogue__pf))
				{
					bpfv__CallFunc_GetNextNodes_ReturnValue__pf = bpv__InDialogue__pf->UDialogue::GetNextNodes(bpp__PlayerReply__pf);
				}
			}
		case 5:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 6:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 8:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetNextNodes_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 9:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 10:
			{
				__StateStack.Push(22);
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetNextNodes_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__CheckConditions__pf(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_CheckConditions_Ok__pf);
				if (!bpfv__CallFunc_CheckConditions_Ok__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetNextNodes_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__DisplayNpcNode__pf(bpfv__CallFunc_Array_Get_Item__pf);
			}
		case 13:
			{
				bpfv__foundValid__pf = true;
			}
		case 14:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				if (!bpfv__foundValid__pf)
				{
					__CurrentState = 16;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				RemoveFromParent();
			}
		case 17:
			{
				bpf__EndDialogue__pf();
			}
		case 18:
			{
				bpf__StopDialogueSound__pf();
			}
		case 19:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsBase_Character__pf = Cast<ABaseCharacter_C__pf1010915279>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBase_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBase_Character__pf))
				{
					bpfv__K2Node_DynamicCast_AsBase_Character__pf->bpv__blockMenu__pf = false;
				}
			}
		case 21:
			{
				bpf__ResetWidget__pf(((UGamepadInteraction_C__pf197907997*)nullptr));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 8;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
FEventReply  UMyDialogueWidget_C__pf596304771::bpf__OnKeyDown__pf(FGeometry bpp__MyGeometry__pf, FKeyEvent bpp__InKeyEvent__pf)
{
	FEventReply bpp__ReturnValue__pf{};
	FEventReply bpfv__CallFunc_Handled_ReturnValue__pf{};
	FKey bpfv__CallFunc_GetKey_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_2__pf{};
	FEventReply bpfv__CallFunc_Handled_ReturnValue_1__pf{};
	FEventReply bpfv__CallFunc_Handled_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	FEventReply bpfv__CallFunc_Unhandled_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetKey_ReturnValue__pf = UKismetInputLibrary::GetKey(bpp__InKeyEvent__pf);
				const UScriptStruct* __Local__486 = FKey::StaticStruct();
				uint8* __Local__487 = (uint8*)FMemory_Alloca(__Local__486->GetStructureSize());
				__Local__486->InitializeStruct(__Local__487);
				FKey& __Local__485 = *reinterpret_cast<FKey*>(__Local__487);
				auto& __Local__488 = (*(AccessPrivateProperty<FName >(&(__Local__485), FKey::__PPO__KeyName() )));
				__Local__488 = FName(TEXT("Gamepad_DPad_Up"));
				bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_2__pf = UKismetInputLibrary::EqualEqual_KeyKey(bpfv__CallFunc_GetKey_ReturnValue__pf, __Local__485);
				if (!bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_2__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf, 1);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__currentlySelectedReply__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue_1__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf, 0, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				bpv__currentlySelectedReply__pf = bpfv__CallFunc_Clamp_ReturnValue_1__pf;
			}
		case 3:
			{
				bpf__HighlightSelectedReply__pf();
			}
		case 4:
			{
				bpfv__CallFunc_Handled_ReturnValue_2__pf = UWidgetBlueprintLibrary::Handled();
				bpp__ReturnValue__pf = bpfv__CallFunc_Handled_ReturnValue_2__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_GetKey_ReturnValue__pf = UKismetInputLibrary::GetKey(bpp__InKeyEvent__pf);
				const UScriptStruct* __Local__490 = FKey::StaticStruct();
				uint8* __Local__491 = (uint8*)FMemory_Alloca(__Local__490->GetStructureSize());
				__Local__490->InitializeStruct(__Local__491);
				FKey& __Local__489 = *reinterpret_cast<FKey*>(__Local__491);
				auto& __Local__492 = (*(AccessPrivateProperty<FName >(&(__Local__489), FKey::__PPO__KeyName() )));
				__Local__492 = FName(TEXT("Gamepad_DPad_Down"));
				bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_1__pf = UKismetInputLibrary::EqualEqual_KeyKey(bpfv__CallFunc_GetKey_ReturnValue__pf, __Local__489);
				if (!bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_1__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue__pf, 1);
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__currentlySelectedReply__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, 0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpv__currentlySelectedReply__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
			}
		case 7:
			{
				bpf__HighlightSelectedReply__pf();
			}
		case 8:
			{
				bpfv__CallFunc_Handled_ReturnValue_1__pf = UWidgetBlueprintLibrary::Handled();
				bpp__ReturnValue__pf = bpfv__CallFunc_Handled_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetKey_ReturnValue__pf = UKismetInputLibrary::GetKey(bpp__InKeyEvent__pf);
				const UScriptStruct* __Local__494 = FKey::StaticStruct();
				uint8* __Local__495 = (uint8*)FMemory_Alloca(__Local__494->GetStructureSize());
				__Local__494->InitializeStruct(__Local__495);
				FKey& __Local__493 = *reinterpret_cast<FKey*>(__Local__495);
				auto& __Local__496 = (*(AccessPrivateProperty<FName >(&(__Local__493), FKey::__PPO__KeyName() )));
				__Local__496 = FName(TEXT("Gamepad_FaceButton_Bottom"));
				bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf = UKismetInputLibrary::EqualEqual_KeyKey(bpfv__CallFunc_GetKey_ReturnValue__pf, __Local__493);
				if (!bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 10:
			{
				bpf__GamepadReply__pf(bpv__currentlySelectedReply__pf, true);
			}
		case 11:
			{
				bpfv__CallFunc_Handled_ReturnValue__pf = UWidgetBlueprintLibrary::Handled();
				bpp__ReturnValue__pf = bpfv__CallFunc_Handled_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Unhandled_ReturnValue__pf = UWidgetBlueprintLibrary::Unhandled();
				bpp__ReturnValue__pf = bpfv__CallFunc_Unhandled_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UMyDialogueWidget_C__pf596304771::bpf__ReplaceVarStrings__pf(FText const& bpp__InText__pf__const)
{
	typedef FText  T__Local__497;
	T__Local__497& bpp__InText__pf = *const_cast<T__Local__497 *>(&bpp__InText__pf__const);
	FText bpp__ReturnValue__pf{};
	FString bpfv__CurVarstring__pf{};
	FText bpfv__LocalText__pf{};
	TArray<FString> bpfv__CallFunc_FindVarStrings_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	FString bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FString bpfv__CallFunc_RunStringReplacer_resultString__pf{};
	bool bpfv__CallFunc_RunStringReplacer_ReturnValue__pf{};
	FString bpfv__CallFunc_Replace_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(13);
			}
		case 2:
			{
				bpfv__LocalText__pf = bpp__InText__pf;
			}
		case 3:
			{
				bpfv__CallFunc_FindVarStrings_ReturnValue__pf = UDialogueUserWidget::FindVarStrings(bpfv__LocalText__pf);
			}
		case 4:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_FindVarStrings_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 8:
			{
				__StateStack.Push(14);
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_FindVarStrings_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CurVarstring__pf = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 10:
			{
				bpfv__CallFunc_RunStringReplacer_ReturnValue__pf = UDialogueUserWidget::RunStringReplacer(bpfv__CurVarstring__pf, /*out*/ bpfv__CallFunc_RunStringReplacer_resultString__pf);
			}
		case 11:
			{
				if (!bpfv__CallFunc_RunStringReplacer_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("%")), bpfv__CurVarstring__pf);
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpfv__LocalText__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, FString(TEXT("%")));
				bpfv__CallFunc_Replace_ReturnValue__pf = UKismetStringLibrary::Replace(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, bpfv__CallFunc_RunStringReplacer_resultString__pf, ESearchCase::CaseSensitive);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Replace_ReturnValue__pf);
				bpfv__LocalText__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpp__ReturnValue__pf = bpfv__LocalText__pf;
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UMyDialogueWidget_C__pf596304771::bpf__EndDialogue__pf()
{
	AConversation_Actor_C__pf2744501483* bpfv__K2Node_DynamicCast_AsConversation_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsConversation_Actor__pf = Cast<AConversation_Actor_C__pf2744501483>(NPCActor);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsConversation_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsConversation_Actor__pf))
				{
					bpfv__K2Node_DynamicCast_AsConversation_Actor__pf->bpf__StopConversation__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
FEventReply  UMyDialogueWidget_C__pf596304771::bpf__OnKeyboardDown__pf(FKeyEvent bpp__InKeyEvent__pf, FKey bpp__NewParam__pf)
{
	FEventReply bpp__ReturnValue__pf{};
	FEventReply bpfv__CallFunc_Unhandled_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_2__pf{};
	FEventReply bpfv__CallFunc_Handled_ReturnValue__pf{};
	FEventReply bpfv__CallFunc_Handled_ReturnValue_1__pf{};
	FEventReply bpfv__CallFunc_Handled_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__499 = FKey::StaticStruct();
				uint8* __Local__500 = (uint8*)FMemory_Alloca(__Local__499->GetStructureSize());
				__Local__499->InitializeStruct(__Local__500);
				FKey& __Local__498 = *reinterpret_cast<FKey*>(__Local__500);
				auto& __Local__501 = (*(AccessPrivateProperty<FName >(&(__Local__498), FKey::__PPO__KeyName() )));
				__Local__501 = FName(TEXT("W"));
				bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_1__pf = UKismetInputLibrary::EqualEqual_KeyKey(bpp__NewParam__pf, __Local__498);
				if (!bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_1__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue_1__pf, 1);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__currentlySelectedReply__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue_1__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf, 0, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				bpv__currentlySelectedReply__pf = bpfv__CallFunc_Clamp_ReturnValue_1__pf;
			}
		case 3:
			{
				bpf__HighlightSelectedReply__pf();
			}
		case 4:
			{
				bpfv__CallFunc_Handled_ReturnValue_2__pf = UWidgetBlueprintLibrary::Handled();
				bpp__ReturnValue__pf = bpfv__CallFunc_Handled_ReturnValue_2__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				const UScriptStruct* __Local__503 = FKey::StaticStruct();
				uint8* __Local__504 = (uint8*)FMemory_Alloca(__Local__503->GetStructureSize());
				__Local__503->InitializeStruct(__Local__504);
				FKey& __Local__502 = *reinterpret_cast<FKey*>(__Local__504);
				auto& __Local__505 = (*(AccessPrivateProperty<FName >(&(__Local__502), FKey::__PPO__KeyName() )));
				__Local__505 = FName(TEXT("S"));
				bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_2__pf = UKismetInputLibrary::EqualEqual_KeyKey(bpp__NewParam__pf, __Local__502);
				if (!bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue_2__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__PlayerVBox__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue__pf = bpv__PlayerVBox__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue__pf, 1);
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__currentlySelectedReply__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, 0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpv__currentlySelectedReply__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
			}
		case 7:
			{
				bpf__HighlightSelectedReply__pf();
			}
		case 8:
			{
				bpfv__CallFunc_Handled_ReturnValue_1__pf = UWidgetBlueprintLibrary::Handled();
				bpp__ReturnValue__pf = bpfv__CallFunc_Handled_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				const UScriptStruct* __Local__507 = FKey::StaticStruct();
				uint8* __Local__508 = (uint8*)FMemory_Alloca(__Local__507->GetStructureSize());
				__Local__507->InitializeStruct(__Local__508);
				FKey& __Local__506 = *reinterpret_cast<FKey*>(__Local__508);
				auto& __Local__509 = (*(AccessPrivateProperty<FName >(&(__Local__506), FKey::__PPO__KeyName() )));
				__Local__509 = FName(TEXT("SpaceBar"));
				bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf = UKismetInputLibrary::EqualEqual_KeyKey(bpp__NewParam__pf, __Local__506);
				if (!bpfv__CallFunc_EqualEqual_KeyKey_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 10:
			{
				bpf__GamepadReply__pf(bpv__currentlySelectedReply__pf, true);
			}
		case 11:
			{
				bpfv__CallFunc_Handled_ReturnValue__pf = UWidgetBlueprintLibrary::Handled();
				bpp__ReturnValue__pf = bpfv__CallFunc_Handled_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Unhandled_ReturnValue__pf = UWidgetBlueprintLibrary::Unhandled();
				bpp__ReturnValue__pf = bpfv__CallFunc_Unhandled_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UMyDialogueWidget_C__pf596304771::bpf__GetVisibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__IsSkipeable__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	AConversation_Actor_C__pf2744501483* bpfv__K2Node_DynamicCast_AsConversation_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsConversation_Actor__pf = Cast<AConversation_Actor_C__pf2744501483>(bpv__OwnerActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsConversation_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bool  __Local__510 = false;
				bpfv__IsSkipeable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsConversation_Actor__pf)) ? (bpfv__K2Node_DynamicCast_AsConversation_Actor__pf->bpv__IsSkipable__pf) : (__Local__510));
			}
		case 3:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bpfv__Temp_bool_Variable__pf = bpfv__IsSkipeable__pf;
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__IsSkipeable__pf = false;
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UMyDialogueWidget_C__pf596304771::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{387, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/HUD_02.HUD_02 
		{388, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Game/Fonts/coolvetica_rg_Font.coolvetica_rg_Font 
		{389, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/ArrowDialogue2.ArrowDialogue2 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UMyDialogueWidget_C__pf596304771::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{663, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/GamepadInteraction.GamepadInteraction_C 
		{390, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_W.Key_W 
		{391, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_A.Key_A 
		{392, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_S.Key_S 
		{393, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_D.Key_D 
		{394, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_E.Key_E 
		{395, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_P.Key_P 
		{396, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/SPACE.SPACE 
		{397, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/PerfectWorldArt/Kibo1.Kibo1 
		{398, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.OverlaySlot 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameInstance 
		{399, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/DialoguePlugin.DialogueNode 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Widget 
		{400, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{401, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBoxSlot 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SoundBase 
		{293, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AudioComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{402, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/UMG.EventReply 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{403, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{404, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{405, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBox 
		{325, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/DialoguePlugin.Dialogue 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
		{326, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Overlay 
		{327, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.PanelWidget 
		{328, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{329, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.KeyEvent 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{330, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/DialoguePlugin.DialogueUserWidget 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{331, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.HorizontalBox 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Button_Overlap.Button_Overlap 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Button_Normal.Button_Normal 
		{332, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_R.Key_R 
		{333, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Escape.Escape 
		{334, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_A.Gamepad_A 
		{335, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_B.Gamepad_B 
		{336, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Start.Gamepad_Start 
		{337, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Select.Gamepad_Select 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Up.Gamepad_Stick_Up 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Down.Gamepad_Stick_Down 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_X.Gamepad_X 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Y.Gamepad_Y 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Left.Gamepad_Stick_Left 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Right.Gamepad_Stick_Right 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Game/Fonts/28_Days_Later_Font.28_Days_Later_Font 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/FMODStudio.FMODEventInstance 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_NF.C_NF 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_PerfectWorld.C_PerfectWorld 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_3.C_3 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_10.C_10 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_9.C_9 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_8.C_8 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_7.C_7 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_6.C_6 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_5.C_5 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_4.C_4 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_2.C_2 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_1.C_1 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_Tut.C_Tut 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/Art/Enemies/Death_Trans_Clean_MAT_Inst.Death_Trans_Clean_MAT_Inst 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy1/EnemyType1.EnemyType1 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/OnlineSubsystemUtils.AchievementWriteDelegate__DelegateSignature 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SaveGame 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMesh 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInterface 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TargetPoint 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/FMODStudio.FMODBlueprintStatics 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Rifle_Walk_mixamo_com.Rifle_Walk_mixamo_com 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/Enemy1/Enemy1_MAT.Enemy1_MAT 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/Enemy1/_Eye_trans._Eye_trans 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ka47/SM_KA47.SM_KA47 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_MuzzleFlash1_01.Par_MuzzleFlash1_01 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/Art/Weapons/Sniper/SniperPartycleSystemLaser.SniperPartycleSystemLaser 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/Art/Weapons/Sniper/SniperShootPS2.SniperShootPS2 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/BLS_RattleSnake_Content/Meshes/Attachments/SM_RattleSnake_Silencer.SM_RattleSnake_Silencer 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/BLS_RattleSnake_Content/Meshes/Attachments/SM_RattleSnake_Scope_X6.SM_RattleSnake_Scope_X6 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Buttstock.SM_Buttstock 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Barrel_Cover.SM_Barrel_Cover 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Handguard_Type_1.SM_Handguard_Type_1 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_Vulcannon_Player.Par_Vulcannon_Player 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/Enemy1/RedMaterial.RedMaterial 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpotLightComponent 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Art/GasMask/GasMask.GasMask 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Circle/Circulo1_Mat.Circulo1_Mat 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PointLightComponent 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/FMODStudio.FMODAudioComponent 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Paper2D.PaperSpriteComponent 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  PaperSprite /Game/Art/Circle/Circulo3_Sprite.Circulo3_Sprite 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Controller 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DecalComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameModeBase 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.ParticleCollisionSignature__DelegateSignature 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Rifle/RifleShoot.RifleShoot 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShootNoBump1.ShotgunShootNoBump1 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Art/Weapons/RPG/RPGNoAmmoStatic.RPGNoAmmoStatic 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShoot.ShotgunShoot 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BehaviorTree /Game/Enemies/BehaviorShooting/ShootingAITree.ShootingAITree 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BehaviorTree /Game/Enemies/BehaviorSuicide/SuicideAITree.SuicideAITree 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BehaviorTree /Game/Enemies/BehaviorSniper/SniperAITree.SniperAITree 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BehaviorTree /Game/Enemies/BehaviorSlave/SlaveAITree.SlaveAITree 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Sniper/SniperShoot.SniperShoot 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/NoAmmo/NoAmmo.NoAmmo 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.LocalLightComponent 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Death1.Death1 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/Art/Blood/Splatter_PS.Splatter_PS 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Blood/Splatters_Decal_M.Splatters_Decal_M 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.ParticleSysParam 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EParticleSysParamType 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/VIP/Delta.Delta 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/VIP/VIP_MAT.VIP_MAT 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_2/NF_Soldier2.NF_Soldier2 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/EnemyNF_2/NF_Soldier2_color_Mat.NF_Soldier2_color_Mat 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_5/NF_Soldier5.NF_Soldier5 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/EnemyNF_5/NF_Soldier5_color_Mat.NF_Soldier5_color_Mat 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_1/NF_Soldier1.NF_Soldier1 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/EnemyNF_1/NF_Soldier1_color_Mat.NF_Soldier1_color_Mat 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_4/NF_Soldier4.NF_Soldier4 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/EnemyNF_4/NF_Soldier4_color_Mat.NF_Soldier4_color_Mat 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_3/NF_Soldier3.NF_Soldier3 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/EnemyNF_3/NF_Soldier3_color_Mat.NF_Soldier3_color_Mat 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_6/NF_Soldier6.NF_Soldier6 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/EnemyNF_6/NF_Soldier6_color_Mat.NF_Soldier6_color_Mat 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy5/Enemy5.Enemy5 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/Enemy5/Enemy5_MAT.Enemy5_MAT 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy4/Enemy4.Enemy4 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/Enemy4/Enemy4_MAT.Enemy4_MAT 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy3/Enemy3.Enemy3 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/Enemy3/Enemy3_MAT.Enemy3_MAT 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy6/Enemy6.Enemy6 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/Enemy6/Enemy6_MAT.Enemy6_MAT 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy2/Enemy2.Enemy2 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/Enemy2/Enemy2_MAT.Enemy2_MAT 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT1.GasMaskMAT1 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT2.GasMaskMAT2 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT3.GasMaskMAT3 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT4.GasMaskMAT4 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT5.GasMaskMAT5 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT6.GasMaskMAT6 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT7.GasMaskMAT7 
		{160, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT8.GasMaskMAT8 
		{161, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT9.GasMaskMAT9 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT10.GasMaskMAT10 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT11.GasMaskMAT11 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GasMask/GasMaskMAT12.GasMaskMAT12 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Knife/KnifeShoot.KnifeShoot 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/M4A4_Animated/Sounds/Sound_Packs/Warfare_SFX_Bundle/Gun_Sound_Essentials/Wavs/Shotgun01.Shotgun01 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeRifle.CameraShakeRifle_C 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  CameraShakeRifle_C /Game/CameraActor/CameraShakeRifle.Default__CameraShakeRifle_C 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeShotgun.CameraShakeShotgun_C 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  CameraShakeShotgun_C /Game/CameraActor/CameraShakeShotgun.Default__CameraShakeShotgun_C 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeSniper.CameraShakeSniper_C 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  CameraShakeSniper_C /Game/CameraActor/CameraShakeSniper.Default__CameraShakeSniper_C 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave1/SlaveMesh1.SlaveMesh1 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave1/BodySlave1.BodySlave1 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave2/Slave2NoArms.Slave2NoArms 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave2/BodySlave2.BodySlave2 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave3/Slave3NoArms.Slave3NoArms 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave3/BodySlave3.BodySlave3 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CapsuleComponent 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ka47/M_KA47.M_KA47 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Shotgun_StaticMesh.Shotgun_StaticMesh 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/BLS_Shotgun/Materials/Black/MI_Black_Tex1.MI_Black_Tex1 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/M9_Knife/SM_M9_Knife.SM_M9_Knife 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/M9_Knife/M_M9_Knife.M_M9_Knife 
		{185, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/BLS_RattleSnake_Content/Sniper_StaticMesh.Sniper_StaticMesh 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/BLS_RattleSnake_Content/Materials/Cooper_Black/MI_SniperRifleCooper_p1.MI_SniperRifleCooper_p1 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/BLS_RattleSnake_Content/Materials/Cooper_Black/MI_SniperRifleCooper_p2.MI_SniperRifleCooper_p2 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/BLS_RattleSnake_Content/Materials/Cooper_Black/MI_SniperRifleCooper_p3.MI_SniperRifleCooper_p3 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Art/Weapons/RPG/RPGAllStatic.RPGAllStatic 
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Weapons/RPG/Plastic_Smooth_-_Dark_Brown.Plastic_Smooth_-_Dark_Brown 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Weapons/RPG/Metallic_Paint_Glossy_-_Forest_Green.Metallic_Paint_Glossy_-_Forest_Green 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Weapons/RPG/Metal_Aluminum_Polished.Metal_Aluminum_Polished 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/KA_Val/SM_KA_Val_Y.SM_KA_Val_Y 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/KA_Val/M_KA_Val_Black_Camo.M_KA_Val_Black_Camo 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MovementComponent 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Alarm/ScannerMaterial.ScannerMaterial 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/Art/Enemies/Expose_Trans_Clean_MAT_Inst.Expose_Trans_Clean_MAT_Inst 
		{414, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_GradientFog.M_GradientFog 
		{415, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ColorIndexer.M_ColorIndexer 
		{416, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Dither.M_Dither 
		{417, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Speedlines.M_Speedlines 
		{418, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_CyberScan.M_CyberScan 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.HUD 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpectatorPawn 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/Mouse/Mira.Mira 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{209, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Art/Weapons/Sniper/SniperSM.SniperSM 
		{210, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder 
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Post_Apoca_Character/Mesh/GasMask_StaticMesh.GasMask_StaticMesh 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Hara/Meshes/SM_Hara_horn.SM_Hara_horn 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Helmet.SK_GothicKnight_Helmet 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Glove.SK_GothicKnight_Glove 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_CapeFur.SK_GothicKnight_CapeFur 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/GKnight/Materials/CustomizationExample/MI_GKnightCape.MI_GKnightCape 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_BodySkirtLong.SK_GothicKnight_BodySkirtLong 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Pants.SK_GothicKnight_Pants 
		{219, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Head.SK_GothicKnight_Head 
		{220, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Art/PumpkinHead/PumpkinHead.PumpkinHead 
		{221, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/CyberGirl/Character/Meshes/Skin01/SK_CyberGirl_Skin01.SK_CyberGirl_Skin01 
		{222, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Astro/astrorig.astrorig 
		{223, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Steiner/Steiner.Steiner 
		{224, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/AnimRobot/DyingBack_Robot.DyingBack_Robot 
		{225, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_DieB.Anim_DieB 
		{226, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/DyingBack_PostApoc.DyingBack_PostApoc 
		{227, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Knocked_Down_Short.Knocked_Down_Short 
		{228, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/Art/Blood/SplatterRed_PS.SplatterRed_PS 
		{229, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/Blood/SplattersRed_Decal_M.SplattersRed_Decal_M 
		{230, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Post_Apoca_Character/Mesh/SK_Full.SK_Full 
		{231, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/SciFi_Robot/MESHES/SCIFI_ROBOT_IK_SK.SCIFI_ROBOT_IK_SK 
		{232, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Apocalypse_Girl/Mesh/SK_Apocalypse_Girl_Full.SK_Apocalypse_Girl_Full 
		{233, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Hara/Meshes/SM_Hara.SM_Hara 
		{234, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Base_Materials/M_brow_F.M_brow_F 
		{235, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Base_Materials/M_cheek.M_cheek 
		{236, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara_eye_l.M_hara_eye_l 
		{237, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara_eye_r.M_hara_eye_r 
		{238, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Base_Materials/M_eyebase_F.M_eyebase_F 
		{239, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Base_Materials/M_face_C.M_face_C 
		{240, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara_hair.M_hara_hair 
		{241, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara_wing.M_hara_wing 
		{242, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara.M_hara 
		{243, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Post_Apoca_Character/Material/M_Post_Apocal_Trans.M_Post_Apocal_Trans 
		{244, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkinnedMeshComponent 
		{245, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/Art/Transparent/Transparent_MATInst.Transparent_MATInst 
		{246, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Sound/Guns/ShotgunShoot1.ShotgunShoot1 
		{247, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Sound/Guns/KnifeSound1.KnifeSound1 
		{248, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/Sound/Guns/SniperShoot1.SniperShoot1 
		{249, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Art/Enemies/Enemy1/EnemyType1_Skeleton.EnemyType1_Skeleton 
		{250, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{251, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimInstance 
		{252, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{253, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{254, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{255, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{256, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{257, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{258, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend 
		{259, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{260, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Dying_Suicide_Knife.Dying_Suicide_Knife 
		{261, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/SuicideKnife.SuicideKnife 
		{262, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpaceKnifeAttacking.PlayerBlendSpaceKnifeAttacking 
		{263, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Stabbing.Stabbing 
		{264, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpaceKnifeInEnemy.PlayerBlendSpaceKnifeInEnemy 
		{265, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/SuicideRifle.SuicideRifle 
		{266, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/PlayerAnimations/Gunplay-Shooting.Gunplay-Shooting 
		{267, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerInEnemyBlendSpace.PlayerInEnemyBlendSpace 
		{268, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpace.PlayerBlendSpace 
		{269, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{270, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Gun_Trace01.Gun_Trace01 
		{271, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{272, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{273, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DestructibleMesh /Game/Objects/Glass/GlassMesh_DM.GlassMesh_DM 
		{274, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/BLS_RattleSnake_Content/Materials/M_Glass.M_Glass 
		{275, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{276, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/BulletTracer/BulletTracerMAT2.BulletTracerMAT2 
		{277, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleRPG_Final.IdleRPG_Final 
		{278, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpaceKnife.PlayerBlendSpaceKnife 
		{279, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_762x51.SM_Shell_762x51 
		{280, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_762x39.SM_Shell_762x39 
		{281, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_762x39_Empty.M_762x39_Empty 
		{282, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_12Gauge.SM_Shell_12Gauge 
		{283, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_Ammo_12gauge.M_Ammo_12gauge 
		{284, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_40mm_G.SM_Shell_40mm_G 
		{285, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_40mm_Grenade.M_40mm_Grenade 
		{286, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DestructibleMesh /Game/FreeFurniturePack/Meshes/SM_Table_Lamp_DM.SM_Table_Lamp_DM 
		{287, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DestructibleMesh /Game/FreeFurniturePack/Meshes/SM_Old_Chair_DM.SM_Old_Chair_DM 
		{288, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Light01_DM.SM_Light01_DM 
		{289, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/VFX_Toolkit_V1/Mat_Functions/MF_Examples/Flicker_Example.Flicker_Example 
		{290, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/scifi_kitbash/materials/M_LightGlow.M_LightGlow 
		{291, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Barrel_DM.SM_Barrel_DM 
		{292, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Missile/MissileExplosionBig.MissileExplosionBig 
		{294, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/M5VFXVOL2/Particles/Explosion/Fire_Exp_00.Fire_Exp_00 
		{295, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Pipe01_DM.SM_Pipe01_DM 
		{296, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Pipe01_Bend90_DM.SM_Pipe01_Bend90_DM 
		{297, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Plane_DM.SM_Plane_DM 
		{298, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/AnimalVarietyPack/Wolf/Meshes/SK_Wolf.SK_Wolf 
		{299, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/AnimalVarietyPack/Wolf/Materials/M_Wolf.M_Wolf 
		{300, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Dog/DogSound1.DogSound1 
		{301, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT1_BaseColor_Mat.CollarMAT1_BaseColor_Mat 
		{302, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT2_BaseColor_Mat.CollarMAT2_BaseColor_Mat 
		{303, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT3_BaseColor_Mat.CollarMAT3_BaseColor_Mat 
		{304, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT4_BaseColor_Mat.CollarMAT4_BaseColor_Mat 
		{305, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT5_BaseColor_Mat.CollarMAT5_BaseColor_Mat 
		{306, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT6_BaseColor_Mat.CollarMAT6_BaseColor_Mat 
		{307, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT7_BaseColor_Mat.CollarMAT7_BaseColor_Mat 
		{308, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT8_BaseColor_Mat.CollarMAT8_BaseColor_Mat 
		{309, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT9_BaseColor_Mat.CollarMAT9_BaseColor_Mat 
		{310, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT10_BaseColor_Mat.CollarMAT10_BaseColor_Mat 
		{311, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT11_BaseColor_Mat.CollarMAT11_BaseColor_Mat 
		{312, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT12_BaseColor_Mat.CollarMAT12_BaseColor_Mat 
		{313, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/AnimalVarietyPack/Wolf/Animations/ANIM_Wolf_Death.ANIM_Wolf_Death 
		{314, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/AmplifyLUTPack/FilmColor/OldFilm.OldFilm 
		{315, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/AmplifyLUTPack/Base/Normal.Normal 
		{316, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/GoToLocation/green_Mat.green_Mat 
		{317, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{318, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraActor 
		{319, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Petting_PostApoc.Petting_PostApoc 
		{320, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/DanceMoves_Anim_PostApoc.DanceMoves_Anim_PostApoc 
		{321, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Running_Anim_PostApoc.Running_Anim_PostApoc 
		{322, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/IdleTouchFloor_PostApoc.IdleTouchFloor_PostApoc 
		{323, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Idle_Anim_PostApoc.Idle_Anim_PostApoc 
		{324, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/IdleStatic_PostApoc.IdleStatic_PostApoc 
		{458, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_Black.T_Black 
		{459, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_Organic03.T_Organic03 
		{406, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_GridCell.M_GridCell 
		{407, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_LensDistortion.M_LensDistortion 
		{408, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_ScopePlaceholder.T_ScopePlaceholder 
		{409, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Zone.M_Zone 
		{410, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Pyramid.M_Pyramid 
		{411, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Mojo.M_Mojo 
		{412, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask4.T_Mask4 
		{413, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask7.T_Mask7 
		{338, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/WorldMap/WorldMapMusic.WorldMapMusic 
		{339, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/SciFi_Robot/MESHES/CLOAK_SK.CLOAK_SK 
		{340, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Art/PartyHat/PartyHat.PartyHat 
		{341, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/CyberGirl/Character/Meshes/SK_CyberGirl.SK_CyberGirl 
		{342, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_Cutepose_WorldMap.Anim_Cutepose_WorldMap 
		{343, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /NorthernFront/Sound/EnteringLevel_DemonSound02.EnteringLevel_DemonSound02 
		{344, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/AnimRobot/Victory_Robot.Victory_Robot 
		{345, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_Pose03.A_Pose03 
		{346, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Victory_Idle_Anim_PostApoc.Victory_Idle_Anim_PostApoc 
		{347, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/SciFi_Robot/MATERIALS/BODY/NAVY_MAT.NAVY_MAT 
		{348, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Post_Apoca_Character/Material/M_Post_Apocal.M_Post_Apocal 
		{349, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Apocalypse_Girl/Materials/M_Apocalypse_Girl.M_Apocalypse_Girl 
		{350, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/SciFi_Robot/Mannequin/Character/Mesh/UE4_Robot_Mannequin_Skeleton.UE4_Robot_Mannequin_Skeleton 
		{351, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/AnimRobot/Petting_Robot.Petting_Robot 
		{352, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/AnimRobot/DanceMoves_Robot.DanceMoves_Robot 
		{353, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/AnimRobot/Running_Robot.Running_Robot 
		{354, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle3_Robot.Idle3_Robot 
		{355, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle2_Robot.Idle2_Robot 
		{356, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle1_Robot.Idle1_Robot 
		{357, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking2.Talking2 
		{358, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking1.Talking1 
		{359, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Post_Apoca_Character/AnimDemoScene/Mesh/UE4_Mannequin_Skeleton_GOOD.UE4_Mannequin_Skeleton_GOOD 
		{360, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Rifle_Running_PostApoc.Rifle_Running_PostApoc 
		{361, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Idle_Standing.Idle_Standing 
		{362, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace1D /Game/Art/WorldMapAnim/WorldMapPlayerBS.WorldMapPlayerBS 
		{363, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Hara/Meshes/SK_Hara_Skeleton.SK_Hara_Skeleton 
		{364, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Hara/Hara_Anim/WalkMap/Petting_Hara.Petting_Hara 
		{365, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Hara/Hara_Anim/WalkMap/DanceMoves_Hara.DanceMoves_Hara 
		{366, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_Run.Anim_Run 
		{367, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_IdleF.Anim_IdleF 
		{368, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/CyberGirl/Character/Meshes/Skin01/Materials/instance/MI_NPRCloth002.MI_NPRCloth002 
		{369, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_Tut.L_Tut 
		{370, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_1.L_1 
		{371, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_2.L_2 
		{372, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_3.L_3 
		{373, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_4.L_4 
		{374, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_5.L_5 
		{375, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_6.L_6 
		{376, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_7.L_7 
		{377, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_8.L_8 
		{378, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_9.L_9 
		{379, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_10.L_10 
		{380, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_11.L_11 
		{381, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/RunningNoWeapon.RunningNoWeapon 
		{382, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleMoverBrazo.IdleMoverBrazo 
		{383, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Idle_Happy.Idle_Happy 
		{384, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleMoverPiernas.IdleMoverPiernas 
		{385, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Idle_Lobby.Idle_Lobby 
		{386, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking3.Talking3 
		{419, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Post_Apoca_Character/Mesh/SK_Mask.SK_Mask 
		{420, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.RotatingMovementComponent 
		{421, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/LevelSequence.LevelSequenceActor 
		{422, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  PaperSprite /Game/HUD/Icons/bubble_Sprite1.bubble_Sprite1 
		{423, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Twan/Twan1.Twan1 
		{424, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Twan2/Twan2.Twan2 
		{425, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Shald/Shald1.Shald1 
		{426, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Varia/Varia.Varia 
		{427, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Vic/Vic01.Vic01 
		{428, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Ridgway/Ridgway.Ridgway 
		{429, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Nana/Nana.Nana 
		{430, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Karl/Karl.Karl 
		{431, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Karla/Karla.Karla 
		{432, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Vor/Vor.Vor 
		{433, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Niff/Niff.Niff 
		{434, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Truman/Truman.Truman 
		{435, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/NPCs/Torturer/Torturer.Torturer 
		{436, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/AnimalVarietyPack/Wolf/Animations/ANIM_Wolf_Sleep.ANIM_Wolf_Sleep 
		{437, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/Truman/NF_Truman.NF_Truman 
		{438, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/Recruit/NF_Recruit.NF_Recruit 
		{439, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/Hartman/NF_Hartman_.NF_Hartman_ 
		{440, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/Doctor/NF_Doctor.NF_Doctor 
		{441, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/CorporalJoker/NF_CorporalJoker.NF_CorporalJoker 
		{442, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Letterboxing.M_Letterboxing 
		{443, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Snow.M_Snow 
		{444, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_WorldSplash.M_WorldSplash 
		{445, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_WorldGlitch.M_WorldGlitch 
		{446, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Digitize.M_Digitize 
		{447, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Alarm.M_Alarm 
		{448, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Sketch.M_Sketch 
		{449, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Wired.M_Wired 
		{450, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ActorFeaturette.M_ActorFeaturette 
		{451, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Infected.M_Infected 
		{452, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_CameraShake.M_CameraShake 
		{453, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ColoredAO.M_ColoredAO 
		{454, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_DiscoBall.M_DiscoBall 
		{455, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_HazyLights.M_HazyLights 
		{456, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_MeltedWorld.M_MeltedWorld 
		{457, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_SelectiveColor.M_SelectiveColor 
		{460, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PostProcessComponent 
		{461, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialBillboardComponent 
		{462, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Editor_ChameleonIcon.M_Editor_ChameleonIcon 
		{463, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  CurveFloat /Game/Chameleon/Curves/C_DistanceToSizeLogo.C_DistanceToSizeLogo 
		{464, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Material 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Texture2D 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_White.T_White 
		{465, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TextureRenderTarget2D 
		{466, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetRenderingLibrary 
		{467, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.TextureGroup 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Texture 
		{468, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BlendableInterface 
		{469, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{470, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PostProcessSettings 
		{471, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{472, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DataTable /Game/Chameleon/DataTables/LOOK_Presets.LOOK_Presets 
		{473, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ChannelClamper.M_ChannelClamper 
		{474, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_BleachBypass.M_BleachBypass 
		{475, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_DistanceFog.M_DistanceFog 
		{476, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ChannelSwapper.M_ChannelSwapper 
		{477, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ScreenDrops.M_ScreenDrops 
		{478, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Alcohol.M_Alcohol 
		{479, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Drug.M_Drug 
		{480, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_MosaicTile.M_MosaicTile 
		{481, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_PixelDissolve.M_PixelDissolve 
		{482, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_BlurHLSL.M_BlurHLSL 
		{483, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_WaterDrops.T_WaterDrops 
		{484, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_AsciiHLSL.M_AsciiHLSL 
		{485, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ColorizeHLSL.M_ColorizeHLSL 
		{486, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ComicEdgeHLSL.M_ComicEdgeHLSL 
		{487, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_EdgeDetect3x3HLSL.M_EdgeDetect3x3HLSL 
		{488, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Emboss3x3HLSL.M_Emboss3x3HLSL 
		{489, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_GlitchHLSL.M_GlitchHLSL 
		{490, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_MonitorEffects.M_MonitorEffects 
		{491, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_HardEmbossHLSL.M_HardEmbossHLSL 
		{492, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_HUEPanner.M_HUEPanner 
		{493, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_MonochromeHLSL.M_MonochromeHLSL 
		{494, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_RadialBlurHLSL.M_RadialBlurHLSL 
		{495, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ScratchesHLSL.M_ScratchesHLSL 
		{496, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ScreenWavesHLSL.M_ScreenWavesHLSL 
		{497, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask5.T_Mask5 
		{498, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_Screendrops.T_Screendrops 
		{499, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Invert.M_Invert 
		{500, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Iridescent.M_Iridescent 
		{501, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Kuwahara.M_Kuwahara 
		{502, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Pulse.M_Pulse 
		{503, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Squares.M_Squares 
		{504, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Tiles.M_Tiles 
		{505, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_TVNoise.M_TVNoise 
		{506, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Circles.M_Circles 
		{507, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Sonar.M_Sonar 
		{508, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_DistanceDistortion.M_DistanceDistortion 
		{509, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_CobbleStone_Pebble_N.T_CobbleStone_Pebble_N 
		{510, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Drawing.M_Drawing 
		{511, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_Paper2.T_Paper2 
		{512, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_MagicTransitions.M_MagicTransitions 
		{513, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_GameOver.T_GameOver 
		{514, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask13.T_Mask13 
		{515, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ScreenDamage.M_ScreenDamage 
		{516, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_BloodDrops.T_BloodDrops 
		{517, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_BloodDrops_Blue.T_BloodDrops_Blue 
		{518, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ScreenDecals.M_ScreenDecals 
		{519, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_BulletHole.T_BulletHole 
		{520, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Sharpen.M_Sharpen 
		{521, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ToonShading.M_ToonShading 
		{522, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_AnamorphicLensFlares.M_AnamorphicLensFlares 
		{523, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Frost.M_Frost 
		{524, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Chameleon/Textures/T_MossyWood.T_MossyWood 
		{525, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Neon.M_Neon 
		{526, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_CustomDepthHighlighter.M_CustomDepthHighlighter 
		{527, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_CustomDepthHighlighterClip.M_CustomDepthHighlighterClip 
		{528, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_ScreenFire.M_ScreenFire 
		{529, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Haunted.M_Haunted 
		{530, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_2DTransform.M_2DTransform 
		{531, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Chameleon/Materials/M_Kaleidescope.M_Kaleidescope 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerState 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameSession 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameStateBase 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/MousePlayerController.MousePlayerController_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MousePlayerController_C /Game/ThirdPersonBP/Blueprints/MousePlayerController.Default__MousePlayerController_C 
		{532, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/FondoReply.FondoReply 
		{533, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.PointerEvent 
		{534, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/TwLogo.TwLogo 
		{535, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/TwSeleccionado.TwSeleccionado 
		{536, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/TwPressed.TwPressed 
		{537, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_11.Tip_11 
		{538, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_12.Tip_12 
		{539, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Game/Fonts/Apocalypse_Font.Apocalypse_Font 
		{540, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/RifleLogo.RifleLogo 
		{541, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/PowerUpCooldown.PowerUpCooldown 
		{542, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/PowerUpReady.PowerUpReady 
		{543, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/RightMousePress.RightMousePress 
		{544, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/R_Bumper.R_Bumper 
		{545, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/GodModeIcon.GodModeIcon 
		{546, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanel 
		{547, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{548, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/ShotgunLogo.ShotgunLogo 
		{549, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/KnifeLogo.KnifeLogo 
		{550, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/SniperLogo.SniperLogo 
		{551, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/RPGLogo.RPGLogo 
		{552, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/AShotgunLogo.AShotgunLogo 
		{553, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.BackgroundBlur 
		{554, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ProgressBar 
		{555, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ScaleBox 
		{556, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level3.BK_Level3 
		{557, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level6.BK_Level6 
		{558, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level8.BK_Level8 
		{559, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level12.BK_Level12 
		{560, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Endgame.BK_Endgame 
		{561, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_02.Tip_02 
		{562, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_03.Tip_03 
		{563, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_04.Tip_04 
		{564, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_05.Tip_05 
		{565, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_06.Tip_06 
		{566, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_07.Tip_07 
		{567, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_08.Tip_08 
		{568, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_09.Tip_09 
		{569, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_10.Tip_10 
		{570, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Default.BK_Default 
		{571, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_01.Tip_01 
		{572, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{573, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{574, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{575, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Pt.Controls_Pt 
		{576, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ru.Controls_Ru 
		{577, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Zh.Controls_Zh 
		{578, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ca.Controls_Ca 
		{579, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Es.Gamepad_Es 
		{580, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Pt.Gamepad_Pt 
		{581, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Ru.Gamepad_Ru 
		{582, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Zh.Gamepad_Zh 
		{583, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Ca.Gamepad_Ca 
		{584, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Slider 
		{585, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ItaFlag.ItaFlag 
		{586, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Flags/EnglishFlag.EnglishFlag 
		{587, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ruFlag.ruFlag 
		{588, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ZhFlag.ZhFlag 
		{589, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Flags/esFlag.esFlag 
		{590, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Flags/PtFlag.PtFlag 
		{591, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Flags/caFlag.caFlag 
		{592, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Flags/FrFlag.FrFlag 
		{593, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetInternationalizationLibrary 
		{594, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{595, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarMale_Mat.Target_AvatarMale_Mat 
		{596, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarFemale__Mat.Target_AvatarFemale__Mat 
		{597, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarRobot_Mat.Target_AvatarRobot_Mat 
		{598, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarHara_Mat.Target_AvatarHara_Mat 
		{599, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarKnight_Mat.Target_AvatarKnight_Mat 
		{600, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarCyber_Mat.Target_AvatarCyber_Mat 
		{601, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarAstro_Mat.Target_AvatarAstro_Mat 
		{602, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneCapture2D 
		{603, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/ChangeAvatar/lock.lock 
		{604, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarFemale_Mat.Target_AvatarFemale_Mat 
		{605, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls.Controls 
		{606, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ita.Controls_Ita 
		{607, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Es.Controls_Es 
		{608, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_En.Gamepad_En 
		{609, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_It.Gamepad_It 
		{610, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODBus /Game/FMOD/Buses/Master/SFXAudio.SFXAudio 
		{611, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODBus /Game/FMOD/Buses/Master/MusicAudio.MusicAudio 
		{612, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.EUINavigation 
		{613, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameUserSettings 
		{614, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Bottom.Gamepad_Stick_Bottom 
		{615, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_L_Stick_Top.Gamepad_L_Stick_Top 
		{616, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{617, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/VFX_Toolkit_V1/Textures/Sprites/T_thundaraPanDot_01.T_thundaraPanDot_01 
		{618, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/CyberGirl/Character/Meshes/SKL_CyberGirl.SKL_CyberGirl 
		{619, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_BattleSprint.A_BattleSprint 
		{620, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_BattleIdle.A_BattleIdle 
		{621, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/TitleRectangle.TitleRectangle 
		{622, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/TitleSquare.TitleSquare 
		{623, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Arrow.Arrow 
		{624, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.SizeBox 
		{625, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIPerceptionComponent 
		{626, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AISense_Sight 
		{627, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AISense_Hearing 
		{628, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.BlackboardComponent 
		{629, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AIModule.AIStimulus 
		{630, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BehaviorTree /Game/Enemies/BehaviorDog/DogAITree.DogAITree 
		{631, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AIModule.BlackboardKeySelector 
		{632, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/AnimalVarietyPack/Wolf/Meshes/SK_Wolf_Skeleton.SK_Wolf_Skeleton 
		{633, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace1D /Game/Art/Enemies/DogAnimation/Dog_BlendSpace.Dog_BlendSpace 
		{634, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Hara/Hara_Anim/Combat/Demon_Combat_BS.Demon_Combat_BS 
		{635, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/AnimRobot/AvatarRobot_BS.AvatarRobot_BS 
		{636, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Rifle_Idle_PostApoc.Rifle_Idle_PostApoc 
		{637, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/AvatarRifleBlendSpace.AvatarRifleBlendSpace 
		{638, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/Art/PossesionBeam/PossesionLightning_PT.PossesionLightning_PT 
		{639, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Art/BulletTracer/BulletTracerMAT.BulletTracerMAT 
		{640, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/KA_Val/SM_KA_Val_X.SM_KA_Val_X 
		{641, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/KA_Val/M_KA_Val.M_KA_Val 
		{642, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Extra_Ammo_Holder.SM_Extra_Ammo_Holder 
		{643, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/BLS_Shotgun/Materials/Black/MI_Black_Tex2.MI_Black_Tex2 
		{644, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VFX_Toolkit_V1/StaticMeshes/Various/SM_MatraRocket_01.SM_MatraRocket_01 
		{645, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VFX_Toolkit_V1/StaticMeshes/Beams/SM_MatraThruster_01.SM_MatraThruster_01 
		{646, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/VFX_Toolkit_V1/Materials/356Days/M_MatraThruster_01.M_MatraThruster_01 
		{647, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Missile/MissileExplosionFlesh.MissileExplosionFlesh 
		{648, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Game/M4A4/Sounds/Sound_Packs/W_SFX/Exp_Sound/Wavs/Explosion_Flesh_01.Explosion_Flesh_01 
		{649, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/M5VFXVOL2/Particles/Explosion/Fire_Exp_02.Fire_Exp_02 
		{650, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Art/Enemies/Animations/SuicideKnifePreparation.SuicideKnifePreparation 
		{651, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/EnemyBlendSpaceKnife.EnemyBlendSpaceKnife 
		{652, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_Thundara_02.Par_Thundara_02 
		{653, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/BlendSpaceShooting.BlendSpaceShooting 
		{657, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/MyGameInstance/MyGameInstance.MyGameInstance_C 
		{664, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Conversations/MyReplyWidget.MyReplyWidget_C 
		{665, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/BaseCharacter.BaseCharacter_C 
		{666, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Conversations/Actors/Conversation_Actor.Conversation_Actor_C 
		{667, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Widgets/Widget_Information.Widget_Information_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UMyDialogueWidget_C__pf596304771
{
	FRegisterHelper__UMyDialogueWidget_C__pf596304771()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Conversations/MyDialogueWidget"), &UMyDialogueWidget_C__pf596304771::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMyDialogueWidget_C__pf596304771 Instance;
};
FRegisterHelper__UMyDialogueWidget_C__pf596304771 FRegisterHelper__UMyDialogueWidget_C__pf596304771::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
