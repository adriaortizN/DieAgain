#include "NativizedAssets.h"
#include "PhraseWB__pf372109055.h"
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


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UPhraseWB_C__pf372109055::UPhraseWB_C__pf372109055(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Image_49__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UPhraseWB_C__pf372109055::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UPhraseWB_C__pf372109055::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeInPeople_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeInThruth_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeInCourage_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(5);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Left = -960.960938f;
	__Local__6->LayoutData.Offsets.Top = -540.540527f;
	__Local__6->LayoutData.Offsets.Right = 1920.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 1080.000000f;
	__Local__6->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UImage>(__Local__0, TEXT("Image_49"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<UObject* >(&(__Local__7->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__8 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Left = -712.960938f;
	__Local__9->LayoutData.Offsets.Top = -332.540527f;
	__Local__9->LayoutData.Offsets.Right = 1452.463623f;
	__Local__9->LayoutData.Offsets.Bottom = 85.611160f;
	__Local__9->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__9->Parent = __Local__4;
	auto __Local__10 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_27"), (EObjectFlags)0x00280008);
	__Local__10->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FA8BFC574C14BD2FCBC8168409BF6EBB]\", \"C6995A394DD5D89C0CD618810C1E6677\", \"People pontificate suicide is a cowards act\")")	);
	__Local__10->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__10->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__10->Font.Size = 50;
	auto& __Local__11 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__10), UTextLayoutWidget::__PPO__Justification() )));
	__Local__11 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__13{};
	const FProperty* __Local__12 = __Local__13.Get();
	if (nullptr == __Local__12)
	{
		__Local__12 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__12);
		__Local__13 = __Local__12;
	}
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__10), true, 0));
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__5.Add(__Local__9);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = -712.960938f;
	__Local__14->LayoutData.Offsets.Top = -112.540527f;
	__Local__14->LayoutData.Offsets.Right = 1452.463623f;
	__Local__14->LayoutData.Offsets.Bottom = 94.508942f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__14->Parent = __Local__4;
	auto __Local__15 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FA8BFC574C14BD2FCBC8168409BF6EBB]\", \"4F2497D24D6C2A7FC3F0CDBAC05FF099\", \"Couldnt be further from the truth\")")	);
	__Local__15->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__15->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__15->Font.Size = 50;
	auto& __Local__16 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__15), UTextLayoutWidget::__PPO__Justification() )));
	__Local__16 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__15), true, 0));
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__5.Add(__Local__14);
	auto __Local__17 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__17->LayoutData.Offsets.Left = -712.960938f;
	__Local__17->LayoutData.Offsets.Top = 127.459473f;
	__Local__17->LayoutData.Offsets.Right = 1452.463623f;
	__Local__17->LayoutData.Offsets.Bottom = 94.508942f;
	__Local__17->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__17->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__17->Parent = __Local__4;
	auto __Local__18 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__18->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FA8BFC574C14BD2FCBC8168409BF6EBB]\", \"3DC2F4DD43D079A21AE6489C0FA62CFE\", \"Suicide takes tremendous courage\")")	);
	__Local__18->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__18->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__18->Font.Size = 50;
	auto& __Local__19 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__18), UTextLayoutWidget::__PPO__Justification() )));
	__Local__19 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__18), true, 0));
	__Local__18->Slot = __Local__17;
	__Local__18->RenderOpacity = 0.000000f;
	__Local__17->Content = __Local__18;
	__Local__5.Add(__Local__17);
	auto __Local__20 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_20"), (EObjectFlags)0x00280008);
	__Local__20->LayoutData.Offsets.Left = -573.921875f;
	__Local__20->LayoutData.Offsets.Top = -205.081055f;
	__Local__20->LayoutData.Offsets.Right = 520.420410f;
	__Local__20->LayoutData.Offsets.Bottom = 76.713379f;
	__Local__20->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__20->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__20->Parent = __Local__4;
	auto __Local__21 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_99"), (EObjectFlags)0x00280008);
	__Local__21->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FA8BFC574C14BD2FCBC8168409BF6EBB]\", \"5C503ABE44A3E1AF1E07DF9249B31F36\", \"Robert Frobisher\")")	);
	__Local__21->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__21->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__21->Font.Size = 50;
	auto& __Local__22 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__21), UTextLayoutWidget::__PPO__Justification() )));
	__Local__22 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__21), true, 0));
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__5.Add(__Local__20);
	__Local__0->RootWidget = __Local__4;
	auto __Local__23 = NewObject<UMovieScene>(__Local__1, TEXT("FadeInPeople"), (EObjectFlags)0x00280008);
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__23), UMovieScene::__PPO__Possessables() )));
	__Local__24 = TArray<FMovieScenePossessable> ();
	__Local__24.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__24.GetData(), 1);
	auto& __Local__25 = __Local__24[0];
	auto& __Local__26 = (*(AccessPrivateProperty<FGuid >(&(__Local__25), FMovieScenePossessable::__PPO__Guid() )));
	__Local__26 = FGuid(0xC4EF5E71, 0x449BC6AF, 0x38D4DF86, 0xD3841D53);
	auto& __Local__27 = (*(AccessPrivateProperty<FString >(&(__Local__25), FMovieScenePossessable::__PPO__Name() )));
	__Local__27 = FString(TEXT("TextBlock_27"));
	auto& __Local__28 = (*(AccessPrivateProperty<UClass* >(&(__Local__25), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__28 = UTextBlock::StaticClass();
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__23), UMovieScene::__PPO__ObjectBindings() )));
	__Local__29 = TArray<FMovieSceneBinding> ();
	__Local__29.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__29.GetData(), 1);
	auto& __Local__30 = __Local__29[0];
	auto& __Local__31 = (*(AccessPrivateProperty<FGuid >(&(__Local__30), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__31 = FGuid(0xC4EF5E71, 0x449BC6AF, 0x38D4DF86, 0xD3841D53);
	auto& __Local__32 = (*(AccessPrivateProperty<FString >(&(__Local__30), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__32 = FString(TEXT("TextBlock_27"));
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__30), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__33 = TArray<UMovieSceneTrack*> ();
	__Local__33.Reserve(1);
	auto __Local__34 = NewObject<UMovieSceneFloatTrack>(__Local__23, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__35 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__34), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__35.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__35.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__35.bCanUseClassLookup = true;
	auto& __Local__36 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__34), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__36 = TArray<UMovieSceneSection*> ();
	__Local__36.Reserve(1);
	auto __Local__37 = NewObject<UMovieSceneFloatSection>(__Local__34, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__38 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__37->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__39 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__37->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__38)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__39)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__40 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__37), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__41 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__40), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__41 = TArray<FFrameNumber> ();
	__Local__41.Reserve(2);
	__Local__41.Add(FFrameNumber{});
	__Local__41.Add(FFrameNumber{});
	__Local__41[1].Value = 75000;
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__40), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__42 = TArray<FMovieSceneFloatValue> ();
	__Local__42.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__42.GetData(), 2);
	auto& __Local__43 = __Local__42[0];
	auto& __Local__44 = __Local__42[1];
	__Local__44.Value = 1.000000f;
	__Local__37->Easing.EaseIn = __Local__38;
	__Local__37->Easing.EaseOut = __Local__39;
	__Local__37->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(75000)));
	auto& __Local__45 = (*(AccessPrivateProperty<FGuid >((__Local__37), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__45 = FGuid(0xFFB8EE1F, 0x4EFC08B0, 0x5812629F, 0xAE782BD9);
	__Local__36.Add(__Local__37);
	auto& __Local__46 = (*(AccessPrivateProperty<FGuid >((__Local__34), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__46 = FGuid(0x46DDF750, 0x4220C902, 0x1E6A41BC, 0x7751F71A);
	auto& __Local__47 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__34), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__47.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__47.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__47.Entries.GetData(), 1);
	auto& __Local__48 = __Local__47.Entries[0];
	__Local__48.Section = __Local__37;
	static TWeakFieldPtr<FProperty> __Local__50{};
	const FProperty* __Local__49 = __Local__50.Get();
	if (nullptr == __Local__49)
	{
		__Local__49 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__49);
		__Local__50 = __Local__49;
	}
	auto& __Local__51 = (*(__Local__49->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__48.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__53{};
	const FProperty* __Local__52 = __Local__53.Get();
	if (nullptr == __Local__52)
	{
		__Local__52 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__52);
		__Local__53 = __Local__52;
	}
	auto& __Local__54 = (*(__Local__52->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__51), 0)));
	__Local__54 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__56{};
	const FProperty* __Local__55 = __Local__56.Get();
	if (nullptr == __Local__55)
	{
		__Local__55 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__55);
		__Local__56 = __Local__55;
	}
	auto& __Local__57 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__48.Range), 0)));
	auto& __Local__58 = (*(__Local__52->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__57), 0)));
	__Local__58 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__60{};
	const FProperty* __Local__59 = __Local__60.Get();
	if (nullptr == __Local__59)
	{
		__Local__59 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__59);
		__Local__60 = __Local__59;
	}
	auto& __Local__61 = (*(__Local__59->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__57), 0)));
	__Local__61.Value = 75000;
	__Local__48.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__62 = (*(AccessPrivateProperty<FGuid >((__Local__34), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__62 = FGuid(0x46DDF750, 0x4220C902, 0x1E6A41BC, 0x7751F71A);
	__Local__33.Add(__Local__34);
	auto& __Local__63 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__23), UMovieScene::__PPO__PlaybackRange() )));
	__Local__63 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(75001)));
	auto& __Local__64 = (*(AccessPrivateProperty<FFrameRate >((__Local__23), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__66{};
	const FProperty* __Local__65 = __Local__66.Get();
	if (nullptr == __Local__65)
	{
		__Local__65 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__65);
		__Local__66 = __Local__65;
	}
	auto& __Local__67 = (*(__Local__65->ContainerPtrToValuePtr<int32 >(&(__Local__64), 0)));
	__Local__67 = 20;
	auto& __Local__68 = (*(AccessPrivateProperty<FGuid >((__Local__23), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__68 = FGuid(0x7A442236, 0x40DF39B6, 0xD0188CA1, 0xF3FF8A9B);
	__Local__1->MovieScene = __Local__23;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__69 = __Local__1->AnimationBindings[0];
	__Local__69.WidgetName = FName(TEXT("TextBlock_27"));
	__Local__69.AnimationGuid = FGuid(0xC4EF5E71, 0x449BC6AF, 0x38D4DF86, 0xD3841D53);
	auto& __Local__70 = (*(AccessPrivateProperty<FString >((__Local__1), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__70 = FString(TEXT("FadeInPeople"));
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__71 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__71 = FGuid(0x6AE0F351, 0x43E37A55, 0x3D17FAAF, 0x040F70B8);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__1);
	auto __Local__72 = NewObject<UMovieScene>(__Local__2, TEXT("FadeInThruth"), (EObjectFlags)0x00280008);
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__72), UMovieScene::__PPO__Possessables() )));
	__Local__73 = TArray<FMovieScenePossessable> ();
	__Local__73.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__73.GetData(), 1);
	auto& __Local__74 = __Local__73[0];
	auto& __Local__75 = (*(AccessPrivateProperty<FGuid >(&(__Local__74), FMovieScenePossessable::__PPO__Guid() )));
	__Local__75 = FGuid(0xBBAC96C1, 0x43A55B9E, 0x480790B2, 0x56DDDE27);
	auto& __Local__76 = (*(AccessPrivateProperty<FString >(&(__Local__74), FMovieScenePossessable::__PPO__Name() )));
	__Local__76 = FString(TEXT("TextBlock"));
	auto& __Local__77 = (*(AccessPrivateProperty<UClass* >(&(__Local__74), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__77 = UTextBlock::StaticClass();
	auto& __Local__78 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__72), UMovieScene::__PPO__ObjectBindings() )));
	__Local__78 = TArray<FMovieSceneBinding> ();
	__Local__78.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__78.GetData(), 1);
	auto& __Local__79 = __Local__78[0];
	auto& __Local__80 = (*(AccessPrivateProperty<FGuid >(&(__Local__79), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__80 = FGuid(0xBBAC96C1, 0x43A55B9E, 0x480790B2, 0x56DDDE27);
	auto& __Local__81 = (*(AccessPrivateProperty<FString >(&(__Local__79), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__81 = FString(TEXT("TextBlock"));
	auto& __Local__82 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__79), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__82 = TArray<UMovieSceneTrack*> ();
	__Local__82.Reserve(1);
	auto __Local__83 = NewObject<UMovieSceneFloatTrack>(__Local__72, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__84 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__83), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__84.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__84.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__84.bCanUseClassLookup = true;
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__83), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__85 = TArray<UMovieSceneSection*> ();
	__Local__85.Reserve(1);
	auto __Local__86 = NewObject<UMovieSceneFloatSection>(__Local__83, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__87 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__86->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__88 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__86->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__87)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__88)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__89 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__86), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__90 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__89), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__90 = TArray<FFrameNumber> ();
	__Local__90.Reserve(3);
	__Local__90.Add(FFrameNumber{});
	__Local__90.Add(FFrameNumber{});
	__Local__90[1].Value = 150000;
	__Local__90.Add(FFrameNumber{});
	__Local__90[2].Value = 225000;
	auto& __Local__91 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__89), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__91 = TArray<FMovieSceneFloatValue> ();
	__Local__91.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__91.GetData(), 3);
	auto& __Local__92 = __Local__91[0];
	auto& __Local__93 = __Local__91[1];
	auto& __Local__94 = __Local__91[2];
	__Local__94.Value = 1.000000f;
	__Local__86->Easing.EaseIn = __Local__87;
	__Local__86->Easing.EaseOut = __Local__88;
	__Local__86->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(225000)));
	auto& __Local__95 = (*(AccessPrivateProperty<FGuid >((__Local__86), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__95 = FGuid(0xCC6E3073, 0x4EF3628A, 0x4E38DEA6, 0xEBE4CD9F);
	__Local__85.Add(__Local__86);
	auto& __Local__96 = (*(AccessPrivateProperty<FGuid >((__Local__83), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__96 = FGuid(0x4A624E62, 0x4B031C53, 0x8CC0E2A5, 0x7FAF1577);
	auto& __Local__97 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__83), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__97.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__97.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__97.Entries.GetData(), 1);
	auto& __Local__98 = __Local__97.Entries[0];
	__Local__98.Section = __Local__86;
	auto& __Local__99 = (*(__Local__49->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__98.Range), 0)));
	auto& __Local__100 = (*(__Local__52->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__99), 0)));
	__Local__100 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__101 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__98.Range), 0)));
	auto& __Local__102 = (*(__Local__52->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__101), 0)));
	__Local__102 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__103 = (*(__Local__59->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__101), 0)));
	__Local__103.Value = 225000;
	__Local__98.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__104 = (*(AccessPrivateProperty<FGuid >((__Local__83), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__104 = FGuid(0x4A624E62, 0x4B031C53, 0x8CC0E2A5, 0x7FAF1577);
	__Local__82.Add(__Local__83);
	auto& __Local__105 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__72), UMovieScene::__PPO__PlaybackRange() )));
	__Local__105 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(225001)));
	auto& __Local__106 = (*(AccessPrivateProperty<FFrameRate >((__Local__72), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__107 = (*(__Local__65->ContainerPtrToValuePtr<int32 >(&(__Local__106), 0)));
	__Local__107 = 20;
	auto& __Local__108 = (*(AccessPrivateProperty<FGuid >((__Local__72), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__108 = FGuid(0xE800896F, 0x4DFADB3A, 0x392C5E8C, 0x995F564A);
	__Local__2->MovieScene = __Local__72;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__109 = __Local__2->AnimationBindings[0];
	__Local__109.WidgetName = FName(TEXT("TextBlock"));
	__Local__109.AnimationGuid = FGuid(0xBBAC96C1, 0x43A55B9E, 0x480790B2, 0x56DDDE27);
	auto& __Local__110 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__110 = FString(TEXT("FadeInThruth"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__111 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__111 = FGuid(0x2CC85683, 0x412EDB24, 0xD5C21691, 0x99FB54DC);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__112 = NewObject<UMovieScene>(__Local__3, TEXT("FadeInCourage"), (EObjectFlags)0x00280008);
	auto& __Local__113 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__112), UMovieScene::__PPO__Possessables() )));
	__Local__113 = TArray<FMovieScenePossessable> ();
	__Local__113.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__113.GetData(), 2);
	auto& __Local__114 = __Local__113[0];
	auto& __Local__115 = (*(AccessPrivateProperty<FGuid >(&(__Local__114), FMovieScenePossessable::__PPO__Guid() )));
	__Local__115 = FGuid(0x9BAD9738, 0x4DD5B4AD, 0xF880E784, 0xBB32680B);
	auto& __Local__116 = (*(AccessPrivateProperty<FString >(&(__Local__114), FMovieScenePossessable::__PPO__Name() )));
	__Local__116 = FString(TEXT("TextBlock_1"));
	auto& __Local__117 = (*(AccessPrivateProperty<UClass* >(&(__Local__114), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__117 = UTextBlock::StaticClass();
	auto& __Local__118 = __Local__113[1];
	auto& __Local__119 = (*(AccessPrivateProperty<FGuid >(&(__Local__118), FMovieScenePossessable::__PPO__Guid() )));
	__Local__119 = FGuid(0x252199BA, 0x44696310, 0x5E6465B8, 0xECF52F7F);
	auto& __Local__120 = (*(AccessPrivateProperty<FString >(&(__Local__118), FMovieScenePossessable::__PPO__Name() )));
	__Local__120 = FString(TEXT("TextBlock_99"));
	auto& __Local__121 = (*(AccessPrivateProperty<UClass* >(&(__Local__118), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__121 = UTextBlock::StaticClass();
	auto& __Local__122 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__112), UMovieScene::__PPO__ObjectBindings() )));
	__Local__122 = TArray<FMovieSceneBinding> ();
	__Local__122.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__122.GetData(), 2);
	auto& __Local__123 = __Local__122[0];
	auto& __Local__124 = (*(AccessPrivateProperty<FGuid >(&(__Local__123), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__124 = FGuid(0x9BAD9738, 0x4DD5B4AD, 0xF880E784, 0xBB32680B);
	auto& __Local__125 = (*(AccessPrivateProperty<FString >(&(__Local__123), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__125 = FString(TEXT("TextBlock_1"));
	auto& __Local__126 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__123), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__126 = TArray<UMovieSceneTrack*> ();
	__Local__126.Reserve(1);
	auto __Local__127 = NewObject<UMovieSceneFloatTrack>(__Local__112, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__128 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__127), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__128.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__128.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__128.bCanUseClassLookup = true;
	auto& __Local__129 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__127), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__129 = TArray<UMovieSceneSection*> ();
	__Local__129.Reserve(1);
	auto __Local__130 = NewObject<UMovieSceneFloatSection>(__Local__127, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__131 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__130->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__132 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__130->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__131)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__132)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__133 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__130), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__134 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__133), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__134 = TArray<FFrameNumber> ();
	__Local__134.Reserve(3);
	__Local__134.Add(FFrameNumber{});
	__Local__134.Add(FFrameNumber{});
	__Local__134[1].Value = 300000;
	__Local__134.Add(FFrameNumber{});
	__Local__134[2].Value = 360000;
	auto& __Local__135 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__133), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__135 = TArray<FMovieSceneFloatValue> ();
	__Local__135.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__135.GetData(), 3);
	auto& __Local__136 = __Local__135[0];
	auto& __Local__137 = __Local__135[1];
	auto& __Local__138 = __Local__135[2];
	__Local__138.Value = 1.000000f;
	__Local__130->Easing.EaseIn = __Local__131;
	__Local__130->Easing.EaseOut = __Local__132;
	__Local__130->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(561000)));
	auto& __Local__139 = (*(AccessPrivateProperty<FGuid >((__Local__130), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__139 = FGuid(0x4B994780, 0x4207FECB, 0x92561DAC, 0xAEC87C22);
	__Local__129.Add(__Local__130);
	auto& __Local__140 = (*(AccessPrivateProperty<FGuid >((__Local__127), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__140 = FGuid(0xCDBA0A59, 0x45EEC317, 0xB37B1E83, 0xD9515A7F);
	auto& __Local__141 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__127), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__141.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__141.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__141.Entries.GetData(), 1);
	auto& __Local__142 = __Local__141.Entries[0];
	__Local__142.Section = __Local__130;
	auto& __Local__143 = (*(__Local__49->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__142.Range), 0)));
	auto& __Local__144 = (*(__Local__52->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__143), 0)));
	__Local__144 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__145 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__142.Range), 0)));
	auto& __Local__146 = (*(__Local__52->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__145), 0)));
	__Local__146 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__147 = (*(__Local__59->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__145), 0)));
	__Local__147.Value = 561000;
	__Local__142.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__148 = (*(AccessPrivateProperty<FGuid >((__Local__127), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__148 = FGuid(0xCDBA0A59, 0x45EEC317, 0xB37B1E83, 0xD9515A7F);
	__Local__126.Add(__Local__127);
	auto& __Local__149 = __Local__122[1];
	auto& __Local__150 = (*(AccessPrivateProperty<FGuid >(&(__Local__149), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__150 = FGuid(0x252199BA, 0x44696310, 0x5E6465B8, 0xECF52F7F);
	auto& __Local__151 = (*(AccessPrivateProperty<FString >(&(__Local__149), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__151 = FString(TEXT("TextBlock_99"));
	auto& __Local__152 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__149), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__152 = TArray<UMovieSceneTrack*> ();
	__Local__152.Reserve(1);
	auto __Local__153 = NewObject<UMovieSceneFloatTrack>(__Local__112, TEXT("MovieSceneFloatTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__154 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__153), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__154.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__154.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__154.bCanUseClassLookup = true;
	auto& __Local__155 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__153), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__155 = TArray<UMovieSceneSection*> ();
	__Local__155.Reserve(1);
	auto __Local__156 = NewObject<UMovieSceneFloatSection>(__Local__153, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
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
	auto& __Local__159 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__156), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__160 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__159), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__160 = TArray<FFrameNumber> ();
	__Local__160.Reserve(3);
	__Local__160.Add(FFrameNumber{});
	__Local__160.Add(FFrameNumber{});
	__Local__160[1].Value = 420000;
	__Local__160.Add(FFrameNumber{});
	__Local__160[2].Value = 480000;
	auto& __Local__161 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__159), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__161 = TArray<FMovieSceneFloatValue> ();
	__Local__161.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__161.GetData(), 3);
	auto& __Local__162 = __Local__161[0];
	auto& __Local__163 = __Local__161[1];
	auto& __Local__164 = __Local__161[2];
	__Local__164.Value = 1.000000f;
	__Local__156->Easing.EaseIn = __Local__157;
	__Local__156->Easing.EaseOut = __Local__158;
	__Local__156->Easing.bManualEaseOut = true;
	__Local__156->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(483000)));
	auto& __Local__165 = (*(AccessPrivateProperty<FGuid >((__Local__156), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__165 = FGuid(0x4EDBDBEB, 0x4CDBF998, 0x19D925BB, 0x2FF0A472);
	__Local__155.Add(__Local__156);
	auto& __Local__166 = (*(AccessPrivateProperty<FGuid >((__Local__153), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__166 = FGuid(0xA4549B0C, 0x47539C3A, 0x53DAFAB1, 0x67CB9271);
	auto& __Local__167 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__153), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__167.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__167.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__167.Entries.GetData(), 1);
	auto& __Local__168 = __Local__167.Entries[0];
	__Local__168.Section = __Local__156;
	auto& __Local__169 = (*(__Local__49->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__168.Range), 0)));
	auto& __Local__170 = (*(__Local__52->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__169), 0)));
	__Local__170 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__171 = (*(__Local__55->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__168.Range), 0)));
	auto& __Local__172 = (*(__Local__52->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__171), 0)));
	__Local__172 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__173 = (*(__Local__59->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__171), 0)));
	__Local__173.Value = 483000;
	__Local__168.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__174 = (*(AccessPrivateProperty<FGuid >((__Local__153), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__174 = FGuid(0xA4549B0C, 0x47539C3A, 0x53DAFAB1, 0x67CB9271);
	__Local__152.Add(__Local__153);
	auto& __Local__175 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__112), UMovieScene::__PPO__PlaybackRange() )));
	__Local__175 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(561001)));
	auto& __Local__176 = (*(AccessPrivateProperty<FFrameRate >((__Local__112), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__177 = (*(__Local__65->ContainerPtrToValuePtr<int32 >(&(__Local__176), 0)));
	__Local__177 = 20;
	auto& __Local__178 = (*(AccessPrivateProperty<FGuid >((__Local__112), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__178 = FGuid(0xED77EA58, 0x476B6782, 0x84B5DA82, 0x7CBFD3A6);
	__Local__3->MovieScene = __Local__112;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 2);
	auto& __Local__179 = __Local__3->AnimationBindings[0];
	__Local__179.WidgetName = FName(TEXT("TextBlock_1"));
	__Local__179.AnimationGuid = FGuid(0x9BAD9738, 0x4DD5B4AD, 0xF880E784, 0xBB32680B);
	auto& __Local__180 = __Local__3->AnimationBindings[1];
	__Local__180.WidgetName = FName(TEXT("TextBlock_99"));
	__Local__180.AnimationGuid = FGuid(0x252199BA, 0x44696310, 0x5E6465B8, 0xECF52F7F);
	auto& __Local__181 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__181 = FString(TEXT("FadeInCourage"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__182 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__182 = FGuid(0x43C7D56E, 0x4AC65A17, 0xF67B5BA8, 0xD0F52FB3);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
}
PRAGMA_ENABLE_OPTIMIZATION
void UPhraseWB_C__pf372109055::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__183;
	SlotNames.Append(__Local__183);
}
void UPhraseWB_C__pf372109055::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__184;
	__Local__184.Reserve(3);
	__Local__184.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__184.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__184.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->MiscConvertedSubobjects[3]));
	TArray<FDelegateRuntimeBinding>  __Local__185;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UPhraseWB_C__pf372109055::StaticClass())->MiscConvertedSubobjects[0]), __Local__184, __Local__185);
}
void UPhraseWB_C__pf372109055::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UPhraseWB_C__pf372109055::bpf__ExecuteUbergraph_PhraseWB__pf_0(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__FadeInCourage__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
	bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__FadeInThruth__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__FadeInPeople__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
	return; // KCST_GotoReturn
}
void UPhraseWB_C__pf372109055::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_PhraseWB__pf_0(2);
}
PRAGMA_DISABLE_OPTIMIZATION
void UPhraseWB_C__pf372109055::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
void UPhraseWB_C__pf372109055::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{404, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UPhraseWB_C__pf372109055
{
	FRegisterHelper__UPhraseWB_C__pf372109055()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/Phrase/PhraseWB"), &UPhraseWB_C__pf372109055::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UPhraseWB_C__pf372109055 Instance;
};
FRegisterHelper__UPhraseWB_C__pf372109055 FRegisterHelper__UPhraseWB_C__pf372109055::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
