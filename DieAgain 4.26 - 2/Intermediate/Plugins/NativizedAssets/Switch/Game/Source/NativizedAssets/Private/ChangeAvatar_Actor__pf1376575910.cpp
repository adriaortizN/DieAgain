#include "NativizedAssets.h"
#include "ChangeAvatar_Actor__pf1376575910.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
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
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
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
#include "Runtime/MovieScene/Public/MovieScene.h"
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
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Avatar_MainMenuAnimBP_Hara__pf1376575910.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Avatar_MainMenuAnimBPCyber__pf1376575910.h"
#include "Avatar_MainMenuAnimBP_Robot__pf1376575910.h"
#include "Avatar_MainMenuAnimBP__pf1376575910.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AChangeAvatar_Actor_C__pf1376575910::AChangeAvatar_Actor_C__pf1376575910(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__SkeletalMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	bpv__MaskMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MaskMesh"));
	bpv__Capa__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Capa"));
	bpv__SM_Hara_horn__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Hara_horn"));
	bpv__Knight_Helmet__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Helmet"));
	bpv__Knight_Glove__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Glove"));
	bpv__Knight_Cape__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Cape"));
	bpv__Knight_BodySkirt__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_BodySkirt"));
	bpv__Knight_Pants__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Pants"));
	bpv__Knight_Head__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Head"));
	bpv__CyberMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CyberMesh"));
	bpv__AstroMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AstroMesh"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkeletalMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SkeletalMesh__pf->AnimClass = UAvatar_MainMenuAnimBP_Hara_C__pf1376575910::StaticClass();
	bpv__SkeletalMesh__pf->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->bSkipKinematicUpdateWhenInterpolating = true;
	bpv__SkeletalMesh__pf->bSkipBoundsUpdateWhenInterpolating = true;
	bpv__SkeletalMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__SkeletalMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
	bpv__SkeletalMesh__pf->bEnableUpdateRateOptimizations = true;
	bpv__SkeletalMesh__pf->CastShadow = false;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SkeletalMesh__pf), false, 0));
	bpv__MaskMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MaskMesh__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("head"));
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__MaskMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__MaskMesh__pf->CastShadow = false;
	bpv__MaskMesh__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__MaskMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(-164.999969, 3.355237, -0.000007);
	auto& __Local__4 = (*(AccessPrivateProperty<FRotator >((bpv__MaskMesh__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__4 = FRotator(-90.000000, -3.981689, 3.981707);
	static TWeakFieldPtr<FProperty> __Local__6{};
	const FProperty* __Local__5 = __Local__6.Get();
	if (nullptr == __Local__5)
	{
		__Local__5 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__5);
		__Local__6 = __Local__5;
	}
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__MaskMesh__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__MaskMesh__pf), true, 0));
	bpv__Capa__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Capa__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("head"));
	bpv__Capa__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Capa__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Capa__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Capa__pf->bReceivesDecals = false;
	bpv__Capa__pf->CastShadow = false;
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__Capa__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(-164.372116, 0.000083, 14.380970);
	auto& __Local__8 = (*(AccessPrivateProperty<FRotator >((bpv__Capa__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__8 = FRotator(-84.999916, 179.999969, -180.000000);
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Capa__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Capa__pf), false, 0));
	bpv__SM_Hara_horn__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SM_Hara_horn__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("head"));
	auto& __Local__9 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SM_Hara_horn__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__9 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__11{};
	const FProperty* __Local__10 = __Local__11.Get();
	if (nullptr == __Local__10)
	{
		__Local__10 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__10);
		__Local__11 = __Local__10;
	}
	(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((bpv__SM_Hara_horn__pf), false, 0));
	bpv__SM_Hara_horn__pf->CastShadow = false;
	bpv__SM_Hara_horn__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__SM_Hara_horn__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(0.000000, -0.000099, 0.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((bpv__SM_Hara_horn__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__13 = FRotator(-84.999451, 539.999939, -180.000000);
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__SM_Hara_horn__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SM_Hara_horn__pf), false, 0));
	bpv__Knight_Helmet__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Helmet__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Helmet__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__14 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Helmet__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Helmet__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__Knight_Helmet__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Knight_Helmet__pf->CastShadow = false;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Knight_Helmet__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Knight_Helmet__pf), false, 0));
	bpv__Knight_Glove__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Glove__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Glove__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__15 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Glove__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Glove__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Knight_Glove__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Knight_Glove__pf->CastShadow = false;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Knight_Glove__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Knight_Glove__pf), false, 0));
	bpv__Knight_Cape__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Cape__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__16 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Cape__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__16 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Cape__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Cape__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__Knight_Cape__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Knight_Cape__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Knight_Cape__pf->OverrideMaterials.Reserve(2);
	bpv__Knight_Cape__pf->OverrideMaterials.Add(nullptr);
	bpv__Knight_Cape__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__Knight_Cape__pf->CastShadow = false;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Knight_Cape__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Knight_Cape__pf), false, 0));
	bpv__Knight_BodySkirt__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_BodySkirt__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_BodySkirt__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__17 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_BodySkirt__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_BodySkirt__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__Knight_BodySkirt__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Knight_BodySkirt__pf->CastShadow = false;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Knight_BodySkirt__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Knight_BodySkirt__pf), false, 0));
	bpv__Knight_Pants__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Pants__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Pants__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__18 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Pants__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Pants__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__Knight_Pants__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Knight_Pants__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Knight_Pants__pf->OverrideMaterials.Reserve(1);
	bpv__Knight_Pants__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
	bpv__Knight_Pants__pf->CastShadow = false;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Knight_Pants__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Knight_Pants__pf), false, 0));
	bpv__Knight_Head__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Head__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Head__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__19 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Head__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Head__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	bpv__Knight_Head__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Knight_Head__pf->CastShadow = false;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Knight_Head__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Knight_Head__pf), false, 0));
	bpv__CyberMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__CyberMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__CyberMesh__pf->AnimClass = UAvatar_MainMenuAnimBPCyber_C__pf1376575910::StaticClass();
	bpv__CyberMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__CyberMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	bpv__CyberMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__CyberMesh__pf->CastShadow = false;
	auto& __Local__20 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__CyberMesh__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__20 = ECollisionChannel::ECC_Pawn;
	auto& __Local__21 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__CyberMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__21 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__22 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__CyberMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__22), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__23 = TArray<FResponseChannel> ();
	__Local__23.AddUninitialized(3);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__23.GetData(), 3);
	auto& __Local__24 = __Local__23[0];
	__Local__24.Channel = FName(TEXT("Visibility"));
	__Local__24.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__25 = __Local__23[1];
	__Local__25.Channel = FName(TEXT("Pawn"));
	__Local__25.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__26 = __Local__23[2];
	__Local__26.Channel = FName(TEXT("Vehicle"));
	__Local__26.Response = ECollisionResponse::ECR_Ignore;
	bpv__CyberMesh__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__CyberMesh__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__27 = FVector(1.100000, 1.100000, 1.100000);
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__CyberMesh__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__CyberMesh__pf), false, 0));
	bpv__AstroMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__AstroMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__AstroMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__AstroMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	bpv__AstroMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__AstroMesh__pf->CastShadow = false;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__AstroMesh__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__AstroMesh__pf), false, 0));
	bpv__IsMale__pf = false;
	bpv__IsRobot__pf = false;
	bpv__IsDemon__pf = false;
	bpv__IsKnight__pf = false;
	bpv__IsCyber__pf = false;
	bpv__IsAstro__pf = false;
	auto& __Local__28 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__28 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AChangeAvatar_Actor_C__pf1376575910::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SkeletalMesh__pf)
	{
		bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MaskMesh__pf)
	{
		bpv__MaskMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Capa__pf)
	{
		bpv__Capa__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SM_Hara_horn__pf)
	{
		bpv__SM_Hara_horn__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Helmet__pf)
	{
		bpv__Knight_Helmet__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Glove__pf)
	{
		bpv__Knight_Glove__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Cape__pf)
	{
		bpv__Knight_Cape__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_BodySkirt__pf)
	{
		bpv__Knight_BodySkirt__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Pants__pf)
	{
		bpv__Knight_Pants__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Head__pf)
	{
		bpv__Knight_Head__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__CyberMesh__pf)
	{
		bpv__CyberMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AstroMesh__pf)
	{
		bpv__AstroMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AChangeAvatar_Actor_C__pf1376575910::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UAvatar_MainMenuAnimBP_Hara_C__pf1376575910::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UAvatar_MainMenuAnimBPCyber_C__pf1376575910::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UAvatar_MainMenuAnimBP_C__pf1376575910::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void AChangeAvatar_Actor_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatar_Actor__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsMale__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__CyberMesh__pf))
				{
					bpv__CyberMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 3:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpv__MaskMesh__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__Capa__pf))
				{
					bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__SM_Hara_horn__pf))
				{
					bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), true);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USkeletalMeshComponent::SetAnimationMode(EAnimationMode::AnimationSingleNode);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USkeletalMeshComponent::PlayAnimation(CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), true);
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				if (!bpv__IsRobot__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpv__CyberMesh__pf))
				{
					bpv__CyberMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpv__MaskMesh__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 12:
			{
				if(::IsValid(bpv__Capa__pf))
				{
					bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__SM_Hara_horn__pf))
				{
					bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed), true);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass());
				}
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				if (!bpv__IsDemon__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(bpv__CyberMesh__pf))
				{
					bpv__CyberMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpv__MaskMesh__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__Capa__pf))
				{
					bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__SM_Hara_horn__pf))
				{
					bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), true);
				}
			}
		case 22:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UAvatar_MainMenuAnimBP_Hara_C__pf1376575910::StaticClass());
				}
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				if (!bpv__IsKnight__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 24:
			{
				if(::IsValid(bpv__CyberMesh__pf))
				{
					bpv__CyberMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 25:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpv__MaskMesh__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 26:
			{
				if(::IsValid(bpv__Capa__pf))
				{
					bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 27:
			{
				if(::IsValid(bpv__SM_Hara_horn__pf))
				{
					bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), true);
				}
			}
		case 29:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UAvatar_MainMenuAnimBP_C__pf1376575910::StaticClass());
				}
			}
		case 30:
			{
				if(::IsValid(bpv__Knight_Pants__pf))
				{
					bpv__Knight_Pants__pf->USceneComponent::SetVisibility(true, false);
				}
				if(::IsValid(bpv__Knight_Helmet__pf))
				{
					bpv__Knight_Helmet__pf->USceneComponent::SetVisibility(true, false);
				}
				if(::IsValid(bpv__Knight_Head__pf))
				{
					bpv__Knight_Head__pf->USceneComponent::SetVisibility(true, false);
				}
				if(::IsValid(bpv__Knight_Glove__pf))
				{
					bpv__Knight_Glove__pf->USceneComponent::SetVisibility(true, false);
				}
				if(::IsValid(bpv__Knight_Cape__pf))
				{
					bpv__Knight_Cape__pf->USceneComponent::SetVisibility(true, false);
				}
				if(::IsValid(bpv__Knight_BodySkirt__pf))
				{
					bpv__Knight_BodySkirt__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 31:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 32:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 33:
			{
				if(::IsValid(bpv__Knight_Helmet__pf))
				{
					bpv__Knight_Helmet__pf->USkinnedMeshComponent::SetMasterPoseComponent(bpv__SkeletalMesh__pf, false);
				}
				if(::IsValid(bpv__Knight_Head__pf))
				{
					bpv__Knight_Head__pf->USkinnedMeshComponent::SetMasterPoseComponent(bpv__SkeletalMesh__pf, false);
				}
				if(::IsValid(bpv__Knight_Glove__pf))
				{
					bpv__Knight_Glove__pf->USkinnedMeshComponent::SetMasterPoseComponent(bpv__SkeletalMesh__pf, false);
				}
				if(::IsValid(bpv__Knight_Pants__pf))
				{
					bpv__Knight_Pants__pf->USkinnedMeshComponent::SetMasterPoseComponent(bpv__SkeletalMesh__pf, false);
				}
				if(::IsValid(bpv__Knight_BodySkirt__pf))
				{
					bpv__Knight_BodySkirt__pf->USkinnedMeshComponent::SetMasterPoseComponent(bpv__SkeletalMesh__pf, false);
				}
				if(::IsValid(bpv__Knight_Cape__pf))
				{
					bpv__Knight_Cape__pf->USkinnedMeshComponent::SetMasterPoseComponent(bpv__SkeletalMesh__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				if (!bpv__IsCyber__pf)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 35:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpv__MaskMesh__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 36:
			{
				if(::IsValid(bpv__Capa__pf))
				{
					bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 37:
			{
				if(::IsValid(bpv__SM_Hara_horn__pf))
				{
					bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 38:
			{
				if(::IsValid(bpv__CyberMesh__pf))
				{
					bpv__CyberMesh__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 39:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 40:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpv__MaskMesh__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-165.250534,1.147400,-11.356000), FRotator(-86.000999,29.497807,-27.376200), false, /*out*/ b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, true);
				}
			}
		case 41:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__MaskMesh__pf->USceneComponent::K2_AttachToComponent(bpv__CyberMesh__pf, FName(TEXT("head")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				if (!bpv__IsAstro__pf)
				{
					__CurrentState = 53;
					break;
				}
			}
		case 43:
			{
				if(::IsValid(bpv__AstroMesh__pf))
				{
					bpv__AstroMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 44:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpv__MaskMesh__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 45:
			{
				if(::IsValid(bpv__Capa__pf))
				{
					bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 46:
			{
				if(::IsValid(bpv__SM_Hara_horn__pf))
				{
					bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 47:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), true);
				}
			}
		case 48:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UAvatar_MainMenuAnimBP_C__pf1376575910::StaticClass());
				}
			}
		case 49:
			{
				if(::IsValid(bpv__AstroMesh__pf))
				{
					bpv__AstroMesh__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 50:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 51:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 52:
			{
				if(::IsValid(bpv__AstroMesh__pf))
				{
					bpv__AstroMesh__pf->USkinnedMeshComponent::SetMasterPoseComponent(bpv__SkeletalMesh__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 53:
			{
				if(::IsValid(bpv__CyberMesh__pf))
				{
					bpv__CyberMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 54:
			{
				if(::IsValid(bpv__MaskMesh__pf))
				{
					bpv__MaskMesh__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 55:
			{
				if(::IsValid(bpv__Capa__pf))
				{
					bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 56:
			{
				if(::IsValid(bpv__SM_Hara_horn__pf))
				{
					bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 57:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AChangeAvatar_Actor_C__pf1376575910::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), true);
				}
			}
		case 58:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UAvatar_MainMenuAnimBP_C__pf1376575910::StaticClass());
				}
				__CurrentState = -1;
				break;
			}
		case 59:
			{
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChangeAvatar_Actor_C__pf1376575910::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatar_Actor__pf_0(59);
}
PRAGMA_DISABLE_OPTIMIZATION
void AChangeAvatar_Actor_C__pf1376575910::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{353, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Running_Robot.Running_Robot 
		{233, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Hara/Meshes/SM_Hara.SM_Hara 
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Post_Apoca_Character/Mesh/GasMask_StaticMesh.GasMask_StaticMesh 
		{339, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/SciFi_Robot/MESHES/CLOAK_SK.CLOAK_SK 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Hara/Meshes/SM_Hara_horn.SM_Hara_horn 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Helmet.SK_GothicKnight_Helmet 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Glove.SK_GothicKnight_Glove 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_CapeFur.SK_GothicKnight_CapeFur 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/GKnight/Materials/CustomizationExample/MI_GKnightCape.MI_GKnightCape 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_BodySkirtLong.SK_GothicKnight_BodySkirtLong 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Pants.SK_GothicKnight_Pants 
		{1024, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/GKnight/Materials/MI_GKnight_Pants.MI_GKnight_Pants 
		{219, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Head.SK_GothicKnight_Head 
		{221, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/CyberGirl/Character/Meshes/Skin01/SK_CyberGirl_Skin01.SK_CyberGirl_Skin01 
		{222, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Astro/astrorig.astrorig 
		{230, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Post_Apoca_Character/Mesh/SK_Full.SK_Full 
		{320, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/DanceMoves_Anim_PostApoc.DanceMoves_Anim_PostApoc 
		{231, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/SciFi_Robot/MESHES/SCIFI_ROBOT_IK_SK.SCIFI_ROBOT_IK_SK 
		{245, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Transparent/Transparent_MATInst.Transparent_MATInst 
		{232, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Apocalypse_Girl/Mesh/SK_Apocalypse_Girl_Full.SK_Apocalypse_Girl_Full 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AChangeAvatar_Actor_C__pf1376575910::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{48, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{244, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkinnedMeshComponent 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{359, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Post_Apoca_Character/AnimDemoScene/Mesh/UE4_Mannequin_Skeleton_GOOD.UE4_Mannequin_Skeleton_GOOD 
		{251, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{250, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{253, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{254, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{255, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{256, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{259, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{321, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Running_Anim_PostApoc.Running_Anim_PostApoc 
		{323, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Idle_Anim_PostApoc.Idle_Anim_PostApoc 
		{350, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/SciFi_Robot/Mannequin/Character/Mesh/UE4_Robot_Mannequin_Skeleton.UE4_Robot_Mannequin_Skeleton 
		{352, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/DanceMoves_Robot.DanceMoves_Robot 
		{355, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle2_Robot.Idle2_Robot 
		{618, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/CyberGirl/Character/Meshes/SKL_CyberGirl.SKL_CyberGirl 
		{1023, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_Run.A_Run 
		{345, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_Pose03.A_Pose03 
		{620, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_BattleIdle.A_BattleIdle 
		{363, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Hara/Meshes/SK_Hara_Skeleton.SK_Hara_Skeleton 
		{366, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_Run.Anim_Run 
		{365, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Hara_Anim/WalkMap/DanceMoves_Hara.DanceMoves_Hara 
		{367, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_IdleF.Anim_IdleF 
		{1021, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_Cutepose.Anim_Cutepose 
		{1022, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_Thinking.Anim_Thinking 
		{1025, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Hara.Avatar_MainMenuAnimBP_Hara_C 
		{1026, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBPCyber.Avatar_MainMenuAnimBPCyber_C 
		{1027, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C 
		{1028, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP.Avatar_MainMenuAnimBP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AChangeAvatar_Actor_C__pf1376575910
{
	FRegisterHelper__AChangeAvatar_Actor_C__pf1376575910()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/ChangeAvatar/ChangeAvatar_Actor"), &AChangeAvatar_Actor_C__pf1376575910::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AChangeAvatar_Actor_C__pf1376575910 Instance;
};
FRegisterHelper__AChangeAvatar_Actor_C__pf1376575910 FRegisterHelper__AChangeAvatar_Actor_C__pf1376575910::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
