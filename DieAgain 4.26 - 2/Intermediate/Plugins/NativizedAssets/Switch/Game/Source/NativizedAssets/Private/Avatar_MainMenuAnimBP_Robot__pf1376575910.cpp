#include "NativizedAssets.h"
#include "Avatar_MainMenuAnimBP_Robot__pf1376575910.h"
#include "GeneratedCodeHelpers.h"
#include "Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
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
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
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
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::UAvatar_MainMenuAnimBP_Robot_C__pf1376575910(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	__InitAllAnimNodes();
}
PRAGMA_ENABLE_OPTIMIZATION
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAllAnimNodes()
{
	__InitAnimNode__AnimGraphNode_Root();
	__InitAnimNode__AnimGraphNode_TransitionResult_7();
	__InitAnimNode__AnimGraphNode_TransitionResult_6();
	__InitAnimNode__AnimGraphNode_TransitionResult_5();
	__InitAnimNode__AnimGraphNode_TransitionResult_4();
	__InitAnimNode__AnimGraphNode_TransitionResult_3();
	__InitAnimNode__AnimGraphNode_TransitionResult_2();
	__InitAnimNode__AnimGraphNode_TransitionResult_1();
	__InitAnimNode__AnimGraphNode_TransitionResult();
	__InitAnimNode__AnimGraphNode_SequencePlayer_7();
	__InitAnimNode__AnimGraphNode_StateResult_7();
	__InitAnimNode__AnimGraphNode_SequencePlayer_6();
	__InitAnimNode__AnimGraphNode_StateResult_6();
	__InitAnimNode__AnimGraphNode_SequencePlayer_5();
	__InitAnimNode__AnimGraphNode_StateResult_5();
	__InitAnimNode__AnimGraphNode_SequencePlayer_4();
	__InitAnimNode__AnimGraphNode_StateResult_4();
	__InitAnimNode__AnimGraphNode_SequencePlayer_3();
	__InitAnimNode__AnimGraphNode_StateResult_3();
	__InitAnimNode__AnimGraphNode_SequencePlayer_2();
	__InitAnimNode__AnimGraphNode_StateResult_2();
	__InitAnimNode__AnimGraphNode_SequencePlayer_1();
	__InitAnimNode__AnimGraphNode_StateResult_1();
	__InitAnimNode__AnimGraphNode_SequencePlayer();
	__InitAnimNode__AnimGraphNode_StateResult();
	__InitAnimNode__AnimGraphNode_StateMachine();
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_Root()
{
	bpv__AnimGraphNode_Root__pf.Result.LinkID = 25;
	bpv__AnimGraphNode_Root__pf.Name = FName(TEXT("AnimGraph"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_TransitionResult_7()
{
	bpv__AnimGraphNode_TransitionResult_7__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[7]);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_TransitionResult_6()
{
	bpv__AnimGraphNode_TransitionResult_6__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[6]);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_TransitionResult_5()
{
	bpv__AnimGraphNode_TransitionResult_5__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[5]);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_TransitionResult_4()
{
	bpv__AnimGraphNode_TransitionResult_4__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[4]);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_TransitionResult_3()
{
	bpv__AnimGraphNode_TransitionResult_3__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[3]);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_TransitionResult_2()
{
	bpv__AnimGraphNode_TransitionResult_2__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[2]);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_TransitionResult_1()
{
	bpv__AnimGraphNode_TransitionResult_1__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[1]);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_TransitionResult()
{
	bpv__AnimGraphNode_TransitionResult__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[0]);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_SequencePlayer_7()
{
	bpv__AnimGraphNode_SequencePlayer_7__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateResult_7()
{
	bpv__AnimGraphNode_StateResult_7__pf.Result.LinkID = 9;
	bpv__AnimGraphNode_StateResult_7__pf.Name = FName(TEXT("Idle8"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_SequencePlayer_6()
{
	bpv__AnimGraphNode_SequencePlayer_6__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateResult_6()
{
	bpv__AnimGraphNode_StateResult_6__pf.Result.LinkID = 11;
	bpv__AnimGraphNode_StateResult_6__pf.Name = FName(TEXT("Idle7"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_SequencePlayer_5()
{
	bpv__AnimGraphNode_SequencePlayer_5__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateResult_5()
{
	bpv__AnimGraphNode_StateResult_5__pf.Result.LinkID = 13;
	bpv__AnimGraphNode_StateResult_5__pf.Name = FName(TEXT("Idle6"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_SequencePlayer_4()
{
	bpv__AnimGraphNode_SequencePlayer_4__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateResult_4()
{
	bpv__AnimGraphNode_StateResult_4__pf.Result.LinkID = 15;
	bpv__AnimGraphNode_StateResult_4__pf.Name = FName(TEXT("Idle5"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_SequencePlayer_3()
{
	bpv__AnimGraphNode_SequencePlayer_3__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateResult_3()
{
	bpv__AnimGraphNode_StateResult_3__pf.Result.LinkID = 17;
	bpv__AnimGraphNode_StateResult_3__pf.Name = FName(TEXT("Idle4"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_SequencePlayer_2()
{
	bpv__AnimGraphNode_SequencePlayer_2__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateResult_2()
{
	bpv__AnimGraphNode_StateResult_2__pf.Result.LinkID = 19;
	bpv__AnimGraphNode_StateResult_2__pf.Name = FName(TEXT("Idle3"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_SequencePlayer_1()
{
	bpv__AnimGraphNode_SequencePlayer_1__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateResult_1()
{
	bpv__AnimGraphNode_StateResult_1__pf.Result.LinkID = 21;
	bpv__AnimGraphNode_StateResult_1__pf.Name = FName(TEXT("Idle2"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_SequencePlayer()
{
	bpv__AnimGraphNode_SequencePlayer__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateResult()
{
	bpv__AnimGraphNode_StateResult__pf.Result.LinkID = 23;
	bpv__AnimGraphNode_StateResult__pf.Name = FName(TEXT("Idle"));
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__InitAnimNode__AnimGraphNode_StateMachine()
{
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	UAnimClassData* __Local__0 = NewObject<UAnimClassData>(InDynamicClass, TEXT("AnimClassData"));
	__Local__0->BakedStateMachines = TArray<FBakedAnimationStateMachine> ();
	__Local__0->BakedStateMachines.AddUninitialized(1);
	FBakedAnimationStateMachine::StaticStruct()->InitializeStruct(__Local__0->BakedStateMachines.GetData(), 1);
	auto& __Local__1 = __Local__0->BakedStateMachines[0];
	__Local__1.MachineName = FName(TEXT("New State Machine"));
	__Local__1.InitialState = 0;
	__Local__1.States = TArray<FBakedAnimationState> ();
	__Local__1.States.AddUninitialized(8);
	FBakedAnimationState::StaticStruct()->InitializeStruct(__Local__1.States.GetData(), 8);
	auto& __Local__2 = __Local__1.States[0];
	__Local__2.StateName = FName(TEXT("Idle"));
	__Local__2.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__2.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__2.Transitions.GetData(), 1);
	auto& __Local__3 = __Local__2.Transitions[0];
	__Local__3.CanTakeDelegateIndex = 17;
	__Local__3.TransitionIndex = 0;
	__Local__2.StateRootNodeIndex = 1;
	__Local__2.PlayerNodeIndices = TArray<int32> ();
	__Local__2.PlayerNodeIndices.Reserve(1);
	__Local__2.PlayerNodeIndices.Add(2);
	auto& __Local__4 = __Local__1.States[1];
	__Local__4.StateName = FName(TEXT("Idle2"));
	__Local__4.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__4.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__4.Transitions.GetData(), 1);
	auto& __Local__5 = __Local__4.Transitions[0];
	__Local__5.CanTakeDelegateIndex = 18;
	__Local__5.TransitionIndex = 1;
	__Local__4.StateRootNodeIndex = 3;
	__Local__4.PlayerNodeIndices = TArray<int32> ();
	__Local__4.PlayerNodeIndices.Reserve(1);
	__Local__4.PlayerNodeIndices.Add(4);
	auto& __Local__6 = __Local__1.States[2];
	__Local__6.StateName = FName(TEXT("Idle3"));
	__Local__6.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__6.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__6.Transitions.GetData(), 1);
	auto& __Local__7 = __Local__6.Transitions[0];
	__Local__7.CanTakeDelegateIndex = 19;
	__Local__7.TransitionIndex = 2;
	__Local__6.StateRootNodeIndex = 5;
	__Local__6.PlayerNodeIndices = TArray<int32> ();
	__Local__6.PlayerNodeIndices.Reserve(1);
	__Local__6.PlayerNodeIndices.Add(6);
	auto& __Local__8 = __Local__1.States[3];
	__Local__8.StateName = FName(TEXT("Idle4"));
	__Local__8.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__8.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__8.Transitions.GetData(), 1);
	auto& __Local__9 = __Local__8.Transitions[0];
	__Local__9.CanTakeDelegateIndex = 20;
	__Local__9.TransitionIndex = 3;
	__Local__8.StateRootNodeIndex = 7;
	__Local__8.PlayerNodeIndices = TArray<int32> ();
	__Local__8.PlayerNodeIndices.Reserve(1);
	__Local__8.PlayerNodeIndices.Add(8);
	auto& __Local__10 = __Local__1.States[4];
	__Local__10.StateName = FName(TEXT("Idle5"));
	__Local__10.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__10.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__10.Transitions.GetData(), 1);
	auto& __Local__11 = __Local__10.Transitions[0];
	__Local__11.CanTakeDelegateIndex = 21;
	__Local__11.TransitionIndex = 4;
	__Local__10.StateRootNodeIndex = 9;
	__Local__10.PlayerNodeIndices = TArray<int32> ();
	__Local__10.PlayerNodeIndices.Reserve(1);
	__Local__10.PlayerNodeIndices.Add(10);
	auto& __Local__12 = __Local__1.States[5];
	__Local__12.StateName = FName(TEXT("Idle6"));
	__Local__12.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__12.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__12.Transitions.GetData(), 1);
	auto& __Local__13 = __Local__12.Transitions[0];
	__Local__13.CanTakeDelegateIndex = 22;
	__Local__13.TransitionIndex = 5;
	__Local__12.StateRootNodeIndex = 11;
	__Local__12.PlayerNodeIndices = TArray<int32> ();
	__Local__12.PlayerNodeIndices.Reserve(1);
	__Local__12.PlayerNodeIndices.Add(12);
	auto& __Local__14 = __Local__1.States[6];
	__Local__14.StateName = FName(TEXT("Idle7"));
	__Local__14.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__14.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__14.Transitions.GetData(), 1);
	auto& __Local__15 = __Local__14.Transitions[0];
	__Local__15.CanTakeDelegateIndex = 23;
	__Local__15.TransitionIndex = 6;
	__Local__14.StateRootNodeIndex = 13;
	__Local__14.PlayerNodeIndices = TArray<int32> ();
	__Local__14.PlayerNodeIndices.Reserve(1);
	__Local__14.PlayerNodeIndices.Add(14);
	auto& __Local__16 = __Local__1.States[7];
	__Local__16.StateName = FName(TEXT("Idle8"));
	__Local__16.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__16.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__16.Transitions.GetData(), 1);
	auto& __Local__17 = __Local__16.Transitions[0];
	__Local__17.CanTakeDelegateIndex = 24;
	__Local__17.TransitionIndex = 7;
	__Local__16.StateRootNodeIndex = 15;
	__Local__16.PlayerNodeIndices = TArray<int32> ();
	__Local__16.PlayerNodeIndices.Reserve(1);
	__Local__16.PlayerNodeIndices.Add(16);
	__Local__1.Transitions = TArray<FAnimationTransitionBetweenStates> ();
	__Local__1.Transitions.AddUninitialized(8);
	FAnimationTransitionBetweenStates::StaticStruct()->InitializeStruct(__Local__1.Transitions.GetData(), 8);
	auto& __Local__18 = __Local__1.Transitions[0];
	__Local__18.PreviousState = 0;
	__Local__18.NextState = 1;
	__Local__18.CrossfadeDuration = 0.200000f;
	__Local__18.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__19 = __Local__1.Transitions[1];
	__Local__19.PreviousState = 1;
	__Local__19.NextState = 2;
	__Local__19.CrossfadeDuration = 0.200000f;
	__Local__19.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__20 = __Local__1.Transitions[2];
	__Local__20.PreviousState = 2;
	__Local__20.NextState = 3;
	__Local__20.CrossfadeDuration = 0.200000f;
	__Local__20.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__21 = __Local__1.Transitions[3];
	__Local__21.PreviousState = 3;
	__Local__21.NextState = 4;
	__Local__21.CrossfadeDuration = 0.200000f;
	__Local__21.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__22 = __Local__1.Transitions[4];
	__Local__22.PreviousState = 4;
	__Local__22.NextState = 5;
	__Local__22.CrossfadeDuration = 0.200000f;
	__Local__22.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__23 = __Local__1.Transitions[5];
	__Local__23.PreviousState = 5;
	__Local__23.NextState = 6;
	__Local__23.CrossfadeDuration = 0.200000f;
	__Local__23.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__24 = __Local__1.Transitions[6];
	__Local__24.PreviousState = 6;
	__Local__24.NextState = 7;
	__Local__24.CrossfadeDuration = 0.200000f;
	__Local__24.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__25 = __Local__1.Transitions[7];
	__Local__25.PreviousState = 7;
	__Local__25.NextState = 0;
	__Local__25.CrossfadeDuration = 0.200000f;
	__Local__25.BlendMode = EAlphaBlendOption::HermiteCubic;
	__Local__0->TargetSkeleton = CastChecked<USkeleton>(CastChecked<UDynamicClass>(UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__0->OrderedSavedPoseIndicesMap = {};
	__Local__0->OrderedSavedPoseIndicesMap.Reserve(1);
	static TWeakFieldPtr<FProperty> __Local__28{};
	const FProperty* __Local__27 = __Local__28.Get();
	if (nullptr == __Local__27)
	{
		__Local__27 = (UAnimClassData::StaticClass())->FindPropertyByName(FName(TEXT("OrderedSavedPoseIndicesMap")));
		check(__Local__27);
		__Local__28 = __Local__27;
	}
	FScriptMapHelper __Local__26(CastFieldChecked<FMapProperty>(__Local__27), &__Local__0->OrderedSavedPoseIndicesMap);
	TMap<FName,FCachedPoseIndices>::ElementType& __Local__29 = *(TMap<FName,FCachedPoseIndices>::ElementType*)__Local__26.GetPairPtr(__Local__26.AddDefaultValue_Invalid_NeedsRehash());
	__Local__29.Key = FName(TEXT("AnimGraph"));
	__Local__26.Rehash();
	__Local__0->AnimBlueprintFunctions = TArray<FAnimBlueprintFunction> ();
	__Local__0->AnimBlueprintFunctions.AddUninitialized(1);
	FAnimBlueprintFunction::StaticStruct()->InitializeStruct(__Local__0->AnimBlueprintFunctions.GetData(), 1);
	auto& __Local__30 = __Local__0->AnimBlueprintFunctions[0];
	__Local__30.Name = FName(TEXT("AnimGraph"));
	__Local__30.OutputPoseNodeIndex = 0;
	__Local__30.bImplemented = true;
	__Local__0->AnimBlueprintFunctionData = TArray<FAnimBlueprintFunctionData> ();
	__Local__0->AnimBlueprintFunctionData.AddUninitialized(1);
	FAnimBlueprintFunctionData::StaticStruct()->InitializeStruct(__Local__0->AnimBlueprintFunctionData.GetData(), 1);
	auto& __Local__31 = __Local__0->AnimBlueprintFunctionData[0];
	__Local__31.OutputPoseNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_Root");
	__Local__0->AnimNodeProperties = TArray<TFieldPath<FStructProperty> > ();
	__Local__0->AnimNodeProperties.Reserve(26);
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_Root"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_7"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_6"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_5"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_4"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_3"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_2"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_1"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_SequencePlayer_7"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateResult_7"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_SequencePlayer_6"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateResult_6"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_SequencePlayer_5"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateResult_5"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_SequencePlayer_4"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateResult_4"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_SequencePlayer_3"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateResult_3"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_SequencePlayer_2"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateResult_2"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_SequencePlayer_1"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateResult_1"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_SequencePlayer"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateResult"));
	__Local__0->AnimNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateMachine"));
	__Local__0->StateMachineNodeProperties = TArray<TFieldPath<FStructProperty> > ();
	__Local__0->StateMachineNodeProperties.Reserve(1);
	__Local__0->StateMachineNodeProperties.Add(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_StateMachine"));
	__Local__0->EvaluateGraphExposedInputs = TArray<FExposedValueHandler> ();
	__Local__0->EvaluateGraphExposedInputs.AddUninitialized(8);
	FExposedValueHandler::StaticStruct()->InitializeStruct(__Local__0->EvaluateGraphExposedInputs.GetData(), 8);
	auto& __Local__32 = __Local__0->EvaluateGraphExposedInputs[0];
	__Local__32.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_9C5E84A441ACA0989D502D84FCABD63D"));
	__Local__32.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_9C5E84A441ACA0989D502D84FCABD63D"));
	__Local__32.ValueHandlerNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult");
	auto& __Local__33 = __Local__0->EvaluateGraphExposedInputs[1];
	__Local__33.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_FFECCC274A99A37F7EAA10BC8439E514"));
	__Local__33.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_FFECCC274A99A37F7EAA10BC8439E514"));
	__Local__33.ValueHandlerNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_1");
	auto& __Local__34 = __Local__0->EvaluateGraphExposedInputs[2];
	__Local__34.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_BCBE8C4C40ACCF01892018B328A9546D"));
	__Local__34.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_BCBE8C4C40ACCF01892018B328A9546D"));
	__Local__34.ValueHandlerNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_2");
	auto& __Local__35 = __Local__0->EvaluateGraphExposedInputs[3];
	__Local__35.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_E8012EEE49D25F5B11DF41825E621175"));
	__Local__35.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_E8012EEE49D25F5B11DF41825E621175"));
	__Local__35.ValueHandlerNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_3");
	auto& __Local__36 = __Local__0->EvaluateGraphExposedInputs[4];
	__Local__36.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_FC3967484A8DF09C52037AA43FD840CA"));
	__Local__36.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_FC3967484A8DF09C52037AA43FD840CA"));
	__Local__36.ValueHandlerNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_4");
	auto& __Local__37 = __Local__0->EvaluateGraphExposedInputs[5];
	__Local__37.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_BF4818D34C7218B26C9D53B708CCFBD9"));
	__Local__37.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_BF4818D34C7218B26C9D53B708CCFBD9"));
	__Local__37.ValueHandlerNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_5");
	auto& __Local__38 = __Local__0->EvaluateGraphExposedInputs[6];
	__Local__38.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_729B991A49B476021F16CE817D795264"));
	__Local__38.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_729B991A49B476021F16CE817D795264"));
	__Local__38.ValueHandlerNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_6");
	auto& __Local__39 = __Local__0->EvaluateGraphExposedInputs[7];
	__Local__39.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_31EB44FC44AB72413454AA820CB1B557"));
	__Local__39.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_31EB44FC44AB72413454AA820CB1B557"));
	__Local__39.ValueHandlerNodeProperty = TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot.Avatar_MainMenuAnimBP_Robot_C:AnimGraphNode_TransitionResult_7");
	InDynamicClass->AnimClassImplementation = __Local__0;
	__Local__0->DynamicClassInitialization(InDynamicClass);
}
PRAGMA_ENABLE_OPTIMIZATION
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3__pf = UAnimInstance::GetRelevantAnimTimeRemaining(0, 6);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_6__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf;
	return; // KCST_GotoReturn
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue__pf = UAnimInstance::GetRelevantAnimTimeRemaining(0, 5);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_5__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_2(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1__pf = UAnimInstance::GetRelevantAnimTimeRemaining(0, 4);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_4__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf;
	return; // KCST_GotoReturn
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_3(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2__pf = UAnimInstance::GetRelevantAnimTimeRemaining(0, 3);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_3__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf;
	return; // KCST_GotoReturn
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_4(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf{};
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4__pf = UAnimInstance::GetRelevantAnimTimeRemaining(0, 2);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_2__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf;
	return; // KCST_GotoReturn
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_5(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5__pf = UAnimInstance::GetRelevantAnimTimeRemaining(0, 1);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_1__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf;
	return; // KCST_GotoReturn
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_6(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_7__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_7__pf{};
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_7__pf = UAnimInstance::GetRelevantAnimTimeRemaining(0, 0);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_7__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue_7__pf;
	return; // KCST_GotoReturn
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_7(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_6__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_6__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_6__pf = UAnimInstance::GetRelevantAnimTimeRemaining(0, 7);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_6__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_7__pf.bCanEnterTransition = bpfv__CallFunc_Less_FloatFloat_ReturnValue_6__pf;
	return; // KCST_GotoReturn
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_31EB44FC44AB72413454AA820CB1B557__pf()
{
	bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_7(1);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_729B991A49B476021F16CE817D795264__pf()
{
	bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_0(16);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_BF4818D34C7218B26C9D53B708CCFBD9__pf()
{
	bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_1(15);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_FC3967484A8DF09C52037AA43FD840CA__pf()
{
	bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_2(14);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_E8012EEE49D25F5B11DF41825E621175__pf()
{
	bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_3(13);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_BCBE8C4C40ACCF01892018B328A9546D__pf()
{
	bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_4(12);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_FFECCC274A99A37F7EAA10BC8439E514__pf()
{
	bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_5(11);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot_AnimGraphNode_TransitionResult_9C5E84A441ACA0989D502D84FCABD63D__pf()
{
	bpf__ExecuteUbergraph_Avatar_MainMenuAnimBP_Robot__pf_6(10);
}
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf)
{
	auto __Local__40 = FPoseLink{};
	bpp__AnimGraph__pf = __Local__40;
}
PRAGMA_DISABLE_OPTIMIZATION
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{352, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/DanceMoves_Robot.DanceMoves_Robot 
		{353, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Running_Robot.Running_Robot 
		{355, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle2_Robot.Idle2_Robot 
		{350, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/SciFi_Robot/Mannequin/Character/Mesh/UE4_Robot_Mannequin_Skeleton.UE4_Robot_Mannequin_Skeleton 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{251, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{250, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{253, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{254, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{255, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{256, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{259, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UAvatar_MainMenuAnimBP_Robot_C__pf1376575910
{
	FRegisterHelper__UAvatar_MainMenuAnimBP_Robot_C__pf1376575910()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/ChangeAvatar/Avatar_MainMenuAnimBP_Robot"), &UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UAvatar_MainMenuAnimBP_Robot_C__pf1376575910 Instance;
};
FRegisterHelper__UAvatar_MainMenuAnimBP_Robot_C__pf1376575910 FRegisterHelper__UAvatar_MainMenuAnimBP_Robot_C__pf1376575910::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
