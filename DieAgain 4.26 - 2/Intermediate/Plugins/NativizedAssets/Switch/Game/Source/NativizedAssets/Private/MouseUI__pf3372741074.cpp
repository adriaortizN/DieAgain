#include "NativizedAssets.h"
#include "MouseUI__pf3372741074.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UMouseUI_C__pf3372741074::UMouseUI_C__pf3372741074(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Image__pf = nullptr;
	bpv__Image_1__pf = nullptr;
	bpv__Image_148__pf = nullptr;
	bpv__Trash__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMouseUI_C__pf3372741074::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMouseUI_C__pf3372741074::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Anim_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__2), UPanelWidget::__PPO__Slots() )));
	__Local__3 = TArray<UPanelSlot*> ();
	__Local__3.Reserve(4);
	auto __Local__4 = NewObject<UCanvasPanelSlot>(__Local__2, TEXT("CanvasPanelSlot_61"), (EObjectFlags)0x00280008);
	__Local__4->LayoutData.Offsets.Left = -4.000000f;
	__Local__4->LayoutData.Offsets.Top = 28.000000f;
	__Local__4->LayoutData.Offsets.Right = 98.000000f;
	__Local__4->Parent = __Local__2;
	auto __Local__5 = NewObject<UImage>(__Local__0, TEXT("Image_148"), (EObjectFlags)0x00280008);
	__Local__5->Brush.ImageSize = FVector2D(289.000000, 72.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<UObject* >(&(__Local__5->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__6 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMouseUI_C__pf3372741074::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__5->Slot = __Local__4;
	__Local__5->RenderTransform.Scale = FVector2D(0.150000, 0.150000);
	__Local__4->Content = __Local__5;
	__Local__3.Add(__Local__4);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__2, TEXT("CanvasPanelSlot_60"), (EObjectFlags)0x00280008);
	__Local__7->LayoutData.Offsets.Left = 21.000000f;
	__Local__7->LayoutData.Offsets.Top = 28.000000f;
	__Local__7->Parent = __Local__2;
	auto __Local__8 = NewObject<UImage>(__Local__0, TEXT("Image"), (EObjectFlags)0x00280008);
	__Local__8->Brush.ImageSize = FVector2D(289.000000, 72.000000);
	auto& __Local__9 = (*(AccessPrivateProperty<UObject* >(&(__Local__8->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__9 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMouseUI_C__pf3372741074::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__8->Slot = __Local__7;
	__Local__8->RenderTransform.Translation = FVector2D(7.000000, 0.000000);
	__Local__8->RenderTransform.Scale = FVector2D(0.150000, 0.150000);
	__Local__8->RenderTransform.Angle = 180.000000f;
	__Local__7->Content = __Local__8;
	__Local__3.Add(__Local__7);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__2, TEXT("CanvasPanelSlot_62"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = 12.000000f;
	__Local__10->LayoutData.Offsets.Top = 10.000000f;
	__Local__10->Parent = __Local__2;
	auto __Local__11 = NewObject<UImage>(__Local__0, TEXT("Image_1"), (EObjectFlags)0x00280008);
	__Local__11->Brush.ImageSize = FVector2D(289.000000, 72.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<UObject* >(&(__Local__11->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__12 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMouseUI_C__pf3372741074::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__11->Slot = __Local__10;
	__Local__11->RenderTransform.Scale = FVector2D(0.150000, 0.150000);
	__Local__11->RenderTransform.Angle = 90.000000f;
	__Local__10->Content = __Local__11;
	__Local__3.Add(__Local__10);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__2, TEXT("CanvasPanelSlot_59"), (EObjectFlags)0x00280008);
	__Local__13->LayoutData.Offsets.Left = 12.000000f;
	__Local__13->LayoutData.Offsets.Top = 38.000000f;
	__Local__13->Parent = __Local__2;
	auto __Local__14 = NewObject<UImage>(__Local__0, TEXT("Trash"), (EObjectFlags)0x00280008);
	__Local__14->Brush.ImageSize = FVector2D(289.000000, 72.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<UObject* >(&(__Local__14->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__15 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMouseUI_C__pf3372741074::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__14->Slot = __Local__13;
	__Local__14->RenderTransform.Translation = FVector2D(0.000000, 7.000000);
	__Local__14->RenderTransform.Scale = FVector2D(0.150000, 0.150000);
	__Local__14->RenderTransform.Angle = 270.000000f;
	__Local__13->Content = __Local__14;
	__Local__3.Add(__Local__13);
	__Local__0->RootWidget = __Local__2;
	auto __Local__16 = NewObject<UMovieScene>(__Local__1, TEXT("Anim"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__16), UMovieScene::__PPO__Possessables() )));
	__Local__17 = TArray<FMovieScenePossessable> ();
	__Local__17.AddUninitialized(4);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__17.GetData(), 4);
	auto& __Local__18 = __Local__17[0];
	auto& __Local__19 = (*(AccessPrivateProperty<FGuid >(&(__Local__18), FMovieScenePossessable::__PPO__Guid() )));
	__Local__19 = FGuid(0xD47E7809, 0x40353EE4, 0x189575BD, 0xB46D79A9);
	auto& __Local__20 = (*(AccessPrivateProperty<FString >(&(__Local__18), FMovieScenePossessable::__PPO__Name() )));
	__Local__20 = FString(TEXT("Image_148"));
	auto& __Local__21 = (*(AccessPrivateProperty<UClass* >(&(__Local__18), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__21 = UImage::StaticClass();
	auto& __Local__22 = __Local__17[1];
	auto& __Local__23 = (*(AccessPrivateProperty<FGuid >(&(__Local__22), FMovieScenePossessable::__PPO__Guid() )));
	__Local__23 = FGuid(0x854B2DD1, 0x4882571D, 0x40895AB1, 0x8BEC9697);
	auto& __Local__24 = (*(AccessPrivateProperty<FString >(&(__Local__22), FMovieScenePossessable::__PPO__Name() )));
	__Local__24 = FString(TEXT("Image_1"));
	auto& __Local__25 = (*(AccessPrivateProperty<UClass* >(&(__Local__22), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__25 = UImage::StaticClass();
	auto& __Local__26 = __Local__17[2];
	auto& __Local__27 = (*(AccessPrivateProperty<FGuid >(&(__Local__26), FMovieScenePossessable::__PPO__Guid() )));
	__Local__27 = FGuid(0x0EE7A5A2, 0x43FE980D, 0x3EC55CAC, 0x5A558C2B);
	auto& __Local__28 = (*(AccessPrivateProperty<FString >(&(__Local__26), FMovieScenePossessable::__PPO__Name() )));
	__Local__28 = FString(TEXT("Image"));
	auto& __Local__29 = (*(AccessPrivateProperty<UClass* >(&(__Local__26), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__29 = UImage::StaticClass();
	auto& __Local__30 = __Local__17[3];
	auto& __Local__31 = (*(AccessPrivateProperty<FGuid >(&(__Local__30), FMovieScenePossessable::__PPO__Guid() )));
	__Local__31 = FGuid(0xEA010AF0, 0x4D475F97, 0xBB69E4B1, 0x234072D5);
	auto& __Local__32 = (*(AccessPrivateProperty<FString >(&(__Local__30), FMovieScenePossessable::__PPO__Name() )));
	__Local__32 = FString(TEXT("Trash"));
	auto& __Local__33 = (*(AccessPrivateProperty<UClass* >(&(__Local__30), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__33 = UImage::StaticClass();
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__16), UMovieScene::__PPO__ObjectBindings() )));
	__Local__34 = TArray<FMovieSceneBinding> ();
	__Local__34.AddUninitialized(4);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__34.GetData(), 4);
	auto& __Local__35 = __Local__34[0];
	auto& __Local__36 = (*(AccessPrivateProperty<FGuid >(&(__Local__35), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__36 = FGuid(0xD47E7809, 0x40353EE4, 0x189575BD, 0xB46D79A9);
	auto& __Local__37 = (*(AccessPrivateProperty<FString >(&(__Local__35), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__37 = FString(TEXT("Image_148"));
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__35), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__38 = TArray<UMovieSceneTrack*> ();
	__Local__38.Reserve(1);
	auto __Local__39 = NewObject<UMovieScene2DTransformTrack>(__Local__16, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__40 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__39), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__40.PropertyName = FName(TEXT("RenderTransform"));
	__Local__40.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__40.bCanUseClassLookup = true;
	auto& __Local__41 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__39), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__41 = TArray<UMovieSceneSection*> ();
	__Local__41.Reserve(1);
	auto __Local__42 = NewObject<UMovieScene2DTransformSection>(__Local__39, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__43 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__42->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__44 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__42->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__43)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__44)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__42->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__45 = TArray<FFrameNumber> ();
	__Local__45.Reserve(3);
	__Local__45.Add(FFrameNumber{});
	__Local__45.Add(FFrameNumber{});
	__Local__45[1].Value = 24000;
	__Local__45.Add(FFrameNumber{});
	__Local__45[2].Value = 48000;
	auto& __Local__46 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__42->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__46 = TArray<FMovieSceneFloatValue> ();
	__Local__46.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__46.GetData(), 3);
	auto& __Local__47 = __Local__46[0];
	auto& __Local__48 = __Local__46[1];
	__Local__48.Value = 14.000000f;
	auto& __Local__49 = __Local__46[2];
	auto& __Local__50 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__42->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__50 = TArray<FFrameNumber> ();
	__Local__50.Reserve(3);
	__Local__50.Add(FFrameNumber{});
	__Local__50.Add(FFrameNumber{});
	__Local__50[1].Value = 24000;
	__Local__50.Add(FFrameNumber{});
	__Local__50[2].Value = 48000;
	auto& __Local__51 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__42->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__51 = TArray<FMovieSceneFloatValue> ();
	__Local__51.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__51.GetData(), 3);
	auto& __Local__52 = __Local__51[0];
	auto& __Local__53 = __Local__51[1];
	auto& __Local__54 = __Local__51[2];
	__Local__42->Easing.EaseIn = __Local__43;
	__Local__42->Easing.EaseOut = __Local__44;
	__Local__42->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(48000)));
	auto& __Local__55 = (*(AccessPrivateProperty<FGuid >((__Local__42), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__55 = FGuid(0x502B78F1, 0x4CE39A90, 0xF1D6C0AB, 0xF0638E09);
	__Local__41.Add(__Local__42);
	auto& __Local__56 = (*(AccessPrivateProperty<FGuid >((__Local__39), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__56 = FGuid(0xA4D9ED12, 0x48558FC7, 0xE6AD1191, 0x19BEB6B3);
	auto& __Local__57 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__39), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__57.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__57.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__57.Entries.GetData(), 1);
	auto& __Local__58 = __Local__57.Entries[0];
	__Local__58.Section = __Local__42;
	static TWeakFieldPtr<FProperty> __Local__60{};
	const FProperty* __Local__59 = __Local__60.Get();
	if (nullptr == __Local__59)
	{
		__Local__59 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__59);
		__Local__60 = __Local__59;
	}
	auto& __Local__61 = (*(__Local__59->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__58.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__63{};
	const FProperty* __Local__62 = __Local__63.Get();
	if (nullptr == __Local__62)
	{
		__Local__62 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__62);
		__Local__63 = __Local__62;
	}
	auto& __Local__64 = (*(__Local__62->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__61), 0)));
	__Local__64 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__66{};
	const FProperty* __Local__65 = __Local__66.Get();
	if (nullptr == __Local__65)
	{
		__Local__65 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__65);
		__Local__66 = __Local__65;
	}
	auto& __Local__67 = (*(__Local__65->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__58.Range), 0)));
	auto& __Local__68 = (*(__Local__62->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__67), 0)));
	__Local__68 = ERangeBoundTypes::Type::Exclusive;
	static TWeakFieldPtr<FProperty> __Local__70{};
	const FProperty* __Local__69 = __Local__70.Get();
	if (nullptr == __Local__69)
	{
		__Local__69 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__69);
		__Local__70 = __Local__69;
	}
	auto& __Local__71 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__67), 0)));
	__Local__71.Value = 48000;
	__Local__58.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__72 = (*(AccessPrivateProperty<FGuid >((__Local__39), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__72 = FGuid(0xA4D9ED12, 0x48558FC7, 0xE6AD1191, 0x19BEB6B3);
	__Local__38.Add(__Local__39);
	auto& __Local__73 = __Local__34[1];
	auto& __Local__74 = (*(AccessPrivateProperty<FGuid >(&(__Local__73), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__74 = FGuid(0x854B2DD1, 0x4882571D, 0x40895AB1, 0x8BEC9697);
	auto& __Local__75 = (*(AccessPrivateProperty<FString >(&(__Local__73), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__75 = FString(TEXT("Image_1"));
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__73), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__76 = TArray<UMovieSceneTrack*> ();
	__Local__76.Reserve(1);
	auto __Local__77 = NewObject<UMovieScene2DTransformTrack>(__Local__16, TEXT("MovieScene2DTransformTrack_2"), (EObjectFlags)0x00280008);
	auto& __Local__78 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__77), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__78.PropertyName = FName(TEXT("RenderTransform"));
	__Local__78.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__78.bCanUseClassLookup = true;
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__77), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__79 = TArray<UMovieSceneSection*> ();
	__Local__79.Reserve(1);
	auto __Local__80 = NewObject<UMovieScene2DTransformSection>(__Local__77, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__81 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__80->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__82 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__80->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__81)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__82)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__80->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__83 = TArray<FFrameNumber> ();
	__Local__83.Reserve(3);
	__Local__83.Add(FFrameNumber{});
	__Local__83.Add(FFrameNumber{});
	__Local__83[1].Value = 24000;
	__Local__83.Add(FFrameNumber{});
	__Local__83[2].Value = 48000;
	auto& __Local__84 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__80->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__84 = TArray<FMovieSceneFloatValue> ();
	__Local__84.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__84.GetData(), 3);
	auto& __Local__85 = __Local__84[0];
	auto& __Local__86 = __Local__84[1];
	auto& __Local__87 = __Local__84[2];
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__80->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__88 = TArray<FFrameNumber> ();
	__Local__88.Reserve(3);
	__Local__88.Add(FFrameNumber{});
	__Local__88.Add(FFrameNumber{});
	__Local__88[1].Value = 24000;
	__Local__88.Add(FFrameNumber{});
	__Local__88[2].Value = 48000;
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__80->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__89 = TArray<FMovieSceneFloatValue> ();
	__Local__89.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__89.GetData(), 3);
	auto& __Local__90 = __Local__89[0];
	auto& __Local__91 = __Local__89[1];
	__Local__91.Value = 14.000000f;
	auto& __Local__92 = __Local__89[2];
	__Local__80->Easing.EaseIn = __Local__81;
	__Local__80->Easing.EaseOut = __Local__82;
	__Local__80->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(48000)));
	auto& __Local__93 = (*(AccessPrivateProperty<FGuid >((__Local__80), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__93 = FGuid(0xE0A13387, 0x43B95678, 0x29238D90, 0x7EAA6C13);
	__Local__79.Add(__Local__80);
	auto& __Local__94 = (*(AccessPrivateProperty<FGuid >((__Local__77), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__94 = FGuid(0x8CFE3086, 0x44D57C8D, 0xF966FDBC, 0x20163E07);
	auto& __Local__95 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__77), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__95.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__95.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__95.Entries.GetData(), 1);
	auto& __Local__96 = __Local__95.Entries[0];
	__Local__96.Section = __Local__80;
	auto& __Local__97 = (*(__Local__59->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__96.Range), 0)));
	auto& __Local__98 = (*(__Local__62->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__97), 0)));
	__Local__98 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__99 = (*(__Local__65->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__96.Range), 0)));
	auto& __Local__100 = (*(__Local__62->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__99), 0)));
	__Local__100 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__101 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__99), 0)));
	__Local__101.Value = 48000;
	__Local__96.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__102 = (*(AccessPrivateProperty<FGuid >((__Local__77), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__102 = FGuid(0x8CFE3086, 0x44D57C8D, 0xF966FDBC, 0x20163E07);
	__Local__76.Add(__Local__77);
	auto& __Local__103 = __Local__34[2];
	auto& __Local__104 = (*(AccessPrivateProperty<FGuid >(&(__Local__103), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__104 = FGuid(0x0EE7A5A2, 0x43FE980D, 0x3EC55CAC, 0x5A558C2B);
	auto& __Local__105 = (*(AccessPrivateProperty<FString >(&(__Local__103), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__105 = FString(TEXT("Image"));
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__103), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__106 = TArray<UMovieSceneTrack*> ();
	__Local__106.Reserve(1);
	auto __Local__107 = NewObject<UMovieScene2DTransformTrack>(__Local__16, TEXT("MovieScene2DTransformTrack_3"), (EObjectFlags)0x00280008);
	auto& __Local__108 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__107), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__108.PropertyName = FName(TEXT("RenderTransform"));
	__Local__108.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__108.bCanUseClassLookup = true;
	auto& __Local__109 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__107), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__109 = TArray<UMovieSceneSection*> ();
	__Local__109.Reserve(1);
	auto __Local__110 = NewObject<UMovieScene2DTransformSection>(__Local__107, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__111 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__110->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__112 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__110->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__111)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__112)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__113 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__110->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__113 = TArray<FFrameNumber> ();
	__Local__113.Reserve(3);
	__Local__113.Add(FFrameNumber{});
	__Local__113.Add(FFrameNumber{});
	__Local__113[1].Value = 24000;
	__Local__113.Add(FFrameNumber{});
	__Local__113[2].Value = 48000;
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__110->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__114 = TArray<FMovieSceneFloatValue> ();
	__Local__114.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__114.GetData(), 3);
	auto& __Local__115 = __Local__114[0];
	__Local__115.Value = 7.000000f;
	auto& __Local__116 = __Local__114[1];
	__Local__116.Value = -7.000000f;
	auto& __Local__117 = __Local__114[2];
	__Local__117.Value = 7.000000f;
	auto& __Local__118 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__110->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__118 = TArray<FFrameNumber> ();
	__Local__118.Reserve(3);
	__Local__118.Add(FFrameNumber{});
	__Local__118.Add(FFrameNumber{});
	__Local__118[1].Value = 24000;
	__Local__118.Add(FFrameNumber{});
	__Local__118[2].Value = 48000;
	auto& __Local__119 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__110->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__119 = TArray<FMovieSceneFloatValue> ();
	__Local__119.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__119.GetData(), 3);
	auto& __Local__120 = __Local__119[0];
	auto& __Local__121 = __Local__119[1];
	auto& __Local__122 = __Local__119[2];
	__Local__110->Easing.EaseIn = __Local__111;
	__Local__110->Easing.EaseOut = __Local__112;
	__Local__110->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(48000)));
	auto& __Local__123 = (*(AccessPrivateProperty<FGuid >((__Local__110), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__123 = FGuid(0xD27D65D9, 0x417E9D2D, 0x168B42AF, 0xB16F47E9);
	__Local__109.Add(__Local__110);
	auto& __Local__124 = (*(AccessPrivateProperty<FGuid >((__Local__107), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__124 = FGuid(0xE3E2DA65, 0x4C696C63, 0xD8ED38A9, 0x6C0703E1);
	auto& __Local__125 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__107), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__125.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__125.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__125.Entries.GetData(), 1);
	auto& __Local__126 = __Local__125.Entries[0];
	__Local__126.Section = __Local__110;
	auto& __Local__127 = (*(__Local__59->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__126.Range), 0)));
	auto& __Local__128 = (*(__Local__62->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__127), 0)));
	__Local__128 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__129 = (*(__Local__65->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__126.Range), 0)));
	auto& __Local__130 = (*(__Local__62->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__129), 0)));
	__Local__130 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__131 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__129), 0)));
	__Local__131.Value = 48000;
	__Local__126.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__132 = (*(AccessPrivateProperty<FGuid >((__Local__107), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__132 = FGuid(0xE3E2DA65, 0x4C696C63, 0xD8ED38A9, 0x6C0703E1);
	__Local__106.Add(__Local__107);
	auto& __Local__133 = __Local__34[3];
	auto& __Local__134 = (*(AccessPrivateProperty<FGuid >(&(__Local__133), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__134 = FGuid(0xEA010AF0, 0x4D475F97, 0xBB69E4B1, 0x234072D5);
	auto& __Local__135 = (*(AccessPrivateProperty<FString >(&(__Local__133), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__135 = FString(TEXT("Trash"));
	auto& __Local__136 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__133), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__136 = TArray<UMovieSceneTrack*> ();
	__Local__136.Reserve(1);
	auto __Local__137 = NewObject<UMovieScene2DTransformTrack>(__Local__16, TEXT("MovieScene2DTransformTrack_4"), (EObjectFlags)0x00280008);
	auto& __Local__138 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__137), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__138.PropertyName = FName(TEXT("RenderTransform"));
	__Local__138.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__138.bCanUseClassLookup = true;
	auto& __Local__139 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__137), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__139 = TArray<UMovieSceneSection*> ();
	__Local__139.Reserve(1);
	auto __Local__140 = NewObject<UMovieScene2DTransformSection>(__Local__137, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__141 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__140->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__142 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__140->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__141)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__142)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__143 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__140->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__143 = TArray<FFrameNumber> ();
	__Local__143.Reserve(3);
	__Local__143.Add(FFrameNumber{});
	__Local__143.Add(FFrameNumber{});
	__Local__143[1].Value = 24000;
	__Local__143.Add(FFrameNumber{});
	__Local__143[2].Value = 48000;
	auto& __Local__144 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__140->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__144 = TArray<FMovieSceneFloatValue> ();
	__Local__144.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__144.GetData(), 3);
	auto& __Local__145 = __Local__144[0];
	auto& __Local__146 = __Local__144[1];
	auto& __Local__147 = __Local__144[2];
	auto& __Local__148 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__140->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__148 = TArray<FFrameNumber> ();
	__Local__148.Reserve(3);
	__Local__148.Add(FFrameNumber{});
	__Local__148.Add(FFrameNumber{});
	__Local__148[1].Value = 24000;
	__Local__148.Add(FFrameNumber{});
	__Local__148[2].Value = 48000;
	auto& __Local__149 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__140->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__149 = TArray<FMovieSceneFloatValue> ();
	__Local__149.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__149.GetData(), 3);
	auto& __Local__150 = __Local__149[0];
	__Local__150.Value = 7.000000f;
	auto& __Local__151 = __Local__149[1];
	__Local__151.Value = -7.000000f;
	auto& __Local__152 = __Local__149[2];
	__Local__152.Value = 7.000000f;
	__Local__140->Easing.EaseIn = __Local__141;
	__Local__140->Easing.EaseOut = __Local__142;
	__Local__140->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(48000)));
	auto& __Local__153 = (*(AccessPrivateProperty<FGuid >((__Local__140), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__153 = FGuid(0x9A26F7D0, 0x473C5E7D, 0x3B3A8F99, 0xA7C969C7);
	__Local__139.Add(__Local__140);
	auto& __Local__154 = (*(AccessPrivateProperty<FGuid >((__Local__137), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__154 = FGuid(0x8BDAC398, 0x4C0FE6B2, 0x189F528C, 0x857747B3);
	auto& __Local__155 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__137), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__155.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__155.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__155.Entries.GetData(), 1);
	auto& __Local__156 = __Local__155.Entries[0];
	__Local__156.Section = __Local__140;
	auto& __Local__157 = (*(__Local__59->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__156.Range), 0)));
	auto& __Local__158 = (*(__Local__62->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__157), 0)));
	__Local__158 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__159 = (*(__Local__65->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__156.Range), 0)));
	auto& __Local__160 = (*(__Local__62->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__159), 0)));
	__Local__160 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__161 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__159), 0)));
	__Local__161.Value = 48000;
	__Local__156.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__162 = (*(AccessPrivateProperty<FGuid >((__Local__137), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__162 = FGuid(0x8BDAC398, 0x4C0FE6B2, 0x189F528C, 0x857747B3);
	__Local__136.Add(__Local__137);
	auto& __Local__163 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__16), UMovieScene::__PPO__PlaybackRange() )));
	__Local__163 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(48000)));
	auto& __Local__164 = (*(AccessPrivateProperty<FFrameRate >((__Local__16), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__166{};
	const FProperty* __Local__165 = __Local__166.Get();
	if (nullptr == __Local__165)
	{
		__Local__165 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__165);
		__Local__166 = __Local__165;
	}
	auto& __Local__167 = (*(__Local__165->ContainerPtrToValuePtr<int32 >(&(__Local__164), 0)));
	__Local__167 = 20;
	auto& __Local__168 = (*(AccessPrivateProperty<FGuid >((__Local__16), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__168 = FGuid(0x80498F0E, 0x46145047, 0xA2209084, 0x247C4843);
	__Local__1->MovieScene = __Local__16;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(4);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 4);
	auto& __Local__169 = __Local__1->AnimationBindings[0];
	__Local__169.WidgetName = FName(TEXT("Image_148"));
	__Local__169.AnimationGuid = FGuid(0xD47E7809, 0x40353EE4, 0x189575BD, 0xB46D79A9);
	auto& __Local__170 = __Local__1->AnimationBindings[1];
	__Local__170.WidgetName = FName(TEXT("Image_1"));
	__Local__170.AnimationGuid = FGuid(0x854B2DD1, 0x4882571D, 0x40895AB1, 0x8BEC9697);
	auto& __Local__171 = __Local__1->AnimationBindings[2];
	__Local__171.WidgetName = FName(TEXT("Image"));
	__Local__171.AnimationGuid = FGuid(0x0EE7A5A2, 0x43FE980D, 0x3EC55CAC, 0x5A558C2B);
	auto& __Local__172 = __Local__1->AnimationBindings[3];
	__Local__172.WidgetName = FName(TEXT("Trash"));
	__Local__172.AnimationGuid = FGuid(0xEA010AF0, 0x4D475F97, 0xBB69E4B1, 0x234072D5);
	auto& __Local__173 = (*(AccessPrivateProperty<FString >((__Local__1), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__173 = FString(TEXT("Anim"));
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__174 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__174 = FGuid(0xB7D5916B, 0x42073352, 0x2B1030A1, 0x2F91F5E7);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__1);
}
PRAGMA_ENABLE_OPTIMIZATION
void UMouseUI_C__pf3372741074::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__175;
	SlotNames.Append(__Local__175);
}
void UMouseUI_C__pf3372741074::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__176;
	__Local__176.Reserve(1);
	__Local__176.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UMouseUI_C__pf3372741074::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__177;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UMouseUI_C__pf3372741074::StaticClass())->MiscConvertedSubobjects[0]), __Local__176, __Local__177);
}
void UMouseUI_C__pf3372741074::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UMouseUI_C__pf3372741074::bpf__ExecuteUbergraph_MouseUI__pf_0(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__Anim__pf, 0.000000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
	return; // KCST_GotoReturn
}
void UMouseUI_C__pf3372741074::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_MouseUI__pf_0(1);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMouseUI_C__pf3372741074::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/Mouse/Mira.Mira 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UMouseUI_C__pf3372741074::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UMouseUI_C__pf3372741074
{
	FRegisterHelper__UMouseUI_C__pf3372741074()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Art/Mouse/MouseUI"), &UMouseUI_C__pf3372741074::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMouseUI_C__pf3372741074 Instance;
};
FRegisterHelper__UMouseUI_C__pf3372741074 FRegisterHelper__UMouseUI_C__pf3372741074::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
