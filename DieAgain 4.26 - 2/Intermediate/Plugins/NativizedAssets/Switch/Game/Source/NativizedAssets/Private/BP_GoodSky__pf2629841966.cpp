#include "NativizedAssets.h"
#include "BP_GoodSky__pf2629841966.h"
#include "GeneratedCodeHelpers.h"
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
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/DirectionalLight.h"
#include "Runtime/Engine/Classes/Engine/Light.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Structure_GoodSky__pf3844941297.h"
#include "Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_GoodSky_C__pf2629841966::ABP_GoodSky_C__pf2629841966(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__ArrowTool__pf = CreateDefaultSubobject<USceneComponent>(TEXT("ArrowTool"));
	bpv__SunRiseArrow_Group__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("SunRiseArrow_Group"));
	bpv__TextRender__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
	bpv__NowTime_Arrow_Group__pf = CreateDefaultSubobject<USceneComponent>(TEXT("NowTime_Arrow_Group"));
	bpv__SkyxRing__pfT = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sky Ring"));
	bpv__NOW_Arrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("NOW_Arrow"));
	bpv__Mesh_Group__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Mesh_Group"));
	bpv__StarMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StarMesh"));
	bpv__SunSphere_Group__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SunSphere_Group"));
	bpv__SunMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SunMesh"));
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
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__3 = FVector(790.000000, 790.000000, 790.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMesh__pf), true, 0));
	bpv__ArrowTool__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArrowTool__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArrowTool__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ArrowTool__pf), false, 0));
	bpv__SunRiseArrow_Group__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SunRiseArrow_Group__pf->AttachToComponent(bpv__ArrowTool__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SunRiseArrow_Group__pf->ArrowSize = 0.701896f;
	bpv__SunRiseArrow_Group__pf->bIsScreenSizeScaled = true;
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__SunRiseArrow_Group__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__4 = FVector(50.000000, 1.000000, 1.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SunRiseArrow_Group__pf), false, 0));
	bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TextRender__pf->AttachToComponent(bpv__SunRiseArrow_Group__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TextRender__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[595CD8BF411A2434EA9D5590E7CA9205]\", \"B2071A4248208863D38126B005399BB5\", \"     Sun Rise In The East\")")	);
	bpv__TextRender__pf->TextRenderColor = FColor(255, 0, 0, 255);
	bpv__TextRender__pf->WorldSize = 148.457001f;
	bpv__TextRender__pf->HorizSpacingAdjust = 9.501857f;
	auto& __Local__5 = (*(AccessPrivateProperty<FRotator >((bpv__TextRender__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__5 = FRotator(0.000000, 90.000053, 0.000000);
	bpv__TextRender__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TextRender__pf), false, 0));
	bpv__NowTime_Arrow_Group__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__NowTime_Arrow_Group__pf->AttachToComponent(bpv__ArrowTool__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__NowTime_Arrow_Group__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__NowTime_Arrow_Group__pf), false, 0));
	bpv__SkyxRing__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkyxRing__pfT->AttachToComponent(bpv__NowTime_Arrow_Group__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SkyxRing__pfT), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__6 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__SkyxRing__pfT->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__SkyxRing__pfT->OverrideMaterials.Reserve(1);
	bpv__SkyxRing__pfT->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	auto& __Local__7 = (*(AccessPrivateProperty<FRotator >((bpv__SkyxRing__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__7 = FRotator(0.000669, 179.999115, 89.999680);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__SkyxRing__pfT), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__8 = FVector(3.000000, 3.000000, 3.000000);
	bpv__SkyxRing__pfT->bHiddenInGame = true;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SkyxRing__pfT), true, 0));
	bpv__NOW_Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__NOW_Arrow__pf->AttachToComponent(bpv__NowTime_Arrow_Group__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__NOW_Arrow__pf->ArrowColor = FColor(254, 255, 254, 255);
	bpv__NOW_Arrow__pf->ArrowSize = 1.314636f;
	auto& __Local__9 = (*(AccessPrivateProperty<FRotator >((bpv__NOW_Arrow__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__9 = FRotator(-0.000321, 89.999100, 89.999298);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__NOW_Arrow__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__10 = FVector(1.000000, 1.000000, 1.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__NOW_Arrow__pf), false, 0));
	bpv__Mesh_Group__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Mesh_Group__pf->AttachToComponent(bpv__NowTime_Arrow_Group__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Mesh_Group__pf), false, 0));
	bpv__StarMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StarMesh__pf->AttachToComponent(bpv__Mesh_Group__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StarMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__11 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__StarMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(-0.000004, -0.000000, -141.339020);
	auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((bpv__StarMesh__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__13 = FRotator(0.000000, 89.999977, 0.000000);
	static TWeakFieldPtr<FProperty> __Local__15{};
	const FProperty* __Local__14 = __Local__15.Get();
	if (nullptr == __Local__14)
	{
		__Local__14 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__14);
		__Local__15 = __Local__14;
	}
	(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((bpv__StarMesh__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StarMesh__pf), true, 0));
	bpv__SunSphere_Group__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SunSphere_Group__pf->AttachToComponent(bpv__Mesh_Group__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SunSphere_Group__pf), false, 0));
	bpv__SunMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SunMesh__pf->AttachToComponent(bpv__SunSphere_Group__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__16 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SunMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__16 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__SunMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__SunMesh__pf->OverrideMaterials.Reserve(1);
	bpv__SunMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__SunMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(169.999985, 0.000000, 0.000031);
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__SunMesh__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__18 = FVector(0.400000, 0.400000, 0.400000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SunMesh__pf), true, 0));
	bpv__RefreshxSkyxShaderxxForxdirectionxactorxx__pfTTLTTTTK = false;
	bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK = nullptr;
	bpv__EnablexAutoxDayxxxNightxCyclexInxGamex__pfTTTETTTTzy = false;
	bpv__xxHowxlongxisxaxdayxinxthexgamexxxxUnitxxxMinutexx__pfJbxTTTTTTTTzyTLTT3TTK = 1.000000f;
	bpv__EnablexTimexofxDay__pfTTT = true;
	bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 0.000000f;
	bpv__SkyPreset__pf = E__Enum_GoodSky_Preset__pf::NewEnumerator4;
	bpv__SkyCloudsStyle__pf = E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator0;
	bpv__SkyCloudsCoveragePreset__pf = E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator0;
	bpv__Curve_BaseCloudColor__pf = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__Curve_BackGroundHorizonColor__pf = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__Curve_DomeColor__pf = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__Curve_AllOverlayColor__pf = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__Curve_StarsTime__pf = CastChecked<UCurveFloat>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpv__Curve_SunDirection__pf = CastChecked<UCurveVector>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	bpv__SkyMaterial__pf = nullptr;
	bpv__SelectSkyName__pf = FName();
	bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
	bpv__SkyMesh__pf = E__Enum_GoodSky_MeshType__pf::NewEnumerator0;
	bpv__UseRandomTimexxForxCustomxModexx__pfLTTTTK = false;
	bpv__UsexAllxRandom__pfTT = false;
	bpv__GlobalxTexturexMovexSpeedx__pfTTTT = 1.000000f;
	bpv__GlobalxOverlayxColor__pfTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__GlobalxHorizonxFogxFalloff__pfTTT = 1.000000f;
	bpv__CloudsxBehindxEffectxIntensity__pfTTT = 1.000000f;
	bpv__MoonxOverlayxColor__pfTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__MoonxSize__pfT = 1.000000f;
	bpv__MoonxBrightness__pfT = 1.000000f;
	bpv__MoonxMove__pfT = 0.000000f;
	bpv__SunxSize__pfT = 1.000000f;
	bpv__SunxBrightness__pfT = 1.000000f;
	bpv__StarsxOverlayxxColor__pfTTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__StarsxBrightness__pfT = 1.000000f;
	bpv__StarsxUVTile__pfT = 1.000000f;
	bpv__StarsxFalloffxIntensity__pfTT = 0.000000f;
	bpv__LightningxBrightness__pfT = 1.000000f;
	bpv__Curve_SunLight__pf = CastChecked<UCurveFloat>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	bpv__LightningxOverlayxColor__pfTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__GetxPresentxTimexofxDay__pfTTTT = 0.000000f;
	bpv__MoonxEclipsexIntensity__pfTT = 0;
	bpv__xxMoonxEclipsexOffset__pfBbxTTT = 0.200000f;
	bpv__xxMoonxEclipsexRotator__pfJbxTTT = 0.000000f;
	bpv__ArrowToolxxHiddenxInxGame__pfTTTT = true;
	bpv__GetxRotatorxToxTimexofxDay__pfTTTTT = 0.000000f;
	bpv__TempxTimexofxDay__pfTTT = 0.000000f;
	bpv__GetxPresentxRotator__pfTT = FRotator(0.000000, 0.000000, 0.000000);
	bpv__EastxxxWestx__pfTETT = 1.000000f;
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__19 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__19 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_GoodSky_C__pf2629841966::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArrowTool__pf)
	{
		bpv__ArrowTool__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SunRiseArrow_Group__pf)
	{
		bpv__SunRiseArrow_Group__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TextRender__pf)
	{
		bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__NowTime_Arrow_Group__pf)
	{
		bpv__NowTime_Arrow_Group__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SkyxRing__pfT)
	{
		bpv__SkyxRing__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__NOW_Arrow__pf)
	{
		bpv__NOW_Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Mesh_Group__pf)
	{
		bpv__Mesh_Group__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StarMesh__pf)
	{
		bpv__StarMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SunSphere_Group__pf)
	{
		bpv__SunSphere_Group__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SunMesh__pf)
	{
		bpv__SunMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_GoodSky_C__pf2629841966::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_MeshType.Enum_GoodSky_MeshType")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Preset.Enum_GoodSky_Preset")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects.Enum_GoodSky_Effects")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds.Enum_GoodSky_Style_Clouds")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Clouds_Coverage.Enum_GoodSky_Clouds_Coverage")));
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FStructure_GoodSky__pf3844941297();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FStructure_GoodSky__pf3844941297());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_GoodSky_C__pf2629841966::bpf__ExecuteUbergraph_BP_GoodSky__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf = UGameplayStatics::GetRealTimeSeconds(this);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(0.400000, bpv__xxHowxlongxisxaxdayxinxthexgamexxxxUnitxxxMinutexx__pfJbxTTTTTTTTzyTLTT3TTK);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, -15.000000);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 360.000000);
				UKismetMathLibrary::BreakRotator(bpv__GetxPresentxRotator__pfTT, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf, bpv__EastxxxWestx__pfTETT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(b0l__CallFunc_BreakRotator_Roll__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, b0l__CallFunc_BreakRotator_Yaw__pf);
				if(::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK))
				{
					bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK->AActor::K2_SetActorRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false);
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf = UGameplayStatics::GetRealTimeSeconds(this);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(0.400000, bpv__xxHowxlongxisxaxdayxinxthexgamexxxxUnitxxxMinutexx__pfJbxTTTTTTTTzyTLTT3TTK);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, -15.000000);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 360.000000);
				UKismetMathLibrary::BreakRotator(bpv__GetxPresentxRotator__pfTT, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf, bpv__EastxxxWestx__pfTETT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__EastxxxWestx__pfTETT);
				bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf = UKismetMathLibrary::MapRangeUnclamped(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, 0.000000, -180.000000, 6.000000, 18.000000);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf, 24.000000);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				bpv__GetxRotatorxToxTimexofxDay__pfTTTTT = bpfv__CallFunc_Abs_ReturnValue__pf;
			}
		case 4:
			{
				bpf__Init__pf();
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf = UGameplayStatics::GetRealTimeSeconds(this);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(0.400000, bpv__xxHowxlongxisxaxdayxinxthexgamexxxxUnitxxxMinutexx__pfJbxTTTTTTTTzyTLTT3TTK);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__GetxPresentxTimexofxDay__pfTTTT, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 6:
			{
				__CurrentState = 4;
				break;
			}
		case 16:
			{
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_GoodSky_C__pf2629841966::bpf__ExecuteUbergraph_BP_GoodSky__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 7:
			{
				if (!bpv__EnablexAutoxDayxxxNightxCyclexInxGamex__pfTTTETTTTzy)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 8:
			{
				AActor::SetActorTickEnabled(true);
			}
		case 9:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK))
				{
					bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK->AActor::K2_GetActorRotation();
				}
				bpv__GetxPresentxRotator__pfTT = bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf;
			}
		case 11:
			{
				if(::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK))
				{
					bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK->AActor::K2_GetActorRotation();
				}
				bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_RotatorToVector(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(b0l__CallFunc_BreakVector_X__pf, -0.001000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 12:
			{
				bpv__EastxxxWestx__pfTETT = 1.000000;
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				AActor::SetActorTickEnabled(false);
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpv__GetxPresentxTimexofxDay__pfTTTT = bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK;
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				bpv__EastxxxWestx__pfTETT = -1.000000;
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_GoodSky_C__pf2629841966::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_GoodSky__pf_1(17);
}
void ABP_GoodSky_C__pf2629841966::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_GoodSky__pf_0(16);
}
void ABP_GoodSky_C__pf2629841966::bpf__GoodSkyxRealtimexUpdate__pfTT()
{
	bpf__ExecuteUbergraph_BP_GoodSky__pf_0(6);
}
void ABP_GoodSky_C__pf2629841966::bpf__UserConstructionScript__pf()
{
	bpf__Init__pf();
}
void ABP_GoodSky_C__pf2629841966::bpf__GetxSkyxPresetsxDataTable__pfTTT(FName bpp__Name__pf)
{
	FStructure_GoodSky__pf3844941297 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(CastChecked<UDataTable>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed), bpp__Name__pf, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 2:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Global Time Speed")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Global_GlobalTimeSpeed_230_85696CD6479B05C1B365EEBC2D13AA5E__pf);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Global Desaturation Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Global_GlobalDesaturationIntensity_254_853055FE4274ED4891DB6FAB9E07B9ED__pf);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Global Overlay Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__GlobalGlobalOverlayColor_144_B7F58EC84AD34B34C74DBBAB9E3C2F46__pf);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Global TimeFloat Input")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__GlobalTimeFloatInput_145_78F9E4244346905926690AB3513D5917__pf);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Zenith Area Falloff Intensity ")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__BackgroundZenithAreaFalloffIntensity_146_471229CF4C31C8E0ABB93096315A7C69__pf);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Background Overlay Color ")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__BackgroundBackgroundOverlaycolor_222_004689DD48226FF20E11E5985A83F0CF__pf);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Background Horizon Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__BackgroundBackgroundHorizonColor_224_8A5C82DC4930BBEA0C4D6385F4149D68__pf);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Background SkyDome Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__BackgroundSkyDomeColor_227_7BAE59164E040A633CF2C58B2FE3A2A6__pf);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("All Clouds Overlay Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsAllCloudsOverlaycolor_221_02E3AE3340BD2B4A6278E5B96B8CA139__pf);
				}
			}
		case 12:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Falloff Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsAllCloudsFalloffIntensity_152_FCF09CA7436F7DAD3ED007B5E6DB562C__pf);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Main Clouds  Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsMainCloudIntensity_153_DC5A030348C555879A7C7CBBD39F1622__pf);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Main Clouds Falloff Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsMainFalloffIntensity_154_AD48590B4899E584DA8A52AF01A4A29F__pf);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Second Clouds Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsSecondCloudIntensity_155_20EEA3854D48CF611003FF8F4D6C5A20__pf);
				}
			}
		case 16:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Second Clouds Falloff Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsSecondFalloffIntensity_156_04F6B25749468AF57D46378D23F7C529__pf);
				}
			}
		case 17:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Third Clouds Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsThirdCloudsIntensity_157_8C1C189244390DB0EE1524A982C53206__pf);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Detail Clouds Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsDetailCloudsColor_158_211005B54CF06D93B1B0AE95330E86C7__pf);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Detail Clouds Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__CloudsDetailCloudsIntensity_159_63A3078C41472D3CF538DB85501E29E1__pf);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseSun")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_UseSun_160_032921CA48E2728FB7228E8A34D8F554__pf);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Self Radius")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_SunSelfRadius_161_87093D6C4DA2BE7DC32F0D99B25BE69C__pf);
				}
			}
		case 22:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Self Birghtness Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_SunSelfBrightnessIntensity_162_942EE01C443ECF657371899C814B6B52__pf);
				}
			}
		case 23:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun Self Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_SunSelfcolor_163_53683D4846E9616DC5DD7397AC4D63BB__pf);
				}
			}
		case 24:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun Glow Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_SunGlowColor_164_066E4AFC4D91C82EDEF7609EB6CE45F4__pf);
				}
			}
		case 25:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Glow Birghtness Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_SunGlowBrightnessIntensity_165_E08622354562A48652BCDAB86E746C17__pf);
				}
			}
		case 26:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Glow Area Smooth")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_SunGlowAreaSmooth_166_A9DACC7B414171061BBAB89A6FD2D205__pf);
				}
			}
		case 27:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Glow Radius")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_SunGlowRadius_167_27A63B6D4CFFB071A7ECDFBCC8ABEF06__pf);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseBackLit (Depend ON Sun Position)")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_UseSunBackLight_168_A405BD47493E6CC685BF7E990484B2A2__pf);
				}
			}
		case 29:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Back Lit Brightness Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_BackLitBrightnessColor_219_753364BD45426E11718519BA3B883BD8__pf);
				}
			}
		case 30:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Back Lit Darkness Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_BackLitDarknessColor_220_01A6A39A4463CFE9EF8DD38BA9453C9B__pf);
				}
			}
		case 31:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Back Lit Effect Radius")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_BackLitEffectRadius_171_F4B0CB344838F15BCB2CB4ABBEEBDD7D__pf);
				}
			}
		case 32:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Back Lit Effect Radius Hardness")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_BackLitEffectRadiusHardness_172_71411F8F48FDF8B3FFE246853DB27A5A__pf);
				}
			}
		case 33:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Backlit Zenith Falloff Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Sun_BackLitZenithAreaFalloffIntensity_173_217809F94DEED70A9EE72C8099FB9690__pf);
				}
			}
		case 34:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseMoon")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Moon_UseMoon_175_CA2920B140AFF37C9BF7209D955AAD76__pf);
				}
			}
		case 35:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon All Scale Amount")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Moon_MoonAllScaleAmount_176_A9C9D5BF4286E2D137890F8C110D6ABE__pf);
				}
			}
		case 36:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Moon Overlay Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Moon_MoonOverlayColor_177_339E2F7B425C9333C47E1CAA4F2803A6__pf);
				}
			}
		case 37:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Self Glow")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Moon_MoonSelfGlow_178_F803F19D4FBE18C08B64499D8753EF86__pf);
				}
			}
		case 38:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Self Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Moon_MoonSelfIntensity_179_1B7B8CBA4A8D1B0EDF769FA497CDB567__pf);
				}
			}
		case 39:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Glow Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Moon_MoonGlowIntensity_180_7CDF12604C6AC6B48D651FB1A490D968__pf);
				}
			}
		case 40:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Glow Scale")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Moon_MoonGlowScale_182_2B115CDC400127973C1DA2BA0853A1B1__pf);
				}
			}
		case 41:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Self Scale")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Moon_MoonSelfScale_181_44270A204B8041E87EDA86A96FF49436__pf);
				}
			}
		case 42:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseStar")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__StarUseStar_189_D8785F484CA88012389287AE4C79C41C__pf);
				}
			}
		case 43:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Star Overlay Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Star_StarOverlayColor_191_EFDAB24F414FBB8CA50B46A079800AB8__pf);
				}
			}
		case 44:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Star Brightness Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Star_StarBrightnessIntensity_192_7CCC46F040C7F78AB02A7D89FEBF8CE5__pf);
				}
			}
		case 45:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Star Area Falloff Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Star_StarAreaFalloffIntensity_193_82253AD942C0AA6DAE8929893619F1DD__pf);
				}
			}
		case 46:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Star Falloff Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Star_StarFalloffIntensity_256_9292C18C49D6ACF8C31215845B391770__pf);
				}
			}
		case 47:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Star UVTile Amount")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Star_StarRepeatUVAmount_195_139DBB924FD38DEF4B5B2FB9418272AE__pf);
				}
			}
		case 48:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseLightning")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Storm_UseLightning_207_770FF77743C9A83B29EA29A56F914DDE__pf);
				}
			}
		case 49:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Lightning Color")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Storm_LightningColor_209_1FBD829C4FBA38D79F5CB8B39BDD207C__pf);
				}
			}
		case 50:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Lightning Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Storm_LightningIntensity_210_08478FB3445782F741B973A747309FB9__pf);
				}
			}
		case 51:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Lightning Area Falloff Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Storm_LightningAreaFalloffIntensity_211_5D19969A4ED838C8C8340ABCC7382D33__pf);
				}
			}
		case 52:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Lightning Add Clouds Brightness Intensity")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Storm_LightningAddCloudsBrightnessIntensity_226_0C780FF04294BEA516B648B9357FD9E9__pf);
				}
			}
		case 53:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Lightning Scale")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Storm_LightningScale_213_9DF6CBCD457AB8A1BC48688182ACF45A__pf);
				}
			}
		case 54:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Lightdirection_255_3990A5554EF0CA7C78DBA5AECA1E11EB__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_GoodSky_C__pf2629841966::bpf__UsexAllxRandomxSky__pfTTT()
{
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__UsexAllxRandom__pfTT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__SkyPreset__pf = E__Enum_GoodSky_Preset__pf::NewEnumerator4;
			}
		case 3:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 23.000000);
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomIntegerInRange(0, 3);
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 9;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 10;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator0;
			}
		case 6:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf = UKismetMathLibrary::RandomIntegerInRange(0, 5);
				bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 12;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 7;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 13;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 14;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf, 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 15;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf, 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_2__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 7:
			{
				bpv__SkyCloudsCoveragePreset__pf = E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator0;
			}
		case 8:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, 3);
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 17;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 19;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
				__CurrentState = 6;
				break;
			}
		case 10:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator1;
				__CurrentState = 6;
				break;
			}
		case 11:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator2;
				__CurrentState = 6;
				break;
			}
		case 12:
			{
				bpv__SkyCloudsCoveragePreset__pf = E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator3;
				__CurrentState = 8;
				break;
			}
		case 13:
			{
				bpv__SkyCloudsCoveragePreset__pf = E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator1;
				__CurrentState = 8;
				break;
			}
		case 14:
			{
				bpv__SkyCloudsCoveragePreset__pf = E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator2;
				__CurrentState = 8;
				break;
			}
		case 15:
			{
				bpv__SkyCloudsCoveragePreset__pf = E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator4;
				__CurrentState = 8;
				break;
			}
		case 16:
			{
				bpv__SkyCloudsCoveragePreset__pf = E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator5;
				__CurrentState = 8;
				break;
			}
		case 17:
			{
				bpv__SkyCloudsStyle__pf = E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator0;
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpv__SkyCloudsStyle__pf = E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator3;
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpv__SkyCloudsStyle__pf = E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator1;
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				bpv__SkyCloudsStyle__pf = E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator2;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_GoodSky_C__pf2629841966::bpf__Init__pf()
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	float bpfv__CallFunc_GetFloatValue_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetVectorValue_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_4__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf{};
	float bpfv__CallFunc_GetFloatValue_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_5__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_6__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_7__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_8__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_9__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_10__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_11__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_12__pf{};
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf{};
	FLinearColor bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_4__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_2__pf{};
	FLinearColor bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf{};
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_3__pf{};
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_4__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_4__pf{};
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_5__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_6__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_6__pf{};
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_7__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_7__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_8__pf{};
	float bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_8__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_9__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_13__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf{};
	float bpfv__CallFunc_GetFloatValue_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_GetVectorValue_ReturnValue_1__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_5__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetFloatValue_ReturnValue_3__pf{};
	FLinearColor bpfv__CallFunc_GetLinearColorValue_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_GetLinearColorValue_ReturnValue_1__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_GetLinearColorValue_ReturnValue_2__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_GetLinearColorValue_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__RefreshxSkyxShaderxxForxdirectionxactorxx__pfTTLTTTTK)
				{
					__CurrentState = 2;
					break;
				}
			}
		case 2:
			{
				bpv__RefreshxSkyxShaderxxForxdirectionxactorxx__pfTTLTTTTK = false;
			}
		case 3:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyMesh__pf), static_cast<uint8>(E__Enum_GoodSky_MeshType__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyMesh__pf), static_cast<uint8>(E__Enum_GoodSky_MeshType__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 10;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpv__StaticMesh__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
				}
			}
		case 5:
			{
				if (!bpv__UsexAllxRandom__pfTT)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				bpf__UsexAllxRandomxSky__pfTTT();
			}
		case 7:
			{
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 8:
			{
				bpv__SkyPreset__pf = E__Enum_GoodSky_Preset__pf::NewEnumerator4;
			}
		case 9:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 11;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 92;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator16));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 94;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 96;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 98;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 100;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 107;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator7));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 112;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator14));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 117;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator11));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 120;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 125;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator8));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 128;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator17));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 131;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator21));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 136;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator18));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 139;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator20));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 142;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator19));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 145;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator9));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 148;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator15));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 163;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator13));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 164;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator10));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 165;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator22));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 166;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyPreset__pf), static_cast<uint8>(E__Enum_GoodSky_Preset__pf::NewEnumerator23));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 167;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf = bpv__StaticMesh__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 5;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 81;
					break;
				}
			}
		case 12:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 13:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 14:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 15:
			{
				if(::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK))
				{
					bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf = bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK->AActor::K2_GetActorRotation();
				}
				bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_RotatorToVector(bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf);
				}
			}
		case 16:
			{
				bpv__EnablexTimexofxDay__pfTTT = false;
			}
		case 17:
			{
				if(::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK))
				{
					bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK->AActor::K2_GetActorRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf = UKismetMathLibrary::MapRangeUnclamped(bpfv__CallFunc_BreakRotator_Pitch__pf, 0.000000, -90.000000, 6.000000, 12.000000);
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf;
			}
		case 18:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK, 24.000000);
				if(::IsValid(bpv__Curve_AllOverlayColor__pf))
				{
					bpfv__CallFunc_GetLinearColorValue_ReturnValue_3__pf = bpv__Curve_AllOverlayColor__pf->GetLinearColorValue(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				}
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Curve_AllOverlayColor")), bpfv__CallFunc_GetLinearColorValue_ReturnValue_3__pf);
				}
			}
		case 19:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK, 24.000000);
				if(::IsValid(bpv__Curve_DomeColor__pf))
				{
					bpfv__CallFunc_GetLinearColorValue_ReturnValue_2__pf = bpv__Curve_DomeColor__pf->GetLinearColorValue(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				}
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Curve_BackGroundSkyDomeColor")), bpfv__CallFunc_GetLinearColorValue_ReturnValue_2__pf);
				}
			}
		case 20:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK, 24.000000);
				if(::IsValid(bpv__Curve_BackGroundHorizonColor__pf))
				{
					bpfv__CallFunc_GetLinearColorValue_ReturnValue_1__pf = bpv__Curve_BackGroundHorizonColor__pf->GetLinearColorValue(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				}
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Curve_BackGroundHorizonColor")), bpfv__CallFunc_GetLinearColorValue_ReturnValue_1__pf);
				}
			}
		case 21:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK, 24.000000);
				if(::IsValid(bpv__Curve_BaseCloudColor__pf))
				{
					bpfv__CallFunc_GetLinearColorValue_ReturnValue__pf = bpv__Curve_BaseCloudColor__pf->GetLinearColorValue(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				}
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Curve_BaseCloudColorAndIntensity")), bpfv__CallFunc_GetLinearColorValue_ReturnValue__pf);
				}
			}
		case 22:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Global TimeFloat Input")), bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				}
			}
		case 23:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK, 24.000000);
				if(::IsValid(bpv__Curve_StarsTime__pf))
				{
					bpfv__CallFunc_GetFloatValue_ReturnValue_3__pf = bpv__Curve_StarsTime__pf->UCurveFloat::GetFloatValue(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				}
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseStar")), bpfv__CallFunc_GetFloatValue_ReturnValue_3__pf);
				}
			}
		case 24:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 79;
					break;
				}
			}
		case 25:
			{
				bpv__UseRandomTimexxForxCustomxModexx__pfLTTTTK = false;
			}
		case 26:
			{
				bpv__UsexAllxRandom__pfTT = false;
			}
		case 27:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Global Time Speed")), bpv__GlobalxTexturexMovexSpeedx__pfTTTT);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Global Overlay Color BP")), bpv__GlobalxOverlayxColor__pfTT);
				}
			}
		case 29:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_8__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Zenith Area Falloff Intensity ")));
				}
			}
		case 30:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_9__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_8__pf, bpv__GlobalxHorizonxFogxFalloff__pfTTT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Zenith Area Falloff Intensity ")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_9__pf);
				}
			}
		case 31:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Global Clouds Behind Effect Intensity")), bpv__CloudsxBehindxEffectxIntensity__pfTTT);
				}
			}
		case 32:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_7__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Sun Self Radius")));
				}
			}
		case 33:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_8__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_7__pf, bpv__SunxSize__pfT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Self Radius")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_8__pf);
				}
			}
		case 34:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_6__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Star UVTile Amount")));
				}
			}
		case 35:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_6__pf, bpv__StarsxUVTile__pfT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Star UVTile Amount")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_7__pf);
				}
			}
		case 36:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_5__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Star Falloff Intensity")));
				}
			}
		case 37:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_5__pf, bpv__StarsxFalloffxIntensity__pfTT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Star Falloff Intensity")), bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				}
			}
		case 38:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_4__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Star Brightness Intensity")));
				}
			}
		case 39:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_4__pf, bpv__StarsxBrightness__pfT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Star Brightness Intensity")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_6__pf);
				}
			}
		case 40:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_3__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Sun Self Birghtness Intensity")));
				}
			}
		case 41:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_3__pf, bpv__SunxBrightness__pfT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Self Birghtness Intensity")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_5__pf);
				}
			}
		case 42:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue_2__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetVectorParameterValue(FName(TEXT("Star Overlay Color")));
				}
			}
		case 43:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpv__StarsxOverlayxxColor__pfTTT);
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_5__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue_2__pf);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_5__pf, bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_4__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Multiply_VectorVector_ReturnValue_2__pf);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Star Overlay Color")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_4__pf);
				}
			}
		case 44:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_2__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Moon All Scale Amount")));
				}
			}
		case 45:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_2__pf, bpv__MoonxSize__pfT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon All Scale Amount")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf);
				}
			}
		case 46:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_1__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Moon Self Intensity")));
				}
			}
		case 47:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue_1__pf, bpv__MoonxBrightness__pfT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Self Intensity")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf);
				}
			}
		case 48:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Move X")), bpv__MoonxMove__pfT);
				}
			}
		case 49:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue_1__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetVectorParameterValue(FName(TEXT("Moon Overlay Color")));
				}
			}
		case 50:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpv__MoonxOverlayxColor__pfTT);
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_4__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue_1__pf);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_4__pf, bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_3__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Moon Overlay Color")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_3__pf);
				}
			}
		case 51:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__MoonxEclipsexIntensity__pfTT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Eclipse Intensity")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 52:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Eclipse Offset")), bpv__xxMoonxEclipsexOffset__pfBbxTTT);
				}
			}
		case 53:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Moon Eclipse Rotator")), bpv__xxMoonxEclipsexRotator__pfJbxTTT);
				}
			}
		case 54:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName(TEXT("Lightning Intensity")));
				}
			}
		case 55:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_K2_GetScalarParameterValue_ReturnValue__pf, bpv__LightningxBrightness__pfT);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Lightning Intensity")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
				}
			}
		case 56:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue__pf = bpv__SkyMaterial__pf->UMaterialInstanceDynamic::K2_GetVectorParameterValue(FName(TEXT("Lightning Color")));
				}
			}
		case 57:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpv__LightningxOverlayxColor__pfTT);
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_3__pf, bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Lightning Color")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf);
				}
			}
		case 58:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsStyle__pf), static_cast<uint8>(E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 77;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsStyle__pf), static_cast<uint8>(E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 59;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsStyle__pf), static_cast<uint8>(E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 168;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsStyle__pf), static_cast<uint8>(E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 170;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 59:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Main Clouds Textures A")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
				}
			}
		case 60:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsCoveragePreset__pf), static_cast<uint8>(E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 61;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsCoveragePreset__pf), static_cast<uint8>(E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 66;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsCoveragePreset__pf), static_cast<uint8>(E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 172;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsCoveragePreset__pf), static_cast<uint8>(E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 176;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsCoveragePreset__pf), static_cast<uint8>(E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 180;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyCloudsCoveragePreset__pf), static_cast<uint8>(E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 185;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 61:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Main Clouds Falloff Intensity")), 0.800000);
				}
			}
		case 62:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Second Clouds Falloff Intensity")), 0.800000);
				}
			}
		case 63:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Third Clouds  Intensity")), 0.250000);
				}
			}
		case 64:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Falloff Intensity")), 0.950000);
				}
			}
		case 65:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Intensity")), 1.100000);
				}
			}
		case 66:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__xxDirectionalxlightxactorxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = 67;
					break;
				}
			}
		case 67:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK, 24.000000);
				bpv__TempxTimexofxDay__pfTTT = bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf;
			}
		case 68:
			{
				if(::IsValid(bpv__ArrowTool__pf))
				{
					bpv__ArrowTool__pf->USceneComponent::K2_SetWorldRotation(FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 69:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__TempxTimexofxDay__pfTTT, 15.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 90.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 0.000000);
				if(::IsValid(bpv__NOW_Arrow__pf))
				{
					bpv__NOW_Arrow__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf, false);
				}
			}
		case 70:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 71;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 186;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 71;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 71;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 71:
			{
				if(::IsValid(bpv__Mesh_Group__pf))
				{
					bpv__Mesh_Group__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 72:
			{
				if(::IsValid(bpv__SunRiseArrow_Group__pf))
				{
					bpv__SunRiseArrow_Group__pf->USceneComponent::K2_SetRelativeLocation(FVector(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
			}
		case 73:
			{
				if(::IsValid(bpv__SunRiseArrow_Group__pf))
				{
					bpv__SunRiseArrow_Group__pf->USceneComponent::K2_SetWorldRotation(FRotator(0.000000,-180.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult_1__pf, false);
				}
			}
		case 74:
			{
				if (!bpv__ArrowToolxxHiddenxInxGame__pfTTTT)
				{
					__CurrentState = 76;
					break;
				}
			}
		case 75:
			{
				if(::IsValid(bpv__ArrowTool__pf))
				{
					bpv__ArrowTool__pf->USceneComponent::SetHiddenInGame(true, true);
				}
				__CurrentState = -1;
				break;
			}
		case 76:
			{
				if(::IsValid(bpv__ArrowTool__pf))
				{
					bpv__ArrowTool__pf->USceneComponent::SetHiddenInGame(false, true);
				}
				__CurrentState = -1;
				break;
			}
		case 77:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Main Clouds Textures A")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 78:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Second Clouds Textures B")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 60;
				break;
			}
		case 79:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK, 24.000000);
				if(::IsValid(bpv__Curve_SunDirection__pf))
				{
					bpfv__CallFunc_GetVectorValue_ReturnValue_1__pf = bpv__Curve_SunDirection__pf->UCurveVector::GetVectorValue(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				}
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_5__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_GetVectorValue_ReturnValue_1__pf);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_5__pf);
				}
			}
		case 80:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK, 24.000000);
				if(::IsValid(bpv__Curve_SunLight__pf))
				{
					bpfv__CallFunc_GetFloatValue_ReturnValue_2__pf = bpv__Curve_SunLight__pf->UCurveFloat::GetFloatValue(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				}
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Curve Light Intensity")), bpfv__CallFunc_GetFloatValue_ReturnValue_2__pf);
				}
				__CurrentState = 25;
				break;
			}
		case 81:
			{
				if (!bpv__UseRandomTimexxForxCustomxModexx__pfLTTTTK)
				{
					__CurrentState = 83;
					break;
				}
			}
		case 82:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 23.000000);
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf;
			}
		case 83:
			{
				bpv__EnablexTimexofxDay__pfTTT = true;
			}
		case 84:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 90;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 88;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 85;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 192;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_6__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 86:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_6__pf;
			}
		case 87:
			{
				if (!bpv__EnablexTimexofxDay__pfTTT)
				{
					__CurrentState = 25;
					break;
				}
				__CurrentState = 18;
				break;
			}
		case 88:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_7__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 89:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_7__pf;
				__CurrentState = 87;
				break;
			}
		case 90:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_13__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 91:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_13__pf;
				__CurrentState = 87;
				break;
			}
		case 92:
			{
				bpv__EnablexTimexofxDay__pfTTT = true;
			}
		case 93:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 0.000000;
				__CurrentState = 83;
				break;
			}
		case 94:
			{
				bpv__EnablexTimexofxDay__pfTTT = true;
			}
		case 95:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 6.000000;
				__CurrentState = 83;
				break;
			}
		case 96:
			{
				bpv__EnablexTimexofxDay__pfTTT = true;
			}
		case 97:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 12.000000;
				__CurrentState = 83;
				break;
			}
		case 98:
			{
				bpv__EnablexTimexofxDay__pfTTT = true;
			}
		case 99:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 18.000000;
				__CurrentState = 83;
				break;
			}
		case 100:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 0.000000;
			}
		case 101:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator2;
			}
		case 102:
			{
				bpv__SelectSkyName__pf = FName(TEXT("MidnightStorm"));
			}
		case 103:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_12__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 104:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_12__pf;
			}
		case 105:
			{
				bpv__EnablexTimexofxDay__pfTTT = false;
			}
		case 106:
			{
				bpf__GetxSkyxPresetsxDataTable__pfTTT(bpv__SelectSkyName__pf);
				__CurrentState = 87;
				break;
			}
		case 107:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 0.000000;
			}
		case 108:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 109:
			{
				bpv__SelectSkyName__pf = FName(TEXT("MidnightStars"));
			}
		case 110:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_11__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 111:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_11__pf;
				__CurrentState = 105;
				break;
			}
		case 112:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 0.000000;
			}
		case 113:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator1;
			}
		case 114:
			{
				bpv__SelectSkyName__pf = FName(TEXT("MidnightMoon"));
			}
		case 115:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_10__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 116:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_10__pf;
				__CurrentState = 105;
				break;
			}
		case 117:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 0.000000;
			}
		case 118:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator1;
			}
		case 119:
			{
				bpv__SelectSkyName__pf = FName(TEXT("MidnightBloodMoon"));
				__CurrentState = 115;
				break;
			}
		case 120:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 12.000000;
			}
		case 121:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 122:
			{
				bpv__SelectSkyName__pf = FName(TEXT("NoonClearSky"));
			}
		case 123:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_9__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 124:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_9__pf;
				__CurrentState = 105;
				break;
			}
		case 125:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 18.000000;
			}
		case 126:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 127:
			{
				bpv__SelectSkyName__pf = FName(TEXT("SunSetInBurn"));
				__CurrentState = 123;
				break;
			}
		case 128:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 18.000000;
			}
		case 129:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 130:
			{
				bpv__SelectSkyName__pf = FName(TEXT("SunSetSmoothly"));
				__CurrentState = 123;
				break;
			}
		case 131:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 12.000000;
			}
		case 132:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 133:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleUE4DefaultSky"));
			}
		case 134:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_8__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 135:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_8__pf;
				__CurrentState = 105;
				break;
			}
		case 136:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 9.000000;
			}
		case 137:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 138:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleUDKMorningSky"));
				__CurrentState = 134;
				break;
			}
		case 139:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 12.000000;
			}
		case 140:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 141:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleUDKNoonSky"));
				__CurrentState = 134;
				break;
			}
		case 142:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 15.000000;
			}
		case 143:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 144:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleUDKAfternoonSky"));
				__CurrentState = 134;
				break;
			}
		case 145:
			{
				bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK = 0.000000;
			}
		case 146:
			{
				bpv__SkyEffect__pf = E__Enum_GoodSky_Effects__pf::NewEnumerator3;
			}
		case 147:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleUDKNightSky"));
				__CurrentState = 134;
				break;
			}
		case 148:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleCold"));
			}
		case 149:
			{
				bpv__EnablexTimexofxDay__pfTTT = false;
			}
		case 150:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 161;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 159;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 157;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SkyEffect__pf), static_cast<uint8>(E__Enum_GoodSky_Effects__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 151;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 151:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 152:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf;
			}
		case 153:
			{
				bpf__GetxSkyxPresetsxDataTable__pfTTT(bpv__SelectSkyName__pf);
			}
		case 154:
			{
				if(::IsValid(bpv__Curve_SunDirection__pf))
				{
					bpfv__CallFunc_GetVectorValue_ReturnValue__pf = bpv__Curve_SunDirection__pf->UCurveVector::GetVectorValue(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				}
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_GetVectorValue_ReturnValue__pf);
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
			}
		case 155:
			{
				if(::IsValid(bpv__Curve_SunLight__pf))
				{
					bpfv__CallFunc_GetFloatValue_ReturnValue_1__pf = bpv__Curve_SunLight__pf->UCurveFloat::GetFloatValue(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				}
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun Curve Light Intensity")), bpfv__CallFunc_GetFloatValue_ReturnValue_1__pf);
				}
			}
		case 156:
			{
				if(::IsValid(bpv__Curve_StarsTime__pf))
				{
					bpfv__CallFunc_GetFloatValue_ReturnValue__pf = bpv__Curve_StarsTime__pf->UCurveFloat::GetFloatValue(bpv__xxTimexofxDayxxxForxCustomxModexx__pfJbxTTTTLTTTTK);
				}
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseStar")), bpfv__CallFunc_GetFloatValue_ReturnValue__pf);
				}
				__CurrentState = 87;
				break;
			}
		case 157:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 158:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf;
				__CurrentState = 153;
				break;
			}
		case 159:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 160:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf;
				__CurrentState = 153;
				break;
			}
		case 161:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_4__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 162:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_4__pf;
				__CurrentState = 153;
				break;
			}
		case 163:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleSnow"));
				__CurrentState = 149;
				break;
			}
		case 164:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleDeath"));
				__CurrentState = 149;
				break;
			}
		case 165:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleDarkSouls"));
				__CurrentState = 149;
				break;
			}
		case 166:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleDesert"));
				__CurrentState = 149;
				break;
			}
		case 167:
			{
				bpv__SelectSkyName__pf = FName(TEXT("StyleForest"));
				__CurrentState = 149;
				break;
			}
		case 168:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Main Clouds Textures A")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed));
				}
			}
		case 169:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Second Clouds Textures B")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 60;
				break;
			}
		case 170:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Main Clouds Textures A")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed));
				}
			}
		case 171:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Second Clouds Textures B")), CastChecked<UTexture>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 60;
				break;
			}
		case 172:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Main Clouds Falloff Intensity")), 3.000000);
				}
			}
		case 173:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Second Clouds Falloff Intensity")), 4.000000);
				}
			}
		case 174:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Falloff Intensity")), 1.150000);
				}
			}
		case 175:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Intensity")), 0.850000);
				}
				__CurrentState = 66;
				break;
			}
		case 176:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Main Clouds Falloff Intensity")), 4.000000);
				}
			}
		case 177:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Second Clouds Falloff Intensity")), 4.000000);
				}
			}
		case 178:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Falloff Intensity")), 1.400000);
				}
			}
		case 179:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Intensity")), 0.600000);
				}
				__CurrentState = 66;
				break;
			}
		case 180:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Main Clouds Falloff Intensity")), 5.000000);
				}
			}
		case 181:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Second Clouds Falloff Intensity")), 5.000000);
				}
			}
		case 182:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Falloff Intensity")), 2.000000);
				}
			}
		case 183:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Third Clouds Intensity")), 0.000000);
				}
			}
		case 184:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Intensity")), 0.350000);
				}
				__CurrentState = 66;
				break;
			}
		case 185:
			{
				if(::IsValid(bpv__SkyMaterial__pf))
				{
					bpv__SkyMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("All Clouds Intensity")), 0.000000);
				}
				__CurrentState = 66;
				break;
			}
		case 186:
			{
				if(::IsValid(bpv__Mesh_Group__pf))
				{
					bpv__Mesh_Group__pf->USceneComponent::SetVisibility(true, true);
				}
			}
		case 187:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__TempxTimexofxDay__pfTTT, 19.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__TempxTimexofxDay__pfTTT, 4.750000);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf, bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 190;
					break;
				}
			}
		case 188:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__TempxTimexofxDay__pfTTT, 15.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 90.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 0.000000);
				if(::IsValid(bpv__SunSphere_Group__pf))
				{
					bpv__SunSphere_Group__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
			}
		case 189:
			{
				if(::IsValid(bpv__StarMesh__pf))
				{
					bpv__StarMesh__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = 72;
				break;
			}
		case 190:
			{
				if(::IsValid(bpv__SunSphere_Group__pf))
				{
					bpv__SunSphere_Group__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 191:
			{
				if(::IsValid(bpv__StarMesh__pf))
				{
					bpv__StarMesh__pf->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = 72;
				break;
			}
		case 192:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_5__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_GoodSky_C__pf2629841966::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 193:
			{
				bpv__SkyMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_5__pf;
				__CurrentState = 87;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_GoodSky_C__pf2629841966::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{769, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/GoodSky/Source/Mesh/SM_GoodSky_Sphere.SM_GoodSky_Sphere 
		{770, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/GoodSky/Source/Materials/M_GoodSky_Base.M_GoodSky_Base 
		{771, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Plane.Plane 
		{772, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/GoodSky/Source/ArrowTool/M_GoodSky_SkyRing_.M_GoodSky_SkyRing_ 
		{773, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/GoodSky/Source/ArrowTool/SM_GoodSky_StarMesh.SM_GoodSky_StarMesh 
		{275, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{774, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/GoodSky/Source/ArrowTool/M_GoodSky_Sun_Emissive.M_GoodSky_Sun_Emissive 
		{775, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Game/GoodSky/Source/Data/Curve/Curve_GoodSky_BaseCloudColor.Curve_GoodSky_BaseCloudColor 
		{776, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Game/GoodSky/Source/Data/Curve/Curve_GoodSky_horizon_Color.Curve_GoodSky_horizon_Color 
		{777, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Game/GoodSky/Source/Data/Curve/Curve_GoodSky_DomeColor.Curve_GoodSky_DomeColor 
		{778, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Game/GoodSky/Source/Data/Curve/Curve_GoodSky_AllOverlayColor.Curve_GoodSky_AllOverlayColor 
		{779, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/GoodSky/Source/Data/Curve/Curve_GoodSky_Stars.Curve_GoodSky_Stars 
		{780, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveVector /Game/GoodSky/Source/Data/Curve/Curve_GoodSky_SunDirection_Vector.Curve_GoodSky_SunDirection_Vector 
		{781, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/GoodSky/Source/Data/Curve/Curve_GoodSky_SunLight.Curve_GoodSky_SunLight 
		{782, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/GoodSky/Source/Data/DataTable/DataTable_GoodSky.DataTable_GoodSky 
		{783, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/GoodSky/Source/Mesh/SM_GoodSky_Hemisphere.SM_GoodSky_Hemisphere 
		{784, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/GoodSky/Source/Materials/M_GoodSky_Sun_Stars.M_GoodSky_Sun_Stars 
		{785, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/GoodSky/Source/Textures/T_GoodSky_clouds_A.T_GoodSky_clouds_A 
		{786, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/GoodSky/Source/Textures/T_GoodSky_clouds_D.T_GoodSky_clouds_D 
		{787, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/GoodSky/Source/Materials/M_GoodSky_Moon.M_GoodSky_Moon 
		{788, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/GoodSky/Source/Materials/M_GoodSky_Storm.M_GoodSky_Storm 
		{789, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/GoodSky/Source/Textures/T_GoodSky_clouds_C.T_GoodSky_clouds_C 
		{790, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/GoodSky/Source/Textures/T_GoodSky_clouds_E.T_GoodSky_clouds_E 
		{791, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/GoodSky/Source/Textures/T_GoodSky_clouds_F.T_GoodSky_clouds_F 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_GoodSky_C__pf2629841966::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{792, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{793, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{794, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{795, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{796, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DirectionalLight 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{797, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveLinearColor 
		{798, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveFloat 
		{799, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveVector 
		{471, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{800, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/GoodSky/Source/Data/Structure/Structure_GoodSky.Structure_GoodSky 
		{801, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_MeshType.Enum_GoodSky_MeshType 
		{802, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Preset.Enum_GoodSky_Preset 
		{803, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Effects.Enum_GoodSky_Effects 
		{804, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Style_Clouds.Enum_GoodSky_Style_Clouds 
		{805, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/GoodSky/Source/Data/Enum/Enum_GoodSky_Clouds_Coverage.Enum_GoodSky_Clouds_Coverage 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_GoodSky_C__pf2629841966
{
	FRegisterHelper__ABP_GoodSky_C__pf2629841966()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/GoodSky/Blueprint/BP_GoodSky"), &ABP_GoodSky_C__pf2629841966::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_GoodSky_C__pf2629841966 Instance;
};
FRegisterHelper__ABP_GoodSky_C__pf2629841966 FRegisterHelper__ABP_GoodSky_C__pf2629841966::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
