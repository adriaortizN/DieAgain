#include "NativizedAssets.h"
#include "ChangeAvatarHUD__pf1376575910.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "MainMenu_WB__pf1565531276.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
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
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
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
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
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
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
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
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "SaveGameBP__pf4030252459.h"
#include "MyGameInstance__pf2410127383.h"
#include "DieAgainGamemode__pf1010915279.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Engine/SceneCapture2D.h"
#include "Runtime/Engine/Classes/Engine/SceneCapture.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent2D.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
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
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/DialogueUserWidget.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/Dialogue.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UChangeAvatarHUD_C__pf1376575910::UChangeAvatarHUD_C__pf1376575910(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__Button__pf = nullptr;
	bpv__Button_74__pf = nullptr;
	bpv__Button_519__pf = nullptr;
	bpv__Button_Astro__pf = nullptr;
	bpv__Button_Cyber__pf = nullptr;
	bpv__Button_Demon__pf = nullptr;
	bpv__Button_Knight__pf = nullptr;
	bpv__Button_Original_F__pf = nullptr;
	bpv__Button_Original_M__pf = nullptr;
	bpv__Button_Robot__pf = nullptr;
	bpv__Exit_Button__pf = nullptr;
	bpv__Image_39__pf = nullptr;
	bpv__Image_Astro__pf = nullptr;
	bpv__Image_Cyber__pf = nullptr;
	bpv__Image_Demon__pf = nullptr;
	bpv__Image_Knight__pf = nullptr;
	bpv__Image_Original_F__pf = nullptr;
	bpv__Image_Original_M__pf = nullptr;
	bpv__Image_Robot__pf = nullptr;
	bpv__Text_Astro__pf = nullptr;
	bpv__Text_Cyber__pf = nullptr;
	bpv__Text_Demon__pf = nullptr;
	bpv__Text_Robot__pf = nullptr;
	bpv__IsShaldAliveForCyber__pf = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UChangeAvatarHUD_C__pf1376575910::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UChangeAvatarHUD_C__pf1376575910::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UMainMenu_WB_C__pf1565531276::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USaveGameBP_C__pf4030252459::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMyGameInstance_C__pf2410127383::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGamepadInteraction_C__pf197907997::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(18);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 18);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_Original_F"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Original_F_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_Cyber"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Cyber_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_Cyber"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Cyber_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_Astro"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Astro_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_Astro"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Astro_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Button_Robot"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Robot_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Button_Robot"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Robot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("Button_Demon"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Demon_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[8];
	__Local__10.ComponentPropertyName = FName(TEXT("Button_Demon"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__ChangeAvatarHUD_Button_Demon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[9];
	__Local__11.ComponentPropertyName = FName(TEXT("Button_Astro"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__Button_Astro_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__12 = __Local__0->ComponentDelegateBindings[10];
	__Local__12.ComponentPropertyName = FName(TEXT("Button_Cyber"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__Button_Cyber_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__13 = __Local__0->ComponentDelegateBindings[11];
	__Local__13.ComponentPropertyName = FName(TEXT("Button_Knight"));
	__Local__13.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__13.FunctionNameToBind = FName(TEXT("BndEvt__Button_Knight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__14 = __Local__0->ComponentDelegateBindings[12];
	__Local__14.ComponentPropertyName = FName(TEXT("Button_Original_M"));
	__Local__14.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__14.FunctionNameToBind = FName(TEXT("BndEvt__Button_86_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__15 = __Local__0->ComponentDelegateBindings[13];
	__Local__15.ComponentPropertyName = FName(TEXT("Button_Robot"));
	__Local__15.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__15.FunctionNameToBind = FName(TEXT("BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__16 = __Local__0->ComponentDelegateBindings[14];
	__Local__16.ComponentPropertyName = FName(TEXT("Button_Demon"));
	__Local__16.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__16.FunctionNameToBind = FName(TEXT("BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__17 = __Local__0->ComponentDelegateBindings[15];
	__Local__17.ComponentPropertyName = FName(TEXT("Exit_Button"));
	__Local__17.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__17.FunctionNameToBind = FName(TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__18 = __Local__0->ComponentDelegateBindings[16];
	__Local__18.ComponentPropertyName = FName(TEXT("Button"));
	__Local__18.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__18.FunctionNameToBind = FName(TEXT("BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__19 = __Local__0->ComponentDelegateBindings[17];
	__Local__19.ComponentPropertyName = FName(TEXT("Button_519"));
	__Local__19.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__19.FunctionNameToBind = FName(TEXT("BndEvt__Button_519_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__20 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__20), UPanelWidget::__PPO__Slots() )));
	__Local__21 = TArray<UPanelSlot*> ();
	__Local__21.Reserve(17);
	auto __Local__22 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__22->LayoutData.Offsets.Left = -960.960938f;
	__Local__22->LayoutData.Offsets.Top = -540.540527f;
	__Local__22->LayoutData.Offsets.Right = 1920.000000f;
	__Local__22->LayoutData.Offsets.Bottom = 1080.000000f;
	__Local__22->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__22->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__22->Parent = __Local__20;
	auto __Local__23 = NewObject<UImage>(__Local__1, TEXT("Image_39"), (EObjectFlags)0x00280008);
	__Local__23->Brush.ImageSize = FVector2D(1920.000000, 1080.000000);
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__23->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__21.Add(__Local__22);
	auto __Local__25 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__25->LayoutData.Offsets.Left = -408.960938f;
	__Local__25->LayoutData.Offsets.Top = 92.000000f;
	__Local__25->LayoutData.Offsets.Right = 830.241333f;
	__Local__25->LayoutData.Offsets.Bottom = 138.108109f;
	__Local__25->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__25->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__25->Parent = __Local__20;
	auto __Local__26 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_56"), (EObjectFlags)0x00280008);
	__Local__26->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"D85E289C44E3C7BF090D9DB9C87C39EA\", \"Choose an avatar\")")	);
	__Local__26->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__26->Font.OutlineSettings.OutlineSize = 5;
	__Local__26->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__26->Font.Size = 80;
	auto& __Local__27 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__26), UTextLayoutWidget::__PPO__Justification() )));
	__Local__27 = ETextJustify::Type::Center;
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__21.Add(__Local__25);
	auto __Local__28 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__28->LayoutData.Offsets.Left = 300.000000f;
	__Local__28->LayoutData.Offsets.Top = 41.673344f;
	__Local__28->LayoutData.Offsets.Right = 310.000000f;
	__Local__28->LayoutData.Offsets.Bottom = 289.979980f;
	__Local__28->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__28->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__28->Parent = __Local__20;
	auto __Local__29 = NewObject<UTextBlock>(__Local__1, TEXT("Text_Demon"), (EObjectFlags)0x00280008);
	__Local__29->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"D83D98F84B81BCC02A60B385AACF675F\", \"Unlocked only with Die Again Northern Front DLC\")")	);
	__Local__29->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__29->Font.OutlineSettings.OutlineSize = 2;
	__Local__29->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__29->Font.Size = 40;
	auto& __Local__30 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__29), UTextLayoutWidget::__PPO__Justification() )));
	__Local__30 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__32{};
	const FProperty* __Local__31 = __Local__32.Get();
	if (nullptr == __Local__31)
	{
		__Local__31 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__31);
		__Local__32 = __Local__31;
	}
	(((FBoolProperty*)__Local__31)->SetPropertyValue_InContainer((__Local__29), true, 0));
	__Local__29->Slot = __Local__28;
	__Local__29->bIsVariable = true;
	__Local__29->Visibility = ESlateVisibility::Hidden;
	__Local__28->Content = __Local__29;
	__Local__21.Add(__Local__28);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_19"), (EObjectFlags)0x00280008);
	__Local__33->LayoutData.Offsets.Left = 516.000000f;
	__Local__33->LayoutData.Offsets.Top = -208.895340f;
	__Local__33->LayoutData.Offsets.Right = 310.000000f;
	__Local__33->LayoutData.Offsets.Bottom = 183.206543f;
	__Local__33->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__33->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__33->Parent = __Local__20;
	auto __Local__34 = NewObject<UTextBlock>(__Local__1, TEXT("Text_Robot"), (EObjectFlags)0x00280008);
	__Local__34->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"A9A1841A4B14F263A91D1192422BCCE4\", \"Complete the game\")")	);
	__Local__34->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__34->Font.OutlineSettings.OutlineSize = 2;
	__Local__34->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__34->Font.Size = 40;
	auto& __Local__35 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__34), UTextLayoutWidget::__PPO__Justification() )));
	__Local__35 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__31)->SetPropertyValue_InContainer((__Local__34), true, 0));
	__Local__34->Slot = __Local__33;
	__Local__34->bIsVariable = true;
	__Local__34->Visibility = ESlateVisibility::Hidden;
	__Local__33->Content = __Local__34;
	__Local__21.Add(__Local__33);
	auto __Local__36 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_20"), (EObjectFlags)0x00280008);
	__Local__36->LayoutData.Offsets.Left = -600.000000f;
	__Local__36->LayoutData.Offsets.Top = 119.190620f;
	__Local__36->LayoutData.Offsets.Right = 310.000000f;
	__Local__36->LayoutData.Offsets.Bottom = 174.308762f;
	__Local__36->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__36->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__36->Parent = __Local__20;
	auto __Local__37 = NewObject<UTextBlock>(__Local__1, TEXT("Text_Cyber"), (EObjectFlags)0x00280008);
	__Local__37->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"54297508438143F45C9BCD8F57614D98\", \"Fulfill Shald wish\")")	);
	__Local__37->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__37->Font.OutlineSettings.OutlineSize = 2;
	__Local__37->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__37->Font.Size = 40;
	auto& __Local__38 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__37), UTextLayoutWidget::__PPO__Justification() )));
	__Local__38 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__31)->SetPropertyValue_InContainer((__Local__37), true, 0));
	__Local__37->Slot = __Local__36;
	__Local__37->bIsVariable = true;
	__Local__37->Visibility = ESlateVisibility::Hidden;
	__Local__36->Content = __Local__37;
	__Local__21.Add(__Local__36);
	auto __Local__39 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_21"), (EObjectFlags)0x00280008);
	__Local__39->LayoutData.Offsets.Left = -160.000000f;
	__Local__39->LayoutData.Offsets.Top = 119.971741f;
	__Local__39->LayoutData.Offsets.Right = 310.000000f;
	__Local__39->LayoutData.Offsets.Bottom = 175.850418f;
	__Local__39->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__39->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__39->Parent = __Local__20;
	auto __Local__40 = NewObject<UTextBlock>(__Local__1, TEXT("Text_Astro"), (EObjectFlags)0x00280008);
	__Local__40->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"F6C7D142487E9C02B7C26EBEC45938A7\", \"Reach Horts\")")	);
	__Local__40->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__40->Font.OutlineSettings.OutlineSize = 2;
	__Local__40->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__40->Font.Size = 40;
	auto& __Local__41 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__40), UTextLayoutWidget::__PPO__Justification() )));
	__Local__41 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__31)->SetPropertyValue_InContainer((__Local__40), true, 0));
	__Local__40->Slot = __Local__39;
	__Local__40->bIsVariable = true;
	__Local__40->Visibility = ESlateVisibility::Hidden;
	__Local__39->Content = __Local__40;
	__Local__21.Add(__Local__39);
	auto __Local__42 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__42->LayoutData.Offsets.Left = -5000.000000f;
	__Local__42->LayoutData.Offsets.Top = -250.000000f;
	__Local__42->LayoutData.Offsets.Right = 730.000000f;
	__Local__42->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__42->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__42->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__42->Parent = __Local__20;
	auto __Local__43 = NewObject<UButton>(__Local__1, TEXT("Button_519"), (EObjectFlags)0x00280008);
	__Local__43->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__43->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(0.000000, 0.000000, 1.000000, 1.000000);
	auto& __Local__45 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__45 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__43->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__43->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__43->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__48 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__48 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__43), UPanelWidget::__PPO__Slots() )));
	__Local__49 = TArray<UPanelSlot*> ();
	__Local__49.Reserve(1);
	auto __Local__50 = NewObject<UButtonSlot>(__Local__43, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__50->Parent = __Local__43;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_606"), (EObjectFlags)0x00280008);
	__Local__51->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"0C0716374A098C63BADAB38BF11392C1\", \"Original\")")	);
	auto& __Local__52 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__51->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__52 = FLinearColor(1.000000, 1.000000, 1.000000, 2.000000);
	__Local__51->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__51->Font.OutlineSettings.OutlineSize = 5;
	__Local__51->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__51->Font.Size = 60;
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__49.Add(__Local__50);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__21.Add(__Local__42);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__53->LayoutData.Offsets.Left = -5000.000000f;
	__Local__53->LayoutData.Offsets.Top = -60.000000f;
	__Local__53->LayoutData.Offsets.Right = 730.000000f;
	__Local__53->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__53->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__53->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__53->Parent = __Local__20;
	auto __Local__54 = NewObject<UButton>(__Local__1, TEXT("Button"), (EObjectFlags)0x00280008);
	__Local__54->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__55 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__54->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__55 = FLinearColor(0.000000, 0.000000, 1.000000, 1.000000);
	auto& __Local__56 = (*(AccessPrivateProperty<UObject* >(&(__Local__54->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__56 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__54->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__57 = (*(AccessPrivateProperty<UObject* >(&(__Local__54->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__57 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__54->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__54->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__59 = (*(AccessPrivateProperty<UObject* >(&(__Local__54->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__59 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__60 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__54), UPanelWidget::__PPO__Slots() )));
	__Local__60 = TArray<UPanelSlot*> ();
	__Local__60.Reserve(1);
	auto __Local__61 = NewObject<UButtonSlot>(__Local__54, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__61->Parent = __Local__54;
	auto __Local__62 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__62->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"35426B924CEF2587DB921F8249929EE5\", \"Robot\")")	);
	auto& __Local__63 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__62->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__63 = FLinearColor(1.000000, 1.000000, 1.000000, 2.000000);
	__Local__62->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__62->Font.OutlineSettings.OutlineSize = 5;
	__Local__62->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__62->Font.Size = 60;
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__60.Add(__Local__61);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__21.Add(__Local__53);
	auto __Local__64 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__64->LayoutData.Offsets.Left = -352.960938f;
	__Local__64->LayoutData.Offsets.Top = 355.459473f;
	__Local__64->LayoutData.Offsets.Right = 730.000000f;
	__Local__64->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__64->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__64->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__64->Parent = __Local__20;
	auto __Local__65 = NewObject<UButton>(__Local__1, TEXT("Exit_Button"), (EObjectFlags)0x00280008);
	__Local__65->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__66 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__65->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__66 = FLinearColor(0.000000, 0.000000, 1.000000, 1.000000);
	auto& __Local__67 = (*(AccessPrivateProperty<UObject* >(&(__Local__65->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__67 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__65->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__68 = (*(AccessPrivateProperty<UObject* >(&(__Local__65->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__68 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__65->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__69 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__65->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__69 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__70 = (*(AccessPrivateProperty<UObject* >(&(__Local__65->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__70 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__65), UPanelWidget::__PPO__Slots() )));
	__Local__71 = TArray<UPanelSlot*> ();
	__Local__71.Reserve(1);
	auto __Local__72 = NewObject<UButtonSlot>(__Local__65, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__72->Parent = __Local__65;
	auto __Local__73 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__73->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"6D55B7B74C577CC4F28586903F4EB6A4\", \"Go back\")")	);
	auto& __Local__74 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__73->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__74 = FLinearColor(1.000000, 1.000000, 1.000000, 2.000000);
	__Local__73->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__73->Font.OutlineSettings.OutlineSize = 5;
	__Local__73->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__73->Font.Size = 60;
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__71.Add(__Local__72);
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__21.Add(__Local__64);
	auto __Local__75 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__75->LayoutData.Offsets.Left = -5000.000000f;
	__Local__75->LayoutData.Offsets.Top = 130.000000f;
	__Local__75->LayoutData.Offsets.Right = 730.000000f;
	__Local__75->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__75->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__75->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__75->Parent = __Local__20;
	auto __Local__76 = NewObject<UButton>(__Local__1, TEXT("Button_74"), (EObjectFlags)0x00280008);
	__Local__76->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__77 = (*(AccessPrivateProperty<UObject* >(&(__Local__76->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__77 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__76->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__78 = (*(AccessPrivateProperty<UObject* >(&(__Local__76->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__78 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__76->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__79 = (*(AccessPrivateProperty<UObject* >(&(__Local__76->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__79 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__76), UPanelWidget::__PPO__Slots() )));
	__Local__80 = TArray<UPanelSlot*> ();
	__Local__80.Reserve(1);
	auto __Local__81 = NewObject<UButtonSlot>(__Local__76, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__81->Parent = __Local__76;
	auto __Local__82 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_133"), (EObjectFlags)0x00280008);
	__Local__82->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[B3373ABE4D2EB18BBB78C887182A9F24]\", \"B3A55AD34FC8FE7D64E87195369B59E4\", \"Demon\")")	);
	__Local__82->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__82->Font.OutlineSettings.OutlineSize = 5;
	__Local__82->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__82->Font.Size = 60;
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__80.Add(__Local__81);
	__Local__76->Slot = __Local__75;
	__Local__75->Content = __Local__76;
	__Local__21.Add(__Local__75);
	auto __Local__83 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__83->LayoutData.Offsets.Left = -384.000000f;
	__Local__83->LayoutData.Offsets.Top = -300.000000f;
	__Local__83->LayoutData.Offsets.Right = 310.000000f;
	__Local__83->LayoutData.Offsets.Bottom = 310.000000f;
	__Local__83->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__83->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__83->Parent = __Local__20;
	auto __Local__84 = NewObject<UButton>(__Local__1, TEXT("Button_Original_M"), (EObjectFlags)0x00280008);
	__Local__84->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__85 = (*(AccessPrivateProperty<UObject* >(&(__Local__84->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__85 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__84->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__86 = (*(AccessPrivateProperty<UObject* >(&(__Local__84->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__86 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__84->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__87 = (*(AccessPrivateProperty<UObject* >(&(__Local__84->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__87 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__84), UPanelWidget::__PPO__Slots() )));
	__Local__88 = TArray<UPanelSlot*> ();
	__Local__88.Reserve(1);
	auto __Local__89 = NewObject<UButtonSlot>(__Local__84, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__89->Padding.Top = -10.000000f;
	__Local__89->Parent = __Local__84;
	auto __Local__90 = NewObject<UImage>(__Local__1, TEXT("Image_Original_M"), (EObjectFlags)0x00280008);
	__Local__90->Brush.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__91 = (*(AccessPrivateProperty<UObject* >(&(__Local__90->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__91 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__90->Slot = __Local__89;
	__Local__90->RenderTransform.Scale = FVector2D(20.000000, 20.000000);
	__Local__89->Content = __Local__90;
	__Local__88.Add(__Local__89);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__21.Add(__Local__83);
	auto __Local__92 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_22"), (EObjectFlags)0x00280008);
	__Local__92->LayoutData.Offsets.Left = 64.000000f;
	__Local__92->LayoutData.Offsets.Top = -300.000000f;
	__Local__92->LayoutData.Offsets.Right = 310.000000f;
	__Local__92->LayoutData.Offsets.Bottom = 310.000000f;
	__Local__92->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__92->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__92->Parent = __Local__20;
	auto __Local__93 = NewObject<UButton>(__Local__1, TEXT("Button_Original_F"), (EObjectFlags)0x00280008);
	__Local__93->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__94 = (*(AccessPrivateProperty<UObject* >(&(__Local__93->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__94 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__93->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__95 = (*(AccessPrivateProperty<UObject* >(&(__Local__93->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__95 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__93->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__96 = (*(AccessPrivateProperty<UObject* >(&(__Local__93->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__96 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__93), UPanelWidget::__PPO__Slots() )));
	__Local__97 = TArray<UPanelSlot*> ();
	__Local__97.Reserve(1);
	auto __Local__98 = NewObject<UButtonSlot>(__Local__93, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__98->Padding.Top = -10.000000f;
	__Local__98->Parent = __Local__93;
	auto __Local__99 = NewObject<UImage>(__Local__1, TEXT("Image_Original_F"), (EObjectFlags)0x00280008);
	__Local__99->Brush.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__100 = (*(AccessPrivateProperty<UObject* >(&(__Local__99->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__100 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__99->Slot = __Local__98;
	__Local__99->RenderTransform.Scale = FVector2D(20.000000, 20.000000);
	__Local__98->Content = __Local__99;
	__Local__97.Add(__Local__98);
	__Local__93->Slot = __Local__92;
	__Local__92->Content = __Local__93;
	__Local__21.Add(__Local__92);
	auto __Local__101 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__101->LayoutData.Offsets.Left = 516.000000f;
	__Local__101->LayoutData.Offsets.Top = -300.000000f;
	__Local__101->LayoutData.Offsets.Right = 310.000000f;
	__Local__101->LayoutData.Offsets.Bottom = 310.000000f;
	__Local__101->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__101->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__101->Parent = __Local__20;
	auto __Local__102 = NewObject<UButton>(__Local__1, TEXT("Button_Robot"), (EObjectFlags)0x00280008);
	__Local__102->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__103 = (*(AccessPrivateProperty<UObject* >(&(__Local__102->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__103 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__102->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__104 = (*(AccessPrivateProperty<UObject* >(&(__Local__102->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__104 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__102->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__105 = (*(AccessPrivateProperty<UObject* >(&(__Local__102->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__105 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__102), UPanelWidget::__PPO__Slots() )));
	__Local__106 = TArray<UPanelSlot*> ();
	__Local__106.Reserve(1);
	auto __Local__107 = NewObject<UButtonSlot>(__Local__102, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__107->Padding.Top = -10.000000f;
	__Local__107->Parent = __Local__102;
	auto __Local__108 = NewObject<UImage>(__Local__1, TEXT("Image_Robot"), (EObjectFlags)0x00280008);
	__Local__108->Brush.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__109 = (*(AccessPrivateProperty<UObject* >(&(__Local__108->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__109 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__108->Slot = __Local__107;
	__Local__108->RenderTransform.Scale = FVector2D(20.000000, 20.000000);
	__Local__107->Content = __Local__108;
	__Local__106.Add(__Local__107);
	__Local__102->Slot = __Local__101;
	__Local__101->Content = __Local__102;
	__Local__21.Add(__Local__101);
	auto __Local__110 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__110->LayoutData.Offsets.Left = 300.000000f;
	__Local__110->LayoutData.Offsets.Top = 35.000000f;
	__Local__110->LayoutData.Offsets.Right = 310.000000f;
	__Local__110->LayoutData.Offsets.Bottom = 310.000000f;
	__Local__110->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__110->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__110->Parent = __Local__20;
	auto __Local__111 = NewObject<UButton>(__Local__1, TEXT("Button_Demon"), (EObjectFlags)0x00280008);
	__Local__111->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__112 = (*(AccessPrivateProperty<UObject* >(&(__Local__111->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__112 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__111->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__113 = (*(AccessPrivateProperty<UObject* >(&(__Local__111->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__113 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__111->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__114 = (*(AccessPrivateProperty<UObject* >(&(__Local__111->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__114 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__115 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__111), UPanelWidget::__PPO__Slots() )));
	__Local__115 = TArray<UPanelSlot*> ();
	__Local__115.Reserve(1);
	auto __Local__116 = NewObject<UButtonSlot>(__Local__111, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__116->Padding.Top = -10.000000f;
	__Local__116->Parent = __Local__111;
	auto __Local__117 = NewObject<UImage>(__Local__1, TEXT("Image_Demon"), (EObjectFlags)0x00280008);
	__Local__117->Brush.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__118 = (*(AccessPrivateProperty<UObject* >(&(__Local__117->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__118 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__117->Slot = __Local__116;
	__Local__117->RenderTransform.Scale = FVector2D(20.000000, 20.000000);
	__Local__116->Content = __Local__117;
	__Local__115.Add(__Local__116);
	__Local__111->Slot = __Local__110;
	__Local__110->Content = __Local__111;
	__Local__21.Add(__Local__110);
	auto __Local__119 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__119->LayoutData.Offsets.Left = -832.000000f;
	__Local__119->LayoutData.Offsets.Top = -300.000000f;
	__Local__119->LayoutData.Offsets.Right = 310.000000f;
	__Local__119->LayoutData.Offsets.Bottom = 310.000000f;
	__Local__119->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__119->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__119->Parent = __Local__20;
	auto __Local__120 = NewObject<UButton>(__Local__1, TEXT("Button_Knight"), (EObjectFlags)0x00280008);
	__Local__120->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__121 = (*(AccessPrivateProperty<UObject* >(&(__Local__120->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__121 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__120->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__122 = (*(AccessPrivateProperty<UObject* >(&(__Local__120->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__122 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__120->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__123 = (*(AccessPrivateProperty<UObject* >(&(__Local__120->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__123 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__124 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__120), UPanelWidget::__PPO__Slots() )));
	__Local__124 = TArray<UPanelSlot*> ();
	__Local__124.Reserve(1);
	auto __Local__125 = NewObject<UButtonSlot>(__Local__120, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__125->Padding.Top = -10.000000f;
	__Local__125->Parent = __Local__120;
	auto __Local__126 = NewObject<UImage>(__Local__1, TEXT("Image_Knight"), (EObjectFlags)0x00280008);
	__Local__126->Brush.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__127 = (*(AccessPrivateProperty<UObject* >(&(__Local__126->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__127 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__126->Slot = __Local__125;
	__Local__126->RenderTransform.Scale = FVector2D(20.000000, 20.000000);
	__Local__125->Content = __Local__126;
	__Local__124.Add(__Local__125);
	__Local__120->Slot = __Local__119;
	__Local__119->Content = __Local__120;
	__Local__21.Add(__Local__119);
	auto __Local__128 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__128->LayoutData.Offsets.Left = -600.000000f;
	__Local__128->LayoutData.Offsets.Top = 35.000000f;
	__Local__128->LayoutData.Offsets.Right = 310.000000f;
	__Local__128->LayoutData.Offsets.Bottom = 310.000000f;
	__Local__128->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__128->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__128->Parent = __Local__20;
	auto __Local__129 = NewObject<UButton>(__Local__1, TEXT("Button_Cyber"), (EObjectFlags)0x00280008);
	__Local__129->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__130 = (*(AccessPrivateProperty<UObject* >(&(__Local__129->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__130 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__129->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__131 = (*(AccessPrivateProperty<UObject* >(&(__Local__129->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__131 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__129->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__132 = (*(AccessPrivateProperty<UObject* >(&(__Local__129->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__132 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__133 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__129), UPanelWidget::__PPO__Slots() )));
	__Local__133 = TArray<UPanelSlot*> ();
	__Local__133.Reserve(1);
	auto __Local__134 = NewObject<UButtonSlot>(__Local__129, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__134->Padding.Top = -10.000000f;
	__Local__134->Parent = __Local__129;
	auto __Local__135 = NewObject<UImage>(__Local__1, TEXT("Image_Cyber"), (EObjectFlags)0x00280008);
	__Local__135->Brush.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__136 = (*(AccessPrivateProperty<UObject* >(&(__Local__135->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__136 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__135->Slot = __Local__134;
	__Local__135->RenderTransform.Scale = FVector2D(20.000000, 20.000000);
	__Local__134->Content = __Local__135;
	__Local__133.Add(__Local__134);
	__Local__129->Slot = __Local__128;
	__Local__128->Content = __Local__129;
	__Local__21.Add(__Local__128);
	auto __Local__137 = NewObject<UCanvasPanelSlot>(__Local__20, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__137->LayoutData.Offsets.Left = -160.000000f;
	__Local__137->LayoutData.Offsets.Top = 35.000000f;
	__Local__137->LayoutData.Offsets.Right = 310.000000f;
	__Local__137->LayoutData.Offsets.Bottom = 310.000000f;
	__Local__137->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__137->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__137->Parent = __Local__20;
	auto __Local__138 = NewObject<UButton>(__Local__1, TEXT("Button_Astro"), (EObjectFlags)0x00280008);
	__Local__138->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__139 = (*(AccessPrivateProperty<UObject* >(&(__Local__138->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__139 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__138->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__140 = (*(AccessPrivateProperty<UObject* >(&(__Local__138->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__140 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__138->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__141 = (*(AccessPrivateProperty<UObject* >(&(__Local__138->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__141 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__142 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__138), UPanelWidget::__PPO__Slots() )));
	__Local__142 = TArray<UPanelSlot*> ();
	__Local__142.Reserve(1);
	auto __Local__143 = NewObject<UButtonSlot>(__Local__138, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__143->Padding.Top = -10.000000f;
	__Local__143->Parent = __Local__138;
	auto __Local__144 = NewObject<UImage>(__Local__1, TEXT("Image_Astro"), (EObjectFlags)0x00280008);
	__Local__144->Brush.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__145 = (*(AccessPrivateProperty<UObject* >(&(__Local__144->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__145 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__144->Slot = __Local__143;
	__Local__144->RenderTransform.Scale = FVector2D(20.000000, 20.000000);
	__Local__143->Content = __Local__144;
	__Local__142.Add(__Local__143);
	__Local__138->Slot = __Local__137;
	__Local__137->Content = __Local__138;
	__Local__21.Add(__Local__137);
	__Local__1->RootWidget = __Local__20;
}
PRAGMA_ENABLE_OPTIMIZATION
void UChangeAvatarHUD_C__pf1376575910::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__146;
	SlotNames.Append(__Local__146);
}
void UChangeAvatarHUD_C__pf1376575910::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__147;
	TArray<FDelegateRuntimeBinding>  __Local__148;
	__Local__148.AddUninitialized(8);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__148.GetData(), 8);
	auto& __Local__149 = __Local__148[0];
	__Local__149.ObjectName = FString(TEXT("Image_39"));
	__Local__149.PropertyName = FName(TEXT("Brush"));
	__Local__149.FunctionName = FName(TEXT("GetBrush_0"));
	auto& __Local__150 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__149.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__150 = TArray<FPropertyPathSegment> ();
	__Local__150.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__150.GetData(), 1);
	auto& __Local__151 = __Local__150[0];
	__Local__151.Name = FName(TEXT("GetBrush_0"));
	auto& __Local__152 = __Local__148[1];
	__Local__152.ObjectName = FString(TEXT("Button"));
	__Local__152.PropertyName = FName(TEXT("Visibility"));
	__Local__152.FunctionName = FName(TEXT("GetVisibility_0"));
	auto& __Local__153 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__152.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__153 = TArray<FPropertyPathSegment> ();
	__Local__153.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__153.GetData(), 1);
	auto& __Local__154 = __Local__153[0];
	__Local__154.Name = FName(TEXT("GetVisibility_0"));
	auto& __Local__155 = __Local__148[2];
	__Local__155.ObjectName = FString(TEXT("Button_74"));
	__Local__155.PropertyName = FName(TEXT("Visibility"));
	__Local__155.FunctionName = FName(TEXT("GetVisibility_1"));
	auto& __Local__156 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__155.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__156 = TArray<FPropertyPathSegment> ();
	__Local__156.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__156.GetData(), 1);
	auto& __Local__157 = __Local__156[0];
	__Local__157.Name = FName(TEXT("GetVisibility_1"));
	auto& __Local__158 = __Local__148[3];
	__Local__158.ObjectName = FString(TEXT("Image_Original_M"));
	__Local__158.PropertyName = FName(TEXT("Brush"));
	__Local__158.FunctionName = FName(TEXT("GetBrush_2"));
	auto& __Local__159 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__158.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__159 = TArray<FPropertyPathSegment> ();
	__Local__159.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__159.GetData(), 1);
	auto& __Local__160 = __Local__159[0];
	__Local__160.Name = FName(TEXT("GetBrush_2"));
	auto& __Local__161 = __Local__148[4];
	__Local__161.ObjectName = FString(TEXT("Image_Demon"));
	__Local__161.PropertyName = FName(TEXT("Brush"));
	__Local__161.FunctionName = FName(TEXT("GetBrush_3"));
	auto& __Local__162 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__161.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__162 = TArray<FPropertyPathSegment> ();
	__Local__162.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__162.GetData(), 1);
	auto& __Local__163 = __Local__162[0];
	__Local__163.Name = FName(TEXT("GetFinalBrush_Demon"));
	auto& __Local__164 = __Local__148[5];
	__Local__164.ObjectName = FString(TEXT("Image_Robot"));
	__Local__164.PropertyName = FName(TEXT("Brush"));
	__Local__164.FunctionName = FName(TEXT("GetBrush_4"));
	auto& __Local__165 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__164.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__165 = TArray<FPropertyPathSegment> ();
	__Local__165.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__165.GetData(), 1);
	auto& __Local__166 = __Local__165[0];
	__Local__166.Name = FName(TEXT("GetFinalBrush_Cyber"));
	auto& __Local__167 = __Local__148[6];
	__Local__167.ObjectName = FString(TEXT("Image_Cyber"));
	__Local__167.PropertyName = FName(TEXT("Brush"));
	__Local__167.FunctionName = FName(TEXT("Get_Image_Cyber_Brush_0"));
	auto& __Local__168 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__167.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__168 = TArray<FPropertyPathSegment> ();
	__Local__168.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__168.GetData(), 1);
	auto& __Local__169 = __Local__168[0];
	__Local__169.Name = FName(TEXT("Get_Image_Cyber_Brush_0"));
	auto& __Local__170 = __Local__148[7];
	__Local__170.ObjectName = FString(TEXT("Image_Astro"));
	__Local__170.PropertyName = FName(TEXT("Brush"));
	__Local__170.FunctionName = FName(TEXT("GetFinalBrush_Astro"));
	auto& __Local__171 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__170.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__171 = TArray<FPropertyPathSegment> ();
	__Local__171.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__171.GetData(), 1);
	auto& __Local__172 = __Local__171[0];
	__Local__172.Name = FName(TEXT("GetFinalBrush_Astro"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->MiscConvertedSubobjects[0]), __Local__147, __Local__148);
}
void UChangeAvatarHUD_C__pf1376575910::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_5__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				b1l__K2Node_MakeArray_Array__pf.SetNum(8, true);
				b1l__K2Node_MakeArray_Array__pf[0] = bpv__Button_Astro__pf;
				b1l__K2Node_MakeArray_Array__pf[1] = bpv__Button_Cyber__pf;
				b1l__K2Node_MakeArray_Array__pf[2] = bpv__Exit_Button__pf;
				b1l__K2Node_MakeArray_Array__pf[3] = bpv__Button_Demon__pf;
				b1l__K2Node_MakeArray_Array__pf[4] = bpv__Button_Knight__pf;
				b1l__K2Node_MakeArray_Array__pf[5] = bpv__Button_Robot__pf;
				b1l__K2Node_MakeArray_Array__pf[6] = bpv__Button_Original_M__pf;
				b1l__K2Node_MakeArray_Array__pf[7] = bpv__Button_Original_F__pf;
				bpv__Buttons__pf = b1l__K2Node_MakeArray_Array__pf;
			}
		case 7:
			{
				Super::bpf__Construct__pf();
			}
		case 8:
			{
				__StateStack.Push(13);
			}
		case 9:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
				}
			}
		case 10:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_5__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 11:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_5__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_5__pf);
				b1l__K2Node_DynamicCast_bSuccess_10__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_5__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_10__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 12:
			{
				bool  __Local__173 = false;
				bpv__IsShaldAliveForCyber__pf = ((::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_5__pf)) ? (b1l__K2Node_DynamicCast_AsSave_Game_BP_5__pf->bpv__ShaldInVariaForCyber__pf) : (__Local__173));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ASceneCapture2D::StaticClass(), /*out*/ TArrayCaster<ASceneCapture2D*>(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 14:
			{
				b1l__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 15:
			{
				b1l__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 16:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				b1l__Temp_int_Array_Index_Variable_1__pf = b1l__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 18:
			{
				__CurrentState = 19;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 16;
				break;
			}
		case 20:
			{
				bpv__IsShaldAliveForCyber__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_HasUserFocus_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 24:
			{
				b1l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b1l__Temp_int_Array_Index_Variable__pf, 0);
				if (!b1l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 26;
					break;
				}
				b1l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b1l__Temp_int_Array_Index_Variable__pf, 1);
				if (!b1l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 25;
					break;
				}
				b1l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b1l__Temp_int_Array_Index_Variable__pf, 3);
				if (!b1l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 27;
					break;
				}
				b1l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b1l__Temp_int_Array_Index_Variable__pf, 5);
				if (!b1l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 28;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				bpf__UnHoverxCyber__pfT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpf__UnHoverAstro__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpf__UnHoverDemon__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpf__UnHoverRobot__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				b1l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(b1l__Temp_int_Array_Index_Variable__pf, 0);
				if (!b1l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 33;
					break;
				}
				b1l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(b1l__Temp_int_Array_Index_Variable__pf, 1);
				if (!b1l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 32;
					break;
				}
				b1l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(b1l__Temp_int_Array_Index_Variable__pf, 3);
				if (!b1l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 31;
					break;
				}
				b1l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(b1l__Temp_int_Array_Index_Variable__pf, 5);
				if (!b1l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 30;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpf__HoverRobot__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				bpf__HoverDemon__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				bpf__HoverCyber__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpf__HoverAstro__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				b1l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 35:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Buttons__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 36:
			{
				b1l__Temp_int_Array_Index_Variable__pf = b1l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 37:
			{
				__StateStack.Push(39);
			}
		case 38:
			{
				FCustomThunkTemplates::Array_Get(bpv__Buttons__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(b1l__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_HasUserFocus_ReturnValue__pf = b1l__CallFunc_Array_Get_Item__pf->UWidget::HasUserFocus(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf);
				}
				if (!bpfv__CallFunc_HasUserFocus_ReturnValue__pf)
				{
					__CurrentState = 24;
					break;
				}
				__CurrentState = 29;
				break;
			}
		case 39:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 35;
				break;
			}
		case 80:
			{
				b1l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 34;
				break;
			}
		case 210:
			{
				__CurrentState = 80;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 179);
	// optimized KCST_UnconditionalGoto
	bpf__UnHoverAstro__pf();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 218);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Text_Astro__pf))
	{
		bpv__Text_Astro__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Image_Astro__pf))
	{
		bpv__Image_Astro__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 170);
	// optimized KCST_UnconditionalGoto
	bpf__HoverAstro__pf();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_5(int32 bpp__EntryPoint__pf)
{
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_10__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 172:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_10__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 173:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_10__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_10__pf);
				b1l__K2Node_DynamicCast_bSuccess_19__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_10__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_19__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 174:
			{
				bool  __Local__174 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_10__pf)) ? (b1l__K2Node_DynamicCast_AsSave_Game_BP_10__pf->bpv__IsAstroUnlocked__pf) : (__Local__174)))
				{
					__CurrentState = 177;
					break;
				}
			}
		case 175:
			{
				if(::IsValid(bpv__Text_Astro__pf))
				{
					bpv__Text_Astro__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 176:
			{
				if(::IsValid(bpv__Image_Astro__pf))
				{
					bpv__Image_Astro__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		case 177:
			{
				if(::IsValid(bpv__Text_Astro__pf))
				{
					bpv__Text_Astro__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 178:
			{
				if(::IsValid(bpv__Image_Astro__pf))
				{
					bpv__Image_Astro__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = -1;
				break;
			}
		case 217:
			{
				__CurrentState = 172;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 190);
	// optimized KCST_UnconditionalGoto
	bpf__UnHoverxCyber__pfT();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 216);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Text_Cyber__pf))
	{
		bpv__Text_Cyber__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Image_Cyber__pf))
	{
		bpv__Image_Cyber__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 183);
	// optimized KCST_UnconditionalGoto
	bpf__HoverCyber__pf();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 185:
			{
				if (!bpv__IsShaldAliveForCyber__pf)
				{
					__CurrentState = 188;
					break;
				}
			}
		case 186:
			{
				if(::IsValid(bpv__Text_Cyber__pf))
				{
					bpv__Text_Cyber__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 187:
			{
				if(::IsValid(bpv__Image_Cyber__pf))
				{
					bpv__Image_Cyber__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		case 188:
			{
				if(::IsValid(bpv__Text_Cyber__pf))
				{
					bpv__Text_Cyber__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 189:
			{
				if(::IsValid(bpv__Image_Cyber__pf))
				{
					bpv__Image_Cyber__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = -1;
				break;
			}
		case 215:
			{
				__CurrentState = 185;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 166);
	// optimized KCST_UnconditionalGoto
	bpf__UnHoverRobot__pf();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 214);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Text_Robot__pf))
	{
		bpv__Text_Robot__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Image_Robot__pf))
	{
		bpv__Image_Robot__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 157);
	// optimized KCST_UnconditionalGoto
	bpf__HoverRobot__pf();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_13(int32 bpp__EntryPoint__pf)
{
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_9__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 159:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_9__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 160:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_9__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_9__pf);
				b1l__K2Node_DynamicCast_bSuccess_18__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_9__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_18__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 161:
			{
				bool  __Local__175 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_9__pf)) ? (b1l__K2Node_DynamicCast_AsSave_Game_BP_9__pf->bpv__IsRobotUnlocked__pf) : (__Local__175)))
				{
					__CurrentState = 164;
					break;
				}
			}
		case 162:
			{
				if(::IsValid(bpv__Text_Robot__pf))
				{
					bpv__Text_Robot__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 163:
			{
				if(::IsValid(bpv__Image_Robot__pf))
				{
					bpv__Image_Robot__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		case 164:
			{
				if(::IsValid(bpv__Text_Robot__pf))
				{
					bpv__Text_Robot__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 165:
			{
				if(::IsValid(bpv__Image_Robot__pf))
				{
					bpv__Image_Robot__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = -1;
				break;
			}
		case 213:
			{
				__CurrentState = 159;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 145);
	// optimized KCST_UnconditionalGoto
	bpf__HoverDemon__pf();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 153);
	// optimized KCST_UnconditionalGoto
	bpf__UnHoverDemon__pf();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 212);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Text_Demon__pf))
	{
		bpv__Text_Demon__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Image_Demon__pf))
	{
		bpv__Image_Demon__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_17(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 147:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_6__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_7__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_6__pf);
				b1l__K2Node_DynamicCast_bSuccess_17__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_7__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_17__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 148:
			{
				bool  __Local__176 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_7__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_7__pf->bpv__IsNorthernFrontActive__pf) : (__Local__176)))
				{
					__CurrentState = 151;
					break;
				}
			}
		case 149:
			{
				if(::IsValid(bpv__Text_Demon__pf))
				{
					bpv__Text_Demon__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 150:
			{
				if(::IsValid(bpv__Image_Demon__pf))
				{
					bpv__Image_Demon__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		case 151:
			{
				if(::IsValid(bpv__Text_Demon__pf))
				{
					bpv__Text_Demon__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 152:
			{
				if(::IsValid(bpv__Image_Demon__pf))
				{
					bpv__Image_Demon__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = -1;
				break;
			}
		case 211:
			{
				__CurrentState = 147;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	Super::bpf__Tick__pf(b1l__K2Node_Event_MyGeometry__pf, b1l__K2Node_Event_InDeltaTime__pf);
	bpf__UpdateRequisites__pf();
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(int32 bpp__EntryPoint__pf)
{
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_1__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_2__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_2__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_3__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_4__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_3__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_3__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_6__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_4__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_4__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_7__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_5__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_5__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_8__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue_11__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_7__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				b1l__CallFunc_Create_ReturnValue__pf = CastChecked<UMainMenu_WB_C__pf1565531276>(UWidgetBlueprintLibrary::Create(this, UMainMenu_WB_C__pf1565531276::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 2:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_16__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_16__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf))
				{
					b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf->bpf__ResetWidget__pf(b1l__CallFunc_Create_ReturnValue__pf);
				}
			}
		case 4:
			{
				if(::IsValid(b1l__CallFunc_Create_ReturnValue__pf))
				{
					b1l__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
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
				RemoveFromParent();
				__CurrentState = 1;
				break;
			}
		case 44:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 45:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 46:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 47:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 48:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 49:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 50:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsAstroActive__pf = false;
				}
			}
		case 51:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsMale__pf = true;
				}
			}
		case 52:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf, FString(TEXT("Save_File")), 0);
			}
		case 53:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_2__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 54:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 55:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 56:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 57:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 58:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsAstroActive__pf = false;
				}
				__CurrentState = 43;
				break;
			}
		case 59:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_1__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 60:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_1__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 61:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf->bpv__IsRobotActive__pf = true;
				}
			}
		case 62:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 63:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 64:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 65:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf->bpv__IsAstroActive__pf = false;
				}
			}
		case 66:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_1__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_1__pf, FString(TEXT("Save_File")), 0);
			}
		case 67:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_4__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 68:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf->bpv__IsRobotActive__pf = true;
				}
			}
		case 69:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 70:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 71:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 72:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf->bpv__IsAstroActive__pf = false;
				}
				__CurrentState = 43;
				break;
			}
		case 73:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_3__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 79;
					break;
				}
			}
		case 74:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 75:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsDemonActive__pf = true;
				}
			}
		case 76:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 77:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 78:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsAstroActive__pf = false;
				}
				__CurrentState = 43;
				break;
			}
		case 79:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("MYGAMEINSTANCE FAILED")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = 43;
				break;
			}
		case 81:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_2__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 82:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_5__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = 89;
					break;
				}
			}
		case 83:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 84:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf->bpv__IsDemonActive__pf = true;
				}
			}
		case 85:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 86:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 87:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf->bpv__IsAstroActive__pf = false;
				}
			}
		case 88:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_2__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_2__pf, FString(TEXT("Save_File")), 0);
				__CurrentState = 73;
				break;
			}
		case 89:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("SAVEGAMEBP FAILED")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = 43;
				break;
			}
		case 90:
			{
				__CurrentState = 91;
				break;
			}
		case 91:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_3__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_6__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 92:
			{
				bool  __Local__177 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_3__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_3__pf->bpv__IsNorthernFrontActive__pf) : (__Local__177)))
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 81;
				break;
			}
		case 93:
			{
				__CurrentState = 94;
				break;
			}
		case 94:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_3__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 95:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_3__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_3__pf);
				b1l__K2Node_DynamicCast_bSuccess_7__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 96:
			{
				bool  __Local__178 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_3__pf)) ? (b1l__K2Node_DynamicCast_AsSave_Game_BP_3__pf->bpv__IsRobotUnlocked__pf) : (__Local__178)))
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 59;
				break;
			}
		case 97:
			{
				__CurrentState = 44;
				break;
			}
		case 98:
			{
				__CurrentState = 99;
				break;
			}
		case 99:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_4__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 100:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_9__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_9__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 101:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 102:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 103:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf->bpv__IsKnightActive__pf = true;
				}
			}
		case 104:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 105:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_3__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_4__pf, FString(TEXT("Save_File")), 0);
			}
		case 106:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_3__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_3__pf);
				b1l__K2Node_DynamicCast_bSuccess_8__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_8__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 107:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 108:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 109:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf->bpv__IsKnightActive__pf = true;
				}
			}
		case 110:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf->bpv__IsCyberActive__pf = false;
				}
				__CurrentState = 43;
				break;
			}
		case 111:
			{
				__CurrentState = 112;
				break;
			}
		case 112:
			{
				if (!bpv__IsShaldAliveForCyber__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 113:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_6__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 114:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_6__pf);
				b1l__K2Node_DynamicCast_bSuccess_11__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_11__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 115:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 116:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 117:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 118:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf->bpv__IsCyberActive__pf = true;
				}
			}
		case 119:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf->bpv__IsAstroActive__pf = false;
				}
			}
		case 120:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_4__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_6__pf, FString(TEXT("Save_File")), 0);
			}
		case 121:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_4__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_12__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_12__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 122:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 123:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 124:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 125:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf->bpv__IsCyberActive__pf = true;
				}
			}
		case 126:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf->bpv__IsAstroActive__pf = false;
				}
				__CurrentState = 43;
				break;
			}
		case 127:
			{
				__CurrentState = 128;
				break;
			}
		case 128:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_8__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 129:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_8__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_8__pf);
				b1l__K2Node_DynamicCast_bSuccess_15__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_8__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_15__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 130:
			{
				bool  __Local__179 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_8__pf)) ? (b1l__K2Node_DynamicCast_AsSave_Game_BP_8__pf->bpv__IsAstroUnlocked__pf) : (__Local__179)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 131:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_7__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 132:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_7__pf);
				b1l__K2Node_DynamicCast_bSuccess_14__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_14__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 133:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 134:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 135:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 136:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 137:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf->bpv__IsAstroActive__pf = true;
				}
			}
		case 138:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_5__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_7__pf, FString(TEXT("Save_File")), 0);
			}
		case 139:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_5__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_5__pf);
				b1l__K2Node_DynamicCast_bSuccess_13__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_13__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 140:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 141:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 142:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 143:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 144:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf->bpv__IsAstroActive__pf = true;
				}
				__CurrentState = 43;
				break;
			}
		case 194:
			{
				__CurrentState = 195;
				break;
			}
		case 195:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue_11__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 196:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_11__pf);
				b1l__K2Node_DynamicCast_bSuccess_21__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_21__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 197:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 198:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 199:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 200:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 201:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf->bpv__IsAstroActive__pf = false;
				}
			}
		case 202:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf->bpv__IsMale__pf = false;
				}
			}
		case 203:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_6__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_LoadGameFromSlot_ReturnValue_11__pf, FString(TEXT("Save_File")), 0);
			}
		case 204:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_7__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_7__pf);
				b1l__K2Node_DynamicCast_bSuccess_20__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_20__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 205:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf->bpv__IsRobotActive__pf = false;
				}
			}
		case 206:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf->bpv__IsDemonActive__pf = false;
				}
			}
		case 207:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf->bpv__IsKnightActive__pf = false;
				}
			}
		case 208:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf->bpv__IsCyberActive__pf = false;
				}
			}
		case 209:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf->bpv__IsAstroActive__pf = false;
				}
				__CurrentState = 43;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_20(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 41);
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_21(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 40);
	return; //KCST_EndOfThread
}
void UChangeAvatarHUD_C__pf1376575910::bpf__UnHoverAstro__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_3(218);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__HoverAstro__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_5(217);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__UnHoverxCyber__pfT()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_7(216);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__HoverCyber__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_9(215);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__UnHoverRobot__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_11(214);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__HoverRobot__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_13(213);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__UnHoverDemon__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_16(212);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__HoverDemon__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_17(211);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__UpdateRequisites__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_1(210);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Original_F_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(194);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Cyber_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_6(190);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Cyber_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_8(183);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Astro_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_2(179);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Astro_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_4(170);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Robot_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_10(166);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Robot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_12(157);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Demon_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_15(153);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__ChangeAvatarHUD_Button_Demon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_14(145);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_Astro_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(127);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_Cyber_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(111);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_Knight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(98);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_86_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(97);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(93);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(90);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(42);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_20(41);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__BndEvt__Button_519_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_21(40);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b1l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b1l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_18(21);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_0(5);
}
void UChangeAvatarHUD_C__pf1376575910::bpf__GetText_0__pf()
{
	FText bpfv__TextPause__pf{};
}
void UChangeAvatarHUD_C__pf1376575910::bpf__GetText_1__pf()
{
	FText bpfv__TextFinalCredits__pf{};
}
void UChangeAvatarHUD_C__pf1376575910::bpf__GetText_2__pf()
{
	FText bpfv__TextClose__pf{};
}
void UChangeAvatarHUD_C__pf1376575910::bpf__GetText_3__pf()
{
	FText bpfv__TextResume__pf{};
}
void UChangeAvatarHUD_C__pf1376575910::bpf__GetText_4__pf()
{
	FText bpfv__TextLanguage__pf{};
}
FSlateBrush  UChangeAvatarHUD_C__pf1376575910::bpf__GetBrush_0__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__FinalSlate__pf{};
	FSlateBrush bpfv__Endgame_Slate__pf{};
	FSlateBrush bpfv__LV12_Slate__pf{};
	FSlateBrush bpfv__LV8_Slate__pf{};
	FSlateBrush bpfv__LV6_Slate__pf{};
	FSlateBrush bpfv__LV3_Slate__pf{};
	FSlateBrush bpfv__Default_Slate__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	USaveGameBP_C__pf4030252459* bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__181 = FSlateBrush::StaticStruct();
				uint8* __Local__182 = (uint8*)FMemory_Alloca(__Local__181->GetStructureSize());
				__Local__181->InitializeStruct(__Local__182);
				FSlateBrush& __Local__180 = *reinterpret_cast<FSlateBrush*>(__Local__182);
				__Local__180.ImageSize = FVector2D(1920.000000, 1080.000000);
				auto& __Local__183 = (*(AccessPrivateProperty<UObject* >(&(__Local__180), FSlateBrush::__PPO__ResourceObject() )));
				__Local__183 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
				bpfv__Default_Slate__pf = __Local__180;
			}
		case 2:
			{
				const UScriptStruct* __Local__185 = FSlateBrush::StaticStruct();
				uint8* __Local__186 = (uint8*)FMemory_Alloca(__Local__185->GetStructureSize());
				__Local__185->InitializeStruct(__Local__186);
				FSlateBrush& __Local__184 = *reinterpret_cast<FSlateBrush*>(__Local__186);
				__Local__184.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__187 = (*(AccessPrivateProperty<UObject* >(&(__Local__184), FSlateBrush::__PPO__ResourceObject() )));
				__Local__187 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
				bpfv__LV3_Slate__pf = __Local__184;
			}
		case 3:
			{
				const UScriptStruct* __Local__189 = FSlateBrush::StaticStruct();
				uint8* __Local__190 = (uint8*)FMemory_Alloca(__Local__189->GetStructureSize());
				__Local__189->InitializeStruct(__Local__190);
				FSlateBrush& __Local__188 = *reinterpret_cast<FSlateBrush*>(__Local__190);
				__Local__188.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__191 = (*(AccessPrivateProperty<UObject* >(&(__Local__188), FSlateBrush::__PPO__ResourceObject() )));
				__Local__191 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
				bpfv__LV6_Slate__pf = __Local__188;
			}
		case 4:
			{
				const UScriptStruct* __Local__193 = FSlateBrush::StaticStruct();
				uint8* __Local__194 = (uint8*)FMemory_Alloca(__Local__193->GetStructureSize());
				__Local__193->InitializeStruct(__Local__194);
				FSlateBrush& __Local__192 = *reinterpret_cast<FSlateBrush*>(__Local__194);
				__Local__192.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__195 = (*(AccessPrivateProperty<UObject* >(&(__Local__192), FSlateBrush::__PPO__ResourceObject() )));
				__Local__195 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
				bpfv__LV8_Slate__pf = __Local__192;
			}
		case 5:
			{
				const UScriptStruct* __Local__197 = FSlateBrush::StaticStruct();
				uint8* __Local__198 = (uint8*)FMemory_Alloca(__Local__197->GetStructureSize());
				__Local__197->InitializeStruct(__Local__198);
				FSlateBrush& __Local__196 = *reinterpret_cast<FSlateBrush*>(__Local__198);
				__Local__196.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__199 = (*(AccessPrivateProperty<UObject* >(&(__Local__196), FSlateBrush::__PPO__ResourceObject() )));
				__Local__199 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
				bpfv__LV12_Slate__pf = __Local__196;
			}
		case 6:
			{
				const UScriptStruct* __Local__201 = FSlateBrush::StaticStruct();
				uint8* __Local__202 = (uint8*)FMemory_Alloca(__Local__201->GetStructureSize());
				__Local__201->InitializeStruct(__Local__202);
				FSlateBrush& __Local__200 = *reinterpret_cast<FSlateBrush*>(__Local__202);
				__Local__200.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__203 = (*(AccessPrivateProperty<UObject* >(&(__Local__200), FSlateBrush::__PPO__ResourceObject() )));
				__Local__203 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
				bpfv__Endgame_Slate__pf = __Local__200;
			}
		case 7:
			{
				const UScriptStruct* __Local__205 = FSlateBrush::StaticStruct();
				uint8* __Local__206 = (uint8*)FMemory_Alloca(__Local__205->GetStructureSize());
				__Local__205->InitializeStruct(__Local__206);
				FSlateBrush& __Local__204 = *reinterpret_cast<FSlateBrush*>(__Local__206);
				__Local__204.ImageSize = FVector2D(1920.000000, 1080.000000);
				auto& __Local__207 = (*(AccessPrivateProperty<UObject* >(&(__Local__204), FSlateBrush::__PPO__ResourceObject() )));
				__Local__207 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
				bpfv__FinalSlate__pf = __Local__204;
			}
		case 8:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 9:
			{
				bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 10:
			{
				int32  __Local__208 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__208)), 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				int32  __Local__209 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__209)), 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				int32  __Local__210 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__210)), 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				int32  __Local__211 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__211)), 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				int32  __Local__212 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__212)), 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				int32  __Local__213 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__213)), 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				int32  __Local__214 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__214)), 6);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				int32  __Local__215 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__215)), 7);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				int32  __Local__216 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__216)), 8);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				int32  __Local__217 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__217)), 9);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				int32  __Local__218 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__218)), 10);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				int32  __Local__219 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__219)), 11);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				int32  __Local__220 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__220)), 12);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				int32  __Local__221 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__221)), 13);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 17;
					break;
				}
				int32  __Local__222 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__222)), 14);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				int32  __Local__223 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__223)), 15);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				int32  __Local__224 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__224)), 16);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				int32  __Local__225 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__225)), 17);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 11:
			{
				bpfv__FinalSlate__pf = bpfv__Default_Slate__pf;
			}
		case 12:
			{
				bpp__ReturnValue__pf = bpfv__FinalSlate__pf;
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				bpfv__FinalSlate__pf = bpfv__Default_Slate__pf;
				__CurrentState = 12;
				break;
			}
		case 14:
			{
				bpfv__FinalSlate__pf = bpfv__LV3_Slate__pf;
				__CurrentState = 12;
				break;
			}
		case 15:
			{
				bpfv__FinalSlate__pf = bpfv__LV6_Slate__pf;
				__CurrentState = 12;
				break;
			}
		case 16:
			{
				bpfv__FinalSlate__pf = bpfv__LV8_Slate__pf;
				__CurrentState = 12;
				break;
			}
		case 17:
			{
				bpfv__FinalSlate__pf = bpfv__LV12_Slate__pf;
				__CurrentState = 12;
				break;
			}
		case 18:
			{
				bpfv__FinalSlate__pf = bpfv__Endgame_Slate__pf;
				__CurrentState = 12;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UChangeAvatarHUD_C__pf1376575910::bpf__GetVisibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	USaveGameBP_C__pf4030252459* bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bool  __Local__226 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsRobotUnlocked__pf) : (__Local__226));
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
ESlateVisibility  UChangeAvatarHUD_C__pf1376575910::bpf__GetVisibility_1__pf()
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
				bool  __Local__227 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsNorthernFrontActive__pf) : (__Local__227));
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
FSlateBrush  UChangeAvatarHUD_C__pf1376575910::bpf__GetBrush_1__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__FemaleAvatar__pf{};
	FSlateBrush bpfv__MaleAvatar__pf{};
	const UScriptStruct* __Local__229 = FSlateBrush::StaticStruct();
	uint8* __Local__230 = (uint8*)FMemory_Alloca(__Local__229->GetStructureSize());
	__Local__229->InitializeStruct(__Local__230);
	FSlateBrush& __Local__228 = *reinterpret_cast<FSlateBrush*>(__Local__230);
	auto& __Local__231 = (*(AccessPrivateProperty<UObject* >(&(__Local__228), FSlateBrush::__PPO__ResourceObject() )));
	__Local__231 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpfv__MaleAvatar__pf = __Local__228;
	const UScriptStruct* __Local__233 = FSlateBrush::StaticStruct();
	uint8* __Local__234 = (uint8*)FMemory_Alloca(__Local__233->GetStructureSize());
	__Local__233->InitializeStruct(__Local__234);
	FSlateBrush& __Local__232 = *reinterpret_cast<FSlateBrush*>(__Local__234);
	__Local__232.ImageSize = FVector2D(2048.000000, 1024.000000);
	auto& __Local__235 = (*(AccessPrivateProperty<UObject* >(&(__Local__232), FSlateBrush::__PPO__ResourceObject() )));
	__Local__235 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	bpfv__FemaleAvatar__pf = __Local__232;
	return bpp__ReturnValue__pf;
}
FSlateBrush  UChangeAvatarHUD_C__pf1376575910::bpf__GetBrush_2__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__FinalAvatar__pf{};
	FSlateBrush bpfv__FemaleAvatar__pf{};
	FSlateBrush bpfv__MaleAvatar__pf{};
	const UScriptStruct* __Local__237 = FSlateBrush::StaticStruct();
	uint8* __Local__238 = (uint8*)FMemory_Alloca(__Local__237->GetStructureSize());
	__Local__237->InitializeStruct(__Local__238);
	FSlateBrush& __Local__236 = *reinterpret_cast<FSlateBrush*>(__Local__238);
	__Local__236.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__239 = (*(AccessPrivateProperty<UObject* >(&(__Local__236), FSlateBrush::__PPO__ResourceObject() )));
	__Local__239 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpfv__MaleAvatar__pf = __Local__236;
	const UScriptStruct* __Local__241 = FSlateBrush::StaticStruct();
	uint8* __Local__242 = (uint8*)FMemory_Alloca(__Local__241->GetStructureSize());
	__Local__241->InitializeStruct(__Local__242);
	FSlateBrush& __Local__240 = *reinterpret_cast<FSlateBrush*>(__Local__242);
	__Local__240.ImageSize = FVector2D(20.000000, 20.000000);
	auto& __Local__243 = (*(AccessPrivateProperty<UObject* >(&(__Local__240), FSlateBrush::__PPO__ResourceObject() )));
	__Local__243 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	bpfv__FemaleAvatar__pf = __Local__240;
	const UScriptStruct* __Local__245 = FSlateBrush::StaticStruct();
	uint8* __Local__246 = (uint8*)FMemory_Alloca(__Local__245->GetStructureSize());
	__Local__245->InitializeStruct(__Local__246);
	FSlateBrush& __Local__244 = *reinterpret_cast<FSlateBrush*>(__Local__246);
	__Local__244.ImageSize = FVector2D(20.000000, 20.000000);
	bpfv__FinalAvatar__pf = __Local__244;
	bpfv__FinalAvatar__pf = bpfv__MaleAvatar__pf;
	bpp__ReturnValue__pf = bpfv__FinalAvatar__pf;
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UChangeAvatarHUD_C__pf1376575910::bpf__GetVisibility_2__pf()
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
				bool  __Local__247 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsNorthernFrontActive__pf) : (__Local__247));
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
ESlateVisibility  UChangeAvatarHUD_C__pf1376575910::bpf__GetVisibility_3__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable__pf{};
	ESlateVisibility bpfv__Temp_byte_Variable_1__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	USaveGameBP_C__pf4030252459* bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ESlateVisibility bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpfv__Temp_byte_Variable__pf = ESlateVisibility::Visible;
				bpfv__Temp_byte_Variable_1__pf = ESlateVisibility::Hidden;
				bool  __Local__248 = false;
				bpfv__Temp_bool_Variable__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsRobotUnlocked__pf) : (__Local__248));
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
FSlateBrush  UChangeAvatarHUD_C__pf1376575910::bpf__GetFinalBrush_Demon__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__LockBrush__pf{};
	FSlateBrush bpfv__HaraBrush__pf{};
	FSlateBrush bpfv__FinalBrush__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__250 = FSlateBrush::StaticStruct();
				uint8* __Local__251 = (uint8*)FMemory_Alloca(__Local__250->GetStructureSize());
				__Local__250->InitializeStruct(__Local__251);
				FSlateBrush& __Local__249 = *reinterpret_cast<FSlateBrush*>(__Local__251);
				__Local__249.ImageSize = FVector2D(20.000000, 20.000000);
				bpfv__FinalBrush__pf = __Local__249;
			}
		case 2:
			{
				const UScriptStruct* __Local__253 = FSlateBrush::StaticStruct();
				uint8* __Local__254 = (uint8*)FMemory_Alloca(__Local__253->GetStructureSize());
				__Local__253->InitializeStruct(__Local__254);
				FSlateBrush& __Local__252 = *reinterpret_cast<FSlateBrush*>(__Local__254);
				__Local__252.ImageSize = FVector2D(20.000000, 20.000000);
				auto& __Local__255 = (*(AccessPrivateProperty<UObject* >(&(__Local__252), FSlateBrush::__PPO__ResourceObject() )));
				__Local__255 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				bpfv__HaraBrush__pf = __Local__252;
			}
		case 3:
			{
				const UScriptStruct* __Local__257 = FSlateBrush::StaticStruct();
				uint8* __Local__258 = (uint8*)FMemory_Alloca(__Local__257->GetStructureSize());
				__Local__257->InitializeStruct(__Local__258);
				FSlateBrush& __Local__256 = *reinterpret_cast<FSlateBrush*>(__Local__258);
				__Local__256.ImageSize = FVector2D(10.000000, 13.444320);
				auto& __Local__259 = (*(AccessPrivateProperty<UObject* >(&(__Local__256), FSlateBrush::__PPO__ResourceObject() )));
				__Local__259 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				bpfv__LockBrush__pf = __Local__256;
			}
		case 4:
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
		case 5:
			{
				bool  __Local__260 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsNorthernFrontActive__pf) : (__Local__260)))
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				bpfv__FinalBrush__pf = bpfv__HaraBrush__pf;
			}
		case 7:
			{
				bpp__ReturnValue__pf = bpfv__FinalBrush__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__FinalBrush__pf = bpfv__LockBrush__pf;
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FSlateBrush  UChangeAvatarHUD_C__pf1376575910::bpf__GetFinalBrush_Cyber__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__LockBrush__pf{};
	FSlateBrush bpfv__RobotBrush__pf{};
	FSlateBrush bpfv__FinalBrush__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	USaveGameBP_C__pf4030252459* bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__262 = FSlateBrush::StaticStruct();
				uint8* __Local__263 = (uint8*)FMemory_Alloca(__Local__262->GetStructureSize());
				__Local__262->InitializeStruct(__Local__263);
				FSlateBrush& __Local__261 = *reinterpret_cast<FSlateBrush*>(__Local__263);
				__Local__261.ImageSize = FVector2D(20.000000, 20.000000);
				bpfv__FinalBrush__pf = __Local__261;
			}
		case 2:
			{
				const UScriptStruct* __Local__265 = FSlateBrush::StaticStruct();
				uint8* __Local__266 = (uint8*)FMemory_Alloca(__Local__265->GetStructureSize());
				__Local__265->InitializeStruct(__Local__266);
				FSlateBrush& __Local__264 = *reinterpret_cast<FSlateBrush*>(__Local__266);
				__Local__264.ImageSize = FVector2D(20.000000, 20.000000);
				auto& __Local__267 = (*(AccessPrivateProperty<UObject* >(&(__Local__264), FSlateBrush::__PPO__ResourceObject() )));
				__Local__267 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
				bpfv__RobotBrush__pf = __Local__264;
			}
		case 3:
			{
				const UScriptStruct* __Local__269 = FSlateBrush::StaticStruct();
				uint8* __Local__270 = (uint8*)FMemory_Alloca(__Local__269->GetStructureSize());
				__Local__269->InitializeStruct(__Local__270);
				FSlateBrush& __Local__268 = *reinterpret_cast<FSlateBrush*>(__Local__270);
				__Local__268.ImageSize = FVector2D(10.000000, 13.444320);
				auto& __Local__271 = (*(AccessPrivateProperty<UObject* >(&(__Local__268), FSlateBrush::__PPO__ResourceObject() )));
				__Local__271 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				bpfv__LockBrush__pf = __Local__268;
			}
		case 4:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 5:
			{
				bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bool  __Local__272 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsRobotUnlocked__pf) : (__Local__272)))
				{
					__CurrentState = 9;
					break;
				}
			}
		case 7:
			{
				bpfv__FinalBrush__pf = bpfv__RobotBrush__pf;
			}
		case 8:
			{
				bpp__ReturnValue__pf = bpfv__FinalBrush__pf;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__FinalBrush__pf = bpfv__LockBrush__pf;
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FSlateBrush  UChangeAvatarHUD_C__pf1376575910::bpf__Get_Image_Cyber_Brush_0__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__LockBrush__pf{};
	FSlateBrush bpfv__CyberBrush__pf{};
	FSlateBrush bpfv__FinalBrush__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__274 = FSlateBrush::StaticStruct();
				uint8* __Local__275 = (uint8*)FMemory_Alloca(__Local__274->GetStructureSize());
				__Local__274->InitializeStruct(__Local__275);
				FSlateBrush& __Local__273 = *reinterpret_cast<FSlateBrush*>(__Local__275);
				__Local__273.ImageSize = FVector2D(20.000000, 20.000000);
				bpfv__FinalBrush__pf = __Local__273;
			}
		case 2:
			{
				const UScriptStruct* __Local__277 = FSlateBrush::StaticStruct();
				uint8* __Local__278 = (uint8*)FMemory_Alloca(__Local__277->GetStructureSize());
				__Local__277->InitializeStruct(__Local__278);
				FSlateBrush& __Local__276 = *reinterpret_cast<FSlateBrush*>(__Local__278);
				__Local__276.ImageSize = FVector2D(20.000000, 20.000000);
				auto& __Local__279 = (*(AccessPrivateProperty<UObject* >(&(__Local__276), FSlateBrush::__PPO__ResourceObject() )));
				__Local__279 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
				bpfv__CyberBrush__pf = __Local__276;
			}
		case 3:
			{
				const UScriptStruct* __Local__281 = FSlateBrush::StaticStruct();
				uint8* __Local__282 = (uint8*)FMemory_Alloca(__Local__281->GetStructureSize());
				__Local__281->InitializeStruct(__Local__282);
				FSlateBrush& __Local__280 = *reinterpret_cast<FSlateBrush*>(__Local__282);
				__Local__280.ImageSize = FVector2D(10.000000, 13.444320);
				auto& __Local__283 = (*(AccessPrivateProperty<UObject* >(&(__Local__280), FSlateBrush::__PPO__ResourceObject() )));
				__Local__283 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				bpfv__LockBrush__pf = __Local__280;
			}
		case 4:
			{
				if (!bpv__IsShaldAliveForCyber__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 5:
			{
				bpfv__FinalBrush__pf = bpfv__CyberBrush__pf;
			}
		case 6:
			{
				bpp__ReturnValue__pf = bpfv__FinalBrush__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__FinalBrush__pf = bpfv__LockBrush__pf;
				__CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FSlateBrush  UChangeAvatarHUD_C__pf1376575910::bpf__GetFinalBrush_Astro__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__AstroBrush__pf{};
	FSlateBrush bpfv__LockBrush__pf{};
	FSlateBrush bpfv__FinalBrush__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	USaveGameBP_C__pf4030252459* bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				const UScriptStruct* __Local__285 = FSlateBrush::StaticStruct();
				uint8* __Local__286 = (uint8*)FMemory_Alloca(__Local__285->GetStructureSize());
				__Local__285->InitializeStruct(__Local__286);
				FSlateBrush& __Local__284 = *reinterpret_cast<FSlateBrush*>(__Local__286);
				__Local__284.ImageSize = FVector2D(20.000000, 20.000000);
				bpfv__FinalBrush__pf = __Local__284;
			}
		case 2:
			{
				const UScriptStruct* __Local__288 = FSlateBrush::StaticStruct();
				uint8* __Local__289 = (uint8*)FMemory_Alloca(__Local__288->GetStructureSize());
				__Local__288->InitializeStruct(__Local__289);
				FSlateBrush& __Local__287 = *reinterpret_cast<FSlateBrush*>(__Local__289);
				__Local__287.ImageSize = FVector2D(10.000000, 13.444320);
				auto& __Local__290 = (*(AccessPrivateProperty<UObject* >(&(__Local__287), FSlateBrush::__PPO__ResourceObject() )));
				__Local__290 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				bpfv__LockBrush__pf = __Local__287;
			}
		case 3:
			{
				const UScriptStruct* __Local__292 = FSlateBrush::StaticStruct();
				uint8* __Local__293 = (uint8*)FMemory_Alloca(__Local__292->GetStructureSize());
				__Local__292->InitializeStruct(__Local__293);
				FSlateBrush& __Local__291 = *reinterpret_cast<FSlateBrush*>(__Local__293);
				__Local__291.ImageSize = FVector2D(20.000000, 20.000000);
				auto& __Local__294 = (*(AccessPrivateProperty<UObject* >(&(__Local__291), FSlateBrush::__PPO__ResourceObject() )));
				__Local__294 = CastChecked<UObject>(CastChecked<UDynamicClass>(UChangeAvatarHUD_C__pf1376575910::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
				bpfv__AstroBrush__pf = __Local__291;
			}
		case 4:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 5:
			{
				bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bool  __Local__295 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsAstroUnlocked__pf) : (__Local__295)))
				{
					__CurrentState = 9;
					break;
				}
			}
		case 7:
			{
				bpfv__FinalBrush__pf = bpfv__AstroBrush__pf;
			}
		case 8:
			{
				bpp__ReturnValue__pf = bpfv__FinalBrush__pf;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__FinalBrush__pf = bpfv__LockBrush__pf;
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UChangeAvatarHUD_C__pf1376575910::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{570, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Default.BK_Default 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/28_Days_Later_Font.28_Days_Later_Font 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Button_Normal.Button_Normal 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Button_Overlap.Button_Overlap 
		{595, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarMale_Mat.Target_AvatarMale_Mat 
		{596, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarFemale__Mat.Target_AvatarFemale__Mat 
		{597, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarRobot_Mat.Target_AvatarRobot_Mat 
		{598, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarHara_Mat.Target_AvatarHara_Mat 
		{599, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarKnight_Mat.Target_AvatarKnight_Mat 
		{600, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarCyber_Mat.Target_AvatarCyber_Mat 
		{601, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarAstro_Mat.Target_AvatarAstro_Mat 
		{556, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level3.BK_Level3 
		{557, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level6.BK_Level6 
		{558, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level8.BK_Level8 
		{559, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level12.BK_Level12 
		{560, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Endgame.BK_Endgame 
		{604, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarFemale_Mat.Target_AvatarFemale_Mat 
		{603, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/ChangeAvatar/lock.lock 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UChangeAvatarHUD_C__pf1376575910::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{663, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/GamepadInteraction.GamepadInteraction_C 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{602, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneCapture2D 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{404, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{547, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{400, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{330, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/DialoguePlugin.DialogueUserWidget 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/MousePlayerController.MousePlayerController_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MousePlayerController_C /Game/ThirdPersonBP/Blueprints/MousePlayerController.Default__MousePlayerController_C 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/Mouse/Mira.Mira 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/OnlineSubsystemUtils.AchievementWriteDelegate__DelegateSignature 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMesh 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TargetPoint 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/FMODStudio.FMODBlueprintStatics 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/FMODStudio.FMODEventInstance 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_NF.C_NF 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_PerfectWorld.C_PerfectWorld 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_3.C_3 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_10.C_10 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_9.C_9 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_8.C_8 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_7.C_7 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_6.C_6 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_5.C_5 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_4.C_4 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_2.C_2 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_1.C_1 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_Tut.C_Tut 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Enemies/Death_Trans_Clean_MAT_Inst.Death_Trans_Clean_MAT_Inst 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy1/EnemyType1.EnemyType1 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Rifle_Walk_mixamo_com.Rifle_Walk_mixamo_com 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/Enemy1_MAT.Enemy1_MAT 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/_Eye_trans._Eye_trans 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ka47/SM_KA47.SM_KA47 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_MuzzleFlash1_01.Par_MuzzleFlash1_01 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Weapons/Sniper/SniperPartycleSystemLaser.SniperPartycleSystemLaser 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Weapons/Sniper/SniperShootPS2.SniperShootPS2 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_RattleSnake_Content/Meshes/Attachments/SM_RattleSnake_Silencer.SM_RattleSnake_Silencer 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_RattleSnake_Content/Meshes/Attachments/SM_RattleSnake_Scope_X6.SM_RattleSnake_Scope_X6 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Buttstock.SM_Buttstock 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Barrel_Cover.SM_Barrel_Cover 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Handguard_Type_1.SM_Handguard_Type_1 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_Vulcannon_Player.Par_Vulcannon_Player 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/RedMaterial.RedMaterial 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpotLightComponent 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/GasMask/GasMask.GasMask 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Circle/Circulo1_Mat.Circulo1_Mat 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PointLightComponent 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/FMODStudio.FMODAudioComponent 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperSpriteComponent 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/Art/Circle/Circulo3_Sprite.Circulo3_Sprite 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.ParticleCollisionSignature__DelegateSignature 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Rifle/RifleShoot.RifleShoot 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShootNoBump1.ShotgunShootNoBump1 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Weapons/RPG/RPGNoAmmoStatic.RPGNoAmmoStatic 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShoot.ShotgunShoot 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorShooting/ShootingAITree.ShootingAITree 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSuicide/SuicideAITree.SuicideAITree 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSniper/SniperAITree.SniperAITree 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSlave/SlaveAITree.SlaveAITree 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Sniper/SniperShoot.SniperShoot 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/NoAmmo/NoAmmo.NoAmmo 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LocalLightComponent 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Death1.Death1 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Blood/Splatter_PS.Splatter_PS 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Blood/Splatters_Decal_M.Splatters_Decal_M 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.ParticleSysParam 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EParticleSysParamType 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/VIP/Delta.Delta 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/VIP/VIP_MAT.VIP_MAT 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_2/NF_Soldier2.NF_Soldier2 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/EnemyNF_2/NF_Soldier2_color_Mat.NF_Soldier2_color_Mat 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_5/NF_Soldier5.NF_Soldier5 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/EnemyNF_5/NF_Soldier5_color_Mat.NF_Soldier5_color_Mat 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_1/NF_Soldier1.NF_Soldier1 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/EnemyNF_1/NF_Soldier1_color_Mat.NF_Soldier1_color_Mat 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_4/NF_Soldier4.NF_Soldier4 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/EnemyNF_4/NF_Soldier4_color_Mat.NF_Soldier4_color_Mat 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_3/NF_Soldier3.NF_Soldier3 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/EnemyNF_3/NF_Soldier3_color_Mat.NF_Soldier3_color_Mat 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/EnemyNF_6/NF_Soldier6.NF_Soldier6 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/EnemyNF_6/NF_Soldier6_color_Mat.NF_Soldier6_color_Mat 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy5/Enemy5.Enemy5 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy5/Enemy5_MAT.Enemy5_MAT 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy4/Enemy4.Enemy4 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy4/Enemy4_MAT.Enemy4_MAT 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy3/Enemy3.Enemy3 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy3/Enemy3_MAT.Enemy3_MAT 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy6/Enemy6.Enemy6 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy6/Enemy6_MAT.Enemy6_MAT 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy2/Enemy2.Enemy2 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy2/Enemy2_MAT.Enemy2_MAT 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT1.GasMaskMAT1 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT2.GasMaskMAT2 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT3.GasMaskMAT3 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT4.GasMaskMAT4 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT5.GasMaskMAT5 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT6.GasMaskMAT6 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT7.GasMaskMAT7 
		{160, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT8.GasMaskMAT8 
		{161, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT9.GasMaskMAT9 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT10.GasMaskMAT10 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT11.GasMaskMAT11 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GasMask/GasMaskMAT12.GasMaskMAT12 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Knife/KnifeShoot.KnifeShoot 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/M4A4_Animated/Sounds/Sound_Packs/Warfare_SFX_Bundle/Gun_Sound_Essentials/Wavs/Shotgun01.Shotgun01 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeRifle.CameraShakeRifle_C 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeRifle_C /Game/CameraActor/CameraShakeRifle.Default__CameraShakeRifle_C 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeShotgun.CameraShakeShotgun_C 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeShotgun_C /Game/CameraActor/CameraShakeShotgun.Default__CameraShakeShotgun_C 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeSniper.CameraShakeSniper_C 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeSniper_C /Game/CameraActor/CameraShakeSniper.Default__CameraShakeSniper_C 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave1/SlaveMesh1.SlaveMesh1 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave1/BodySlave1.BodySlave1 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave2/Slave2NoArms.Slave2NoArms 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave2/BodySlave2.BodySlave2 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave3/Slave3NoArms.Slave3NoArms 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave3/BodySlave3.BodySlave3 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ka47/M_KA47.M_KA47 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Shotgun_StaticMesh.Shotgun_StaticMesh 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/BLS_Shotgun/Materials/Black/MI_Black_Tex1.MI_Black_Tex1 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/M9_Knife/SM_M9_Knife.SM_M9_Knife 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/M9_Knife/M_M9_Knife.M_M9_Knife 
		{185, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_RattleSnake_Content/Sniper_StaticMesh.Sniper_StaticMesh 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/BLS_RattleSnake_Content/Materials/Cooper_Black/MI_SniperRifleCooper_p1.MI_SniperRifleCooper_p1 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/BLS_RattleSnake_Content/Materials/Cooper_Black/MI_SniperRifleCooper_p2.MI_SniperRifleCooper_p2 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/BLS_RattleSnake_Content/Materials/Cooper_Black/MI_SniperRifleCooper_p3.MI_SniperRifleCooper_p3 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Weapons/RPG/RPGAllStatic.RPGAllStatic 
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Weapons/RPG/Plastic_Smooth_-_Dark_Brown.Plastic_Smooth_-_Dark_Brown 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Weapons/RPG/Metallic_Paint_Glossy_-_Forest_Green.Metallic_Paint_Glossy_-_Forest_Green 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Weapons/RPG/Metal_Aluminum_Polished.Metal_Aluminum_Polished 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/KA_Val/SM_KA_Val_Y.SM_KA_Val_Y 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/KA_Val/M_KA_Val_Black_Camo.M_KA_Val_Black_Camo 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MovementComponent 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Alarm/ScannerMaterial.ScannerMaterial 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Enemies/Expose_Trans_Clean_MAT_Inst.Expose_Trans_Clean_MAT_Inst 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Up.Gamepad_Stick_Up 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Down.Gamepad_Stick_Down 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_X.Gamepad_X 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Y.Gamepad_Y 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Left.Gamepad_Stick_Left 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Right.Gamepad_Stick_Right 
		{209, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Weapons/Sniper/SniperSM.SniperSM 
		{210, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder 
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Post_Apoca_Character/Mesh/GasMask_StaticMesh.GasMask_StaticMesh 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Hara/Meshes/SM_Hara_horn.SM_Hara_horn 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Helmet.SK_GothicKnight_Helmet 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Glove.SK_GothicKnight_Glove 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_CapeFur.SK_GothicKnight_CapeFur 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/GKnight/Materials/CustomizationExample/MI_GKnightCape.MI_GKnightCape 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_BodySkirtLong.SK_GothicKnight_BodySkirtLong 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Pants.SK_GothicKnight_Pants 
		{219, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Head.SK_GothicKnight_Head 
		{220, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/PumpkinHead/PumpkinHead.PumpkinHead 
		{221, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/CyberGirl/Character/Meshes/Skin01/SK_CyberGirl_Skin01.SK_CyberGirl_Skin01 
		{222, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Astro/astrorig.astrorig 
		{223, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Steiner/Steiner.Steiner 
		{224, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/DyingBack_Robot.DyingBack_Robot 
		{225, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_DieB.Anim_DieB 
		{226, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/DyingBack_PostApoc.DyingBack_PostApoc 
		{227, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Knocked_Down_Short.Knocked_Down_Short 
		{228, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Blood/SplatterRed_PS.SplatterRed_PS 
		{229, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Blood/SplattersRed_Decal_M.SplattersRed_Decal_M 
		{230, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Post_Apoca_Character/Mesh/SK_Full.SK_Full 
		{231, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/SciFi_Robot/MESHES/SCIFI_ROBOT_IK_SK.SCIFI_ROBOT_IK_SK 
		{232, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Apocalypse_Girl/Mesh/SK_Apocalypse_Girl_Full.SK_Apocalypse_Girl_Full 
		{233, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Hara/Meshes/SM_Hara.SM_Hara 
		{234, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Base_Materials/M_brow_F.M_brow_F 
		{235, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Base_Materials/M_cheek.M_cheek 
		{236, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara_eye_l.M_hara_eye_l 
		{237, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara_eye_r.M_hara_eye_r 
		{238, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Base_Materials/M_eyebase_F.M_eyebase_F 
		{239, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Base_Materials/M_face_C.M_face_C 
		{240, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara_hair.M_hara_hair 
		{241, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara_wing.M_hara_wing 
		{242, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Hara/Materials/Hara_Materials/M_hara.M_hara 
		{243, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Post_Apoca_Character/Material/M_Post_Apocal_Trans.M_Post_Apocal_Trans 
		{244, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkinnedMeshComponent 
		{245, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Transparent/Transparent_MATInst.Transparent_MATInst 
		{246, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/ShotgunShoot1.ShotgunShoot1 
		{247, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/KnifeSound1.KnifeSound1 
		{248, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/SniperShoot1.SniperShoot1 
		{249, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Art/Enemies/Enemy1/EnemyType1_Skeleton.EnemyType1_Skeleton 
		{250, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{251, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{252, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{253, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{254, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{255, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{256, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{257, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{258, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend 
		{259, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{260, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Dying_Suicide_Knife.Dying_Suicide_Knife 
		{261, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/SuicideKnife.SuicideKnife 
		{262, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpaceKnifeAttacking.PlayerBlendSpaceKnifeAttacking 
		{263, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Stabbing.Stabbing 
		{264, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpaceKnifeInEnemy.PlayerBlendSpaceKnifeInEnemy 
		{265, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/SuicideRifle.SuicideRifle 
		{266, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/PlayerAnimations/Gunplay-Shooting.Gunplay-Shooting 
		{267, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerInEnemyBlendSpace.PlayerInEnemyBlendSpace 
		{268, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpace.PlayerBlendSpace 
		{269, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{270, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Gun_Trace01.Gun_Trace01 
		{271, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{272, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{273, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/Objects/Glass/GlassMesh_DM.GlassMesh_DM 
		{274, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/BLS_RattleSnake_Content/Materials/M_Glass.M_Glass 
		{275, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{276, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/BulletTracer/BulletTracerMAT2.BulletTracerMAT2 
		{277, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleRPG_Final.IdleRPG_Final 
		{278, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpaceKnife.PlayerBlendSpaceKnife 
		{279, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_762x51.SM_Shell_762x51 
		{280, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_762x39.SM_Shell_762x39 
		{281, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_762x39_Empty.M_762x39_Empty 
		{282, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_12Gauge.SM_Shell_12Gauge 
		{283, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_Ammo_12gauge.M_Ammo_12gauge 
		{284, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_40mm_G.SM_Shell_40mm_G 
		{285, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_40mm_Grenade.M_40mm_Grenade 
		{286, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/FreeFurniturePack/Meshes/SM_Table_Lamp_DM.SM_Table_Lamp_DM 
		{287, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/FreeFurniturePack/Meshes/SM_Old_Chair_DM.SM_Old_Chair_DM 
		{288, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Light01_DM.SM_Light01_DM 
		{289, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VFX_Toolkit_V1/Mat_Functions/MF_Examples/Flicker_Example.Flicker_Example 
		{290, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/scifi_kitbash/materials/M_LightGlow.M_LightGlow 
		{291, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Barrel_DM.SM_Barrel_DM 
		{292, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Missile/MissileExplosionBig.MissileExplosionBig 
		{293, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{294, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/M5VFXVOL2/Particles/Explosion/Fire_Exp_00.Fire_Exp_00 
		{295, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Pipe01_DM.SM_Pipe01_DM 
		{296, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Pipe01_Bend90_DM.SM_Pipe01_Bend90_DM 
		{297, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/scifi_kitbash/meshes/SM_Plane_DM.SM_Plane_DM 
		{298, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/AnimalVarietyPack/Wolf/Meshes/SK_Wolf.SK_Wolf 
		{299, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/AnimalVarietyPack/Wolf/Materials/M_Wolf.M_Wolf 
		{300, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Dog/DogSound1.DogSound1 
		{301, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT1_BaseColor_Mat.CollarMAT1_BaseColor_Mat 
		{302, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT2_BaseColor_Mat.CollarMAT2_BaseColor_Mat 
		{303, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT3_BaseColor_Mat.CollarMAT3_BaseColor_Mat 
		{304, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT4_BaseColor_Mat.CollarMAT4_BaseColor_Mat 
		{305, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT5_BaseColor_Mat.CollarMAT5_BaseColor_Mat 
		{306, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT6_BaseColor_Mat.CollarMAT6_BaseColor_Mat 
		{307, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT7_BaseColor_Mat.CollarMAT7_BaseColor_Mat 
		{308, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT8_BaseColor_Mat.CollarMAT8_BaseColor_Mat 
		{309, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT9_BaseColor_Mat.CollarMAT9_BaseColor_Mat 
		{310, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT10_BaseColor_Mat.CollarMAT10_BaseColor_Mat 
		{311, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT11_BaseColor_Mat.CollarMAT11_BaseColor_Mat 
		{312, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/CollarDogMAT/CollarMAT12_BaseColor_Mat.CollarMAT12_BaseColor_Mat 
		{313, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/AnimalVarietyPack/Wolf/Animations/ANIM_Wolf_Death.ANIM_Wolf_Death 
		{314, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/AmplifyLUTPack/FilmColor/OldFilm.OldFilm 
		{315, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/AmplifyLUTPack/Base/Normal.Normal 
		{316, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/GoToLocation/green_Mat.green_Mat 
		{317, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{318, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraActor 
		{319, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Petting_PostApoc.Petting_PostApoc 
		{320, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/DanceMoves_Anim_PostApoc.DanceMoves_Anim_PostApoc 
		{321, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Running_Anim_PostApoc.Running_Anim_PostApoc 
		{322, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/IdleTouchFloor_PostApoc.IdleTouchFloor_PostApoc 
		{323, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Idle_Anim_PostApoc.Idle_Anim_PostApoc 
		{324, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/IdleStatic_PostApoc.IdleStatic_PostApoc 
		{325, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/DialoguePlugin.Dialogue 
		{326, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{327, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{328, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{329, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.KeyEvent 
		{331, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.HorizontalBox 
		{332, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_R.Key_R 
		{333, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Escape.Escape 
		{334, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_A.Gamepad_A 
		{335, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_B.Gamepad_B 
		{336, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Start.Gamepad_Start 
		{337, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Select.Gamepad_Select 
		{338, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/WorldMap/WorldMapMusic.WorldMapMusic 
		{339, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/SciFi_Robot/MESHES/CLOAK_SK.CLOAK_SK 
		{340, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/PartyHat/PartyHat.PartyHat 
		{341, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/CyberGirl/Character/Meshes/SK_CyberGirl.SK_CyberGirl 
		{342, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_Cutepose_WorldMap.Anim_Cutepose_WorldMap 
		{343, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /NorthernFront/Sound/EnteringLevel_DemonSound02.EnteringLevel_DemonSound02 
		{344, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Victory_Robot.Victory_Robot 
		{345, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_Pose03.A_Pose03 
		{346, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Victory_Idle_Anim_PostApoc.Victory_Idle_Anim_PostApoc 
		{347, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/SciFi_Robot/MATERIALS/BODY/NAVY_MAT.NAVY_MAT 
		{348, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Post_Apoca_Character/Material/M_Post_Apocal.M_Post_Apocal 
		{349, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Apocalypse_Girl/Materials/M_Apocalypse_Girl.M_Apocalypse_Girl 
		{350, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/SciFi_Robot/Mannequin/Character/Mesh/UE4_Robot_Mannequin_Skeleton.UE4_Robot_Mannequin_Skeleton 
		{351, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Petting_Robot.Petting_Robot 
		{352, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/DanceMoves_Robot.DanceMoves_Robot 
		{353, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Running_Robot.Running_Robot 
		{354, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle3_Robot.Idle3_Robot 
		{355, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle2_Robot.Idle2_Robot 
		{356, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle1_Robot.Idle1_Robot 
		{357, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking2.Talking2 
		{358, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking1.Talking1 
		{359, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Post_Apoca_Character/AnimDemoScene/Mesh/UE4_Mannequin_Skeleton_GOOD.UE4_Mannequin_Skeleton_GOOD 
		{360, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Rifle_Running_PostApoc.Rifle_Running_PostApoc 
		{361, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Idle_Standing.Idle_Standing 
		{362, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Art/WorldMapAnim/WorldMapPlayerBS.WorldMapPlayerBS 
		{363, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Hara/Meshes/SK_Hara_Skeleton.SK_Hara_Skeleton 
		{364, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Hara_Anim/WalkMap/Petting_Hara.Petting_Hara 
		{365, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Hara_Anim/WalkMap/DanceMoves_Hara.DanceMoves_Hara 
		{366, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_Run.Anim_Run 
		{367, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_IdleF.Anim_IdleF 
		{368, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/CyberGirl/Character/Meshes/Skin01/Materials/instance/MI_NPRCloth002.MI_NPRCloth002 
		{369, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_Tut.L_Tut 
		{370, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_1.L_1 
		{371, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_2.L_2 
		{372, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_3.L_3 
		{373, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_4.L_4 
		{374, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_5.L_5 
		{375, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_6.L_6 
		{376, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_7.L_7 
		{377, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_8.L_8 
		{378, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_9.L_9 
		{379, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_10.L_10 
		{380, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Lobby/L_11.L_11 
		{381, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/RunningNoWeapon.RunningNoWeapon 
		{382, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleMoverBrazo.IdleMoverBrazo 
		{383, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Idle_Happy.Idle_Happy 
		{384, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleMoverPiernas.IdleMoverPiernas 
		{385, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Idle_Lobby.Idle_Lobby 
		{386, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking3.Talking3 
		{387, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/HUD_02.HUD_02 
		{388, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/coolvetica_rg_Font.coolvetica_rg_Font 
		{389, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/ArrowDialogue2.ArrowDialogue2 
		{390, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_W.Key_W 
		{391, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_A.Key_A 
		{392, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_S.Key_S 
		{393, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_D.Key_D 
		{394, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_E.Key_E 
		{395, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_P.Key_P 
		{396, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/SPACE.SPACE 
		{397, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/PerfectWorldArt/Kibo1.Kibo1 
		{398, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.OverlaySlot 
		{399, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/DialoguePlugin.DialogueNode 
		{401, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBoxSlot 
		{402, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.EventReply 
		{403, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{405, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{406, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_GridCell.M_GridCell 
		{407, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_LensDistortion.M_LensDistortion 
		{408, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_ScopePlaceholder.T_ScopePlaceholder 
		{409, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Zone.M_Zone 
		{410, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Pyramid.M_Pyramid 
		{411, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Mojo.M_Mojo 
		{412, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask4.T_Mask4 
		{413, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask7.T_Mask7 
		{414, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_GradientFog.M_GradientFog 
		{415, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ColorIndexer.M_ColorIndexer 
		{416, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Dither.M_Dither 
		{417, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Speedlines.M_Speedlines 
		{418, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_CyberScan.M_CyberScan 
		{419, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Post_Apoca_Character/Mesh/SK_Mask.SK_Mask 
		{420, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.RotatingMovementComponent 
		{421, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/LevelSequence.LevelSequenceActor 
		{422, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/HUD/Icons/bubble_Sprite1.bubble_Sprite1 
		{423, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Twan/Twan1.Twan1 
		{424, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Twan2/Twan2.Twan2 
		{425, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Shald/Shald1.Shald1 
		{426, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Varia/Varia.Varia 
		{427, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Vic/Vic01.Vic01 
		{428, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Ridgway/Ridgway.Ridgway 
		{429, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Nana/Nana.Nana 
		{430, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Karl/Karl.Karl 
		{431, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Karla/Karla.Karla 
		{432, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Vor/Vor.Vor 
		{433, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Niff/Niff.Niff 
		{434, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Truman/Truman.Truman 
		{435, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Torturer/Torturer.Torturer 
		{436, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/AnimalVarietyPack/Wolf/Animations/ANIM_Wolf_Sleep.ANIM_Wolf_Sleep 
		{437, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/Truman/NF_Truman.NF_Truman 
		{438, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/Recruit/NF_Recruit.NF_Recruit 
		{439, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/Hartman/NF_Hartman_.NF_Hartman_ 
		{440, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/Doctor/NF_Doctor.NF_Doctor 
		{441, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /NorthernFront/NPCsMesh/CorporalJoker/NF_CorporalJoker.NF_CorporalJoker 
		{442, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Letterboxing.M_Letterboxing 
		{443, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Snow.M_Snow 
		{444, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_WorldSplash.M_WorldSplash 
		{445, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_WorldGlitch.M_WorldGlitch 
		{446, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Digitize.M_Digitize 
		{447, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Alarm.M_Alarm 
		{448, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Sketch.M_Sketch 
		{449, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Wired.M_Wired 
		{450, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ActorFeaturette.M_ActorFeaturette 
		{451, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Infected.M_Infected 
		{452, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_CameraShake.M_CameraShake 
		{453, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ColoredAO.M_ColoredAO 
		{454, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_DiscoBall.M_DiscoBall 
		{455, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_HazyLights.M_HazyLights 
		{456, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_MeltedWorld.M_MeltedWorld 
		{457, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_SelectiveColor.M_SelectiveColor 
		{458, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_Black.T_Black 
		{459, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_Organic03.T_Organic03 
		{460, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PostProcessComponent 
		{461, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialBillboardComponent 
		{462, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Editor_ChameleonIcon.M_Editor_ChameleonIcon 
		{463, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/Chameleon/Curves/C_DistanceToSizeLogo.C_DistanceToSizeLogo 
		{464, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Material 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_White.T_White 
		{465, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextureRenderTarget2D 
		{466, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetRenderingLibrary 
		{467, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.TextureGroup 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture 
		{468, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlendableInterface 
		{469, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{470, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PostProcessSettings 
		{471, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{472, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Chameleon/DataTables/LOOK_Presets.LOOK_Presets 
		{473, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ChannelClamper.M_ChannelClamper 
		{474, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_BleachBypass.M_BleachBypass 
		{475, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_DistanceFog.M_DistanceFog 
		{476, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ChannelSwapper.M_ChannelSwapper 
		{477, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ScreenDrops.M_ScreenDrops 
		{478, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Alcohol.M_Alcohol 
		{479, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Drug.M_Drug 
		{480, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_MosaicTile.M_MosaicTile 
		{481, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_PixelDissolve.M_PixelDissolve 
		{482, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_BlurHLSL.M_BlurHLSL 
		{483, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_WaterDrops.T_WaterDrops 
		{484, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_AsciiHLSL.M_AsciiHLSL 
		{485, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ColorizeHLSL.M_ColorizeHLSL 
		{486, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ComicEdgeHLSL.M_ComicEdgeHLSL 
		{487, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_EdgeDetect3x3HLSL.M_EdgeDetect3x3HLSL 
		{488, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Emboss3x3HLSL.M_Emboss3x3HLSL 
		{489, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_GlitchHLSL.M_GlitchHLSL 
		{490, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_MonitorEffects.M_MonitorEffects 
		{491, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_HardEmbossHLSL.M_HardEmbossHLSL 
		{492, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_HUEPanner.M_HUEPanner 
		{493, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_MonochromeHLSL.M_MonochromeHLSL 
		{494, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_RadialBlurHLSL.M_RadialBlurHLSL 
		{495, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ScratchesHLSL.M_ScratchesHLSL 
		{496, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ScreenWavesHLSL.M_ScreenWavesHLSL 
		{497, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask5.T_Mask5 
		{498, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_Screendrops.T_Screendrops 
		{499, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Invert.M_Invert 
		{500, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Iridescent.M_Iridescent 
		{501, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Kuwahara.M_Kuwahara 
		{502, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Pulse.M_Pulse 
		{503, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Squares.M_Squares 
		{504, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Tiles.M_Tiles 
		{505, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_TVNoise.M_TVNoise 
		{506, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Circles.M_Circles 
		{507, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Sonar.M_Sonar 
		{508, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_DistanceDistortion.M_DistanceDistortion 
		{509, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_CobbleStone_Pebble_N.T_CobbleStone_Pebble_N 
		{510, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Drawing.M_Drawing 
		{511, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_Paper2.T_Paper2 
		{512, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_MagicTransitions.M_MagicTransitions 
		{513, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_GameOver.T_GameOver 
		{514, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask13.T_Mask13 
		{515, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ScreenDamage.M_ScreenDamage 
		{516, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_BloodDrops.T_BloodDrops 
		{517, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_BloodDrops_Blue.T_BloodDrops_Blue 
		{518, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ScreenDecals.M_ScreenDecals 
		{519, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_BulletHole.T_BulletHole 
		{520, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Sharpen.M_Sharpen 
		{521, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ToonShading.M_ToonShading 
		{522, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_AnamorphicLensFlares.M_AnamorphicLensFlares 
		{523, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Frost.M_Frost 
		{524, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_MossyWood.T_MossyWood 
		{525, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Neon.M_Neon 
		{526, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_CustomDepthHighlighter.M_CustomDepthHighlighter 
		{527, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_CustomDepthHighlighterClip.M_CustomDepthHighlighterClip 
		{528, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ScreenFire.M_ScreenFire 
		{529, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Haunted.M_Haunted 
		{530, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_2DTransform.M_2DTransform 
		{531, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Kaleidescope.M_Kaleidescope 
		{532, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/FondoReply.FondoReply 
		{533, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.PointerEvent 
		{534, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/TwLogo.TwLogo 
		{535, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/TwSeleccionado.TwSeleccionado 
		{536, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/TwPressed.TwPressed 
		{537, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_11.Tip_11 
		{538, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_12.Tip_12 
		{539, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/Apocalypse_Font.Apocalypse_Font 
		{540, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/RifleLogo.RifleLogo 
		{541, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/PowerUpCooldown.PowerUpCooldown 
		{542, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/PowerUpReady.PowerUpReady 
		{543, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/RightMousePress.RightMousePress 
		{544, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/R_Bumper.R_Bumper 
		{545, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/GodModeIcon.GodModeIcon 
		{546, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{548, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/ShotgunLogo.ShotgunLogo 
		{549, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/KnifeLogo.KnifeLogo 
		{550, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/SniperLogo.SniperLogo 
		{551, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/RPGLogo.RPGLogo 
		{552, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/AShotgunLogo.AShotgunLogo 
		{553, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.BackgroundBlur 
		{554, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{555, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScaleBox 
		{561, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_02.Tip_02 
		{562, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_03.Tip_03 
		{563, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_04.Tip_04 
		{564, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_05.Tip_05 
		{565, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_06.Tip_06 
		{566, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_07.Tip_07 
		{567, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_08.Tip_08 
		{568, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_09.Tip_09 
		{569, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_10.Tip_10 
		{571, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_01.Tip_01 
		{572, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{573, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{574, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{575, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Pt.Controls_Pt 
		{576, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ru.Controls_Ru 
		{577, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Zh.Controls_Zh 
		{578, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ca.Controls_Ca 
		{579, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Es.Gamepad_Es 
		{580, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Pt.Gamepad_Pt 
		{581, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Ru.Gamepad_Ru 
		{582, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Zh.Gamepad_Zh 
		{583, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Ca.Gamepad_Ca 
		{584, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{585, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ItaFlag.ItaFlag 
		{586, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/EnglishFlag.EnglishFlag 
		{587, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ruFlag.ruFlag 
		{588, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ZhFlag.ZhFlag 
		{589, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/esFlag.esFlag 
		{590, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/PtFlag.PtFlag 
		{591, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/caFlag.caFlag 
		{592, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/FrFlag.FrFlag 
		{593, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetInternationalizationLibrary 
		{594, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{605, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls.Controls 
		{606, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ita.Controls_Ita 
		{607, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Es.Controls_Es 
		{608, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_En.Gamepad_En 
		{609, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_It.Gamepad_It 
		{610, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODBus /Game/FMOD/Buses/Master/SFXAudio.SFXAudio 
		{611, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODBus /Game/FMOD/Buses/Master/MusicAudio.MusicAudio 
		{612, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.EUINavigation 
		{613, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{614, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Bottom.Gamepad_Stick_Bottom 
		{615, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_L_Stick_Top.Gamepad_L_Stick_Top 
		{616, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{617, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/VFX_Toolkit_V1/Textures/Sprites/T_thundaraPanDot_01.T_thundaraPanDot_01 
		{618, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/CyberGirl/Character/Meshes/SKL_CyberGirl.SKL_CyberGirl 
		{619, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_BattleSprint.A_BattleSprint 
		{620, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_BattleIdle.A_BattleIdle 
		{621, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/TitleRectangle.TitleRectangle 
		{622, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/TitleSquare.TitleSquare 
		{623, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Arrow.Arrow 
		{624, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.SizeBox 
		{625, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIPerceptionComponent 
		{626, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AISense_Sight 
		{627, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AISense_Hearing 
		{628, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.BlackboardComponent 
		{629, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AIModule.AIStimulus 
		{630, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorDog/DogAITree.DogAITree 
		{631, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AIModule.BlackboardKeySelector 
		{632, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/AnimalVarietyPack/Wolf/Meshes/SK_Wolf_Skeleton.SK_Wolf_Skeleton 
		{633, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Art/Enemies/DogAnimation/Dog_BlendSpace.Dog_BlendSpace 
		{634, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Hara/Hara_Anim/Combat/Demon_Combat_BS.Demon_Combat_BS 
		{635, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/AnimRobot/AvatarRobot_BS.AvatarRobot_BS 
		{636, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Rifle_Idle_PostApoc.Rifle_Idle_PostApoc 
		{637, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/AvatarRifleBlendSpace.AvatarRifleBlendSpace 
		{638, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/PossesionBeam/PossesionLightning_PT.PossesionLightning_PT 
		{639, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/BulletTracer/BulletTracerMAT.BulletTracerMAT 
		{640, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/KA_Val/SM_KA_Val_X.SM_KA_Val_X 
		{641, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/KA_Val/M_KA_Val.M_KA_Val 
		{642, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Extra_Ammo_Holder.SM_Extra_Ammo_Holder 
		{643, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/BLS_Shotgun/Materials/Black/MI_Black_Tex2.MI_Black_Tex2 
		{644, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VFX_Toolkit_V1/StaticMeshes/Various/SM_MatraRocket_01.SM_MatraRocket_01 
		{645, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VFX_Toolkit_V1/StaticMeshes/Beams/SM_MatraThruster_01.SM_MatraThruster_01 
		{646, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VFX_Toolkit_V1/Materials/356Days/M_MatraThruster_01.M_MatraThruster_01 
		{647, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Missile/MissileExplosionFlesh.MissileExplosionFlesh 
		{648, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/M4A4/Sounds/Sound_Packs/W_SFX/Exp_Sound/Wavs/Explosion_Flesh_01.Explosion_Flesh_01 
		{649, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/M5VFXVOL2/Particles/Explosion/Fire_Exp_02.Fire_Exp_02 
		{650, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/SuicideKnifePreparation.SuicideKnifePreparation 
		{651, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/EnemyBlendSpaceKnife.EnemyBlendSpaceKnife 
		{652, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_Thundara_02.Par_Thundara_02 
		{653, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/BlendSpaceShooting.BlendSpaceShooting 
		{682, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/MainMenu/MainMenu_WB.MainMenu_WB_C 
		{677, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/SaveGame/SaveGameBP.SaveGameBP_C 
		{657, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/MyGameInstance/MyGameInstance.MyGameInstance_C 
		{654, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/DieAgainGamemode.DieAgainGamemode_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UChangeAvatarHUD_C__pf1376575910
{
	FRegisterHelper__UChangeAvatarHUD_C__pf1376575910()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/ChangeAvatar/ChangeAvatarHUD"), &UChangeAvatarHUD_C__pf1376575910::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UChangeAvatarHUD_C__pf1376575910 Instance;
};
FRegisterHelper__UChangeAvatarHUD_C__pf1376575910 FRegisterHelper__UChangeAvatarHUD_C__pf1376575910::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
