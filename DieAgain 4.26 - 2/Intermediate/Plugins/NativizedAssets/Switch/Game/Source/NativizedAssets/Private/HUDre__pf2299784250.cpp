#include "NativizedAssets.h"
#include "HUDre__pf2299784250.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BackgroundBlur.h"
#include "Runtime/UMG/Public/Components/BackgroundBlurSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Widget_Information__pf3975599377.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Components/ScaleBox.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
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
#include "Runtime/SlateCore/Public/Input/Events.h"
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
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneFloatTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneFloatSection.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "MyGameInstance__pf2410127383.h"
#include "LevelCompleterBP__pf922009354.h"
#include "ThirdPersonCharacter__pf2222656877.h"
#include "EnemyShootingCh__pf3349424045.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "EnumTypeOfLevelCompleted__pf922009354.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "EnumWeapon__pf3349424045.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "Runtime/Slate/Public/Widgets/Layout/SScaleBox.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UHUDre_C__pf2299784250::UHUDre_C__pf2299784250(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Arma__pf = nullptr;
	bpv__ComboText__pf = nullptr;
	bpv__EnemiesRemaining__pf = nullptr;
	bpv__GameOver__pf = nullptr;
	bpv__Image__pf = nullptr;
	bpv__Image_35__pf = nullptr;
	bpv__Image_97__pf = nullptr;
	bpv__Image_223__pf = nullptr;
	bpv__Image_GodMode__pf = nullptr;
	bpv__Municion__pf = nullptr;
	bpv__Objetivo__pf = nullptr;
	bpv__PowerUpCooldownImage__pf = nullptr;
	bpv__ScaleBox_485__pf = nullptr;
	bpv__TextBlock_69__pf = nullptr;
	bpv__TextBlock_213__pf = nullptr;
	bpv__TimeSurviveText__pf = nullptr;
	bpv__WeaponImage__pf = nullptr;
	bpv__Widget_Information__pf = nullptr;
	bpv__Widget_Information_1__pf = nullptr;
	bpv__Ammo__pf = 0;
	bpv__Ammoo__pf = FString(TEXT(""));
	bpv__WeaponEquiped__pf = FString(TEXT(""));
	bpv__LevelObjective__pf = FText::GetEmpty();
	bpv__Combo__pf = FString(TEXT(""));
	bpv__IsVisiblePowerUp__pf = false;
	bpv__TimerPowerUp__pf = 10.000000f;
	bpv__IsCountingEnemiesDeathsx__pfzy = false;
	bpv__LevelCompleterRef__pf = nullptr;
	bpv__CountDownBoss__pf = 40.150002f;
	bpv__IsSurvivex__pfzy = false;
	bpv__NoAmmoText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"38BC08FA481862CB1F670B83A0900424\", \"No Ammo\")")	);
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UHUDre_C__pf2299784250::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UHUDre_C__pf2299784250::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Objects/LevelCompleter/EnumTypeOfLevelCompleted.EnumTypeOfLevelCompleted")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Enemies/EnumWeapon.EnumWeapon")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UMyGameInstance_C__pf2410127383::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ALevelCompleterBP_C__pf922009354::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AThirdPersonCharacter_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AEnemyShootingCh_C__pf3349424045::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWidget_Information_C__pf3975599377::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("PointsAnimation_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("MorePointsAnim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeOut_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeIn_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	auto __Local__5 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("GodModeAnim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	auto __Local__6 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__6), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(15);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__8->LayoutData.Offsets.Right = 0.000000f;
	__Local__8->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UBackgroundBlur>(__Local__0, TEXT("GameOver"), (EObjectFlags)0x00280008);
	__Local__9->BlurStrength = 1.000000f;
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UBackgroundBlurSlot>(__Local__9, TEXT("BackgroundBlurSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__12 = (*(AccessPrivateProperty<FMargin >((__Local__11), UBackgroundBlurSlot::__PPO__Padding() )));
	__Local__12.Left = 0.000000f;
	__Local__12.Top = 0.000000f;
	__Local__12.Right = 0.000000f;
	__Local__12.Bottom = 0.000000f;
	__Local__11->Parent = __Local__9;
	auto __Local__13 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_130"), (EObjectFlags)0x00280008);
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(3);
	auto __Local__15 = NewObject<UCanvasPanelSlot>(__Local__13, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__15->LayoutData.Offsets.Right = 0.000000f;
	__Local__15->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__15->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UImage>(__Local__0, TEXT("Image_223"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__16->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__17 = FLinearColor(0.000000, 0.000000, 0.000000, 0.250000);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__13, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Top = 30.030029f;
	__Local__18->LayoutData.Offsets.Right = 1200.000000f;
	__Local__18->LayoutData.Offsets.Bottom = 417.895691f;
	__Local__18->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__18->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__18->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__18->Parent = __Local__13;
	auto __Local__19 = NewObject<UCanvasPanel>(__Local__0, TEXT("GameOverPanel"), (EObjectFlags)0x00280008);
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(3);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__19, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Top = -143.049881f;
	__Local__21->LayoutData.Offsets.Right = 0.000000f;
	__Local__21->LayoutData.Offsets.Bottom = 500.000000f;
	__Local__21->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__21->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__21->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__21->bAutoSize = true;
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_92"), (EObjectFlags)0x00280008);
	__Local__22->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"E062D37B4E4EBBD84A4A739010D1476F\", \"game over\")")	);
	__Local__22->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__22->Font.OutlineSettings.OutlineSize = 5;
	__Local__22->Font.OutlineSettings.bApplyOutlineToDropShadows = true;
	__Local__22->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__22->Font.Size = 70;
	auto& __Local__23 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__22), UTextLayoutWidget::__PPO__Justification() )));
	__Local__23 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__25{};
	const FProperty* __Local__24 = __Local__25.Get();
	if (nullptr == __Local__24)
	{
		__Local__24 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__24);
		__Local__25 = __Local__24;
	}
	(((FBoolProperty*)__Local__24)->SetPropertyValue_InContainer((__Local__22), true, 0));
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	auto __Local__26 = NewObject<UCanvasPanelSlot>(__Local__19, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__26->LayoutData.Offsets.Top = -31.013458f;
	__Local__26->LayoutData.Offsets.Right = 0.000000f;
	__Local__26->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__26->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__26->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__26->Parent = __Local__19;
	auto __Local__27 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__27->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"C4BAAC1849C6C242BA156F8F4419F9A0\", \"try not to\")")	);
	__Local__27->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__27->Font.OutlineSettings.OutlineSize = 5;
	__Local__27->Font.OutlineSettings.bApplyOutlineToDropShadows = true;
	__Local__27->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__27->Font.Size = 40;
	auto& __Local__28 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__27), UTextLayoutWidget::__PPO__Justification() )));
	__Local__28 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__24)->SetPropertyValue_InContainer((__Local__27), true, 0));
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__20.Add(__Local__26);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__19, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__29->LayoutData.Offsets.Top = 130.463638f;
	__Local__29->LayoutData.Offsets.Right = 0.000000f;
	__Local__29->LayoutData.Offsets.Bottom = 500.000000f;
	__Local__29->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__29->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__29->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__29->bAutoSize = true;
	__Local__29->Parent = __Local__19;
	auto __Local__30 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__30->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"A18E450644F9BA6864553B90561E3F49\", \"DIE AGAIN\")")	);
	__Local__30->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__30->Font.OutlineSettings.OutlineSize = 5;
	__Local__30->Font.OutlineSettings.bApplyOutlineToDropShadows = true;
	__Local__30->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__30->Font.Size = 80;
	auto& __Local__31 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__30), UTextLayoutWidget::__PPO__Justification() )));
	__Local__31 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__24)->SetPropertyValue_InContainer((__Local__30), true, 0));
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__20.Add(__Local__29);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__14.Add(__Local__18);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__13, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__32->LayoutData.Offsets.Left = 50.000000f;
	__Local__32->LayoutData.Offsets.Top = -50.000000f;
	__Local__32->LayoutData.Offsets.Bottom = 55.000000f;
	__Local__32->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__32->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__32->LayoutData.Alignment = FVector2D(0.000000, 1.000000);
	__Local__32->Parent = __Local__13;
	auto __Local__33 = NewObject<UHorizontalBox>(__Local__0, TEXT("HorizontalBox_931"), (EObjectFlags)0x00280008);
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__33), UPanelWidget::__PPO__Slots() )));
	__Local__34 = TArray<UPanelSlot*> ();
	__Local__34.Reserve(2);
	auto __Local__35 = NewObject<UHorizontalBoxSlot>(__Local__33, TEXT("HorizontalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__35->Parent = __Local__33;
	auto __Local__36 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox"), (EObjectFlags)0x00280008);
	__Local__36->WidthOverride = 600.000000f;
	__Local__36->bOverride_WidthOverride = true;
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__36), UPanelWidget::__PPO__Slots() )));
	__Local__37 = TArray<UPanelSlot*> ();
	__Local__37.Reserve(1);
	auto __Local__38 = NewObject<USizeBoxSlot>(__Local__36, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__38->Parent = __Local__36;
	auto __Local__39 = NewObject<UWidget_Information_C__pf3975599377>(__Local__0, TEXT("Widget_Information_1"), (EObjectFlags)0x00280008);
	__Local__39->bpv__KeyToShow__pf = E__Enum_Keys__pf::NewEnumerator9;
	__Local__39->bpv__InputToShow__pf = E__Enum_Gamepad__pf::NewEnumerator7;
	__Local__39->bpv__Text__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"DC211C544A885052A07AE184E0F4C4D8\", \"restart\")")	);
	__Local__39->Slot = __Local__38;
	__Local__39->RenderTransform.Translation = FVector2D(-120.000000, 0.000000);
	__Local__38->Content = __Local__39;
	__Local__37.Add(__Local__38);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__34.Add(__Local__35);
	auto __Local__40 = NewObject<UHorizontalBoxSlot>(__Local__33, TEXT("HorizontalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__40->Parent = __Local__33;
	auto __Local__41 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_201"), (EObjectFlags)0x00280008);
	__Local__41->WidthOverride = 600.000000f;
	__Local__41->bOverride_WidthOverride = true;
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__41), UPanelWidget::__PPO__Slots() )));
	__Local__42 = TArray<UPanelSlot*> ();
	__Local__42.Reserve(1);
	auto __Local__43 = NewObject<USizeBoxSlot>(__Local__41, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__43->Parent = __Local__41;
	auto __Local__44 = NewObject<UWidget_Information_C__pf3975599377>(__Local__0, TEXT("Widget_Information"), (EObjectFlags)0x00280008);
	__Local__44->bpv__KeyToShow__pf = E__Enum_Keys__pf::NewEnumerator10;
	__Local__44->bpv__InputToShow__pf = E__Enum_Gamepad__pf::NewEnumerator6;
	__Local__44->bpv__Text__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"EC8A78464C25937F9FA5229F3BA9CC88\", \"return to world map\")")	);
	__Local__44->Slot = __Local__43;
	__Local__44->RenderTransform.Translation = FVector2D(-120.000000, 0.000000);
	__Local__43->Content = __Local__44;
	__Local__42.Add(__Local__43);
	__Local__41->Slot = __Local__40;
	__Local__41->Visibility = ESlateVisibility::HitTestInvisible;
	__Local__40->Content = __Local__41;
	__Local__34.Add(__Local__40);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__14.Add(__Local__32);
	__Local__13->Slot = __Local__11;
	__Local__11->Content = __Local__13;
	__Local__10.Add(__Local__11);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__45->LayoutData.Offsets.Left = -365.921875f;
	__Local__45->LayoutData.Offsets.Top = -137.081055f;
	__Local__45->LayoutData.Offsets.Right = 210.110107f;
	__Local__45->LayoutData.Offsets.Bottom = 48.018021f;
	__Local__45->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__45->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__45->Parent = __Local__6;
	auto __Local__46 = NewObject<UTextBlock>(__Local__0, TEXT("Municion"), (EObjectFlags)0x00280008);
	__Local__46->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"3E42460348639E79C29E9FAC3F2982E0\", \"30\")")	);
	__Local__46->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__46->Font.OutlineSettings.OutlineSize = 5;
	__Local__46->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__7.Add(__Local__45);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__47->LayoutData.Offsets.Left = 1652.000000f;
	__Local__47->LayoutData.Offsets.Top = -113.081055f;
	__Local__47->LayoutData.Offsets.Right = 210.110107f;
	__Local__47->LayoutData.Offsets.Bottom = 48.018021f;
	__Local__47->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__47->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__47->Parent = __Local__6;
	auto __Local__48 = NewObject<UTextBlock>(__Local__0, TEXT("Arma"), (EObjectFlags)0x00280008);
	__Local__48->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"A7EDFD54412AA288B5B13E9537369AAD\", \"Text\")")	);
	__Local__48->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__48->Font.OutlineSettings.OutlineSize = 5;
	__Local__48->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__48->Slot = __Local__47;
	__Local__48->Visibility = ESlateVisibility::Hidden;
	__Local__47->Content = __Local__48;
	__Local__7.Add(__Local__47);
	auto __Local__49 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__49->LayoutData.Offsets.Left = 136.000000f;
	__Local__49->LayoutData.Offsets.Top = 92.000000f;
	__Local__49->LayoutData.Offsets.Right = 1330.010376f;
	__Local__49->LayoutData.Offsets.Bottom = 905.694336f;
	__Local__49->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__49->Parent = __Local__6;
	auto __Local__50 = NewObject<UTextBlock>(__Local__0, TEXT("Objetivo"), (EObjectFlags)0x00280008);
	__Local__50->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"0CB25EDB4DEA7C750A60DA965E9AF4D8\", \"Objetivo\")")	);
	__Local__50->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__50->Font.OutlineSettings.OutlineSize = 2;
	__Local__50->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__50->Font.Size = 38;
	auto& __Local__51 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__50), UTextLayoutWidget::__PPO__Justification() )));
	__Local__51 = ETextJustify::Type::Center;
	__Local__50->Slot = __Local__49;
	__Local__50->RenderOpacity = 0.750000f;
	__Local__49->Content = __Local__50;
	__Local__7.Add(__Local__49);
	auto __Local__52 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__52->LayoutData.Offsets.Left = -276.960938f;
	__Local__52->LayoutData.Offsets.Top = -280.540527f;
	__Local__52->LayoutData.Offsets.Right = 556.011597f;
	__Local__52->LayoutData.Offsets.Bottom = 90.060059f;
	__Local__52->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__52->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__52->Parent = __Local__6;
	auto __Local__53 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_69"), (EObjectFlags)0x00280008);
	__Local__53->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"503B75014171B195B7CBC0BC3FC278D9\", \"Level Completed\")")	);
	__Local__53->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__53->Font.OutlineSettings.OutlineSize = 5;
	__Local__53->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__53->Font.Size = 60;
	auto& __Local__54 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__53), UTextLayoutWidget::__PPO__Justification() )));
	__Local__54 = ETextJustify::Type::Center;
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__7.Add(__Local__52);
	auto __Local__55 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__55->LayoutData.Offsets.Left = -549.921875f;
	__Local__55->LayoutData.Offsets.Top = -408.540527f;
	__Local__55->LayoutData.Offsets.Right = 389.178101f;
	__Local__55->LayoutData.Offsets.Bottom = 56.448669f;
	__Local__55->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__55->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__55->Parent = __Local__6;
	auto __Local__56 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_213"), (EObjectFlags)0x00280008);
	__Local__56->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"609C24B34FBB35EFC5551497E920BC83\", \"Points\")")	);
	__Local__56->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__56->Font.OutlineSettings.OutlineSize = 2;
	__Local__56->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__56->Font.Size = 40;
	auto& __Local__57 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__56), UTextLayoutWidget::__PPO__Justification() )));
	__Local__57 = ETextJustify::Type::Right;
	__Local__56->Slot = __Local__55;
	__Local__56->RenderTransform.Translation = FVector2D(-10.000000, -10.000000);
	__Local__55->Content = __Local__56;
	__Local__7.Add(__Local__55);
	auto __Local__58 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_22"), (EObjectFlags)0x00280008);
	__Local__58->LayoutData.Offsets.Left = 288.000000f;
	__Local__58->LayoutData.Offsets.Top = 200.000000f;
	__Local__58->LayoutData.Offsets.Right = 200.000000f;
	__Local__58->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__58->Parent = __Local__6;
	auto __Local__59 = NewObject<UTextBlock>(__Local__0, TEXT("ComboText"), (EObjectFlags)0x00280008);
	__Local__59->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"565FCB6247DB18BB52C320BC90CF3CF3\", \"Combo\")")	);
	__Local__59->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__59->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__59->Font.Size = 55;
	__Local__59->Slot = __Local__58;
	__Local__59->RenderTransform.Scale = FVector2D(1.500000, 1.500000);
	__Local__58->Content = __Local__59;
	__Local__7.Add(__Local__58);
	auto __Local__60 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__60->LayoutData.Offsets.Left = 104.000000f;
	__Local__60->LayoutData.Offsets.Top = -201.081055f;
	__Local__60->LayoutData.Offsets.Right = 300.000000f;
	__Local__60->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__60->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__60->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__60->Parent = __Local__6;
	auto __Local__61 = NewObject<UImage>(__Local__0, TEXT("WeaponImage"), (EObjectFlags)0x00280008);
	__Local__61->Brush.ImageSize = FVector2D(1000.000000, 500.000000);
	auto& __Local__62 = (*(AccessPrivateProperty<UObject* >(&(__Local__61->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__62 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__7.Add(__Local__60);
	auto __Local__63 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__63->LayoutData.Offsets.Left = 100.000000f;
	__Local__63->LayoutData.Offsets.Top = -380.000000f;
	__Local__63->LayoutData.Offsets.Right = 150.000000f;
	__Local__63->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__63->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__63->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__63->Parent = __Local__6;
	auto __Local__64 = NewObject<UProgressBar>(__Local__0, TEXT("PowerUpCooldownImage"), (EObjectFlags)0x00280008);
	__Local__64->WidgetStyle.BackgroundImage.ImageSize = FVector2D(500.000000, 500.000000);
	__Local__64->WidgetStyle.BackgroundImage.Margin.Left = 0.500000f;
	__Local__64->WidgetStyle.BackgroundImage.Margin.Top = 0.500000f;
	__Local__64->WidgetStyle.BackgroundImage.Margin.Right = 0.500000f;
	__Local__64->WidgetStyle.BackgroundImage.Margin.Bottom = 0.500000f;
	auto& __Local__65 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__64->WidgetStyle.BackgroundImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__65 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__64->WidgetStyle.FillImage.ImageSize = FVector2D(307.000000, 335.000000);
	auto& __Local__66 = (*(AccessPrivateProperty<UObject* >(&(__Local__64->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__66 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__64->WidgetStyle.FillImage.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__64->Percent = 1.000000f;
	__Local__64->BarFillType = EProgressBarFillType::Type::BottomToTop;
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__7.Add(__Local__63);
	auto __Local__67 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_17"), (EObjectFlags)0x00280008);
	__Local__67->LayoutData.Offsets.Left = 100.000000f;
	__Local__67->LayoutData.Offsets.Top = -380.000000f;
	__Local__67->LayoutData.Offsets.Right = 150.000000f;
	__Local__67->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__67->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__67->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__67->Parent = __Local__6;
	auto __Local__68 = NewObject<UImage>(__Local__0, TEXT("Image_97"), (EObjectFlags)0x00280008);
	__Local__68->Brush.ImageSize = FVector2D(307.000000, 335.000000);
	auto& __Local__69 = (*(AccessPrivateProperty<UObject* >(&(__Local__68->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__69 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__7.Add(__Local__67);
	auto __Local__70 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__70->LayoutData.Offsets.Left = 120.000000f;
	__Local__70->LayoutData.Offsets.Top = 164.000000f;
	__Local__70->LayoutData.Offsets.Right = 1555.869141f;
	__Local__70->LayoutData.Offsets.Bottom = 874.635254f;
	__Local__70->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__70->Parent = __Local__6;
	auto __Local__71 = NewObject<UTextBlock>(__Local__0, TEXT("EnemiesRemaining"), (EObjectFlags)0x00280008);
	__Local__71->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"DE74935D489440A9EE0EC6B606AA84E6\", \"10\")")	);
	__Local__71->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__71->Font.OutlineSettings.OutlineSize = 2;
	__Local__71->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__71->Font.Size = 30;
	auto& __Local__72 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__71), UTextLayoutWidget::__PPO__Justification() )));
	__Local__72 = ETextJustify::Type::Center;
	__Local__71->Slot = __Local__70;
	__Local__70->Content = __Local__71;
	__Local__7.Add(__Local__70);
	auto __Local__73 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__73->LayoutData.Offsets.Left = 708.000000f;
	__Local__73->LayoutData.Offsets.Top = 100.000000f;
	__Local__73->LayoutData.Offsets.Right = 1114.682617f;
	__Local__73->LayoutData.Offsets.Bottom = 938.635254f;
	__Local__73->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__73->Parent = __Local__6;
	auto __Local__74 = NewObject<UTextBlock>(__Local__0, TEXT("TimeSurviveText"), (EObjectFlags)0x00280008);
	__Local__74->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__74->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__74->Font.OutlineSettings.OutlineSize = 2;
	__Local__74->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__74->Font.Size = 30;
	auto& __Local__75 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__74), UTextLayoutWidget::__PPO__Justification() )));
	__Local__75 = ETextJustify::Type::Center;
	__Local__74->Slot = __Local__73;
	__Local__73->Content = __Local__74;
	__Local__7.Add(__Local__73);
	auto __Local__76 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__76->LayoutData.Offsets.Left = 188.000000f;
	__Local__76->LayoutData.Offsets.Top = -220.540527f;
	__Local__76->LayoutData.Offsets.Right = 255.711273f;
	__Local__76->LayoutData.Offsets.Bottom = 334.749207f;
	__Local__76->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__76->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__76->Parent = __Local__6;
	auto __Local__77 = NewObject<UImage>(__Local__0, TEXT("Image_35"), (EObjectFlags)0x00280008);
	__Local__77->Brush.ImageSize = FVector2D(500.000000, 700.000000);
	auto& __Local__78 = (*(AccessPrivateProperty<UObject* >(&(__Local__77->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__78 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__77->Slot = __Local__76;
	__Local__76->Content = __Local__77;
	__Local__7.Add(__Local__76);
	auto __Local__79 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__79->LayoutData.Offsets.Left = 172.000000f;
	__Local__79->LayoutData.Offsets.Top = 328.000000f;
	__Local__79->LayoutData.Offsets.Right = 280.180176f;
	__Local__79->LayoutData.Offsets.Bottom = 322.504730f;
	__Local__79->Parent = __Local__6;
	auto __Local__80 = NewObject<UScaleBox>(__Local__0, TEXT("ScaleBox_485"), (EObjectFlags)0x00280008);
	auto& __Local__81 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__80), UPanelWidget::__PPO__Slots() )));
	__Local__81 = TArray<UPanelSlot*> ();
	__Local__81.Reserve(1);
	auto __Local__82 = NewObject<UScaleBoxSlot>(__Local__80, TEXT("ScaleBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__82->Parent = __Local__80;
	auto __Local__83 = NewObject<UImage>(__Local__0, TEXT("Image"), (EObjectFlags)0x00280008);
	__Local__83->Brush.ImageSize = FVector2D(359.000000, 364.000000);
	auto& __Local__84 = (*(AccessPrivateProperty<UObject* >(&(__Local__83->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__84 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__83->Slot = __Local__82;
	__Local__82->Content = __Local__83;
	__Local__81.Add(__Local__82);
	__Local__80->Slot = __Local__79;
	__Local__79->Content = __Local__80;
	__Local__7.Add(__Local__79);
	auto __Local__85 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__85->LayoutData.Offsets.Left = 304.000000f;
	__Local__85->LayoutData.Offsets.Top = 191.459473f;
	__Local__85->LayoutData.Offsets.Right = 210.000000f;
	__Local__85->LayoutData.Offsets.Bottom = 115.000000f;
	__Local__85->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__85->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__85->Parent = __Local__6;
	auto __Local__86 = NewObject<UImage>(__Local__0, TEXT("Image_GodMode"), (EObjectFlags)0x00280008);
	__Local__86->Brush.ImageSize = FVector2D(1959.000000, 917.000000);
	auto& __Local__87 = (*(AccessPrivateProperty<UObject* >(&(__Local__86->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__87 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__86->Slot = __Local__85;
	__Local__85->Content = __Local__86;
	__Local__7.Add(__Local__85);
	__Local__0->RootWidget = __Local__6;
	auto __Local__88 = NewObject<UMovieScene>(__Local__1, TEXT("PointsAnimation"), (EObjectFlags)0x00280008);
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__88), UMovieScene::__PPO__Possessables() )));
	__Local__89 = TArray<FMovieScenePossessable> ();
	__Local__89.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__89.GetData(), 1);
	auto& __Local__90 = __Local__89[0];
	auto& __Local__91 = (*(AccessPrivateProperty<FGuid >(&(__Local__90), FMovieScenePossessable::__PPO__Guid() )));
	__Local__91 = FGuid(0x71893E76, 0x409A706A, 0x65402989, 0x03111A71);
	auto& __Local__92 = (*(AccessPrivateProperty<FString >(&(__Local__90), FMovieScenePossessable::__PPO__Name() )));
	__Local__92 = FString(TEXT("TextBlock_213"));
	auto& __Local__93 = (*(AccessPrivateProperty<UClass* >(&(__Local__90), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__93 = UTextBlock::StaticClass();
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__88), UMovieScene::__PPO__ObjectBindings() )));
	__Local__94 = TArray<FMovieSceneBinding> ();
	__Local__94.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__94.GetData(), 1);
	auto& __Local__95 = __Local__94[0];
	auto& __Local__96 = (*(AccessPrivateProperty<FGuid >(&(__Local__95), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__96 = FGuid(0x71893E76, 0x409A706A, 0x65402989, 0x03111A71);
	auto& __Local__97 = (*(AccessPrivateProperty<FString >(&(__Local__95), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__97 = FString(TEXT("TextBlock_213"));
	auto& __Local__98 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__95), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__98 = TArray<UMovieSceneTrack*> ();
	__Local__98.Reserve(1);
	auto __Local__99 = NewObject<UMovieScene2DTransformTrack>(__Local__88, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__100 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__99), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__100.PropertyName = FName(TEXT("RenderTransform"));
	__Local__100.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__100.bCanUseClassLookup = true;
	auto& __Local__101 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__99), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__101 = TArray<UMovieSceneSection*> ();
	__Local__101.Reserve(1);
	auto __Local__102 = NewObject<UMovieScene2DTransformSection>(__Local__99, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__103 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__102->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__104 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__102->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__103)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__104)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__102->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__105 = TArray<FFrameNumber> ();
	__Local__105.Reserve(3);
	__Local__105.Add(FFrameNumber{});
	__Local__105.Add(FFrameNumber{});
	__Local__105[1].Value = 30000;
	__Local__105.Add(FFrameNumber{});
	__Local__105[2].Value = 60000;
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__102->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__106 = TArray<FMovieSceneFloatValue> ();
	__Local__106.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__106.GetData(), 3);
	auto& __Local__107 = __Local__106[0];
	auto& __Local__108 = __Local__106[1];
	__Local__108.Value = -5.000000f;
	auto& __Local__109 = __Local__106[2];
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__102->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__110 = TArray<FFrameNumber> ();
	__Local__110.Reserve(3);
	__Local__110.Add(FFrameNumber{});
	__Local__110.Add(FFrameNumber{});
	__Local__110[1].Value = 30000;
	__Local__110.Add(FFrameNumber{});
	__Local__110[2].Value = 60000;
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__102->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__111 = TArray<FMovieSceneFloatValue> ();
	__Local__111.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__111.GetData(), 3);
	auto& __Local__112 = __Local__111[0];
	auto& __Local__113 = __Local__111[1];
	__Local__113.Value = -5.000000f;
	auto& __Local__114 = __Local__111[2];
	__Local__102->Easing.EaseIn = __Local__103;
	__Local__102->Easing.EaseOut = __Local__104;
	__Local__102->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60000)));
	auto& __Local__115 = (*(AccessPrivateProperty<FGuid >((__Local__102), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__115 = FGuid(0xAB2D7556, 0x44969FDC, 0x5FC77C82, 0x145C6BDA);
	__Local__101.Add(__Local__102);
	auto& __Local__116 = (*(AccessPrivateProperty<FGuid >((__Local__99), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__116 = FGuid(0x4A1559B8, 0x490AD93B, 0x83104D94, 0xF43A7845);
	auto& __Local__117 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__99), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__117.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__117.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__117.Entries.GetData(), 1);
	auto& __Local__118 = __Local__117.Entries[0];
	__Local__118.Section = __Local__102;
	static TWeakFieldPtr<FProperty> __Local__120{};
	const FProperty* __Local__119 = __Local__120.Get();
	if (nullptr == __Local__119)
	{
		__Local__119 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__119);
		__Local__120 = __Local__119;
	}
	auto& __Local__121 = (*(__Local__119->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__118.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__123{};
	const FProperty* __Local__122 = __Local__123.Get();
	if (nullptr == __Local__122)
	{
		__Local__122 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__122);
		__Local__123 = __Local__122;
	}
	auto& __Local__124 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__121), 0)));
	__Local__124 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__126{};
	const FProperty* __Local__125 = __Local__126.Get();
	if (nullptr == __Local__125)
	{
		__Local__125 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__125);
		__Local__126 = __Local__125;
	}
	auto& __Local__127 = (*(__Local__125->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__118.Range), 0)));
	auto& __Local__128 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__127), 0)));
	__Local__128 = ERangeBoundTypes::Type::Exclusive;
	static TWeakFieldPtr<FProperty> __Local__130{};
	const FProperty* __Local__129 = __Local__130.Get();
	if (nullptr == __Local__129)
	{
		__Local__129 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__129);
		__Local__130 = __Local__129;
	}
	auto& __Local__131 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__127), 0)));
	__Local__131.Value = 60000;
	__Local__118.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__132 = (*(AccessPrivateProperty<FGuid >((__Local__99), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__132 = FGuid(0x4A1559B8, 0x490AD93B, 0x83104D94, 0xF43A7845);
	__Local__98.Add(__Local__99);
	auto& __Local__133 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__88), UMovieScene::__PPO__PlaybackRange() )));
	__Local__133 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60000)));
	auto& __Local__134 = (*(AccessPrivateProperty<FFrameRate >((__Local__88), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__136{};
	const FProperty* __Local__135 = __Local__136.Get();
	if (nullptr == __Local__135)
	{
		__Local__135 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__135);
		__Local__136 = __Local__135;
	}
	auto& __Local__137 = (*(__Local__135->ContainerPtrToValuePtr<int32 >(&(__Local__134), 0)));
	__Local__137 = 20;
	auto& __Local__138 = (*(AccessPrivateProperty<FGuid >((__Local__88), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__138 = FGuid(0xC7187B40, 0x48FF9FA7, 0x0E2E7B8C, 0xF22B4932);
	__Local__1->MovieScene = __Local__88;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__139 = __Local__1->AnimationBindings[0];
	__Local__139.WidgetName = FName(TEXT("TextBlock_213"));
	__Local__139.AnimationGuid = FGuid(0x71893E76, 0x409A706A, 0x65402989, 0x03111A71);
	auto& __Local__140 = (*(AccessPrivateProperty<FString >((__Local__1), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__140 = FString(TEXT("PointsAnimation"));
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__141 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__141 = FGuid(0x75220127, 0x4175E3D1, 0xC5511187, 0x0BFF1ECE);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__1);
	auto __Local__142 = NewObject<UMovieScene>(__Local__2, TEXT("MorePointsAnim"), (EObjectFlags)0x00280008);
	auto& __Local__143 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__142), UMovieScene::__PPO__Possessables() )));
	__Local__143 = TArray<FMovieScenePossessable> ();
	__Local__143.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__143.GetData(), 1);
	auto& __Local__144 = __Local__143[0];
	auto& __Local__145 = (*(AccessPrivateProperty<FGuid >(&(__Local__144), FMovieScenePossessable::__PPO__Guid() )));
	__Local__145 = FGuid(0x154FD855, 0x48AC6D1B, 0x064CFB82, 0x21C90743);
	auto& __Local__146 = (*(AccessPrivateProperty<FString >(&(__Local__144), FMovieScenePossessable::__PPO__Name() )));
	__Local__146 = FString(TEXT("ComboText"));
	auto& __Local__147 = (*(AccessPrivateProperty<UClass* >(&(__Local__144), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__147 = UTextBlock::StaticClass();
	auto& __Local__148 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__142), UMovieScene::__PPO__ObjectBindings() )));
	__Local__148 = TArray<FMovieSceneBinding> ();
	__Local__148.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__148.GetData(), 1);
	auto& __Local__149 = __Local__148[0];
	auto& __Local__150 = (*(AccessPrivateProperty<FGuid >(&(__Local__149), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__150 = FGuid(0x154FD855, 0x48AC6D1B, 0x064CFB82, 0x21C90743);
	auto& __Local__151 = (*(AccessPrivateProperty<FString >(&(__Local__149), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__151 = FString(TEXT("ComboText"));
	auto& __Local__152 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__149), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__152 = TArray<UMovieSceneTrack*> ();
	__Local__152.Reserve(1);
	auto __Local__153 = NewObject<UMovieScene2DTransformTrack>(__Local__142, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__154 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__153), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__154.PropertyName = FName(TEXT("RenderTransform"));
	__Local__154.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__154.bCanUseClassLookup = true;
	auto& __Local__155 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__153), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__155 = TArray<UMovieSceneSection*> ();
	__Local__155.Reserve(1);
	auto __Local__156 = NewObject<UMovieScene2DTransformSection>(__Local__153, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__157 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__156->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__158 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__156->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__157)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__158)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__159 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__156->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__159 = TArray<FFrameNumber> ();
	__Local__159.Reserve(3);
	__Local__159.Add(FFrameNumber{});
	__Local__159.Add(FFrameNumber{});
	__Local__159[1].Value = 15000;
	__Local__159.Add(FFrameNumber{});
	__Local__159[2].Value = 60000;
	auto& __Local__160 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__156->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__160 = TArray<FMovieSceneFloatValue> ();
	__Local__160.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__160.GetData(), 3);
	auto& __Local__161 = __Local__160[0];
	__Local__161.Value = 1.000000f;
	auto& __Local__162 = __Local__160[1];
	__Local__162.Value = 1.500000f;
	auto& __Local__163 = __Local__160[2];
	__Local__163.Value = 1.000000f;
	auto& __Local__164 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__156->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__164 = TArray<FFrameNumber> ();
	__Local__164.Reserve(3);
	__Local__164.Add(FFrameNumber{});
	__Local__164.Add(FFrameNumber{});
	__Local__164[1].Value = 15000;
	__Local__164.Add(FFrameNumber{});
	__Local__164[2].Value = 60000;
	auto& __Local__165 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__156->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__165 = TArray<FMovieSceneFloatValue> ();
	__Local__165.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__165.GetData(), 3);
	auto& __Local__166 = __Local__165[0];
	__Local__166.Value = 1.000000f;
	auto& __Local__167 = __Local__165[1];
	__Local__167.Value = 1.500000f;
	auto& __Local__168 = __Local__165[2];
	__Local__168.Value = 1.000000f;
	__Local__156->Easing.EaseIn = __Local__157;
	__Local__156->Easing.EaseOut = __Local__158;
	__Local__156->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(60000)));
	auto& __Local__169 = (*(AccessPrivateProperty<FGuid >((__Local__156), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__169 = FGuid(0xADF96C5D, 0x41BBBEF2, 0xE0C3A591, 0x9B29D2DA);
	__Local__155.Add(__Local__156);
	auto& __Local__170 = (*(AccessPrivateProperty<FGuid >((__Local__153), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__170 = FGuid(0x6B40DA9F, 0x45E97C9A, 0x2071C6A5, 0x4BEFBFEF);
	auto& __Local__171 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__153), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__171.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__171.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__171.Entries.GetData(), 1);
	auto& __Local__172 = __Local__171.Entries[0];
	__Local__172.Section = __Local__156;
	auto& __Local__173 = (*(__Local__119->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__172.Range), 0)));
	auto& __Local__174 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__173), 0)));
	__Local__174 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__175 = (*(__Local__125->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__172.Range), 0)));
	auto& __Local__176 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__175), 0)));
	__Local__176 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__177 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__175), 0)));
	__Local__177.Value = 60000;
	__Local__172.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__178 = (*(AccessPrivateProperty<FGuid >((__Local__153), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__178 = FGuid(0x6B40DA9F, 0x45E97C9A, 0x2071C6A5, 0x4BEFBFEF);
	__Local__152.Add(__Local__153);
	auto& __Local__179 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__142), UMovieScene::__PPO__PlaybackRange() )));
	__Local__179 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60001)));
	auto& __Local__180 = (*(AccessPrivateProperty<FFrameRate >((__Local__142), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__181 = (*(__Local__135->ContainerPtrToValuePtr<int32 >(&(__Local__180), 0)));
	__Local__181 = 20;
	auto& __Local__182 = (*(AccessPrivateProperty<FGuid >((__Local__142), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__182 = FGuid(0x9B69A9D6, 0x48A9C53D, 0xA0703081, 0xE1B6CF90);
	__Local__2->MovieScene = __Local__142;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__183 = __Local__2->AnimationBindings[0];
	__Local__183.WidgetName = FName(TEXT("ComboText"));
	__Local__183.AnimationGuid = FGuid(0x154FD855, 0x48AC6D1B, 0x064CFB82, 0x21C90743);
	auto& __Local__184 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__184 = FString(TEXT("MorePointsAnim"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__185 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__185 = FGuid(0xD6A8E9DC, 0x417D40E2, 0xB77545B5, 0x138588A1);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__186 = NewObject<UMovieScene>(__Local__3, TEXT("FadeOut"), (EObjectFlags)0x00280008);
	auto& __Local__187 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__186), UMovieScene::__PPO__Possessables() )));
	__Local__187 = TArray<FMovieScenePossessable> ();
	__Local__187.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__187.GetData(), 1);
	auto& __Local__188 = __Local__187[0];
	auto& __Local__189 = (*(AccessPrivateProperty<FGuid >(&(__Local__188), FMovieScenePossessable::__PPO__Guid() )));
	__Local__189 = FGuid(0x628C8889, 0x41EE52D4, 0xD98AE7AE, 0xFE7E8676);
	auto& __Local__190 = (*(AccessPrivateProperty<FString >(&(__Local__188), FMovieScenePossessable::__PPO__Name() )));
	__Local__190 = FString(TEXT("Objetivo"));
	auto& __Local__191 = (*(AccessPrivateProperty<UClass* >(&(__Local__188), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__191 = UTextBlock::StaticClass();
	auto& __Local__192 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__186), UMovieScene::__PPO__ObjectBindings() )));
	__Local__192 = TArray<FMovieSceneBinding> ();
	__Local__192.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__192.GetData(), 1);
	auto& __Local__193 = __Local__192[0];
	auto& __Local__194 = (*(AccessPrivateProperty<FGuid >(&(__Local__193), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__194 = FGuid(0x628C8889, 0x41EE52D4, 0xD98AE7AE, 0xFE7E8676);
	auto& __Local__195 = (*(AccessPrivateProperty<FString >(&(__Local__193), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__195 = FString(TEXT("Objetivo"));
	auto& __Local__196 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__193), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__196 = TArray<UMovieSceneTrack*> ();
	__Local__196.Reserve(1);
	auto __Local__197 = NewObject<UMovieSceneFloatTrack>(__Local__186, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__198 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__197), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__198.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__198.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__198.bCanUseClassLookup = true;
	auto& __Local__199 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__197), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__199 = TArray<UMovieSceneSection*> ();
	__Local__199.Reserve(1);
	auto __Local__200 = NewObject<UMovieSceneFloatSection>(__Local__197, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__201 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__200->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__202 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__200->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__201)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__202)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__203 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__200), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__204 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__203), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__204 = TArray<FFrameNumber> ();
	__Local__204.Reserve(5);
	__Local__204.Add(FFrameNumber{});
	__Local__204.Add(FFrameNumber{});
	__Local__204[1].Value = 45000;
	__Local__204.Add(FFrameNumber{});
	__Local__204[2].Value = 90000;
	__Local__204.Add(FFrameNumber{});
	__Local__204[3].Value = 135000;
	__Local__204.Add(FFrameNumber{});
	__Local__204[4].Value = 180000;
	auto& __Local__205 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__203), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__205 = TArray<FMovieSceneFloatValue> ();
	__Local__205.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__205.GetData(), 5);
	auto& __Local__206 = __Local__205[0];
	__Local__206.Value = 0.750000f;
	auto& __Local__207 = __Local__205[1];
	__Local__207.Value = 0.250000f;
	auto& __Local__208 = __Local__205[2];
	__Local__208.Value = 0.250000f;
	auto& __Local__209 = __Local__205[3];
	__Local__209.Value = 0.750000f;
	auto& __Local__210 = __Local__205[4];
	__Local__210.Value = 0.750000f;
	__Local__200->Easing.EaseIn = __Local__201;
	__Local__200->Easing.EaseOut = __Local__202;
	__Local__200->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(180000)));
	auto& __Local__211 = (*(AccessPrivateProperty<FGuid >((__Local__200), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__211 = FGuid(0x800471C6, 0x45D8B3D9, 0x73BCA8BD, 0x1FF9E66D);
	__Local__199.Add(__Local__200);
	auto& __Local__212 = (*(AccessPrivateProperty<FGuid >((__Local__197), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__212 = FGuid(0x89083E47, 0x4F7729DE, 0xA271F18D, 0x6E4F7FD7);
	auto& __Local__213 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__197), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__213.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__213.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__213.Entries.GetData(), 1);
	auto& __Local__214 = __Local__213.Entries[0];
	__Local__214.Section = __Local__200;
	auto& __Local__215 = (*(__Local__119->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__214.Range), 0)));
	auto& __Local__216 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__215), 0)));
	__Local__216 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__217 = (*(__Local__125->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__214.Range), 0)));
	auto& __Local__218 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__217), 0)));
	__Local__218 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__219 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__217), 0)));
	__Local__219.Value = 180000;
	__Local__214.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__220 = (*(AccessPrivateProperty<FGuid >((__Local__197), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__220 = FGuid(0x89083E47, 0x4F7729DE, 0xA271F18D, 0x6E4F7FD7);
	__Local__196.Add(__Local__197);
	auto& __Local__221 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__186), UMovieScene::__PPO__PlaybackRange() )));
	__Local__221 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(180001)));
	auto& __Local__222 = (*(AccessPrivateProperty<FFrameRate >((__Local__186), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__223 = (*(__Local__135->ContainerPtrToValuePtr<int32 >(&(__Local__222), 0)));
	__Local__223 = 20;
	auto& __Local__224 = (*(AccessPrivateProperty<FGuid >((__Local__186), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__224 = FGuid(0x3C95B861, 0x4B812B4C, 0x488B0180, 0x8AFBF131);
	__Local__3->MovieScene = __Local__186;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__225 = __Local__3->AnimationBindings[0];
	__Local__225.WidgetName = FName(TEXT("Objetivo"));
	__Local__225.AnimationGuid = FGuid(0x628C8889, 0x41EE52D4, 0xD98AE7AE, 0xFE7E8676);
	auto& __Local__226 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__226 = FString(TEXT("FadeOut"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__227 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__227 = FGuid(0xB7F72BD2, 0x433584CB, 0x766253A4, 0xE4A18BEB);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__228 = NewObject<UMovieScene>(__Local__4, TEXT("FadeIn"), (EObjectFlags)0x00280008);
	auto& __Local__229 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__228), UMovieScene::__PPO__Possessables() )));
	__Local__229 = TArray<FMovieScenePossessable> ();
	__Local__229.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__229.GetData(), 1);
	auto& __Local__230 = __Local__229[0];
	auto& __Local__231 = (*(AccessPrivateProperty<FGuid >(&(__Local__230), FMovieScenePossessable::__PPO__Guid() )));
	__Local__231 = FGuid(0xF2824BF7, 0x472D827C, 0x154B8380, 0x4F14C14E);
	auto& __Local__232 = (*(AccessPrivateProperty<FString >(&(__Local__230), FMovieScenePossessable::__PPO__Name() )));
	__Local__232 = FString(TEXT("GameOverPanel"));
	auto& __Local__233 = (*(AccessPrivateProperty<UClass* >(&(__Local__230), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__233 = UCanvasPanel::StaticClass();
	auto& __Local__234 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__228), UMovieScene::__PPO__ObjectBindings() )));
	__Local__234 = TArray<FMovieSceneBinding> ();
	__Local__234.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__234.GetData(), 1);
	auto& __Local__235 = __Local__234[0];
	auto& __Local__236 = (*(AccessPrivateProperty<FGuid >(&(__Local__235), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__236 = FGuid(0xF2824BF7, 0x472D827C, 0x154B8380, 0x4F14C14E);
	auto& __Local__237 = (*(AccessPrivateProperty<FString >(&(__Local__235), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__237 = FString(TEXT("GameOverPanel"));
	auto& __Local__238 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__235), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__238 = TArray<UMovieSceneTrack*> ();
	__Local__238.Reserve(1);
	auto __Local__239 = NewObject<UMovieSceneFloatTrack>(__Local__228, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__240 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__239), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__240.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__240.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__240.bCanUseClassLookup = true;
	auto& __Local__241 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__239), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__241 = TArray<UMovieSceneSection*> ();
	__Local__241.Reserve(1);
	auto __Local__242 = NewObject<UMovieSceneFloatSection>(__Local__239, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__243 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__242->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__244 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__242->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__243)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__244)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__245 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__242), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__246 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__245), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__246 = TArray<FFrameNumber> ();
	__Local__246.Reserve(2);
	__Local__246.Add(FFrameNumber{});
	__Local__246[0].Value = 45000;
	__Local__246.Add(FFrameNumber{});
	__Local__246[1].Value = 75001;
	auto& __Local__247 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__245), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__247 = TArray<FMovieSceneFloatValue> ();
	__Local__247.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__247.GetData(), 2);
	auto& __Local__248 = __Local__247[0];
	auto& __Local__249 = __Local__247[1];
	__Local__249.Value = 1.000000f;
	__Local__242->Easing.EaseIn = __Local__243;
	__Local__242->Easing.EaseOut = __Local__244;
	__Local__242->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(75001)));
	auto& __Local__250 = (*(AccessPrivateProperty<FGuid >((__Local__242), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__250 = FGuid(0x9105D9A1, 0x4945D53F, 0xCF3186B0, 0x61C6A54B);
	__Local__241.Add(__Local__242);
	auto& __Local__251 = (*(AccessPrivateProperty<FGuid >((__Local__239), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__251 = FGuid(0x59FF03BA, 0x43F9E305, 0x62CD8BB9, 0x66C29FF1);
	auto& __Local__252 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__239), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__252.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__252.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__252.Entries.GetData(), 1);
	auto& __Local__253 = __Local__252.Entries[0];
	__Local__253.Section = __Local__242;
	auto& __Local__254 = (*(__Local__119->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__253.Range), 0)));
	auto& __Local__255 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__254), 0)));
	__Local__255 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__256 = (*(__Local__125->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__253.Range), 0)));
	auto& __Local__257 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__256), 0)));
	__Local__257 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__258 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__256), 0)));
	__Local__258.Value = 75001;
	__Local__253.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__259 = (*(AccessPrivateProperty<FGuid >((__Local__239), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__259 = FGuid(0x59FF03BA, 0x43F9E305, 0x62CD8BB9, 0x66C29FF1);
	__Local__238.Add(__Local__239);
	auto& __Local__260 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__228), UMovieScene::__PPO__PlaybackRange() )));
	__Local__260 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(75002)));
	auto& __Local__261 = (*(AccessPrivateProperty<FFrameRate >((__Local__228), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__262 = (*(__Local__135->ContainerPtrToValuePtr<int32 >(&(__Local__261), 0)));
	__Local__262 = 20;
	auto& __Local__263 = (*(AccessPrivateProperty<FGuid >((__Local__228), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__263 = FGuid(0xD1D8475F, 0x44682217, 0x55BDF9BB, 0xFEA1CF72);
	__Local__4->MovieScene = __Local__228;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__264 = __Local__4->AnimationBindings[0];
	__Local__264.WidgetName = FName(TEXT("GameOverPanel"));
	__Local__264.AnimationGuid = FGuid(0xF2824BF7, 0x472D827C, 0x154B8380, 0x4F14C14E);
	auto& __Local__265 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__265 = FString(TEXT("FadeIn"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__266 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__266 = FGuid(0x331DB61F, 0x42578E14, 0x65108987, 0x37847BE1);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
	auto __Local__267 = NewObject<UMovieScene>(__Local__5, TEXT("GodModeAnim"), (EObjectFlags)0x00280008);
	auto& __Local__268 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__267), UMovieScene::__PPO__Possessables() )));
	__Local__268 = TArray<FMovieScenePossessable> ();
	__Local__268.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__268.GetData(), 1);
	auto& __Local__269 = __Local__268[0];
	auto& __Local__270 = (*(AccessPrivateProperty<FGuid >(&(__Local__269), FMovieScenePossessable::__PPO__Guid() )));
	__Local__270 = FGuid(0x35E5C608, 0x4E490C85, 0x34BF54B8, 0x0AFC1892);
	auto& __Local__271 = (*(AccessPrivateProperty<FString >(&(__Local__269), FMovieScenePossessable::__PPO__Name() )));
	__Local__271 = FString(TEXT("Image_GodMode"));
	auto& __Local__272 = (*(AccessPrivateProperty<UClass* >(&(__Local__269), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__272 = UImage::StaticClass();
	auto& __Local__273 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__267), UMovieScene::__PPO__ObjectBindings() )));
	__Local__273 = TArray<FMovieSceneBinding> ();
	__Local__273.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__273.GetData(), 1);
	auto& __Local__274 = __Local__273[0];
	auto& __Local__275 = (*(AccessPrivateProperty<FGuid >(&(__Local__274), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__275 = FGuid(0x35E5C608, 0x4E490C85, 0x34BF54B8, 0x0AFC1892);
	auto& __Local__276 = (*(AccessPrivateProperty<FString >(&(__Local__274), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__276 = FString(TEXT("Image_GodMode"));
	auto& __Local__277 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__274), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__277 = TArray<UMovieSceneTrack*> ();
	__Local__277.Reserve(1);
	auto __Local__278 = NewObject<UMovieSceneFloatTrack>(__Local__267, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__279 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__278), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__279.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__279.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__279.bCanUseClassLookup = true;
	auto& __Local__280 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__278), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__280 = TArray<UMovieSceneSection*> ();
	__Local__280.Reserve(1);
	auto __Local__281 = NewObject<UMovieSceneFloatSection>(__Local__278, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__282 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__281->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__283 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__281->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__282)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__283)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__284 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__281), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__285 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__284), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__285 = TArray<FFrameNumber> ();
	__Local__285.Reserve(3);
	__Local__285.Add(FFrameNumber{});
	__Local__285.Add(FFrameNumber{});
	__Local__285[1].Value = 90000;
	__Local__285.Add(FFrameNumber{});
	__Local__285[2].Value = 180000;
	auto& __Local__286 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__284), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__286 = TArray<FMovieSceneFloatValue> ();
	__Local__286.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__286.GetData(), 3);
	auto& __Local__287 = __Local__286[0];
	__Local__287.Value = 1.000000f;
	auto& __Local__288 = __Local__286[1];
	auto& __Local__289 = __Local__286[2];
	__Local__289.Value = 1.000000f;
	__Local__281->Easing.EaseIn = __Local__282;
	__Local__281->Easing.EaseOut = __Local__283;
	__Local__281->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(180000)));
	auto& __Local__290 = (*(AccessPrivateProperty<FGuid >((__Local__281), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__290 = FGuid(0xEF891DF4, 0x4CCDF1F6, 0x3988C081, 0x38A2131F);
	__Local__280.Add(__Local__281);
	auto& __Local__291 = (*(AccessPrivateProperty<FGuid >((__Local__278), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__291 = FGuid(0xAB48C925, 0x43B1A94C, 0x0C48BE84, 0x37FBC1F6);
	auto& __Local__292 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__278), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__292.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__292.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__292.Entries.GetData(), 1);
	auto& __Local__293 = __Local__292.Entries[0];
	__Local__293.Section = __Local__281;
	auto& __Local__294 = (*(__Local__119->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__293.Range), 0)));
	auto& __Local__295 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__294), 0)));
	__Local__295 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__296 = (*(__Local__125->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__293.Range), 0)));
	auto& __Local__297 = (*(__Local__122->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__296), 0)));
	__Local__297 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__298 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__296), 0)));
	__Local__298.Value = 180000;
	__Local__293.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__299 = (*(AccessPrivateProperty<FGuid >((__Local__278), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__299 = FGuid(0xAB48C925, 0x43B1A94C, 0x0C48BE84, 0x37FBC1F6);
	__Local__277.Add(__Local__278);
	auto& __Local__300 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__267), UMovieScene::__PPO__PlaybackRange() )));
	__Local__300 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(180001)));
	auto& __Local__301 = (*(AccessPrivateProperty<FFrameRate >((__Local__267), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__302 = (*(__Local__135->ContainerPtrToValuePtr<int32 >(&(__Local__301), 0)));
	__Local__302 = 20;
	auto& __Local__303 = (*(AccessPrivateProperty<FGuid >((__Local__267), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__303 = FGuid(0x27023A11, 0x4EA57C92, 0x5F6622B9, 0xAFDE9D53);
	__Local__5->MovieScene = __Local__267;
	__Local__5->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__5->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__5->AnimationBindings.GetData(), 1);
	auto& __Local__304 = __Local__5->AnimationBindings[0];
	__Local__304.WidgetName = FName(TEXT("Image_GodMode"));
	__Local__304.AnimationGuid = FGuid(0x35E5C608, 0x4E490C85, 0x34BF54B8, 0x0AFC1892);
	auto& __Local__305 = (*(AccessPrivateProperty<FString >((__Local__5), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__305 = FString(TEXT("GodModeAnim"));
	__Local__5->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__306 = (*(AccessPrivateProperty<FGuid >((__Local__5), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__306 = FGuid(0x0120A167, 0x477759C8, 0xD020BCA3, 0xDED805F2);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__5);
}
PRAGMA_ENABLE_OPTIMIZATION
void UHUDre_C__pf2299784250::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__307;
	SlotNames.Append(__Local__307);
}
void UHUDre_C__pf2299784250::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__308;
	__Local__308.Reserve(5);
	__Local__308.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__308.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__308.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->MiscConvertedSubobjects[3]));
	__Local__308.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->MiscConvertedSubobjects[4]));
	__Local__308.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->MiscConvertedSubobjects[5]));
	TArray<FDelegateRuntimeBinding>  __Local__309;
	__Local__309.AddUninitialized(21);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__309.GetData(), 21);
	auto& __Local__310 = __Local__309[0];
	__Local__310.ObjectName = FString(TEXT("Arma"));
	__Local__310.PropertyName = FName(TEXT("Text"));
	__Local__310.FunctionName = FName(TEXT("GetText_1"));
	auto& __Local__311 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__310.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__311 = TArray<FPropertyPathSegment> ();
	__Local__311.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__311.GetData(), 1);
	auto& __Local__312 = __Local__311[0];
	__Local__312.Name = FName(TEXT("GetTextWeapon"));
	auto& __Local__313 = __Local__309[1];
	__Local__313.ObjectName = FString(TEXT("Municion"));
	__Local__313.PropertyName = FName(TEXT("Text"));
	__Local__313.FunctionName = FName(TEXT("GetTextAmmo"));
	auto& __Local__314 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__313.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__314 = TArray<FPropertyPathSegment> ();
	__Local__314.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__314.GetData(), 1);
	auto& __Local__315 = __Local__314[0];
	__Local__315.Name = FName(TEXT("GetTextAmmo"));
	auto& __Local__316 = __Local__309[2];
	__Local__316.ObjectName = FString(TEXT("Objetivo"));
	__Local__316.PropertyName = FName(TEXT("Text"));
	__Local__316.FunctionName = FName(TEXT("GetText_0"));
	auto& __Local__317 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__316.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__317 = TArray<FPropertyPathSegment> ();
	__Local__317.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__317.GetData(), 1);
	auto& __Local__318 = __Local__317[0];
	__Local__318.Name = FName(TEXT("GetLevelObjectiveText"));
	auto& __Local__319 = __Local__309[3];
	__Local__319.ObjectName = FString(TEXT("TextBlock_69"));
	__Local__319.PropertyName = FName(TEXT("Visibility"));
	__Local__319.FunctionName = FName(TEXT("GetVisibility_0"));
	auto& __Local__320 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__319.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__320 = TArray<FPropertyPathSegment> ();
	__Local__320.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__320.GetData(), 1);
	auto& __Local__321 = __Local__320[0];
	__Local__321.Name = FName(TEXT("GetVisibility_0"));
	auto& __Local__322 = __Local__309[4];
	__Local__322.ObjectName = FString(TEXT("TextBlock_213"));
	__Local__322.PropertyName = FName(TEXT("Text"));
	__Local__322.FunctionName = FName(TEXT("GetText_0"));
	auto& __Local__323 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__322.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__323 = TArray<FPropertyPathSegment> ();
	__Local__323.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__323.GetData(), 1);
	auto& __Local__324 = __Local__323[0];
	__Local__324.Name = FName(TEXT("GetPuntuation"));
	auto& __Local__325 = __Local__309[5];
	__Local__325.ObjectName = FString(TEXT("ComboText"));
	__Local__325.PropertyName = FName(TEXT("Text"));
	__Local__325.FunctionName = FName(TEXT("Get_ComboText_Text_0"));
	auto& __Local__326 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__325.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__326 = TArray<FPropertyPathSegment> ();
	__Local__326.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__326.GetData(), 1);
	auto& __Local__327 = __Local__326[0];
	__Local__327.Name = FName(TEXT("Get_ComboText_Text_0"));
	auto& __Local__328 = __Local__309[6];
	__Local__328.ObjectName = FString(TEXT("Objetivo"));
	__Local__328.PropertyName = FName(TEXT("Visibility"));
	__Local__328.FunctionName = FName(TEXT("Get_Objetivo_Visibility_0"));
	auto& __Local__329 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__328.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__329 = TArray<FPropertyPathSegment> ();
	__Local__329.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__329.GetData(), 1);
	auto& __Local__330 = __Local__329[0];
	__Local__330.Name = FName(TEXT("Get_Objetivo_Visibility_0"));
	auto& __Local__331 = __Local__309[7];
	__Local__331.ObjectName = FString(TEXT("Image_97"));
	__Local__331.PropertyName = FName(TEXT("Visibility"));
	__Local__331.FunctionName = FName(TEXT("GetVisibility_1"));
	auto& __Local__332 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__331.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__332 = TArray<FPropertyPathSegment> ();
	__Local__332.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__332.GetData(), 1);
	auto& __Local__333 = __Local__332[0];
	__Local__333.Name = FName(TEXT("GetVisibilityPowerUp"));
	auto& __Local__334 = __Local__309[8];
	__Local__334.ObjectName = FString(TEXT("WeaponImage"));
	__Local__334.PropertyName = FName(TEXT("Brush"));
	__Local__334.FunctionName = FName(TEXT("GetBrush_0"));
	auto& __Local__335 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__334.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__335 = TArray<FPropertyPathSegment> ();
	__Local__335.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__335.GetData(), 1);
	auto& __Local__336 = __Local__335[0];
	__Local__336.Name = FName(TEXT("GetImageWeapon"));
	auto& __Local__337 = __Local__309[9];
	__Local__337.ObjectName = FString(TEXT("PowerUpCooldownImage"));
	__Local__337.PropertyName = FName(TEXT("Percent"));
	__Local__337.FunctionName = FName(TEXT("GetPercent_0"));
	auto& __Local__338 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__337.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__338 = TArray<FPropertyPathSegment> ();
	__Local__338.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__338.GetData(), 1);
	auto& __Local__339 = __Local__338[0];
	__Local__339.Name = FName(TEXT("GetPercentPowerUp"));
	auto& __Local__340 = __Local__309[10];
	__Local__340.ObjectName = FString(TEXT("EnemiesRemaining"));
	__Local__340.PropertyName = FName(TEXT("Text"));
	__Local__340.FunctionName = FName(TEXT("GetText_0"));
	auto& __Local__341 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__340.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__341 = TArray<FPropertyPathSegment> ();
	__Local__341.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__341.GetData(), 1);
	auto& __Local__342 = __Local__341[0];
	__Local__342.Name = FName(TEXT("GetText_DeathCount"));
	auto& __Local__343 = __Local__309[11];
	__Local__343.ObjectName = FString(TEXT("EnemiesRemaining"));
	__Local__343.PropertyName = FName(TEXT("Visibility"));
	__Local__343.FunctionName = FName(TEXT("GetVisibility_1"));
	auto& __Local__344 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__343.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__344 = TArray<FPropertyPathSegment> ();
	__Local__344.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__344.GetData(), 1);
	auto& __Local__345 = __Local__344[0];
	__Local__345.Name = FName(TEXT("GetVisibility_DeathCount"));
	auto& __Local__346 = __Local__309[12];
	__Local__346.ObjectName = FString(TEXT("TimeSurviveText"));
	__Local__346.PropertyName = FName(TEXT("Text"));
	__Local__346.FunctionName = FName(TEXT("Get_TimeSurviveText_Text_0"));
	auto& __Local__347 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__346.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__347 = TArray<FPropertyPathSegment> ();
	__Local__347.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__347.GetData(), 1);
	auto& __Local__348 = __Local__347[0];
	__Local__348.Name = FName(TEXT("Get_TimeSurviveText_Text_0"));
	auto& __Local__349 = __Local__309[13];
	__Local__349.ObjectName = FString(TEXT("TimeSurviveText"));
	__Local__349.PropertyName = FName(TEXT("Visibility"));
	__Local__349.FunctionName = FName(TEXT("Get_TimeSurviveText_Visibility_0"));
	auto& __Local__350 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__349.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__350 = TArray<FPropertyPathSegment> ();
	__Local__350.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__350.GetData(), 1);
	auto& __Local__351 = __Local__350[0];
	__Local__351.Name = FName(TEXT("Get_TimeSurviveText_Visibility_0"));
	auto& __Local__352 = __Local__309[14];
	__Local__352.ObjectName = FString(TEXT("WeaponImage"));
	__Local__352.PropertyName = FName(TEXT("Visibility"));
	__Local__352.FunctionName = FName(TEXT("Get_WeaponImage_Visibility_0"));
	auto& __Local__353 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__352.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__353 = TArray<FPropertyPathSegment> ();
	__Local__353.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__353.GetData(), 1);
	auto& __Local__354 = __Local__353[0];
	__Local__354.Name = FName(TEXT("Get_WeaponImage_Visibility_0"));
	auto& __Local__355 = __Local__309[15];
	__Local__355.ObjectName = FString(TEXT("Municion"));
	__Local__355.PropertyName = FName(TEXT("Visibility"));
	__Local__355.FunctionName = FName(TEXT("Get_Municion_Visibility_0"));
	auto& __Local__356 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__355.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__356 = TArray<FPropertyPathSegment> ();
	__Local__356.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__356.GetData(), 1);
	auto& __Local__357 = __Local__356[0];
	__Local__357.Name = FName(TEXT("Get_Municion_Visibility_0"));
	auto& __Local__358 = __Local__309[16];
	__Local__358.ObjectName = FString(TEXT("TextBlock_213"));
	__Local__358.PropertyName = FName(TEXT("Visibility"));
	__Local__358.FunctionName = FName(TEXT("GetVisibility_1"));
	auto& __Local__359 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__358.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__359 = TArray<FPropertyPathSegment> ();
	__Local__359.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__359.GetData(), 1);
	auto& __Local__360 = __Local__359[0];
	__Local__360.Name = FName(TEXT("GetVisibility_1"));
	auto& __Local__361 = __Local__309[17];
	__Local__361.ObjectName = FString(TEXT("GameOver"));
	__Local__361.PropertyName = FName(TEXT("Visibility"));
	__Local__361.FunctionName = FName(TEXT("GetGameOverTextVisibility"));
	auto& __Local__362 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__361.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__362 = TArray<FPropertyPathSegment> ();
	__Local__362.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__362.GetData(), 1);
	auto& __Local__363 = __Local__362[0];
	__Local__363.Name = FName(TEXT("GetGameOverTextVisibility"));
	auto& __Local__364 = __Local__309[18];
	__Local__364.ObjectName = FString(TEXT("ScaleBox_485"));
	__Local__364.PropertyName = FName(TEXT("Visibility"));
	__Local__364.FunctionName = FName(TEXT("GetVisibility_2"));
	auto& __Local__365 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__364.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__365 = TArray<FPropertyPathSegment> ();
	__Local__365.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__365.GetData(), 1);
	auto& __Local__366 = __Local__365[0];
	__Local__366.Name = FName(TEXT("GetVisibility_2"));
	auto& __Local__367 = __Local__309[19];
	__Local__367.ObjectName = FString(TEXT("Image_35"));
	__Local__367.PropertyName = FName(TEXT("Visibility"));
	__Local__367.FunctionName = FName(TEXT("GetRightMouseVisibility"));
	auto& __Local__368 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__367.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__368 = TArray<FPropertyPathSegment> ();
	__Local__368.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__368.GetData(), 1);
	auto& __Local__369 = __Local__368[0];
	__Local__369.Name = FName(TEXT("GetRightMouseVisibility"));
	auto& __Local__370 = __Local__309[20];
	__Local__370.ObjectName = FString(TEXT("Image_GodMode"));
	__Local__370.PropertyName = FName(TEXT("Visibility"));
	__Local__370.FunctionName = FName(TEXT("Get_Image_GodMode_Visibility_0"));
	auto& __Local__371 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__370.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__371 = TArray<FPropertyPathSegment> ();
	__Local__371.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__371.GetData(), 1);
	auto& __Local__372 = __Local__371[0];
	__Local__372.Name = FName(TEXT("Get_Image_GodMode_Visibility_0"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->MiscConvertedSubobjects[0]), __Local__308, __Local__309);
}
void UHUDre_C__pf2299784250::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UHUDre_C__pf2299784250::bpf__ExecuteUbergraph_HUDre__pf_0(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 19:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 20;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 21:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf = UUserWidget::PlayAnimation(bpv__FadeIn__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				__StateStack.Push(19);
			}
		case 24:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 25;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 26:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 22;
				break;
			}
		case 32:
			{
				__CurrentState = 33;
				break;
			}
		case 33:
			{
				__StateStack.Push(37);
			}
		case 34:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 35:
			{
				bool  __Local__373 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__MorePuntuation__pf) : (__Local__373)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 36:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf = UUserWidget::PlayAnimation(bpv__MorePointsAnim__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 39;
					break;
				}
			}
		case 38:
			{
				bool  __Local__374 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__IsDeath__pf) : (__Local__374)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 23;
				break;
			}
		case 39:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 40:
			{
				bool  __Local__375 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (b0l__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__IsDeath__pf) : (__Local__375)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 23;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UHUDre_C__pf2299784250::bpf__ExecuteUbergraph_HUDre__pf_1(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

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
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALevelCompleterBP_C__pf922009354::StaticClass(), /*out*/ TArrayCaster<ALevelCompleterBP_C__pf922009354*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 3:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(11);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf = Cast<ALevelCompleterBP_C__pf922009354>(b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpv__LevelCompleterRef__pf = b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf;
			}
		case 10:
			{
				E__EnumTypeOfLevelCompleted__pf  __Local__376 = E__EnumTypeOfLevelCompleted__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__SetedConditionToWin__pf) : (__Local__376))), static_cast<uint8>(E__EnumTypeOfLevelCompleted__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				E__EnumTypeOfLevelCompleted__pf  __Local__377 = E__EnumTypeOfLevelCompleted__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__SetedConditionToWin__pf) : (__Local__377))), static_cast<uint8>(E__EnumTypeOfLevelCompleted__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				E__EnumTypeOfLevelCompleted__pf  __Local__378 = E__EnumTypeOfLevelCompleted__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__SetedConditionToWin__pf) : (__Local__378))), static_cast<uint8>(E__EnumTypeOfLevelCompleted__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 12:
			{
				bpv__IsCountingEnemiesDeathsx__pfzy = true;
			}
		case 13:
			{
				bpv__IsSurvivex__pfzy = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpv__IsCountingEnemiesDeathsx__pfzy = false;
			}
		case 15:
			{
				bpv__IsSurvivex__pfzy = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpv__IsCountingEnemiesDeathsx__pfzy = false;
			}
		case 17:
			{
				bpv__IsSurvivex__pfzy = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__GodModeAnim__pf, 0.000000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				__CurrentState = 28;
				break;
			}
		case 28:
			{
				__StateStack.Push(30);
				__StateStack.Push(18);
				__StateStack.Push(31);
			}
		case 29:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__FadeOut__pf, 0.000000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(1, 1364286849, TEXT("ExecuteUbergraph_HUDre_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__PointsAnimation__pf, 0.000000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UHUDre_C__pf2299784250::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_HUDre__pf_0(32);
}
void UHUDre_C__pf2299784250::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_HUDre__pf_1(27);
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__GetGameOverTextVisibility__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bool  __Local__380 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsPlayerDeath__pf) : (__Local__380));
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UHUDre_C__pf2299784250::bpf__GetTextAmmo__pf()
{
	FText bpp__ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bool  __Local__381 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__IsDeath__pf) : (__Local__381)))
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bool  __Local__382 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__IsDeath__pf) : (__Local__382)))
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				E__EnumWeapon__pf  __Local__383 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__383))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				E__EnumWeapon__pf  __Local__384 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__384))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				E__EnumWeapon__pf  __Local__385 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__385))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				E__EnumWeapon__pf  __Local__386 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__386))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				E__EnumWeapon__pf  __Local__387 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__387))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				E__EnumWeapon__pf  __Local__388 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__388))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				E__EnumWeapon__pf  __Local__389 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__389))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpv__Ammoo__pf = FString(TEXT("Infinite"));
			}
		case 7:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpv__Ammoo__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				int32  __Local__390 = 0;
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__Ammunition__pf) : (__Local__390)));
				bpv__Ammoo__pf = bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf;
			}
		case 9:
			{
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpv__Ammoo__pf);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpv__NoAmmoText__pf);
				bpv__Ammoo__pf = bpfv__CallFunc_Conv_TextToString_ReturnValue__pf;
				__CurrentState = 7;
				break;
			}
		case 11:
			{
				bool  __Local__391 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__IsSlave__pf) : (__Local__391)))
				{
					__CurrentState = 13;
					break;
				}
			}
		case 12:
			{
				bpv__Ammoo__pf = FString(TEXT("0"));
				__CurrentState = 9;
				break;
			}
		case 13:
			{
				E__EnumWeapon__pf  __Local__392 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__392))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 15;
					break;
				}
				E__EnumWeapon__pf  __Local__393 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__393))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 15;
					break;
				}
				E__EnumWeapon__pf  __Local__394 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__394))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 14;
					break;
				}
				E__EnumWeapon__pf  __Local__395 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__395))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 15;
					break;
				}
				E__EnumWeapon__pf  __Local__396 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__396))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 15;
					break;
				}
				E__EnumWeapon__pf  __Local__397 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__397))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 15;
					break;
				}
				E__EnumWeapon__pf  __Local__398 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__398))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 15;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf = UKismetTextLibrary::Conv_TextToString(bpv__NoAmmoText__pf);
				bpv__Ammoo__pf = bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf;
				__CurrentState = 7;
				break;
			}
		case 15:
			{
				int32  __Local__399 = 0;
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Ammunition__pf) : (__Local__399)));
				bpv__Ammoo__pf = bpfv__CallFunc_Conv_IntToString_ReturnValue__pf;
				__CurrentState = 9;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UHUDre_C__pf2299784250::bpf__GetTextWeapon__pf()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bool  __Local__400 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__IsDeath__pf) : (__Local__400)))
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bool  __Local__401 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__IsDeath__pf) : (__Local__401)))
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				E__EnumWeapon__pf  __Local__402 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__402))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				E__EnumWeapon__pf  __Local__403 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__403))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				E__EnumWeapon__pf  __Local__404 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__404))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				E__EnumWeapon__pf  __Local__405 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__405))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				E__EnumWeapon__pf  __Local__406 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__406))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				E__EnumWeapon__pf  __Local__407 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__407))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("SHOTGUN"));
			}
		case 7:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpv__WeaponEquiped__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("RIFLE"));
				__CurrentState = 7;
				break;
			}
		case 9:
			{
				E__EnumWeapon__pf  __Local__408 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__408))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 12;
					break;
				}
				E__EnumWeapon__pf  __Local__409 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__409))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 11;
					break;
				}
				E__EnumWeapon__pf  __Local__410 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__410))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 10;
					break;
				}
				E__EnumWeapon__pf  __Local__411 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__411))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 17;
					break;
				}
				E__EnumWeapon__pf  __Local__412 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__412))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 18;
					break;
				}
				E__EnumWeapon__pf  __Local__413 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__413))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 19;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("KNIFE"));
				__CurrentState = 7;
				break;
			}
		case 11:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("SHOTGUN"));
				__CurrentState = 7;
				break;
			}
		case 12:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("RIFLE"));
				__CurrentState = 7;
				break;
			}
		case 13:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("KNIFE"));
				__CurrentState = 7;
				break;
			}
		case 14:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("SNIPER"));
				__CurrentState = 7;
				break;
			}
		case 15:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("RPG"));
				__CurrentState = 7;
				break;
			}
		case 16:
			{
				bpv__Ammoo__pf = FString(TEXT("NO WEAPON!"));
				__CurrentState = 7;
				break;
			}
		case 17:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("SNIPER"));
				__CurrentState = 7;
				break;
			}
		case 18:
			{
				bpv__WeaponEquiped__pf = FString(TEXT("RPG"));
				__CurrentState = 7;
				break;
			}
		case 19:
			{
				bpv__Ammoo__pf = FString(TEXT("NO WEAPON!"));
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UHUDre_C__pf2299784250::bpf__GetText_2__pf()
{
	FText bpp__ReturnValue__pf{};
	bpp__ReturnValue__pf = FText::GetEmpty();
	return bpp__ReturnValue__pf;
}
FText  UHUDre_C__pf2299784250::bpf__GetLevelObjectiveText__pf()
{
	FText bpp__ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<ALevelCompleterBP_C__pf922009354*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALevelCompleterBP_C__pf922009354::StaticClass(), /*out*/ TArrayCaster<ALevelCompleterBP_C__pf922009354*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(9);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf = Cast<ALevelCompleterBP_C__pf922009354>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				E__EnumTypeOfLevelCompleted__pf  __Local__414 = E__EnumTypeOfLevelCompleted__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__ConditionToWin__pf) : (__Local__414))), static_cast<uint8>(E__EnumTypeOfLevelCompleted__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
				E__EnumTypeOfLevelCompleted__pf  __Local__415 = E__EnumTypeOfLevelCompleted__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__ConditionToWin__pf) : (__Local__415))), static_cast<uint8>(E__EnumTypeOfLevelCompleted__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				E__EnumTypeOfLevelCompleted__pf  __Local__416 = E__EnumTypeOfLevelCompleted__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__ConditionToWin__pf) : (__Local__416))), static_cast<uint8>(E__EnumTypeOfLevelCompleted__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				E__EnumTypeOfLevelCompleted__pf  __Local__417 = E__EnumTypeOfLevelCompleted__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__ConditionToWin__pf) : (__Local__417))), static_cast<uint8>(E__EnumTypeOfLevelCompleted__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 10:
			{
				bpv__LevelObjective__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"645B4F4A4C3942116CA25EAC5D976555\", \"Kill all the enemies\")")	);
			}
		case 11:
			{
				bpp__ReturnValue__pf = bpv__LevelObjective__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpv__LevelObjective__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"1AA6308A4C56B98F9B2B7FB9B330F93A\", \"Kill the VIP\")")	);
				__CurrentState = 11;
				break;
			}
		case 13:
			{
				bpv__LevelObjective__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"8D1A0B55456851D9BA6DD7A42AEF9F7A\", \"Reach the end alive\")")	);
				__CurrentState = 11;
				break;
			}
		case 14:
			{
				bpv__LevelObjective__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"502AFA1042050F9B72ADE79A7F0DD6BD\", \"Survive\")")	);
				__CurrentState = 11;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__GetVisibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bool  __Local__418 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsLevelCompleted__pf) : (__Local__418));
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UHUDre_C__pf2299784250::bpf__GetPuntuation__pf()
{
	FText bpp__ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				int32  __Local__419 = 0;
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__CurrentPoints__pf) : (__Local__419)), false, true, 1, 324);
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpfv__CallFunc_Conv_IntToText_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, FString(TEXT(" PTS")));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UHUDre_C__pf2299784250::bpf__Get_ComboText_Text_0__pf()
{
	FText bpp__ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				int32  __Local__420 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__ComboMult__pf) : (__Local__420)), 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpv__Combo__pf = FString(TEXT(""));
			}
		case 4:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpv__Combo__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				int32  __Local__421 = 0;
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__ComboMult__pf) : (__Local__421)), false, true, 1, 8);
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpfv__CallFunc_Conv_IntToText_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("x")), bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpv__Combo__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UHUDre_C__pf2299784250::bpf__AnimationCombo__pf()
{
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__Get_Objetivo_Visibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Hidden;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Visible;
				bool  __Local__422 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsPlayerDeath__pf) : (__Local__422));
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__GetVisibilityPowerUp__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bool  __Local__423 = false;
				bpv__IsVisiblePowerUp__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__CanActivatePowerUp__pf) : (__Local__423));
			}
		case 3:
			{
				bool  __Local__424 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__IsAvatar__pf) : (__Local__424)))
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				bpv__IsVisiblePowerUp__pf = false;
			}
		case 5:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bpfv__Temp_bool_Variable__pf = bpv__IsVisiblePowerUp__pf;
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				bool  __Local__425 = false;
				bpv__IsVisiblePowerUp__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__CanActivatePowerUp__pf) : (__Local__425));
				__CurrentState = 5;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FSlateBrush  UHUDre_C__pf2299784250::bpf__GetImageWeapon__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__AShotgunLogo__pf{};
	FSlateBrush bpfv__NoWeaponLogo__pf{};
	FSlateBrush bpfv__RPGLogo__pf{};
	FSlateBrush bpfv__SniperLogo__pf{};
	FSlateBrush bpfv__KnifeLogo__pf{};
	FSlateBrush bpfv__ShotgunLogo__pf{};
	FSlateBrush bpfv__RifleLogo__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__427 = FSlateBrush::StaticStruct();
				uint8* __Local__428 = (uint8*)FMemory_Alloca(__Local__427->GetStructureSize());
				__Local__427->InitializeStruct(__Local__428);
				FSlateBrush& __Local__426 = *reinterpret_cast<FSlateBrush*>(__Local__428);
				__Local__426.ImageSize = FVector2D(1000.000000, 500.000000);
				auto& __Local__429 = (*(AccessPrivateProperty<UObject* >(&(__Local__426), FSlateBrush::__PPO__ResourceObject() )));
				__Local__429 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				bpfv__RifleLogo__pf = __Local__426;
			}
		case 2:
			{
				const UScriptStruct* __Local__431 = FSlateBrush::StaticStruct();
				uint8* __Local__432 = (uint8*)FMemory_Alloca(__Local__431->GetStructureSize());
				__Local__431->InitializeStruct(__Local__432);
				FSlateBrush& __Local__430 = *reinterpret_cast<FSlateBrush*>(__Local__432);
				__Local__430.ImageSize = FVector2D(1000.000000, 500.000000);
				auto& __Local__433 = (*(AccessPrivateProperty<UObject* >(&(__Local__430), FSlateBrush::__PPO__ResourceObject() )));
				__Local__433 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				bpfv__ShotgunLogo__pf = __Local__430;
			}
		case 3:
			{
				const UScriptStruct* __Local__435 = FSlateBrush::StaticStruct();
				uint8* __Local__436 = (uint8*)FMemory_Alloca(__Local__435->GetStructureSize());
				__Local__435->InitializeStruct(__Local__436);
				FSlateBrush& __Local__434 = *reinterpret_cast<FSlateBrush*>(__Local__436);
				__Local__434.ImageSize = FVector2D(1000.000000, 500.000000);
				auto& __Local__437 = (*(AccessPrivateProperty<UObject* >(&(__Local__434), FSlateBrush::__PPO__ResourceObject() )));
				__Local__437 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
				bpfv__KnifeLogo__pf = __Local__434;
			}
		case 4:
			{
				const UScriptStruct* __Local__439 = FSlateBrush::StaticStruct();
				uint8* __Local__440 = (uint8*)FMemory_Alloca(__Local__439->GetStructureSize());
				__Local__439->InitializeStruct(__Local__440);
				FSlateBrush& __Local__438 = *reinterpret_cast<FSlateBrush*>(__Local__440);
				__Local__438.ImageSize = FVector2D(1000.000000, 500.000000);
				auto& __Local__441 = (*(AccessPrivateProperty<UObject* >(&(__Local__438), FSlateBrush::__PPO__ResourceObject() )));
				__Local__441 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
				bpfv__SniperLogo__pf = __Local__438;
			}
		case 5:
			{
				const UScriptStruct* __Local__443 = FSlateBrush::StaticStruct();
				uint8* __Local__444 = (uint8*)FMemory_Alloca(__Local__443->GetStructureSize());
				__Local__443->InitializeStruct(__Local__444);
				FSlateBrush& __Local__442 = *reinterpret_cast<FSlateBrush*>(__Local__444);
				__Local__442.ImageSize = FVector2D(1000.000000, 500.000000);
				auto& __Local__445 = (*(AccessPrivateProperty<UObject* >(&(__Local__442), FSlateBrush::__PPO__ResourceObject() )));
				__Local__445 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
				bpfv__RPGLogo__pf = __Local__442;
			}
		case 6:
			{
				const UScriptStruct* __Local__447 = FSlateBrush::StaticStruct();
				uint8* __Local__448 = (uint8*)FMemory_Alloca(__Local__447->GetStructureSize());
				__Local__447->InitializeStruct(__Local__448);
				FSlateBrush& __Local__446 = *reinterpret_cast<FSlateBrush*>(__Local__448);
				auto& __Local__449 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__446.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
				__Local__449 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
				bpfv__NoWeaponLogo__pf = __Local__446;
			}
		case 7:
			{
				const UScriptStruct* __Local__451 = FSlateBrush::StaticStruct();
				uint8* __Local__452 = (uint8*)FMemory_Alloca(__Local__451->GetStructureSize());
				__Local__451->InitializeStruct(__Local__452);
				FSlateBrush& __Local__450 = *reinterpret_cast<FSlateBrush*>(__Local__452);
				__Local__450.ImageSize = FVector2D(1000.000000, 500.000000);
				auto& __Local__453 = (*(AccessPrivateProperty<UObject* >(&(__Local__450), FSlateBrush::__PPO__ResourceObject() )));
				__Local__453 = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDre_C__pf2299784250::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
				bpfv__AShotgunLogo__pf = __Local__450;
			}
		case 8:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 9:
			{
				bool  __Local__454 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__IsDeath__pf) : (__Local__454)))
				{
					__CurrentState = 10;
					break;
				}
			}
		case 10:
			{
				E__EnumWeapon__pf  __Local__455 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__455))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				E__EnumWeapon__pf  __Local__456 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__456))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 19;
					break;
				}
				E__EnumWeapon__pf  __Local__457 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__457))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				E__EnumWeapon__pf  __Local__458 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__458))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 21;
					break;
				}
				E__EnumWeapon__pf  __Local__459 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__459))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				E__EnumWeapon__pf  __Local__460 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__460))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 23;
					break;
				}
				E__EnumWeapon__pf  __Local__461 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__WeaponEquiped__pf) : (__Local__461))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 24;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 12:
			{
				bool  __Local__462 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__IsDeath__pf) : (__Local__462)))
				{
					__CurrentState = 13;
					break;
				}
			}
		case 13:
			{
				bool  __Local__463 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__IsSlave__pf) : (__Local__463)))
				{
					__CurrentState = 16;
					break;
				}
			}
		case 14:
			{
				bpv__WeaponPlayer__pf = bpfv__NoWeaponLogo__pf;
			}
		case 15:
			{
				bpp__ReturnValue__pf = bpv__WeaponPlayer__pf;
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				E__EnumWeapon__pf  __Local__464 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__464))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 17;
					break;
				}
				E__EnumWeapon__pf  __Local__465 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__465))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 25;
					break;
				}
				E__EnumWeapon__pf  __Local__466 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__466))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 26;
					break;
				}
				E__EnumWeapon__pf  __Local__467 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__467))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 27;
					break;
				}
				E__EnumWeapon__pf  __Local__468 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__468))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 28;
					break;
				}
				E__EnumWeapon__pf  __Local__469 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__469))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 29;
					break;
				}
				E__EnumWeapon__pf  __Local__470 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__Weapon__pf) : (__Local__470))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 30;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpv__WeaponPlayer__pf = bpfv__RifleLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 18:
			{
				bpv__WeaponPlayer__pf = bpfv__RifleLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 19:
			{
				bpv__WeaponPlayer__pf = bpfv__ShotgunLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 20:
			{
				bpv__WeaponPlayer__pf = bpfv__KnifeLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 21:
			{
				bpv__WeaponPlayer__pf = bpfv__SniperLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 22:
			{
				bpv__WeaponPlayer__pf = bpfv__RPGLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 23:
			{
				bpv__WeaponPlayer__pf = bpfv__AShotgunLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 24:
			{
				bpv__WeaponPlayer__pf = bpfv__NoWeaponLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 25:
			{
				bpv__WeaponPlayer__pf = bpfv__ShotgunLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 26:
			{
				bpv__WeaponPlayer__pf = bpfv__KnifeLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 27:
			{
				bpv__WeaponPlayer__pf = bpfv__SniperLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 28:
			{
				bpv__WeaponPlayer__pf = bpfv__RPGLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 29:
			{
				bpv__WeaponPlayer__pf = bpfv__AShotgunLogo__pf;
				__CurrentState = 15;
				break;
			}
		case 30:
			{
				bpv__WeaponPlayer__pf = bpfv__NoWeaponLogo__pf;
				__CurrentState = 15;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
float  UHUDre_C__pf2299784250::bpf__GetPercentPowerUp__pf()
{
	float bpp__ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	float bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue__pf{};
	float bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				auto __Local__472 = FTimerHandle{};
				FTimerHandle  __Local__471 = __Local__472;
				bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1__pf = UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(this, ((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__RemainingTimePowerUp__pf) : (__Local__471)));
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1__pf, 0.001000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				auto __Local__474 = FTimerHandle{};
				FTimerHandle  __Local__473 = __Local__474;
				bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1__pf = UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(this, ((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__RemainingTimePowerUp__pf) : (__Local__473)));
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1__pf, 10.000000);
				bpv__TimerPowerUp__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf;
			}
		case 4:
			{
				bpp__ReturnValue__pf = bpv__TimerPowerUp__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				auto __Local__476 = FTimerHandle{};
				FTimerHandle  __Local__475 = __Local__476;
				bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue__pf = UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(this, ((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__RemainingTimePowerUp__pf) : (__Local__475)));
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue__pf, 0.001000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				auto __Local__478 = FTimerHandle{};
				FTimerHandle  __Local__477 = __Local__478;
				bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue__pf = UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(this, ((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__RemainingTimePowerUp__pf) : (__Local__477)));
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue__pf, 10.000000);
				bpv__TimerPowerUp__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UHUDre_C__pf2299784250::bpf__GetText_DeathCount__pf()
{
	FText bpp__ReturnValue__pf{};
	FString bpfv__LeftText__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LeftText__pf = FString(TEXT(" LEFT"));
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf = Cast<ALevelCompleterBP_C__pf922009354>(bpv__LevelCompleterRef__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				int32  __Local__479 = 0;
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(((::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__EnemyActorsToEliminate__pf) : (__Local__479)), false, true, 1, 324);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__GetVisibility_DeathCount__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
	bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
	bpfv__Temp_bool_Variable__pf = bpv__IsCountingEnemiesDeathsx__pfzy;
	bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
	return bpp__ReturnValue__pf;
}
FText  UHUDre_C__pf2299784250::bpf__Get_TimeSurviveText_Text_0__pf()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__TextCountDown__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__CountDownBoss__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
				bpv__CountDownBoss__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CountDownBoss__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__TextCountDown__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5D026B30486FAD0A66ADADA127A93841]\", \"11708A6F448F3CA9E82993909B09DAC4\", \"0\")")	);
			}
		case 4:
			{
				bpp__ReturnValue__pf = bpfv__TextCountDown__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(bpv__CountDownBoss__pf, ERoundingMode::HalfToEven, false, true, 1, 3, 0, 0);
				bpfv__TextCountDown__pf = bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__Get_TimeSurviveText_Visibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
	bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
	bpfv__Temp_bool_Variable__pf = bpv__IsSurvivex__pfzy;
	bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
	return bpp__ReturnValue__pf;
}
void UHUDre_C__pf2299784250::bpf__GetText_0__pf()
{
	FText bpfv__TextYouDied__pf{};
}
void UHUDre_C__pf2299784250::bpf__GetText_1__pf()
{
	FText bpfv__TextLevelComplete__pf{};
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__GetRightMouseVisibility__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__IsVisiblex__pfzy{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bool  __Local__480 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__isGamepad__pf) : (__Local__480)));
				bool  __Local__481 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__RightMouseActive__pf) : (__Local__481)), bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 4:
			{
				bpfv__IsVisiblex__pfzy = true;
			}
		case 5:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bpfv__Temp_bool_Variable__pf = bpfv__IsVisiblex__pfzy;
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				bpfv__IsVisiblex__pfzy = false;
				__CurrentState = 5;
				break;
			}
		case 8:
			{
				bpfv__IsVisiblex__pfzy = false;
				__CurrentState = 5;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__Get_WeaponImage_Visibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Hidden;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Visible;
				bool  __Local__482 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsPlayerDeath__pf) : (__Local__482));
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__Get_Municion_Visibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Hidden;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Visible;
				bool  __Local__483 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsPlayerDeath__pf) : (__Local__483));
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__GetVisibility_1__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Hidden;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Visible;
				bool  __Local__484 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsPlayerDeath__pf) : (__Local__484));
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__GetVisibility_2__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__IsVisiblex__pfzy{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bool  __Local__485 = false;
				bool  __Local__486 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(((::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__RightMouseActive__pf) : (__Local__485)), ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__isGamepad__pf) : (__Local__486)));
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 4:
			{
				bpfv__IsVisiblex__pfzy = true;
			}
		case 5:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bpfv__Temp_bool_Variable__pf = bpfv__IsVisiblex__pfzy;
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				bpfv__IsVisiblex__pfzy = false;
				__CurrentState = 5;
				break;
			}
		case 8:
			{
				bpfv__IsVisiblex__pfzy = false;
				__CurrentState = 5;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UHUDre_C__pf2299784250::bpf__Get_Image_GodMode_Visibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__VisibilityGodImage__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bool  __Local__487 = false;
				bpfv__VisibilityGodImage__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsGodModeActive__pf) : (__Local__487));
			}
		case 3:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bpfv__Temp_bool_Variable__pf = bpfv__VisibilityGodImage__pf;
				bpp__ReturnValue__pf = TSwitchValue<bool , ESlateVisibility >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , ESlateVisibility >(false, bpfv__Temp_byte_Variable_1__pf), TSwitchPair<bool , ESlateVisibility >(true, bpfv__Temp_byte_Variable__pf));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UHUDre_C__pf2299784250::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Game/Fonts/28_Days_Later_Font.28_Days_Later_Font 
		{539, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Game/Fonts/Apocalypse_Font.Apocalypse_Font 
		{540, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/RifleLogo.RifleLogo 
		{541, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/PowerUpCooldown.PowerUpCooldown 
		{542, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/PowerUpReady.PowerUpReady 
		{543, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/RightMousePress.RightMousePress 
		{544, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/R_Bumper.R_Bumper 
		{545, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/GodModeIcon.GodModeIcon 
		{548, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/ShotgunLogo.ShotgunLogo 
		{549, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/KnifeLogo.KnifeLogo 
		{550, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/SniperLogo.SniperLogo 
		{551, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/RPGLogo.RPGLogo 
		{552, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/AShotgunLogo.AShotgunLogo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UHUDre_C__pf2299784250::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{390, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_W.Key_W 
		{391, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_A.Key_A 
		{392, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_S.Key_S 
		{393, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_D.Key_D 
		{394, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_E.Key_E 
		{395, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/Key_P.Key_P 
		{396, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Icons/SPACE.SPACE 
		{397, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/PerfectWorldArt/Kibo1.Kibo1 
		{404, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{546, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanel 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameInstance 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{330, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{403, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{208, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{547, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{400, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{553, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.BackgroundBlur 
		{554, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ProgressBar 
		{555, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ScaleBox 
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
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SoundBase 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy1/EnemyType1.EnemyType1 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/OnlineSubsystemUtils.AchievementWriteDelegate__DelegateSignature 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SaveGame 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMesh 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInterface 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TargetPoint 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
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
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
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
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
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
		{293, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AudioComponent 
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
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/DialoguePlugin.DialogueUserWidget 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{331, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.HorizontalBox 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Button_Overlap.Button_Overlap 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/Button_Normal.Button_Normal 
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
		{387, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/HUD_02.HUD_02 
		{388, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Game/Fonts/coolvetica_rg_Font.coolvetica_rg_Font 
		{389, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Art/2D_Art/ArrowDialogue2.ArrowDialogue2 
		{398, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.OverlaySlot 
		{399, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/DialoguePlugin.DialogueNode 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Widget 
		{401, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBoxSlot 
		{402, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/UMG.EventReply 
		{405, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBox 
		{325, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/DialoguePlugin.Dialogue 
		{326, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Overlay 
		{327, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.PanelWidget 
		{328, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{329, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.KeyEvent 
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
		{705, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/LevelCompleter/LevelCompleterBP.LevelCompleterBP_C 
		{684, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C 
		{686, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/EnemyShootingCh.EnemyShootingCh_C 
		{667, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Widgets/Widget_Information.Widget_Information_C 
		{697, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Objects/LevelCompleter/EnumTypeOfLevelCompleted.EnumTypeOfLevelCompleted 
		{695, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Enemies/EnumWeapon.EnumWeapon 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UHUDre_C__pf2299784250
{
	FRegisterHelper__UHUDre_C__pf2299784250()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/GameOverHUD/HUDre"), &UHUDre_C__pf2299784250::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UHUDre_C__pf2299784250 Instance;
};
FRegisterHelper__UHUDre_C__pf2299784250 FRegisterHelper__UHUDre_C__pf2299784250::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
