#include "NativizedAssets.h"
#include "BP_Wire01__pf2700416.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Wire01_C__pf2700416::ABP_Wire01_C__pf2700416(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Spline__pf = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__DefaultSceneRoot__pf->Mobility = EComponentMobility::Type::Static;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__Spline__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Spline__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<float >(&(bpv__Spline__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__2 = 0.000000f;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Spline__pf), false, 0));
	bpv__SplinexLength__pfT = 0.000000f;
	bpv__WirexSize__pfT = 1.000000f;
	bpv__Points__pf = 0;
	bpv__Specular__pf = 1.000000f;
	bpv__Roughness__pf = 0.300000f;
	bpv__Color__pf = FLinearColor(0.058824, 0.058824, 0.058824, 1.000000);
	bpv__WirexVar__pfT = 0;
	bpv__Texturexvar__pfT = 0;
	bpv__SplinexMeshxVar__pfTT = 0;
	bpv__Spacing__pf = 200.000000f;
	bpv__TangentxScale__pfT = 200.000000f;
	bpv__DirtxColor__pfT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__Color2__pf = FLinearColor(0.230000, 0.230000, 0.230000, 1.000000);
	bpv__Conponentx1__pfT = nullptr;
	bpv__M1__pf = nullptr;
	bpv__M2__pf = nullptr;
	auto& __Local__3 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__3 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Wire01_C__pf2700416::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Spline__pf)
	{
		bpv__Spline__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Wire01_C__pf2700416::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__4 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-1"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	auto __Local__6 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-2"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__6);
	auto __Local__7 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-4"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__7);
	auto __Local__8 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-5"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__8);
	auto __Local__9 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-6"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__9);
	auto __Local__10 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-7"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__10);
	auto __Local__11 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-8"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__11);
	auto __Local__12 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-9"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__12);
	auto __Local__13 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-10"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__13);
	auto __Local__14 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-11"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__14);
	auto __Local__15 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-12"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__15);
	__Local__4->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__16 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__4), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__16 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__17 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__17 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__18 = (*(AccessPrivateProperty<FName >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__18 = FName(TEXT("BlockAll"));
	auto& __Local__19 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__19), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__20 = TArray<FResponseChannel> ();
	static TWeakFieldPtr<FProperty> __Local__22{};
	const FProperty* __Local__21 = __Local__22.Get();
	if (nullptr == __Local__21)
	{
		__Local__21 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__21);
		__Local__22 = __Local__21;
	}
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__4), true, 0));
	__Local__5->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__23 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__5), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__23 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__24 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__5->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__24 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__25 = (*(AccessPrivateProperty<FName >(&(__Local__5->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__25 = FName(TEXT("BlockAll"));
	auto& __Local__26 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__5->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__26), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__27 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__5), true, 0));
	__Local__6->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__28 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__6), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__28 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__29 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__6->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__29 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__30 = (*(AccessPrivateProperty<FName >(&(__Local__6->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__30 = FName(TEXT("BlockAll"));
	auto& __Local__31 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__6->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__31), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__32 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__6), true, 0));
	__Local__7->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__33 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__7), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__33 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__34 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__7->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__34 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__35 = (*(AccessPrivateProperty<FName >(&(__Local__7->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__35 = FName(TEXT("BlockAll"));
	auto& __Local__36 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__7->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__36), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__37 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__7), true, 0));
	__Local__8->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__38 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__8), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__38 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__39 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__8->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__39 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__40 = (*(AccessPrivateProperty<FName >(&(__Local__8->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__40 = FName(TEXT("BlockAll"));
	auto& __Local__41 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__8->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__41), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__42 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__8), true, 0));
	__Local__9->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__43 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__9), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__43 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__44 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__9->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__44 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__45 = (*(AccessPrivateProperty<FName >(&(__Local__9->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__45 = FName(TEXT("BlockAll"));
	auto& __Local__46 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__9->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__46), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__47 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__9), true, 0));
	__Local__10->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__48 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__10), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__48 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__49 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__10->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__49 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__50 = (*(AccessPrivateProperty<FName >(&(__Local__10->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__50 = FName(TEXT("BlockAll"));
	auto& __Local__51 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__10->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__52 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__51), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__52 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__10), true, 0));
	__Local__11->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__53 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__11), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__53 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__54 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__11->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__54 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__55 = (*(AccessPrivateProperty<FName >(&(__Local__11->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__55 = FName(TEXT("BlockAll"));
	auto& __Local__56 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__11->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__56), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__57 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__11), true, 0));
	__Local__12->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__58 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__12), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__58 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	auto& __Local__59 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__12->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__59 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__60 = (*(AccessPrivateProperty<FName >(&(__Local__12->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__60 = FName(TEXT("BlockAll"));
	auto& __Local__61 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__12->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__62 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__61), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__62 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__12), true, 0));
	__Local__13->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__63 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__13), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__63 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__64 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__13->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__64 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__65 = (*(AccessPrivateProperty<FName >(&(__Local__13->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__65 = FName(TEXT("BlockAll"));
	auto& __Local__66 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__13->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__66), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__67 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__13), true, 0));
	__Local__14->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__68 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__14), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__68 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__69 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__14->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__69 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__70 = (*(AccessPrivateProperty<FName >(&(__Local__14->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__70 = FName(TEXT("BlockAll"));
	auto& __Local__71 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__14->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__72 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__71), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__72 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__14), true, 0));
	__Local__15->ForwardAxis = ESplineMeshAxis::Type::Z;
	auto& __Local__73 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__15), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__73 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	auto& __Local__74 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__15->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__74 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__75 = (*(AccessPrivateProperty<FName >(&(__Local__15->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__75 = FName(TEXT("BlockAll"));
	auto& __Local__76 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__15->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__76), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__77 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__15), true, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Wire01_C__pf2700416::bpf__UserConstructionScript__pf()
{
	FTransform bpfv__Temp_struct_Variable__pf{};
	FTransform bpfv__Temp_struct_Variable_1__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_1__pf{};
	FTransform bpfv__Temp_struct_Variable_2__pf{};
	FTransform bpfv__Temp_struct_Variable_3__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_2__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_3__pf{};
	FTransform bpfv__Temp_struct_Variable_4__pf{};
	FTransform bpfv__Temp_struct_Variable_5__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_4__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_5__pf{};
	FTransform bpfv__Temp_struct_Variable_6__pf{};
	FTransform bpfv__Temp_struct_Variable_7__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_6__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_7__pf{};
	FTransform bpfv__Temp_struct_Variable_8__pf{};
	FTransform bpfv__Temp_struct_Variable_9__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_8__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_9__pf{};
	FTransform bpfv__Temp_struct_Variable_10__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_10__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf(EForceInit::ForceInit);
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf{};
	float bpfv__CallFunc_GetSplineLength_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf{};
	float bpfv__CallFunc_FMod_Remainder__pf{};
	int32 bpfv__CallFunc_FMod_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	FTransform bpfv__Temp_struct_Variable_11__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue_11__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__Conponentx1__pfT = ((USplineMeshComponent*)nullptr);
			}
		case 2:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__SplinexMeshxVar__pfTT, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__SplinexMeshxVar__pfTT, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 3:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 4:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetNumberOfSplinePoints();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf, 2);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				__StateStack.Push(36);
			}
		case 6:
			{
				bpv__Points__pf = bpfv__Temp_int_Variable__pf;
			}
		case 7:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 37;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 39;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 41;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 43;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 45;
					break;
				}
			}
		case 8:
			{
				bpfv__Temp_struct_Variable_11__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_11__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-0")), false, bpfv__Temp_struct_Variable_11__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 9:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_11__pf;
			}
		case 10:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::GetLocationAndTangentAtSplinePoint(bpv__Points__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf, ESplineCoordinateSpace::Local);
				}
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Points__pf, 1);
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::GetLocationAndTangentAtSplinePoint(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf, ESplineCoordinateSpace::Local);
				}
				if(::IsValid(bpv__Conponentx1__pfT))
				{
					bpv__Conponentx1__pfT->USplineMeshComponent::SetStartAndEnd(bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf, true);
				}
			}
		case 11:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(bpv__WirexSize__pfT, bpv__WirexSize__pfT);
				if(::IsValid(bpv__Conponentx1__pfT))
				{
					bpv__Conponentx1__pfT->USplineMeshComponent::SetStartScale(bpfv__CallFunc_MakeVector2D_ReturnValue__pf, true);
				}
			}
		case 12:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(bpv__WirexSize__pfT, bpv__WirexSize__pfT);
				if(::IsValid(bpv__Conponentx1__pfT))
				{
					bpv__Conponentx1__pfT->USplineMeshComponent::SetEndScale(bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf, true);
				}
			}
		case 13:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 14:
			{
				bpv__M1__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 15:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 16:
			{
				bpv__M2__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf;
			}
		case 17:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 18;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 18;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 18;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 47;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 47;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_4__pf)
				{
					__CurrentState = 47;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpv__Conponentx1__pfT))
				{
					bpv__Conponentx1__pfT->SetMaterial(0, bpv__M1__pf);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("diffuse color")), bpv__Color__pf);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("spec")), bpv__Specular__pf);
				}
				if(::IsValid(bpv__M2__pf))
				{
					bpv__M2__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("spec")), bpv__Specular__pf);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Roughness")), bpv__Roughness__pf);
				}
				if(::IsValid(bpv__M2__pf))
				{
					bpv__M2__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Roughness")), bpv__Roughness__pf);
				}
			}
		case 22:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("additional diffuse color")), bpv__DirtxColor__pfT);
				}
				if(::IsValid(bpv__M2__pf))
				{
					bpv__M2__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("additional diffuse color")), bpv__DirtxColor__pfT);
				}
			}
		case 23:
			{
				if(::IsValid(bpv__M2__pf))
				{
					bpv__M2__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("diffuse color")), bpv__Color2__pf);
				}
			}
		case 24:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Texturexvar__pfT, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 25;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Texturexvar__pfT, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 49;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Texturexvar__pfT, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 25:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Diffuse")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
				}
				if(::IsValid(bpv__M2__pf))
				{
					bpv__M2__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Diffuse")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
				}
			}
		case 26:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Normal")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
				}
				if(::IsValid(bpv__M2__pf))
				{
					bpv__M2__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Normal")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
				}
			}
		case 27:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("SRMH")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
				}
				if(::IsValid(bpv__M2__pf))
				{
					bpv__M2__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("SRMH")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpfv__Temp_int_Variable_1__pf = 0;
			}
		case 29:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetSplineLength_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetSplineLength();
				}
				bpfv__CallFunc_FMod_ReturnValue__pf = UKismetMathLibrary::FMod(bpfv__CallFunc_GetSplineLength_ReturnValue__pf, bpv__Spacing__pf, /*out*/ bpfv__CallFunc_FMod_Remainder__pf);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable_1__pf, bpfv__CallFunc_FMod_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				__StateStack.Push(35);
			}
		case 31:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 32;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 55;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 57;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 59;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 61;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__WirexVar__pfT, 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_3__pf)
				{
					__CurrentState = 63;
					break;
				}
			}
		case 32:
			{
				bpfv__Temp_struct_Variable_2__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_2__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-4")), false, bpfv__Temp_struct_Variable_2__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 33:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_2__pf;
			}
		case 34:
			{
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__Temp_int_Variable_1__pf, bpv__Spacing__pf);
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetDirectionAtDistanceAlongSpline(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, ESplineCoordinateSpace::Local);
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue__pf, bpv__TangentxScale__pfT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpv__Spacing__pf);
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1__pf = bpv__Spline__pf->USplineComponent::GetDirectionAtDistanceAlongSpline(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, ESplineCoordinateSpace::Local);
				}
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetLocationAtDistanceAlongSpline(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, ESplineCoordinateSpace::Local);
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1__pf, bpv__TangentxScale__pfT);
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1__pf = bpv__Spline__pf->USplineComponent::GetLocationAtDistanceAlongSpline(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, ESplineCoordinateSpace::Local);
				}
				if(::IsValid(bpv__Conponentx1__pfT))
				{
					bpv__Conponentx1__pfT->USplineMeshComponent::SetStartAndEnd(bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf, true);
				}
				__CurrentState = 11;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable_1__pf, 1);
				bpfv__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 29;
				break;
			}
		case 36:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 4;
				break;
			}
		case 37:
			{
				bpfv__Temp_struct_Variable__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-1")), false, bpfv__Temp_struct_Variable__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 38:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue__pf;
				__CurrentState = 10;
				break;
			}
		case 39:
			{
				bpfv__Temp_struct_Variable_1__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_1__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-2")), false, bpfv__Temp_struct_Variable_1__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 40:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_1__pf;
				__CurrentState = 10;
				break;
			}
		case 41:
			{
				bpfv__Temp_struct_Variable_5__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_5__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-7")), false, bpfv__Temp_struct_Variable_5__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 42:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_5__pf;
				__CurrentState = 10;
				break;
			}
		case 43:
			{
				bpfv__Temp_struct_Variable_6__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_6__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-8")), false, bpfv__Temp_struct_Variable_6__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 44:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_6__pf;
				__CurrentState = 10;
				break;
			}
		case 45:
			{
				bpfv__Temp_struct_Variable_7__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_7__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-9")), false, bpfv__Temp_struct_Variable_7__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 46:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_7__pf;
				__CurrentState = 10;
				break;
			}
		case 47:
			{
				if(::IsValid(bpv__Conponentx1__pfT))
				{
					bpv__Conponentx1__pfT->SetMaterial(1, bpv__M2__pf);
				}
			}
		case 48:
			{
				if(::IsValid(bpv__Conponentx1__pfT))
				{
					bpv__Conponentx1__pfT->SetMaterial(0, bpv__M1__pf);
				}
				__CurrentState = 19;
				break;
			}
		case 49:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Diffuse")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
				}
			}
		case 50:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Normal")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
				}
			}
		case 51:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("SRMH")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Diffuse")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
				}
			}
		case 53:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Normal")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
				}
			}
		case 54:
			{
				if(::IsValid(bpv__M1__pf))
				{
					bpv__M1__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("SRMH")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_Wire01_C__pf2700416::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				bpfv__Temp_struct_Variable_3__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_3__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-5")), false, bpfv__Temp_struct_Variable_3__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 56:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_3__pf;
				__CurrentState = 34;
				break;
			}
		case 57:
			{
				bpfv__Temp_struct_Variable_4__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_4__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-6")), false, bpfv__Temp_struct_Variable_4__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 58:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_4__pf;
				__CurrentState = 34;
				break;
			}
		case 59:
			{
				bpfv__Temp_struct_Variable_8__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_8__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-10")), false, bpfv__Temp_struct_Variable_8__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 60:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_8__pf;
				__CurrentState = 34;
				break;
			}
		case 61:
			{
				bpfv__Temp_struct_Variable_9__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_9__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-11")), false, bpfv__Temp_struct_Variable_9__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 62:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_9__pf;
				__CurrentState = 34;
				break;
			}
		case 63:
			{
				bpfv__Temp_struct_Variable_10__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue_10__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-12")), false, bpfv__Temp_struct_Variable_10__pf, this, false), ECastCheckedType::NullAllowed);
			}
		case 64:
			{
				bpv__Conponentx1__pfT = bpfv__CallFunc_AddComponent_ReturnValue_10__pf;
				__CurrentState = 34;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Wire01_C__pf2700416::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{838, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ScienceLab/Meshes/Wire/SM_Wire01.SM_Wire01 
		{839, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ScienceLab/Meshes/Wire/SM_Wire02.SM_Wire02 
		{840, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ScienceLab/Meshes/Wire/SM_Wire03.SM_Wire03 
		{841, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ScienceLab/Meshes/Wire/SM_Wire04.SM_Wire04 
		{842, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ScienceLab/Meshes/Wire/SM_Wire05.SM_Wire05 
		{843, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ScienceLab/Meshes/Wire/SM_Wire06.SM_Wire06 
		{844, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ScienceLab/Materials/Blueprint/MI_Wire.MI_Wire 
		{845, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ScienceLab/Textures/BaseTextures/T_BW_D.T_BW_D 
		{846, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ScienceLab/Textures/BaseTextures/T_B_N.T_B_N 
		{847, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ScienceLab/Textures/BaseTextures/T_BG_D.T_BG_D 
		{848, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ScienceLab/Textures/Blueprint/T_Wire01_D.T_Wire01_D 
		{849, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ScienceLab/Textures/Blueprint/T_Wire01_N.T_Wire01_N 
		{850, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ScienceLab/Textures/Blueprint/T_Wire01_SRM.T_Wire01_SRM 
		{851, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ScienceLab/Textures/Blueprint/T_Wire02_D.T_Wire02_D 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Wire01_C__pf2700416::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{852, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineComponent 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{853, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Wire01_C__pf2700416
{
	FRegisterHelper__ABP_Wire01_C__pf2700416()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ScienceLab/Blueprints/BP_Wire01"), &ABP_Wire01_C__pf2700416::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Wire01_C__pf2700416 Instance;
};
FRegisterHelper__ABP_Wire01_C__pf2700416 FRegisterHelper__ABP_Wire01_C__pf2700416::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
