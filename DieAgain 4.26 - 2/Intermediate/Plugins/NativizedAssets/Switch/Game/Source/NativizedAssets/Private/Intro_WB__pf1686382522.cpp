#include "NativizedAssets.h"
#include "Intro_WB__pf1686382522.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
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
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneFloatTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneFloatSection.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
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
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UIntro_WB_C__pf1686382522::UIntro_WB_C__pf1686382522(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Black_Image__pf = nullptr;
	bpv__TextBlock_47__pf = nullptr;
	bpv__TextIntro__pf = FText::GetEmpty();
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UIntro_WB_C__pf1686382522::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UIntro_WB_C__pf1686382522::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeIn_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeOut_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeInYear3030_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeOutYear3030_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	auto __Local__5 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeInBlack_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	auto __Local__6 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__6), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(3);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__8->LayoutData.Offsets.Left = -1138.502930f;
	__Local__8->LayoutData.Offsets.Top = -704.017883f;
	__Local__8->LayoutData.Offsets.Right = 2300.000000f;
	__Local__8->LayoutData.Offsets.Bottom = 1400.000000f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UImage>(__Local__0, TEXT("Black_Image"), (EObjectFlags)0x00280008);
	auto& __Local__10 = (*(AccessPrivateProperty<UObject* >(&(__Local__9->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__10 = CastChecked<UObject>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__9->Slot = __Local__8;
	__Local__9->RenderOpacity = 0.000000f;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	auto __Local__11 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__11->LayoutData.Offsets.Left = -632.960938f;
	__Local__11->LayoutData.Offsets.Top = -253.081055f;
	__Local__11->LayoutData.Offsets.Right = 1276.732300f;
	__Local__11->LayoutData.Offsets.Bottom = 199.057938f;
	__Local__11->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__11->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__11->Parent = __Local__6;
	auto __Local__12 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_47"), (EObjectFlags)0x00280008);
	__Local__12->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"A08A7E124D076A89C96B188EC09C8AF6\", \"The lazy dog jumped over the sleeping fox\")")	);
	__Local__12->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__12->Font.OutlineSettings.OutlineSize = 3;
	__Local__12->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__12->Font.Size = 50;
	auto& __Local__13 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__12), UTextLayoutWidget::__PPO__Justification() )));
	__Local__13 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__15{};
	const FProperty* __Local__14 = __Local__15.Get();
	if (nullptr == __Local__14)
	{
		__Local__14 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__14);
		__Local__15 = __Local__14;
	}
	(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((__Local__12), true, 0));
	__Local__12->Slot = __Local__11;
	__Local__12->RenderOpacity = 0.000000f;
	__Local__11->Content = __Local__12;
	__Local__7.Add(__Local__11);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__6, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__16->LayoutData.Offsets.Left = -436.960938f;
	__Local__16->LayoutData.Offsets.Top = -184.540527f;
	__Local__16->LayoutData.Offsets.Right = 874.107483f;
	__Local__16->LayoutData.Offsets.Bottom = 232.424652f;
	__Local__16->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__16->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__16->Parent = __Local__6;
	auto __Local__17 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_53"), (EObjectFlags)0x00280008);
	__Local__17->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"478D1FFE4396D2937389B2B84FB8C7C1\", \"Year 3030\")")	);
	__Local__17->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__17->Font.OutlineSettings.OutlineSize = 5;
	__Local__17->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__17->Font.Size = 150;
	auto& __Local__18 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__17), UTextLayoutWidget::__PPO__Justification() )));
	__Local__18 = ETextJustify::Type::Center;
	__Local__17->Slot = __Local__16;
	__Local__17->RenderOpacity = 0.000000f;
	__Local__16->Content = __Local__17;
	__Local__7.Add(__Local__16);
	__Local__0->RootWidget = __Local__6;
	auto __Local__19 = NewObject<UMovieScene>(__Local__1, TEXT("FadeIn"), (EObjectFlags)0x00280008);
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__19), UMovieScene::__PPO__Possessables() )));
	__Local__20 = TArray<FMovieScenePossessable> ();
	__Local__20.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__20.GetData(), 1);
	auto& __Local__21 = __Local__20[0];
	auto& __Local__22 = (*(AccessPrivateProperty<FGuid >(&(__Local__21), FMovieScenePossessable::__PPO__Guid() )));
	__Local__22 = FGuid(0x36ABCA63, 0x4CF6D485, 0x057FC7AD, 0xD92AB5D6);
	auto& __Local__23 = (*(AccessPrivateProperty<FString >(&(__Local__21), FMovieScenePossessable::__PPO__Name() )));
	__Local__23 = FString(TEXT("TextBlock_47"));
	auto& __Local__24 = (*(AccessPrivateProperty<UClass* >(&(__Local__21), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__24 = UTextBlock::StaticClass();
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__19), UMovieScene::__PPO__ObjectBindings() )));
	__Local__25 = TArray<FMovieSceneBinding> ();
	__Local__25.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__25.GetData(), 1);
	auto& __Local__26 = __Local__25[0];
	auto& __Local__27 = (*(AccessPrivateProperty<FGuid >(&(__Local__26), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__27 = FGuid(0x36ABCA63, 0x4CF6D485, 0x057FC7AD, 0xD92AB5D6);
	auto& __Local__28 = (*(AccessPrivateProperty<FString >(&(__Local__26), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__28 = FString(TEXT("TextBlock_47"));
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__26), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__29 = TArray<UMovieSceneTrack*> ();
	__Local__29.Reserve(1);
	auto __Local__30 = NewObject<UMovieSceneFloatTrack>(__Local__19, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__31 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__30), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__31.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__31.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__31.bCanUseClassLookup = true;
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__30), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__32 = TArray<UMovieSceneSection*> ();
	__Local__32.Reserve(1);
	auto __Local__33 = NewObject<UMovieSceneFloatSection>(__Local__30, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__34 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__33->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__35 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__33->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__34)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__35)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__36 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__33), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__36), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__37 = TArray<FFrameNumber> ();
	__Local__37.Reserve(2);
	__Local__37.Add(FFrameNumber{});
	__Local__37.Add(FFrameNumber{});
	__Local__37[1].Value = 60000;
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__36), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__38 = TArray<FMovieSceneFloatValue> ();
	__Local__38.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__38.GetData(), 2);
	auto& __Local__39 = __Local__38[0];
	auto& __Local__40 = __Local__38[1];
	__Local__40.Value = 1.000000f;
	__Local__33->Easing.EaseIn = __Local__34;
	__Local__33->Easing.EaseOut = __Local__35;
	__Local__33->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(60000)));
	auto& __Local__41 = (*(AccessPrivateProperty<FGuid >((__Local__33), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__41 = FGuid(0xFF5410C3, 0x45562146, 0x7D68BDBD, 0xBA7ACB43);
	__Local__32.Add(__Local__33);
	auto& __Local__42 = (*(AccessPrivateProperty<FGuid >((__Local__30), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__42 = FGuid(0x493DB4E9, 0x455E2236, 0xCEE41184, 0x9FF6E354);
	auto& __Local__43 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__30), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__43.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__43.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__43.Entries.GetData(), 1);
	auto& __Local__44 = __Local__43.Entries[0];
	__Local__44.Section = __Local__33;
	static TWeakFieldPtr<FProperty> __Local__46{};
	const FProperty* __Local__45 = __Local__46.Get();
	if (nullptr == __Local__45)
	{
		__Local__45 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__45);
		__Local__46 = __Local__45;
	}
	auto& __Local__47 = (*(__Local__45->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__44.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__49{};
	const FProperty* __Local__48 = __Local__49.Get();
	if (nullptr == __Local__48)
	{
		__Local__48 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__48);
		__Local__49 = __Local__48;
	}
	auto& __Local__50 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__47), 0)));
	__Local__50 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__52{};
	const FProperty* __Local__51 = __Local__52.Get();
	if (nullptr == __Local__51)
	{
		__Local__51 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__51);
		__Local__52 = __Local__51;
	}
	auto& __Local__53 = (*(__Local__51->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__44.Range), 0)));
	auto& __Local__54 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__53), 0)));
	__Local__54 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__56{};
	const FProperty* __Local__55 = __Local__56.Get();
	if (nullptr == __Local__55)
	{
		__Local__55 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__55);
		__Local__56 = __Local__55;
	}
	auto& __Local__57 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__53), 0)));
	__Local__57.Value = 60000;
	__Local__44.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__58 = (*(AccessPrivateProperty<FGuid >((__Local__30), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__58 = FGuid(0x493DB4E9, 0x455E2236, 0xCEE41184, 0x9FF6E354);
	__Local__29.Add(__Local__30);
	auto& __Local__59 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__19), UMovieScene::__PPO__PlaybackRange() )));
	__Local__59 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60001)));
	auto& __Local__60 = (*(AccessPrivateProperty<FFrameRate >((__Local__19), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__62{};
	const FProperty* __Local__61 = __Local__62.Get();
	if (nullptr == __Local__61)
	{
		__Local__61 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__61);
		__Local__62 = __Local__61;
	}
	auto& __Local__63 = (*(__Local__61->ContainerPtrToValuePtr<int32 >(&(__Local__60), 0)));
	__Local__63 = 20;
	auto& __Local__64 = (*(AccessPrivateProperty<FGuid >((__Local__19), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__64 = FGuid(0xCEBC4546, 0x432DDF55, 0x0EBAC9B1, 0xB4E25388);
	__Local__1->MovieScene = __Local__19;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__65 = __Local__1->AnimationBindings[0];
	__Local__65.WidgetName = FName(TEXT("TextBlock_47"));
	__Local__65.AnimationGuid = FGuid(0x36ABCA63, 0x4CF6D485, 0x057FC7AD, 0xD92AB5D6);
	auto& __Local__66 = (*(AccessPrivateProperty<FString >((__Local__1), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__66 = FString(TEXT("FadeIn"));
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__67 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__67 = FGuid(0xF57F1A04, 0x4FD11F00, 0xBB91ECA6, 0x1E52D005);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__1);
	auto __Local__68 = NewObject<UMovieScene>(__Local__2, TEXT("FadeOut"), (EObjectFlags)0x00280008);
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__68), UMovieScene::__PPO__Possessables() )));
	__Local__69 = TArray<FMovieScenePossessable> ();
	__Local__69.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__69.GetData(), 1);
	auto& __Local__70 = __Local__69[0];
	auto& __Local__71 = (*(AccessPrivateProperty<FGuid >(&(__Local__70), FMovieScenePossessable::__PPO__Guid() )));
	__Local__71 = FGuid(0xB043967D, 0x41C52EF1, 0x567A4995, 0x3D29AA8B);
	auto& __Local__72 = (*(AccessPrivateProperty<FString >(&(__Local__70), FMovieScenePossessable::__PPO__Name() )));
	__Local__72 = FString(TEXT("TextBlock_47"));
	auto& __Local__73 = (*(AccessPrivateProperty<UClass* >(&(__Local__70), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__73 = UTextBlock::StaticClass();
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__68), UMovieScene::__PPO__ObjectBindings() )));
	__Local__74 = TArray<FMovieSceneBinding> ();
	__Local__74.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__74.GetData(), 1);
	auto& __Local__75 = __Local__74[0];
	auto& __Local__76 = (*(AccessPrivateProperty<FGuid >(&(__Local__75), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__76 = FGuid(0xB043967D, 0x41C52EF1, 0x567A4995, 0x3D29AA8B);
	auto& __Local__77 = (*(AccessPrivateProperty<FString >(&(__Local__75), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__77 = FString(TEXT("TextBlock_47"));
	auto& __Local__78 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__75), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__78 = TArray<UMovieSceneTrack*> ();
	__Local__78.Reserve(1);
	auto __Local__79 = NewObject<UMovieSceneFloatTrack>(__Local__68, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__80 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__79), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__80.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__80.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__80.bCanUseClassLookup = true;
	auto& __Local__81 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__79), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__81 = TArray<UMovieSceneSection*> ();
	__Local__81.Reserve(1);
	auto __Local__82 = NewObject<UMovieSceneFloatSection>(__Local__79, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__83 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__82->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__84 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__82->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__83)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__84)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__85 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__82), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__85), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__86 = TArray<FFrameNumber> ();
	__Local__86.Reserve(2);
	__Local__86.Add(FFrameNumber{});
	__Local__86.Add(FFrameNumber{});
	__Local__86[1].Value = 120000;
	auto& __Local__87 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__85), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__87 = TArray<FMovieSceneFloatValue> ();
	__Local__87.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__87.GetData(), 2);
	auto& __Local__88 = __Local__87[0];
	__Local__88.Value = 1.000000f;
	auto& __Local__89 = __Local__87[1];
	__Local__82->Easing.EaseIn = __Local__83;
	__Local__82->Easing.EaseOut = __Local__84;
	__Local__82->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(120000)));
	auto& __Local__90 = (*(AccessPrivateProperty<FGuid >((__Local__82), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__90 = FGuid(0x3E28EBD1, 0x42775586, 0xD5C5EDAA, 0x49652325);
	__Local__81.Add(__Local__82);
	auto& __Local__91 = (*(AccessPrivateProperty<FGuid >((__Local__79), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__91 = FGuid(0xD2C56966, 0x4CD97E10, 0xAA5F8C91, 0xDFC0DBC0);
	auto& __Local__92 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__79), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__92.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__92.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__92.Entries.GetData(), 1);
	auto& __Local__93 = __Local__92.Entries[0];
	__Local__93.Section = __Local__82;
	auto& __Local__94 = (*(__Local__45->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__93.Range), 0)));
	auto& __Local__95 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__94), 0)));
	__Local__95 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__96 = (*(__Local__51->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__93.Range), 0)));
	auto& __Local__97 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__96), 0)));
	__Local__97 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__98 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__96), 0)));
	__Local__98.Value = 120000;
	__Local__93.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__99 = (*(AccessPrivateProperty<FGuid >((__Local__79), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__99 = FGuid(0xD2C56966, 0x4CD97E10, 0xAA5F8C91, 0xDFC0DBC0);
	__Local__78.Add(__Local__79);
	auto& __Local__100 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__68), UMovieScene::__PPO__PlaybackRange() )));
	__Local__100 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(120001)));
	auto& __Local__101 = (*(AccessPrivateProperty<FFrameRate >((__Local__68), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__102 = (*(__Local__61->ContainerPtrToValuePtr<int32 >(&(__Local__101), 0)));
	__Local__102 = 20;
	auto& __Local__103 = (*(AccessPrivateProperty<FGuid >((__Local__68), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__103 = FGuid(0x0B3E3E62, 0x4DA9C0E1, 0xDE2CA58E, 0x48BA3519);
	__Local__2->MovieScene = __Local__68;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__104 = __Local__2->AnimationBindings[0];
	__Local__104.WidgetName = FName(TEXT("TextBlock_47"));
	__Local__104.AnimationGuid = FGuid(0xB043967D, 0x41C52EF1, 0x567A4995, 0x3D29AA8B);
	auto& __Local__105 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__105 = FString(TEXT("FadeOut"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__106 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__106 = FGuid(0x9405508A, 0x4B886B04, 0x6B7CA09A, 0x0C3DF4F7);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__107 = NewObject<UMovieScene>(__Local__3, TEXT("FadeInYear3030"), (EObjectFlags)0x00280008);
	auto& __Local__108 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__107), UMovieScene::__PPO__Possessables() )));
	__Local__108 = TArray<FMovieScenePossessable> ();
	__Local__108.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__108.GetData(), 1);
	auto& __Local__109 = __Local__108[0];
	auto& __Local__110 = (*(AccessPrivateProperty<FGuid >(&(__Local__109), FMovieScenePossessable::__PPO__Guid() )));
	__Local__110 = FGuid(0xD5B5BA76, 0x41CF107D, 0x384109AD, 0x5E60962F);
	auto& __Local__111 = (*(AccessPrivateProperty<FString >(&(__Local__109), FMovieScenePossessable::__PPO__Name() )));
	__Local__111 = FString(TEXT("TextBlock_53"));
	auto& __Local__112 = (*(AccessPrivateProperty<UClass* >(&(__Local__109), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__112 = UTextBlock::StaticClass();
	auto& __Local__113 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__107), UMovieScene::__PPO__ObjectBindings() )));
	__Local__113 = TArray<FMovieSceneBinding> ();
	__Local__113.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__113.GetData(), 1);
	auto& __Local__114 = __Local__113[0];
	auto& __Local__115 = (*(AccessPrivateProperty<FGuid >(&(__Local__114), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__115 = FGuid(0xD5B5BA76, 0x41CF107D, 0x384109AD, 0x5E60962F);
	auto& __Local__116 = (*(AccessPrivateProperty<FString >(&(__Local__114), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__116 = FString(TEXT("TextBlock_53"));
	auto& __Local__117 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__114), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__117 = TArray<UMovieSceneTrack*> ();
	__Local__117.Reserve(1);
	auto __Local__118 = NewObject<UMovieSceneFloatTrack>(__Local__107, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__119 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__118), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__119.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__119.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__119.bCanUseClassLookup = true;
	auto& __Local__120 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__118), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__120 = TArray<UMovieSceneSection*> ();
	__Local__120.Reserve(1);
	auto __Local__121 = NewObject<UMovieSceneFloatSection>(__Local__118, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__122 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__121->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__123 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__121->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__122)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__123)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__124 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__121), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__125 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__124), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__125 = TArray<FFrameNumber> ();
	__Local__125.Reserve(2);
	__Local__125.Add(FFrameNumber{});
	__Local__125.Add(FFrameNumber{});
	__Local__125[1].Value = 60000;
	auto& __Local__126 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__124), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__126 = TArray<FMovieSceneFloatValue> ();
	__Local__126.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__126.GetData(), 2);
	auto& __Local__127 = __Local__126[0];
	auto& __Local__128 = __Local__126[1];
	__Local__128.Value = 1.000000f;
	__Local__121->Easing.EaseIn = __Local__122;
	__Local__121->Easing.EaseOut = __Local__123;
	__Local__121->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(60000)));
	auto& __Local__129 = (*(AccessPrivateProperty<FGuid >((__Local__121), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__129 = FGuid(0x40325B8E, 0x49D6823B, 0xAF1DDD9A, 0x2B67142E);
	__Local__120.Add(__Local__121);
	auto& __Local__130 = (*(AccessPrivateProperty<FGuid >((__Local__118), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__130 = FGuid(0x53FD3BDD, 0x4ABBE8DB, 0x8C3AFCB8, 0x8392B498);
	auto& __Local__131 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__118), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__131.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__131.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__131.Entries.GetData(), 1);
	auto& __Local__132 = __Local__131.Entries[0];
	__Local__132.Section = __Local__121;
	auto& __Local__133 = (*(__Local__45->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__132.Range), 0)));
	auto& __Local__134 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__133), 0)));
	__Local__134 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__135 = (*(__Local__51->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__132.Range), 0)));
	auto& __Local__136 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__135), 0)));
	__Local__136 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__137 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__135), 0)));
	__Local__137.Value = 60000;
	__Local__132.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__138 = (*(AccessPrivateProperty<FGuid >((__Local__118), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__138 = FGuid(0x53FD3BDD, 0x4ABBE8DB, 0x8C3AFCB8, 0x8392B498);
	__Local__117.Add(__Local__118);
	auto& __Local__139 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__107), UMovieScene::__PPO__PlaybackRange() )));
	__Local__139 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60001)));
	auto& __Local__140 = (*(AccessPrivateProperty<FFrameRate >((__Local__107), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__141 = (*(__Local__61->ContainerPtrToValuePtr<int32 >(&(__Local__140), 0)));
	__Local__141 = 20;
	auto& __Local__142 = (*(AccessPrivateProperty<FGuid >((__Local__107), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__142 = FGuid(0xCE816DC1, 0x4D4B382F, 0xDCA066B7, 0x4C77A122);
	__Local__3->MovieScene = __Local__107;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__143 = __Local__3->AnimationBindings[0];
	__Local__143.WidgetName = FName(TEXT("TextBlock_53"));
	__Local__143.AnimationGuid = FGuid(0xD5B5BA76, 0x41CF107D, 0x384109AD, 0x5E60962F);
	auto& __Local__144 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__144 = FString(TEXT("FadeInYear3030"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__145 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__145 = FGuid(0xBA2BB5E6, 0x450C6CC9, 0x9BABDB97, 0x55F3BACE);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__146 = NewObject<UMovieScene>(__Local__4, TEXT("FadeOutYear3030"), (EObjectFlags)0x00280008);
	auto& __Local__147 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__146), UMovieScene::__PPO__Possessables() )));
	__Local__147 = TArray<FMovieScenePossessable> ();
	__Local__147.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__147.GetData(), 1);
	auto& __Local__148 = __Local__147[0];
	auto& __Local__149 = (*(AccessPrivateProperty<FGuid >(&(__Local__148), FMovieScenePossessable::__PPO__Guid() )));
	__Local__149 = FGuid(0xCF541E68, 0x48A517DB, 0x54EF538A, 0x4B0793F4);
	auto& __Local__150 = (*(AccessPrivateProperty<FString >(&(__Local__148), FMovieScenePossessable::__PPO__Name() )));
	__Local__150 = FString(TEXT("TextBlock_53"));
	auto& __Local__151 = (*(AccessPrivateProperty<UClass* >(&(__Local__148), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__151 = UTextBlock::StaticClass();
	auto& __Local__152 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__146), UMovieScene::__PPO__ObjectBindings() )));
	__Local__152 = TArray<FMovieSceneBinding> ();
	__Local__152.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__152.GetData(), 1);
	auto& __Local__153 = __Local__152[0];
	auto& __Local__154 = (*(AccessPrivateProperty<FGuid >(&(__Local__153), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__154 = FGuid(0xCF541E68, 0x48A517DB, 0x54EF538A, 0x4B0793F4);
	auto& __Local__155 = (*(AccessPrivateProperty<FString >(&(__Local__153), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__155 = FString(TEXT("TextBlock_53"));
	auto& __Local__156 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__153), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__156 = TArray<UMovieSceneTrack*> ();
	__Local__156.Reserve(1);
	auto __Local__157 = NewObject<UMovieSceneFloatTrack>(__Local__146, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__158 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__157), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__158.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__158.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__158.bCanUseClassLookup = true;
	auto& __Local__159 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__157), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__159 = TArray<UMovieSceneSection*> ();
	__Local__159.Reserve(1);
	auto __Local__160 = NewObject<UMovieSceneFloatSection>(__Local__157, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__161 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__160->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__162 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__160->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__161)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__162)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__163 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__160), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__164 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__163), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__164 = TArray<FFrameNumber> ();
	__Local__164.Reserve(2);
	__Local__164.Add(FFrameNumber{});
	__Local__164.Add(FFrameNumber{});
	__Local__164[1].Value = 120000;
	auto& __Local__165 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__163), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__165 = TArray<FMovieSceneFloatValue> ();
	__Local__165.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__165.GetData(), 2);
	auto& __Local__166 = __Local__165[0];
	__Local__166.Value = 1.000000f;
	auto& __Local__167 = __Local__165[1];
	__Local__160->Easing.EaseIn = __Local__161;
	__Local__160->Easing.EaseOut = __Local__162;
	__Local__160->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(120000)));
	auto& __Local__168 = (*(AccessPrivateProperty<FGuid >((__Local__160), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__168 = FGuid(0xA842C9C0, 0x430CE624, 0xA088EBA2, 0xC038FBA9);
	__Local__159.Add(__Local__160);
	auto& __Local__169 = (*(AccessPrivateProperty<FGuid >((__Local__157), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__169 = FGuid(0x3E6073FB, 0x45DF7B41, 0x2EAF1490, 0x855B53E2);
	auto& __Local__170 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__157), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__170.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__170.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__170.Entries.GetData(), 1);
	auto& __Local__171 = __Local__170.Entries[0];
	__Local__171.Section = __Local__160;
	auto& __Local__172 = (*(__Local__45->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__171.Range), 0)));
	auto& __Local__173 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__172), 0)));
	__Local__173 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__174 = (*(__Local__51->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__171.Range), 0)));
	auto& __Local__175 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__174), 0)));
	__Local__175 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__176 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__174), 0)));
	__Local__176.Value = 120000;
	__Local__171.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__177 = (*(AccessPrivateProperty<FGuid >((__Local__157), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__177 = FGuid(0x3E6073FB, 0x45DF7B41, 0x2EAF1490, 0x855B53E2);
	__Local__156.Add(__Local__157);
	auto& __Local__178 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__146), UMovieScene::__PPO__PlaybackRange() )));
	__Local__178 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(120001)));
	auto& __Local__179 = (*(AccessPrivateProperty<FFrameRate >((__Local__146), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__180 = (*(__Local__61->ContainerPtrToValuePtr<int32 >(&(__Local__179), 0)));
	__Local__180 = 20;
	auto& __Local__181 = (*(AccessPrivateProperty<FGuid >((__Local__146), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__181 = FGuid(0x96400E05, 0x4BB6E3E1, 0xBC7EDC9D, 0x1F53D08F);
	__Local__4->MovieScene = __Local__146;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__182 = __Local__4->AnimationBindings[0];
	__Local__182.WidgetName = FName(TEXT("TextBlock_53"));
	__Local__182.AnimationGuid = FGuid(0xCF541E68, 0x48A517DB, 0x54EF538A, 0x4B0793F4);
	auto& __Local__183 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__183 = FString(TEXT("FadeOutYear3030"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__184 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__184 = FGuid(0x74174FE1, 0x4C6B8E90, 0xA8D23AA2, 0xE291901B);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
	auto __Local__185 = NewObject<UMovieScene>(__Local__5, TEXT("FadeInBlack"), (EObjectFlags)0x00280008);
	auto& __Local__186 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__185), UMovieScene::__PPO__Possessables() )));
	__Local__186 = TArray<FMovieScenePossessable> ();
	__Local__186.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__186.GetData(), 1);
	auto& __Local__187 = __Local__186[0];
	auto& __Local__188 = (*(AccessPrivateProperty<FGuid >(&(__Local__187), FMovieScenePossessable::__PPO__Guid() )));
	__Local__188 = FGuid(0x1CB4EDB2, 0x498EACAC, 0x72C75898, 0xD466B95C);
	auto& __Local__189 = (*(AccessPrivateProperty<FString >(&(__Local__187), FMovieScenePossessable::__PPO__Name() )));
	__Local__189 = FString(TEXT("Black_Image"));
	auto& __Local__190 = (*(AccessPrivateProperty<UClass* >(&(__Local__187), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__190 = UImage::StaticClass();
	auto& __Local__191 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__185), UMovieScene::__PPO__ObjectBindings() )));
	__Local__191 = TArray<FMovieSceneBinding> ();
	__Local__191.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__191.GetData(), 1);
	auto& __Local__192 = __Local__191[0];
	auto& __Local__193 = (*(AccessPrivateProperty<FGuid >(&(__Local__192), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__193 = FGuid(0x1CB4EDB2, 0x498EACAC, 0x72C75898, 0xD466B95C);
	auto& __Local__194 = (*(AccessPrivateProperty<FString >(&(__Local__192), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__194 = FString(TEXT("Black_Image"));
	auto& __Local__195 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__192), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__195 = TArray<UMovieSceneTrack*> ();
	__Local__195.Reserve(1);
	auto __Local__196 = NewObject<UMovieSceneFloatTrack>(__Local__185, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__197 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__196), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__197.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__197.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__197.bCanUseClassLookup = true;
	auto& __Local__198 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__196), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__198 = TArray<UMovieSceneSection*> ();
	__Local__198.Reserve(1);
	auto __Local__199 = NewObject<UMovieSceneFloatSection>(__Local__196, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__200 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__199->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__201 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__199->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__200)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__201)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__202 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__199), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__203 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__202), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__203 = TArray<FFrameNumber> ();
	__Local__203.Reserve(2);
	__Local__203.Add(FFrameNumber{});
	__Local__203.Add(FFrameNumber{});
	__Local__203[1].Value = 90000;
	auto& __Local__204 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__202), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__204 = TArray<FMovieSceneFloatValue> ();
	__Local__204.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__204.GetData(), 2);
	auto& __Local__205 = __Local__204[0];
	auto& __Local__206 = __Local__204[1];
	__Local__206.Value = 1.000000f;
	__Local__199->Easing.EaseIn = __Local__200;
	__Local__199->Easing.EaseOut = __Local__201;
	__Local__199->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(90000)));
	auto& __Local__207 = (*(AccessPrivateProperty<FGuid >((__Local__199), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__207 = FGuid(0x7CA4D8F9, 0x4ED65159, 0xE2E9DBAE, 0xCC36F7FF);
	__Local__198.Add(__Local__199);
	auto& __Local__208 = (*(AccessPrivateProperty<FGuid >((__Local__196), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__208 = FGuid(0xB127DD6D, 0x4726D57B, 0xD52B4EAC, 0xF823A32E);
	auto& __Local__209 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__196), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__209.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__209.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__209.Entries.GetData(), 1);
	auto& __Local__210 = __Local__209.Entries[0];
	__Local__210.Section = __Local__199;
	auto& __Local__211 = (*(__Local__45->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__210.Range), 0)));
	auto& __Local__212 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__211), 0)));
	__Local__212 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__213 = (*(__Local__51->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__210.Range), 0)));
	auto& __Local__214 = (*(__Local__48->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__213), 0)));
	__Local__214 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__215 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__213), 0)));
	__Local__215.Value = 90000;
	__Local__210.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__216 = (*(AccessPrivateProperty<FGuid >((__Local__196), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__216 = FGuid(0xB127DD6D, 0x4726D57B, 0xD52B4EAC, 0xF823A32E);
	__Local__195.Add(__Local__196);
	auto& __Local__217 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__185), UMovieScene::__PPO__PlaybackRange() )));
	__Local__217 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(90001)));
	auto& __Local__218 = (*(AccessPrivateProperty<FFrameRate >((__Local__185), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__219 = (*(__Local__61->ContainerPtrToValuePtr<int32 >(&(__Local__218), 0)));
	__Local__219 = 20;
	auto& __Local__220 = (*(AccessPrivateProperty<FGuid >((__Local__185), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__220 = FGuid(0x6818364C, 0x4A4D8A92, 0x54413BAF, 0x1A311662);
	__Local__5->MovieScene = __Local__185;
	__Local__5->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__5->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__5->AnimationBindings.GetData(), 1);
	auto& __Local__221 = __Local__5->AnimationBindings[0];
	__Local__221.WidgetName = FName(TEXT("Black_Image"));
	__Local__221.AnimationGuid = FGuid(0x1CB4EDB2, 0x498EACAC, 0x72C75898, 0xD466B95C);
	auto& __Local__222 = (*(AccessPrivateProperty<FString >((__Local__5), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__222 = FString(TEXT("FadeInBlack"));
	__Local__5->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__223 = (*(AccessPrivateProperty<FGuid >((__Local__5), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__223 = FGuid(0xF1DB9B33, 0x4C0281A8, 0xEF13D3A7, 0x5D19429B);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__5);
}
PRAGMA_ENABLE_OPTIMIZATION
void UIntro_WB_C__pf1686382522::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__224;
	SlotNames.Append(__Local__224);
}
void UIntro_WB_C__pf1686382522::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__225;
	__Local__225.Reserve(5);
	__Local__225.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__225.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__225.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->MiscConvertedSubobjects[3]));
	__Local__225.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->MiscConvertedSubobjects[4]));
	__Local__225.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->MiscConvertedSubobjects[5]));
	TArray<FDelegateRuntimeBinding>  __Local__226;
	__Local__226.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__226.GetData(), 1);
	auto& __Local__227 = __Local__226[0];
	__Local__227.ObjectName = FString(TEXT("TextBlock_47"));
	__Local__227.PropertyName = FName(TEXT("Text"));
	__Local__227.FunctionName = FName(TEXT("GetText_1"));
	auto& __Local__228 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__227.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__228 = TArray<FPropertyPathSegment> ();
	__Local__228.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__228.GetData(), 1);
	auto& __Local__229 = __Local__228[0];
	__Local__229.Name = FName(TEXT("GetText_Intro"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UIntro_WB_C__pf1686382522::StaticClass())->MiscConvertedSubobjects[0]), __Local__225, __Local__226);
}
void UIntro_WB_C__pf1686382522::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UIntro_WB_C__pf1686382522::bpf__ExecuteUbergraph_Intro_WB__pf_0(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("LevelPlane")), true, FString(TEXT("")));
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpf__RemoveText__pf();
			}
		case 4:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(5, 1666112331, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				bpv__TextIntro__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"C5E17395493CE2EDFDE5F39A00317710\", \"A mysterious disease infected all humanity in a matter of hours\")")	);
			}
		case 7:
			{
				bpf__SpawnText__pf();
			}
		case 8:
			{
				UKismetSystemLibrary::Delay(this, 5.000000, FLatentActionInfo(9, -194080474, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				bpf__RemoveText__pf();
			}
		case 11:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(12, 718396388, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				__CurrentState = 13;
				break;
			}
		case 13:
			{
				bpv__TextIntro__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"B4485D4549BFBA86770361AAF5FE15D3\", \"The infected have blue blood\")")	);
			}
		case 14:
			{
				bpf__SpawnText__pf();
			}
		case 15:
			{
				UKismetSystemLibrary::Delay(this, 4.000000, FLatentActionInfo(16, 333883013, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				__CurrentState = 17;
				break;
			}
		case 17:
			{
				bpf__RemoveText__pf();
			}
		case 18:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(19, 1774609370, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
			{
				bpv__TextIntro__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"F4458A6C4423A399D3306D9B16938074\", \"If they die while being near to another person \")")	);
			}
		case 21:
			{
				bpf__SpawnText__pf();
			}
		case 22:
			{
				UKismetSystemLibrary::Delay(this, 4.000000, FLatentActionInfo(23, -1908859819, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				__CurrentState = 24;
				break;
			}
		case 24:
			{
				bpf__RemoveText__pf();
			}
		case 25:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(26, 1955488613, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				UKismetSystemLibrary::Delay(this, 5.500000, FLatentActionInfo(28, 785379464, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				__CurrentState = 29;
				break;
			}
		case 29:
			{
				bpv__TextIntro__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"0332A5E84EB528F675E496B2A727D253\", \"Their soul possess that body\")")	);
			}
		case 30:
			{
				bpf__SpawnText__pf();
			}
		case 31:
			{
				UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(32, 1177268383, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				__CurrentState = 33;
				break;
			}
		case 33:
			{
				bpf__RemoveText__pf();
			}
		case 34:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(35, 1921914095, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 35:
			{
				__CurrentState = 36;
				break;
			}
		case 36:
			{
				bpv__TextIntro__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"9D4C055546F6C78532F23DA29CE74267\", \"But if no one is nearby\")")	);
			}
		case 37:
			{
				bpf__SpawnText__pf();
			}
		case 38:
			{
				UKismetSystemLibrary::Delay(this, 1.500000, FLatentActionInfo(39, -1013980912, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 39:
			{
				__CurrentState = 40;
				break;
			}
		case 40:
			{
				bpf__RemoveText__pf();
			}
		case 41:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(42, 1570537725, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				__CurrentState = 43;
				break;
			}
		case 43:
			{
				bpv__TextIntro__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"2009763B4004C5265AECFB992ACB658C\", \"They will die forever\")")	);
			}
		case 44:
			{
				bpf__SpawnText__pf();
			}
		case 45:
			{
				UKismetSystemLibrary::Delay(this, 1.500000, FLatentActionInfo(46, -667687941, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 46:
			{
				__CurrentState = 47;
				break;
			}
		case 47:
			{
				bpf__RemoveText__pf();
			}
		case 48:
			{
				UKismetSystemLibrary::Delay(this, 7.500000, FLatentActionInfo(49, -1244797390, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				__CurrentState = 50;
				break;
			}
		case 50:
			{
				bpv__TextIntro__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"C0D8CD694877FEFB1060CF95E068D954\", \"The origin of the disease is still unknown\")")	);
			}
		case 51:
			{
				bpf__SpawnText__pf();
			}
		case 52:
			{
				UKismetSystemLibrary::Delay(this, 4.500000, FLatentActionInfo(53, 1563646453, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 53:
			{
				__CurrentState = 54;
				break;
			}
		case 54:
			{
				bpf__RemoveText__pf();
			}
		case 55:
			{
				UKismetSystemLibrary::Delay(this, 2.500000, FLatentActionInfo(56, 1568450596, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 56:
			{
				__CurrentState = 57;
				break;
			}
		case 57:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__FadeInBlack__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 58:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(59, -862047215, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 59:
			{
				__CurrentState = 60;
				break;
			}
		case 60:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__FadeInYear3030__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 61:
			{
				UKismetSystemLibrary::Delay(this, 2.500000, FLatentActionInfo(62, 1659967912, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 62:
			{
				__CurrentState = 63;
				break;
			}
		case 63:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__FadeOutYear3030__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 64:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(65, 895629764, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		case 65:
			{
				__CurrentState = 1;
				break;
			}
		case 66:
			{
				__CurrentState = 67;
				break;
			}
		case 67:
			{
				bpv__TextIntro__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5514725948D2F74E9F502F9623556E7F]\", \"77F8C8294D73D9B7A4FEC6B1A4379F5B\", \"In the year 2030\")")	);
			}
		case 68:
			{
				bpf__SpawnText__pf();
			}
		case 69:
			{
				UKismetSystemLibrary::Delay(this, 4.000000, FLatentActionInfo(2, -728460734, TEXT("ExecuteUbergraph_Intro_WB_0"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UIntro_WB_C__pf1686382522::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Intro_WB__pf_0(66);
}
void UIntro_WB_C__pf1686382522::bpf__SpawnText__pf()
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__FadeIn__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
}
void UIntro_WB_C__pf1686382522::bpf__RemoveText__pf()
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__FadeOut__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
}
FText  UIntro_WB_C__pf1686382522::bpf__GetText_Intro__pf()
{
	FText bpp__ReturnValue__pf{};
	bpp__ReturnValue__pf = bpv__TextIntro__pf;
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UIntro_WB_C__pf1686382522::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{458, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_Black.T_Black 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/28_Days_Later_Font.28_Days_Later_Font 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UIntro_WB_C__pf1686382522::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{404, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
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
struct FRegisterHelper__UIntro_WB_C__pf1686382522
{
	FRegisterHelper__UIntro_WB_C__pf1686382522()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/IntroCutscene/Intro_WB"), &UIntro_WB_C__pf1686382522::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UIntro_WB_C__pf1686382522 Instance;
};
FRegisterHelper__UIntro_WB_C__pf1686382522 FRegisterHelper__UIntro_WB_C__pf1686382522::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
