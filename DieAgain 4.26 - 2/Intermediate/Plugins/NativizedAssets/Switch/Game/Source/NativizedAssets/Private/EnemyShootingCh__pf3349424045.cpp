#include "NativizedAssets.h"
#include "EnemyShootingCh__pf3349424045.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
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
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
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
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "AnimBP_Shooting__pf3266658394.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODAudioComponent.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODEvent.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODAsset.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteAtlas.h"
#include "CameraActor__pf1295471953.h"
#include "AISniperController__pf1156381827.h"
#include "AISuicideController__pf3889547882.h"
#include "AISlaveController__pf1263353332.h"
#include "AIShootingController__pf681293266.h"
#include "RiflePickUp__pf1651478651.h"
#include "ShotgunPickUp__pf1651478651.h"
#include "SniperPickUp__pf1651478651.h"
#include "KnifePickUp__pf1651478651.h"
#include "RPGPickUp__pf1651478651.h"
#include "AShotgunPickUp__pf1651478651.h"
#include "ThirdPersonCharacter__pf2222656877.h"
#include "EnemyDogCh__pf3349424045.h"
#include "PauseHUD__pf197907997.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "MissileRPG__pf2054339363.h"
#include "MyGameInstance__pf2410127383.h"
#include "AlarmDetectorPawn__pf2693064426.h"
#include "LevelCompleterBP__pf922009354.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODBlueprintStatics.h"
#include "DieAgainGamemode__pf1010915279.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODVCA.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODBank.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODBus.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
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
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/NavigationSystem/Public/NavigationPath.h"
#include "AIShootingPawn__pf681293266.h"
#include "AiSuicidePawn__pf3889547882.h"
#include "AISniperPawn__pf1156381827.h"
#include "AiSlavePawn__pf1263353332.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "GamepadInteraction__pf197907997.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Chameleon__pf565858488.h"
#include "PossesionPS__pf386987942.h"
#include "PossesionEffect__pf2815001878.h"
#include "SaveGameBP__pf4030252459.h"
#include "Curved_Pipe__pf1894626796.h"
#include "Pipe__pf1894626796.h"
#include "ExplosiveBarrel__pf3544028049.h"
#include "Light_01__pf1894626796.h"
#include "Table_Lamp__pf1894626796.h"
#include "Old_Chair__pf1894626796.h"
#include "Glass__pf345340536.h"
#include "Bullet_Actor__pf2054339363.h"
#include "PlayerRifleInEnemyAnimBP__pf2266844876.h"
#include "PlayerHeavyInEnemyAnimBP__pf2266844876.h"
#include "PlayerAnimKnifeInEnemyBP__pf2266844876.h"
#include "EnemyKnifeAnimBP__pf3266658394.h"
#include "PlayerRPGInEnemyWeaponAnimBP__pf2266844876.h"
#include "BulletTracerActor__pf1062751476.h"
#include "Bullet_Trail__pf1062751476.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "Alarm__pf2693064426.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AEnemyShootingCh_C__pf3349424045::AEnemyShootingCh_C__pf3349424045(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
		__Local__3 = 96.000000f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
		__Local__4 = 54.878666f;
		__Local__0->bReceivesDecals = false;
		auto& __Local__5 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
		__Local__5 = ECollisionChannel::ECC_WorldStatic;
		auto& __Local__6 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__7 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__6), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__7 = TArray<FResponseChannel> ();
		__Local__7.AddUninitialized(2);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__7.GetData(), 2);
		auto& __Local__8 = __Local__7[0];
		__Local__8.Channel = FName(TEXT("GunShoot"));
		__Local__8.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__9 = __Local__7[1];
		__Local__9.Channel = FName(TEXT("OverlapShoot"));
		__Local__9.Response = ECollisionResponse::ECR_Ignore;
		__Local__0->SetCollisionProfileName(FName(TEXT("Custom")));
		static TWeakFieldPtr<FProperty> __Local__11{};
		const FProperty* __Local__10 = __Local__11.Get();
		if (nullptr == __Local__10)
		{
			__Local__10 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__10);
			__Local__11 = __Local__10;
		}
		(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->GravityScale = 9999.000000f;
		__Local__1->RotationRate = FRotator(0.000000, 540.000000, 0.000000);
		__Local__1->bOrientRotationToMovement = true;
		static TWeakFieldPtr<FProperty> __Local__13{};
		const FProperty* __Local__12 = __Local__13.Get();
		if (nullptr == __Local__12)
		{
			__Local__12 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__12);
			__Local__13 = __Local__12;
		}
		(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__15{};
		const FProperty* __Local__14 = __Local__15.Get();
		if (nullptr == __Local__14)
		{
			__Local__14 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__14);
			__Local__15 = __Local__14;
		}
		(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->AnimClass = UAnimBP_Shooting_C__pf3266658394::StaticClass();
		__Local__2->bCollideWithEnvironment = true;
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		__Local__2->bReceivesDecals = false;
		auto& __Local__16 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__17 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__16), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__17 = TArray<FResponseChannel> ();
		__Local__17.AddUninitialized(5);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__17.GetData(), 5);
		auto& __Local__18 = __Local__17[0];
		__Local__18.Channel = FName(TEXT("Pawn"));
		__Local__18.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__19 = __Local__17[1];
		__Local__19.Channel = FName(TEXT("Visibility"));
		__Local__19.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__20 = __Local__17[2];
		__Local__20.Channel = FName(TEXT("Vehicle"));
		__Local__20.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__21 = __Local__17[3];
		__Local__21.Channel = FName(TEXT("GunShoot"));
		__Local__21.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__22 = __Local__17[4];
		__Local__22.Channel = FName(TEXT("OverlapShoot"));
		__Local__22.Response = ECollisionResponse::ECR_Ignore;
		__Local__2->SetCollisionProfileName(FName(TEXT("Custom")));
		auto& __Local__23 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__23 = __Local__0;
		auto& __Local__24 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeLocation() )));
		__Local__24 = FVector(0.000000, 0.000000, -80.000000);
		static TWeakFieldPtr<FProperty> __Local__26{};
		const FProperty* __Local__25 = __Local__26.Get();
		if (nullptr == __Local__25)
		{
			__Local__25 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__25);
			__Local__26 = __Local__25;
		}
		(((FBoolProperty*)__Local__25)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__BoxCollision__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	bpv__SkeletalMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	bpv__WeaponEnemy__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponEnemy"));
	bpv__FireRifle__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("FireRifle"));
	bpv__MuzzleFlash__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash"));
	bpv__HandWeapon__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("HandWeapon"));
	bpv__SniperBeamFinalPoint__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SniperBeamFinalPoint"));
	bpv__SniperPreBeam__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SniperPreBeam"));
	bpv__SniperBeam__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SniperBeam"));
	bpv__SniperCanon__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SniperCanon"));
	bpv__SniperScope__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SniperScope"));
	bpv__ShotgunButtStock__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotgunButtStock"));
	bpv__ShotgunBarrelCover__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotgunBarrelCover"));
	bpv__ShotgunHandGuard__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotgunHandGuard"));
	bpv__PointSpawnBullet__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("PointSpawnBullet"));
	bpv__LaserBeam__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LaserBeam"));
	bpv__SniperPrediction__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SniperPrediction"));
	bpv__SuicidePoint__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("SuicidePoint"));
	bpv__SpotLight__pf = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	bpv__KnifeBoxCollision__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("KnifeBoxCollision"));
	bpv__GasMask__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GasMask"));
	bpv__LineTraceHitBox__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("LineTraceHitBox"));
	bpv__CubeDistance__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeDistance"));
	bpv__PointLight__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	bpv__AudioEnemy__pf = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AudioEnemy"));
	bpv__PaperSprite__pf = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("PaperSprite"));
	bpv__BoxCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BoxCollision__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__BoxCollision__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__BoxCollision__pf->bTraceComplexOnMove = true;
	auto& __Local__27 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__BoxCollision__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__27), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__28 = TArray<FResponseChannel> ();
	__Local__28.AddUninitialized(6);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__28.GetData(), 6);
	auto& __Local__29 = __Local__28[0];
	__Local__29.Channel = FName(TEXT("WorldStatic"));
	__Local__29.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__30 = __Local__28[1];
	__Local__30.Channel = FName(TEXT("WorldDynamic"));
	__Local__30.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__31 = __Local__28[2];
	__Local__31.Channel = FName(TEXT("Camera"));
	__Local__31.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__32 = __Local__28[3];
	__Local__32.Channel = FName(TEXT("PhysicsBody"));
	__Local__32.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__33 = __Local__28[4];
	__Local__33.Channel = FName(TEXT("Vehicle"));
	__Local__33.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__34 = __Local__28[5];
	__Local__34.Channel = FName(TEXT("Destructible"));
	__Local__34.Response = ECollisionResponse::ECR_Overlap;
	bpv__BoxCollision__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__35 = (*(AccessPrivateProperty<FVector >((bpv__BoxCollision__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__35 = FVector(1.000000, 1.000000, 2.750000);
	static TWeakFieldPtr<FProperty> __Local__37{};
	const FProperty* __Local__36 = __Local__37.Get();
	if (nullptr == __Local__36)
	{
		__Local__36 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__36);
		__Local__37 = __Local__36;
	}
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__BoxCollision__pf), false, 0));
	bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkeletalMesh__pf->AttachToComponent(bpv__BoxCollision__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SkeletalMesh__pf->AnimClass = UAnimBP_Shooting_C__pf3266658394::StaticClass();
	bpv__SkeletalMesh__pf->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__SkeletalMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__SkeletalMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__SkeletalMesh__pf->OverrideMaterials.Reserve(2);
	bpv__SkeletalMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__SkeletalMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__SkeletalMesh__pf->bReceivesDecals = false;
	bpv__SkeletalMesh__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__SkeletalMesh__pf->SetCollisionProfileName(FName(TEXT("Ragdoll")));
	auto& __Local__38 = (*(AccessPrivateProperty<FVector >((bpv__SkeletalMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__38 = FVector(0.000000, 0.000000, -34.545452);
	auto& __Local__39 = (*(AccessPrivateProperty<FRotator >((bpv__SkeletalMesh__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__39 = FRotator(0.000000, -90.000000, 0.000000);
	auto& __Local__40 = (*(AccessPrivateProperty<FVector >((bpv__SkeletalMesh__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__40 = FVector(1.000000, 1.000000, 0.363636);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SkeletalMesh__pf), false, 0));
	bpv__WeaponEnemy__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WeaponEnemy__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__41 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__WeaponEnemy__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__41 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__WeaponEnemy__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__42 = (*(AccessPrivateProperty<FVector >((bpv__WeaponEnemy__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__42 = FVector(-13.687725, 31.752478, 134.757965);
	auto& __Local__43 = (*(AccessPrivateProperty<FRotator >((bpv__WeaponEnemy__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__43 = FRotator(0.000000, 0.000015, 0.000000);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__WeaponEnemy__pf), true, 0));
	bpv__FireRifle__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FireRifle__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__44 = (*(AccessPrivateProperty<FVector >((bpv__FireRifle__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__44 = FVector(-0.043720, 62.019451, 8.206039);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__FireRifle__pf), false, 0));
	bpv__MuzzleFlash__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MuzzleFlash__pf->AttachToComponent(bpv__FireRifle__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__MuzzleFlash__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__MuzzleFlash__pf->CustomTimeDilation = 2.000000f;
	auto& __Local__45 = (*(AccessPrivateProperty<FRotator >((bpv__MuzzleFlash__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__45 = FRotator(0.000000, 110.000237, 0.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<FVector >((bpv__MuzzleFlash__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__46 = FVector(0.500000, 0.500000, 0.500000);
	bpv__MuzzleFlash__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__MuzzleFlash__pf), false, 0));
	bpv__HandWeapon__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandWeapon__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__47 = (*(AccessPrivateProperty<FVector >((bpv__HandWeapon__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__47 = FVector(0.089144, 33.144176, 5.444192);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__HandWeapon__pf), false, 0));
	bpv__SniperBeamFinalPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SniperBeamFinalPoint__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	static TWeakFieldPtr<FProperty> __Local__49{};
	const FProperty* __Local__48 = __Local__49.Get();
	if (nullptr == __Local__48)
	{
		__Local__48 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__48);
		__Local__49 = __Local__48;
	}
	(((FBoolProperty*)__Local__48)->SetPropertyValue_InContainer((bpv__SniperBeamFinalPoint__pf), false, 0));
	bpv__SniperBeamFinalPoint__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__50 = (*(AccessPrivateProperty<FVector >((bpv__SniperBeamFinalPoint__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__50 = FVector(-0.043772, 97.643791, 8.206039);
	auto& __Local__51 = (*(AccessPrivateProperty<FRotator >((bpv__SniperBeamFinalPoint__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__51 = FRotator(0.000000, 0.000010, 0.000000);
	static TWeakFieldPtr<FProperty> __Local__53{};
	const FProperty* __Local__52 = __Local__53.Get();
	if (nullptr == __Local__52)
	{
		__Local__52 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__52);
		__Local__53 = __Local__52;
	}
	(((FBoolProperty*)__Local__52)->SetPropertyValue_InContainer((bpv__SniperBeamFinalPoint__pf), false, 0));
	bpv__SniperBeamFinalPoint__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SniperBeamFinalPoint__pf), false, 0));
	bpv__SniperPreBeam__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SniperPreBeam__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SniperPreBeam__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	auto& __Local__54 = (*(AccessPrivateProperty<FVector >((bpv__SniperPreBeam__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__54 = FVector(-0.000308, 74.140663, 8.272236);
	bpv__SniperPreBeam__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SniperPreBeam__pf), false, 0));
	bpv__SniperBeam__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SniperBeam__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SniperBeam__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	auto& __Local__55 = (*(AccessPrivateProperty<FVector >((bpv__SniperBeam__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__55 = FVector(-0.000298, 74.140648, 8.272236);
	auto& __Local__56 = (*(AccessPrivateProperty<FRotator >((bpv__SniperBeam__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__56 = FRotator(-6.277600, 88.707832, 3.851014);
	(((FBoolProperty*)__Local__52)->SetPropertyValue_InContainer((bpv__SniperBeam__pf), false, 0));
	bpv__SniperBeam__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SniperBeam__pf), false, 0));
	bpv__SniperCanon__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SniperCanon__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__57 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SniperCanon__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__57 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__48)->SetPropertyValue_InContainer((bpv__SniperCanon__pf), false, 0));
	bpv__SniperCanon__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__58 = (*(AccessPrivateProperty<FVector >((bpv__SniperCanon__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__58 = FVector(0.191700, 64.696999, 7.300000);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SniperCanon__pf), false, 0));
	bpv__SniperScope__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SniperScope__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__59 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SniperScope__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__59 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__48)->SetPropertyValue_InContainer((bpv__SniperScope__pf), false, 0));
	bpv__SniperScope__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__60 = (*(AccessPrivateProperty<FVector >((bpv__SniperScope__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__60 = FVector(-0.033300, 8.979000, 14.551000);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SniperScope__pf), false, 0));
	bpv__ShotgunButtStock__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ShotgunButtStock__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__61 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__ShotgunButtStock__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__61 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__ShotgunButtStock__pf), false, 0));
	bpv__ShotgunBarrelCover__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ShotgunBarrelCover__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__62 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__ShotgunBarrelCover__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__62 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__ShotgunBarrelCover__pf), false, 0));
	bpv__ShotgunHandGuard__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ShotgunHandGuard__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__63 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__ShotgunHandGuard__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__63 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__ShotgunHandGuard__pf), false, 0));
	bpv__PointSpawnBullet__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointSpawnBullet__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__PointSpawnBullet__pf), false, 0));
	bpv__LaserBeam__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__LaserBeam__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__LaserBeam__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	auto& __Local__64 = (*(AccessPrivateProperty<FVector >((bpv__LaserBeam__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__64 = FVector(-0.696200, 84.910507, 6.286505);
	auto& __Local__65 = (*(AccessPrivateProperty<FRotator >((bpv__LaserBeam__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__65 = FRotator(-11.364700, 89.178207, 3.502000);
	auto& __Local__66 = (*(AccessPrivateProperty<FVector >((bpv__LaserBeam__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__66 = FVector(0.100000, 0.100000, 0.100000);
	bpv__LaserBeam__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__LaserBeam__pf), false, 0));
	bpv__SniperPrediction__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SniperPrediction__pf->AttachToComponent(bpv__WeaponEnemy__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__67 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SniperPrediction__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__67 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	bpv__SniperPrediction__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__SniperPrediction__pf->OverrideMaterials.Reserve(1);
	bpv__SniperPrediction__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
	(((FBoolProperty*)__Local__48)->SetPropertyValue_InContainer((bpv__SniperPrediction__pf), false, 0));
	bpv__SniperPrediction__pf->CastShadow = false;
	bpv__SniperPrediction__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__68 = (*(AccessPrivateProperty<FVector >((bpv__SniperPrediction__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__68 = FVector(8.505905, 556.883545, 7.692467);
	auto& __Local__69 = (*(AccessPrivateProperty<FRotator >((bpv__SniperPrediction__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__69 = FRotator(0.000000, 89.000000, 0.000000);
	auto& __Local__70 = (*(AccessPrivateProperty<FVector >((bpv__SniperPrediction__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__70 = FVector(9.500000, 0.020000, 0.020000);
	(((FBoolProperty*)__Local__52)->SetPropertyValue_InContainer((bpv__SniperPrediction__pf), false, 0));
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SniperPrediction__pf), false, 0));
	bpv__SuicidePoint__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SuicidePoint__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__71 = (*(AccessPrivateProperty<FVector >((bpv__SuicidePoint__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__71 = FVector(-0.000137, 21.517384, 161.938782);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SuicidePoint__pf), false, 0));
	bpv__SpotLight__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpotLight__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpotLight__pf->OuterConeAngle = 80.000000f;
	bpv__SpotLight__pf->AttenuationRadius = 2500.000000f;
	bpv__SpotLight__pf->Intensity = 50000.000000f;
	bpv__SpotLight__pf->CastShadows = false;
	auto& __Local__72 = (*(AccessPrivateProperty<FVector >((bpv__SpotLight__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__72 = FVector(-13.688868, 16.487959, 95.387909);
	auto& __Local__73 = (*(AccessPrivateProperty<FRotator >((bpv__SpotLight__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__73 = FRotator(0.000000, 90.000023, 0.000000);
	bpv__SpotLight__pf->Mobility = EComponentMobility::Type::Stationary;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__SpotLight__pf), false, 0));
	bpv__KnifeBoxCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__KnifeBoxCollision__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__KnifeBoxCollision__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__74 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__KnifeBoxCollision__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__74 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__75 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__KnifeBoxCollision__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__75), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__76 = TArray<FResponseChannel> ();
	__Local__76.AddUninitialized(10);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__76.GetData(), 10);
	auto& __Local__77 = __Local__76[0];
	__Local__77.Channel = FName(TEXT("WorldStatic"));
	__Local__77.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__78 = __Local__76[1];
	__Local__78.Channel = FName(TEXT("WorldDynamic"));
	__Local__78.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__79 = __Local__76[2];
	__Local__79.Channel = FName(TEXT("Pawn"));
	__Local__79.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__80 = __Local__76[3];
	__Local__80.Channel = FName(TEXT("Visibility"));
	__Local__80.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__81 = __Local__76[4];
	__Local__81.Channel = FName(TEXT("Camera"));
	__Local__81.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__82 = __Local__76[5];
	__Local__82.Channel = FName(TEXT("PhysicsBody"));
	__Local__82.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__83 = __Local__76[6];
	__Local__83.Channel = FName(TEXT("Vehicle"));
	__Local__83.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__84 = __Local__76[7];
	__Local__84.Channel = FName(TEXT("Destructible"));
	__Local__84.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__85 = __Local__76[8];
	__Local__85.Channel = FName(TEXT("OverlapShoot"));
	__Local__85.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__86 = __Local__76[9];
	__Local__86.Channel = FName(TEXT("GunShoot"));
	__Local__86.Response = ECollisionResponse::ECR_Ignore;
	bpv__KnifeBoxCollision__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__87 = (*(AccessPrivateProperty<FVector >((bpv__KnifeBoxCollision__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__87 = FVector(-3.087817, 64.752518, 99.757965);
	auto& __Local__88 = (*(AccessPrivateProperty<FRotator >((bpv__KnifeBoxCollision__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__88 = FRotator(0.000000, 0.000034, 0.000000);
	auto& __Local__89 = (*(AccessPrivateProperty<FVector >((bpv__KnifeBoxCollision__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__89 = FVector(1.530000, 0.875000, 2.460000);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__KnifeBoxCollision__pf), true, 0));
	bpv__GasMask__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GasMask__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__90 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__GasMask__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__90 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	bpv__GasMask__pf->bReceivesDecals = false;
	bpv__GasMask__pf->CastShadow = false;
	bpv__GasMask__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__91 = (*(AccessPrivateProperty<FVector >((bpv__GasMask__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__91 = FVector(4.363847, -0.000047, 3.859407);
	auto& __Local__92 = (*(AccessPrivateProperty<FRotator >((bpv__GasMask__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__92 = FRotator(0.000690, 89.999947, -89.999680);
	auto& __Local__93 = (*(AccessPrivateProperty<FVector >((bpv__GasMask__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__93 = FVector(0.825000, 0.600000, 0.600000);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__GasMask__pf), true, 0));
	bpv__LineTraceHitBox__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__LineTraceHitBox__pf->AttachToComponent(bpv__BoxCollision__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__LineTraceHitBox__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__94 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__LineTraceHitBox__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__95 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__94), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__95 = TArray<FResponseChannel> ();
	__Local__95.AddUninitialized(10);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__95.GetData(), 10);
	auto& __Local__96 = __Local__95[0];
	__Local__96.Channel = FName(TEXT("WorldStatic"));
	__Local__96.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__97 = __Local__95[1];
	__Local__97.Channel = FName(TEXT("WorldDynamic"));
	__Local__97.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__98 = __Local__95[2];
	__Local__98.Channel = FName(TEXT("Pawn"));
	__Local__98.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__99 = __Local__95[3];
	__Local__99.Channel = FName(TEXT("Visibility"));
	__Local__99.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__100 = __Local__95[4];
	__Local__100.Channel = FName(TEXT("Camera"));
	__Local__100.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__101 = __Local__95[5];
	__Local__101.Channel = FName(TEXT("PhysicsBody"));
	__Local__101.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__102 = __Local__95[6];
	__Local__102.Channel = FName(TEXT("Vehicle"));
	__Local__102.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__103 = __Local__95[7];
	__Local__103.Channel = FName(TEXT("Destructible"));
	__Local__103.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__104 = __Local__95[8];
	__Local__104.Channel = FName(TEXT("GunShoot"));
	__Local__104.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__105 = __Local__95[9];
	__Local__105.Channel = FName(TEXT("OverlapShoot"));
	__Local__105.Response = ECollisionResponse::ECR_Ignore;
	bpv__LineTraceHitBox__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__106 = (*(AccessPrivateProperty<FVector >((bpv__LineTraceHitBox__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__106 = FVector(11.513571, 0.000006, -0.776953);
	auto& __Local__107 = (*(AccessPrivateProperty<FRotator >((bpv__LineTraceHitBox__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__107 = FRotator(0.000000, -90.000183, 0.000000);
	auto& __Local__108 = (*(AccessPrivateProperty<FVector >((bpv__LineTraceHitBox__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__108 = FVector(1.000000, 0.812500, 1.051136);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__LineTraceHitBox__pf), true, 0));
	bpv__CubeDistance__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__CubeDistance__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__109 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__CubeDistance__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__109 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
	bpv__CubeDistance__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__CubeDistance__pf->OverrideMaterials.Reserve(1);
	bpv__CubeDistance__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
	(((FBoolProperty*)__Local__48)->SetPropertyValue_InContainer((bpv__CubeDistance__pf), false, 0));
	bpv__CubeDistance__pf->bVisibleInReflectionCaptures = false;
	bpv__CubeDistance__pf->bVisibleInRayTracing = false;
	bpv__CubeDistance__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__110 = (*(AccessPrivateProperty<FVector >((bpv__CubeDistance__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__110 = FVector(8.250000, 8.250000, 0.100000);
	(((FBoolProperty*)__Local__52)->SetPropertyValue_InContainer((bpv__CubeDistance__pf), false, 0));
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__CubeDistance__pf), false, 0));
	bpv__PointLight__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight__pf->AttenuationRadius = 200.000000f;
	bpv__PointLight__pf->Intensity = 2000.000000f;
	auto& __Local__111 = (*(AccessPrivateProperty<FVector >((bpv__PointLight__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__111 = FVector(27.557316, -2.412936, 85.494064);
	auto& __Local__112 = (*(AccessPrivateProperty<FRotator >((bpv__PointLight__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__112 = FRotator(0.000000, -89.999985, 0.000000);
	auto& __Local__113 = (*(AccessPrivateProperty<FVector >((bpv__PointLight__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__113 = FVector(1.000000, 1.000000, 2.750000);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__PointLight__pf), false, 0));
	bpv__AudioEnemy__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__AudioEnemy__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__AudioEnemy__pf->bAutoActivate = false;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__AudioEnemy__pf), false, 0));
	bpv__PaperSprite__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PaperSprite__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__114 = (*(AccessPrivateProperty<UPaperSprite* >((bpv__PaperSprite__pf), UPaperSpriteComponent::__PPO__SourceSprite() )));
	__Local__114 = CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__48)->SetPropertyValue_InContainer((bpv__PaperSprite__pf), false, 0));
	bpv__PaperSprite__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__115 = (*(AccessPrivateProperty<FRotator >((bpv__PaperSprite__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__115 = FRotator(0.000000, 0.000000, -90.000183);
	auto& __Local__116 = (*(AccessPrivateProperty<FVector >((bpv__PaperSprite__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__116 = FVector(1.066000, 70.724998, 1.084375);
	(((FBoolProperty*)__Local__52)->SetPropertyValue_InContainer((bpv__PaperSprite__pf), false, 0));
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((bpv__PaperSprite__pf), true, 0));
	bpv__BaseTurnRate__pf = 45.000000f;
	bpv__BaseLookUpRate__pf = 45.000000f;
	bpv__Attacking__pf = false;
	bpv__PatrolPoints__pf = TArray<ATargetPoint*> ();
	bpv__DistanceWithPlayer__pf = 0.000000f;
	bpv__RangeToRunAway__pf = 370.000000f;
	bpv__AlarmPoint__pf = nullptr;
	bpv__Squad__pf = 1;
	bpv__PreviousSquad__pf = 0;
	bpv__HP__pf = 100;
	bpv__MovementSpeed__pf = FVector(600.000000, 0.000000, 0.000000);
	bpv__IsPlayer__pf = false;
	bpv__ImpactVelocity__pf = -100000.000000f;
	bpv__IsDeath__pf = false;
	bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator0;
	bpv__State__pf = E__EnumState__pf::NewEnumerator0;
	bpv__DelayAnimationSuicide__pf = 2.000000f;
	bpv__CameraType__pf = E__EnumCameraType__pf::NewEnumerator0;
	bpv__ClosestDistance__pf = 100000.000000f;
	bpv__DyingActor__pf = nullptr;
	bpv__ToPossessActor__pf = nullptr;
	bpv__MinDistance__pf = 410.000000f;
	bpv__TimerCadence__pf = 0.000000f;
	bpv__ActivatingAlarm__pf = false;
	bpv__SelfEnemyType__pf = E__EnumTypesOfCharacters__pf::NewEnumerator1;
	bpv__ActorsInVision__pf = TArray<AEnemyShootingCh_C__pf3349424045*> ();
	bpv__Exposed__pf = false;
	bpv__CameraActor__pf = nullptr;
	bpv__Ammunition__pf = 30;
	bpv__OverlapingActor__pf = nullptr;
	bpv__IsOverlapingActor__pf = false;
	bpv__IsSuiciding__pf = false;
	bpv__ShotgunShoot__pf = false;
	bpv__IsSlave__pf = false;
	bpv__IsVIP__pf = false;
	bpv__IsDark__pf = false;
	bpv__SniperEnemyLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__AttackingWithKnife__pf = false;
	bpv__AttackingWithGun__pf = false;
	bpv__SuicidingWithKnife__pf = false;
	bpv__AlarmReference__pf = nullptr;
	bpv__ZeroAmmo__pf = false;
	bpv__AttackAim__pf = 0;
	bpv__XDispersion__pf = 0.000000f;
	bpv__YDispersion__pf = 0.000000f;
	bpv__ExtraAmmoRifle__pf = false;
	bpv__ExtraAmmoShotgun__pf = false;
	bpv__LevelCompleterRef__pf = nullptr;
	bpv__CanActivatePowerUp__pf = false;
	bpv__CooldownPowerUp__pf = 10.000000f;
	bpv__DeathActors__pf = TArray<AActor*> ();
	bpv__ActorIsAlreadyDeath__pf = false;
	bpv__ChameleonRef__pf = nullptr;
	bpv__lastMousePosition__pf = FVector2D(0.000000, 0.000000);
	bpv__InitBulletAngleShotgun__pf = 50.000000f;
	bpv__BulletAngleShotgun__pf = 80.000000f;
	bpv__lastRotationAxis__pf = FVector2D(0.000000, 0.000000);
	bpv__IsGodModeActive__pf = false;
	auto& __Local__117 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__117 = __Local__2;
	auto& __Local__118 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__118 = __Local__1;
	auto& __Local__119 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__119 = __Local__0;
	bUseControllerRotationYaw = false;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	auto& __Local__120 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__120 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AEnemyShootingCh_C__pf3349424045::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__BoxCollision__pf)
	{
		bpv__BoxCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SkeletalMesh__pf)
	{
		bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WeaponEnemy__pf)
	{
		bpv__WeaponEnemy__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FireRifle__pf)
	{
		bpv__FireRifle__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MuzzleFlash__pf)
	{
		bpv__MuzzleFlash__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HandWeapon__pf)
	{
		bpv__HandWeapon__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SniperBeamFinalPoint__pf)
	{
		bpv__SniperBeamFinalPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SniperPreBeam__pf)
	{
		bpv__SniperPreBeam__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SniperBeam__pf)
	{
		bpv__SniperBeam__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SniperCanon__pf)
	{
		bpv__SniperCanon__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SniperScope__pf)
	{
		bpv__SniperScope__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ShotgunButtStock__pf)
	{
		bpv__ShotgunButtStock__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ShotgunBarrelCover__pf)
	{
		bpv__ShotgunBarrelCover__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ShotgunHandGuard__pf)
	{
		bpv__ShotgunHandGuard__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointSpawnBullet__pf)
	{
		bpv__PointSpawnBullet__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__LaserBeam__pf)
	{
		bpv__LaserBeam__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SniperPrediction__pf)
	{
		bpv__SniperPrediction__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SuicidePoint__pf)
	{
		bpv__SuicidePoint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpotLight__pf)
	{
		bpv__SpotLight__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__KnifeBoxCollision__pf)
	{
		bpv__KnifeBoxCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GasMask__pf)
	{
		bpv__GasMask__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__LineTraceHitBox__pf)
	{
		bpv__LineTraceHitBox__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__CubeDistance__pf)
	{
		bpv__CubeDistance__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight__pf)
	{
		bpv__PointLight__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AudioEnemy__pf)
	{
		bpv__AudioEnemy__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PaperSprite__pf)
	{
		bpv__PaperSprite__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AEnemyShootingCh_C__pf3349424045::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Enemies/EnumWeapon.EnumWeapon")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Enemies/EnumTypesOfCharacters.EnumTypesOfCharacters")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Enemies/EnumCameraType.EnumCameraType")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Enemies/EnumState.EnumState")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UAnimBP_Shooting_C__pf3266658394::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ACameraActor_C__pf1295471953::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAISniperController_C__pf1156381827::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAISuicideController_C__pf3889547882::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAISlaveController_C__pf1263353332::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAIShootingController_C__pf681293266::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARiflePickUp_C__pf1651478651::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AShotgunPickUp_C__pf1651478651::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ASniperPickUp_C__pf1651478651::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AKnifePickUp_C__pf1651478651::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARPGPickUp_C__pf1651478651::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAShotgunPickUp_C__pf1651478651::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AThirdPersonCharacter_C__pf2222656877::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AEnemyDogCh_C__pf3349424045::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPauseHUD_C__pf197907997::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMissileRPG_C__pf2054339363::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMyGameInstance_C__pf2410127383::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAlarmDetectorPawn_C__pf2693064426::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ALevelCompleterBP_C__pf922009354::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADieAgainGamemode_C__pf1010915279::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAIShootingPawn_C__pf681293266::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAISuicidePawn_C__pf3889547882::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAISniperPawn_C__pf1156381827::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAISlavePawn_C__pf1263353332::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGamepadInteraction_C__pf197907997::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABaseCharacter_C__pf1010915279::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AChameleon_C__pf565858488::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APossesionPS_C__pf386987942::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APossesionEffect_C__pf2815001878::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USaveGameBP_C__pf4030252459::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ACurved_Pipe_C__pf1894626796::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APipe_C__pf1894626796::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AExplosiveBarrel_C__pf3544028049::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ALight_01_C__pf1894626796::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ATable_Lamp_C__pf1894626796::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AOld_Chair_C__pf1894626796::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AGlass_C__pf345340536::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABullet_Actor_C__pf2054339363::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayerRifleInEnemyAnimBP_C__pf2266844876::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayerHeavyInEnemyAnimBP_C__pf2266844876::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayerAnimKnifeInEnemyBP_C__pf2266844876::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UEnemyKnifeAnimBP_C__pf3266658394::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayerRPGInEnemyWeaponAnimBP_C__pf2266844876::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABulletTracerActor_C__pf1062751476::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABullet_Trail_C__pf1062751476::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAlarm_C__pf2693064426::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__121 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__121);
	auto __Local__122 = NewObject<UInputTouchDelegateBinding>(InDynamicClass, UInputTouchDelegateBinding::StaticClass(), TEXT("InputTouchDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__122);
	auto __Local__123 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__123);
	auto __Local__124 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__124);
	auto __Local__125 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__125);
	static TWeakFieldPtr<FProperty> __Local__127{};
	const FProperty* __Local__126 = __Local__127.Get();
	if (nullptr == __Local__126)
	{
		__Local__126 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__126);
		__Local__127 = __Local__126;
	}
	(((FBoolProperty*)__Local__126)->SetPropertyValue_InContainer((__Local__121), false, 0));
	__Local__122->InputTouchDelegateBindings = TArray<FBlueprintInputTouchDelegateBinding> ();
	__Local__122->InputTouchDelegateBindings.AddUninitialized(2);
	FBlueprintInputTouchDelegateBinding::StaticStruct()->InitializeStruct(__Local__122->InputTouchDelegateBindings.GetData(), 2);
	auto& __Local__128 = __Local__122->InputTouchDelegateBindings[0];
	__Local__128.InputKeyEvent = EInputEvent::IE_Released;
	__Local__128.FunctionNameToBind = FName(TEXT("InpTchEvt_Released"));
	auto& __Local__129 = __Local__122->InputTouchDelegateBindings[1];
	__Local__129.FunctionNameToBind = FName(TEXT("InpTchEvt_Pressed"));
	__Local__123->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__123->InputAxisDelegateBindings.AddUninitialized(14);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__123->InputAxisDelegateBindings.GetData(), 14);
	auto& __Local__130 = __Local__123->InputAxisDelegateBindings[0];
	__Local__130.InputAxisName = FName(TEXT("AimY"));
	__Local__130.bOverrideParentBinding = false;
	auto& __Local__131 = __Local__123->InputAxisDelegateBindings[1];
	__Local__131.InputAxisName = FName(TEXT("AimX"));
	__Local__131.bOverrideParentBinding = false;
	auto& __Local__132 = __Local__123->InputAxisDelegateBindings[2];
	__Local__132.InputAxisName = FName(TEXT("AimY"));
	__Local__132.bOverrideParentBinding = false;
	auto& __Local__133 = __Local__123->InputAxisDelegateBindings[3];
	__Local__133.InputAxisName = FName(TEXT("AimX"));
	__Local__133.bOverrideParentBinding = false;
	auto& __Local__134 = __Local__123->InputAxisDelegateBindings[4];
	__Local__134.InputAxisName = FName(TEXT("AimX"));
	__Local__134.bOverrideParentBinding = false;
	auto& __Local__135 = __Local__123->InputAxisDelegateBindings[5];
	__Local__135.InputAxisName = FName(TEXT("AimY"));
	__Local__135.bOverrideParentBinding = false;
	auto& __Local__136 = __Local__123->InputAxisDelegateBindings[6];
	__Local__136.InputAxisName = FName(TEXT("TurnRate"));
	__Local__136.FunctionNameToBind = FName(TEXT("InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38"));
	auto& __Local__137 = __Local__123->InputAxisDelegateBindings[7];
	__Local__137.InputAxisName = FName(TEXT("LookUpRate"));
	__Local__137.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53"));
	auto& __Local__138 = __Local__123->InputAxisDelegateBindings[8];
	__Local__138.InputAxisName = FName(TEXT("AimY"));
	__Local__138.bOverrideParentBinding = false;
	auto& __Local__139 = __Local__123->InputAxisDelegateBindings[9];
	__Local__139.InputAxisName = FName(TEXT("LookUp"));
	__Local__139.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_40"));
	__Local__139.bOverrideParentBinding = false;
	auto& __Local__140 = __Local__123->InputAxisDelegateBindings[10];
	__Local__140.InputAxisName = FName(TEXT("AimX"));
	__Local__140.bOverrideParentBinding = false;
	auto& __Local__141 = __Local__123->InputAxisDelegateBindings[11];
	__Local__141.InputAxisName = FName(TEXT("Turn"));
	__Local__141.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_47"));
	__Local__141.bOverrideParentBinding = false;
	auto& __Local__142 = __Local__123->InputAxisDelegateBindings[12];
	__Local__142.InputAxisName = FName(TEXT("MoveForward"));
	__Local__142.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79"));
	__Local__142.bOverrideParentBinding = false;
	auto& __Local__143 = __Local__123->InputAxisDelegateBindings[13];
	__Local__143.InputAxisName = FName(TEXT("MoveRight"));
	__Local__143.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90"));
	__Local__143.bOverrideParentBinding = false;
	__Local__124->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__124->InputActionDelegateBindings.AddUninitialized(8);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__124->InputActionDelegateBindings.GetData(), 8);
	auto& __Local__144 = __Local__124->InputActionDelegateBindings[0];
	__Local__144.InputActionName = FName(TEXT("PickWeapon"));
	__Local__144.FunctionNameToBind = FName(TEXT("InpActEvt_PickWeapon_K2Node_InputActionEvent_6"));
	auto& __Local__145 = __Local__124->InputActionDelegateBindings[1];
	__Local__145.InputActionName = FName(TEXT("Restart"));
	__Local__145.FunctionNameToBind = FName(TEXT("InpActEvt_Restart_K2Node_InputActionEvent_5"));
	auto& __Local__146 = __Local__124->InputActionDelegateBindings[2];
	__Local__146.InputActionName = FName(TEXT("Jump"));
	__Local__146.InputKeyEvent = EInputEvent::IE_Released;
	__Local__146.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_7"));
	__Local__146.bOverrideParentBinding = false;
	auto& __Local__147 = __Local__124->InputActionDelegateBindings[3];
	__Local__147.InputActionName = FName(TEXT("Shoot"));
	__Local__147.InputKeyEvent = EInputEvent::IE_Released;
	__Local__147.FunctionNameToBind = FName(TEXT("InpActEvt_Shoot_K2Node_InputActionEvent_4"));
	auto& __Local__148 = __Local__124->InputActionDelegateBindings[4];
	__Local__148.InputActionName = FName(TEXT("Shoot"));
	__Local__148.FunctionNameToBind = FName(TEXT("InpActEvt_Shoot_K2Node_InputActionEvent_3"));
	auto& __Local__149 = __Local__124->InputActionDelegateBindings[5];
	__Local__149.InputActionName = FName(TEXT("Suicide"));
	__Local__149.FunctionNameToBind = FName(TEXT("InpActEvt_Suicide_K2Node_InputActionEvent_2"));
	auto& __Local__150 = __Local__124->InputActionDelegateBindings[6];
	__Local__150.InputActionName = FName(TEXT("PowerUp"));
	__Local__150.FunctionNameToBind = FName(TEXT("InpActEvt_PowerUp_K2Node_InputActionEvent_1"));
	auto& __Local__151 = __Local__124->InputActionDelegateBindings[7];
	__Local__151.InputActionName = FName(TEXT("Pause"));
	__Local__151.FunctionNameToBind = FName(TEXT("InpActEvt_Pause_K2Node_InputActionEvent_0"));
	__Local__151.bExecuteWhenPaused = true;
	__Local__125->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__125->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__125->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__152 = __Local__125->ComponentDelegateBindings[0];
	__Local__152.ComponentPropertyName = FName(TEXT("KnifeBoxCollision"));
	__Local__152.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__152.FunctionNameToBind = FName(TEXT("BndEvt__KnifeBoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__153 = __Local__125->ComponentDelegateBindings[1];
	__Local__153.ComponentPropertyName = FName(TEXT("BoxWeaponCollision"));
	__Local__153.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__153.FunctionNameToBind = FName(TEXT("BndEvt__BoxWeaponCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__154 = __Local__125->ComponentDelegateBindings[2];
	__Local__154.ComponentPropertyName = FName(TEXT("AudioCollision"));
	__Local__154.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__154.FunctionNameToBind = FName(TEXT("BndEvt__AudioCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__155 = __Local__125->ComponentDelegateBindings[3];
	__Local__155.ComponentPropertyName = FName(TEXT("AudioCollision"));
	__Local__155.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__155.FunctionNameToBind = FName(TEXT("BndEvt__AudioCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_0(int32 bpp__EntryPoint__pf)
{
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_11__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_4__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 172:
			{
				bpv__IsDeath__pf = true;
			}
		case 173:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->DisableMovement();
				}
			}
		case 174:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_11__pf = bpv__SkeletalMesh__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue_3__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_11__pf, b1l__K2Node_CustomEvent_EnemyHitLocation__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue_3__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll_3__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch_3__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw_3__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Add_FloatFloat(b1l__CallFunc_BreakRotator_Yaw_3__pf, -90.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue_4__pf = UKismetMathLibrary::MakeRotator(b1l__CallFunc_BreakRotator_Roll_3__pf, b1l__CallFunc_BreakRotator_Pitch_3__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf);
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue_4__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 175:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf)
				{
					__CurrentState = 189;
					break;
				}
			}
		case 176:
			{
				bpf__SplatterBloodPlayer__pf();
			}
		case 177:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAIShooting_Controller__pf = Cast<AAIShootingController_C__pf681293266>(bpfv__CallFunc_GetController_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_4__pf = (b1l__K2Node_DynamicCast_AsAIShooting_Controller__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = 179;
					break;
				}
			}
		case 178:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAIShooting_Controller__pf))
				{
					b1l__K2Node_DynamicCast_AsAIShooting_Controller__pf->bpf__DieFunction__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 179:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAISuicide_Controller_1__pf = Cast<AAISuicideController_C__pf3889547882>(bpfv__CallFunc_GetController_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_3__pf = (b1l__K2Node_DynamicCast_AsAISuicide_Controller_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 181;
					break;
				}
			}
		case 180:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISuicide_Controller_1__pf))
				{
					b1l__K2Node_DynamicCast_AsAISuicide_Controller_1__pf->bpf__DieFunction__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 181:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAISuicide_Controller__pf = Cast<AAISuicideController_C__pf3889547882>(bpfv__CallFunc_GetController_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_1__pf = (b1l__K2Node_DynamicCast_AsAISuicide_Controller__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 183;
					break;
				}
			}
		case 182:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISuicide_Controller__pf))
				{
					b1l__K2Node_DynamicCast_AsAISuicide_Controller__pf->bpf__DieFunction__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 183:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAISlave_Controller__pf = Cast<AAISlaveController_C__pf1263353332>(bpfv__CallFunc_GetController_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_2__pf = (b1l__K2Node_DynamicCast_AsAISlave_Controller__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 185;
					break;
				}
			}
		case 184:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISlave_Controller__pf))
				{
					b1l__K2Node_DynamicCast_AsAISlave_Controller__pf->bpf__DieFunction__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 185:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAISniper_Controller__pf = Cast<AAISniperController_C__pf1156381827>(bpfv__CallFunc_GetController_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsAISniper_Controller__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 187;
					break;
				}
			}
		case 186:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISniper_Controller__pf))
				{
					b1l__K2Node_DynamicCast_AsAISniper_Controller__pf->bpf__DieFunction__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 187:
			{
				bpfv__CallFunc_GetController_ReturnValue_2__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsPlayer_Controller__pf = Cast<APlayerController>(bpfv__CallFunc_GetController_ReturnValue_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_8__pf = (b1l__K2Node_DynamicCast_AsPlayer_Controller__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_8__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 188:
			{
				bpf__DiePlayerFunction__pf(b1l__K2Node_CustomEvent_ActorWhoKilledPlayer__pf);
				__CurrentState = -1;
				break;
			}
		case 189:
			{
				bpf__SplatterBloodNPC__pf();
				__CurrentState = 177;
				break;
			}
		case 398:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->RotationRate = FRotator(0.000000,0.000000,0.000000);
				}
				__CurrentState = 172;
				break;
			}
		case 399:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 0.000000;
				}
				__CurrentState = 398;
				break;
			}
		case 410:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__HP__pf, 0);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 399;
				break;
			}
		case 569:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 570;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 570:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_4__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_4__pf)
				{
					__CurrentState = 572;
					break;
				}
			}
		case 571:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = 572;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 572:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__HP__pf, b1l__K2Node_CustomEvent_DamageTaken__pf);
				bpv__HP__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 410;
				break;
			}
		case 608:
			{
				__CurrentState = 569;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_1(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	ARiflePickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	AShotgunPickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	ASniperPickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	AKnifePickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5__pf{};
	ARPGPickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf{};
	AAShotgunPickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 611:
			{
				if (!bpv__IsOverlapingActor__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 612:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 655;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 646;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 638;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 630;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 622;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 613;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 613:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AAShotgunPickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 614:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf = CastChecked<AAShotgunPickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 615:
			{
				b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf = Cast<AAShotgunPickUp_C__pf1651478651>(bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf);
				b1l__K2Node_DynamicCast_bSuccess_16__pf = (b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_16__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 616:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf->bpv__WeaponRifle__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf->bpv__WeaponRifle__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 617:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf->bpv__WeaponRifle__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_5__pf->bpv__WeaponRifle__pf->UPrimitiveComponent::IgnoreComponentWhenMoving((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), true);
				}
			}
		case 618:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf->bpv__NeedFullAmmo__pf = false;
				}
			}
		case 619:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf->bpv__WeaponType__pf = E__EnumWeapon__pf::NewEnumerator6;
				}
			}
		case 620:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
			}
		case 621:
			{
				bpf__ChangeWeapon__pf();
				__CurrentState = -1;
				break;
			}
		case 622:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ARPGPickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 623:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf = CastChecked<ARPGPickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 624:
			{
				b1l__K2Node_DynamicCast_AsRPGPick_Up__pf = Cast<ARPGPickUp_C__pf1651478651>(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_17__pf = (b1l__K2Node_DynamicCast_AsRPGPick_Up__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_17__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 625:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__WeaponRPG__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__WeaponRPG__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 626:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__WeaponRPG__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__WeaponRPG__pf->UPrimitiveComponent::IgnoreComponentWhenMoving((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), true);
				}
			}
		case 627:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsRPGPick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsRPGPick_Up__pf->bpv__WeaponType__pf = E__EnumWeapon__pf::NewEnumerator5;
				}
			}
		case 628:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsRPGPick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsRPGPick_Up__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
			}
		case 629:
			{
				bpf__ChangeWeapon__pf();
				__CurrentState = -1;
				break;
			}
		case 630:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ASniperPickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 631:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<ASniperPickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 632:
			{
				b1l__K2Node_DynamicCast_AsSniper_Pick_Up__pf = Cast<ASniperPickUp_C__pf1651478651>(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_14__pf = (b1l__K2Node_DynamicCast_AsSniper_Pick_Up__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_14__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 633:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__WeaponSniper__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__WeaponSniper__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 634:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__WeaponSniper__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__WeaponSniper__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__SkeletalMesh__pf, true);
				}
			}
		case 635:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSniper_Pick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsSniper_Pick_Up__pf->bpv__WeaponType__pf = E__EnumWeapon__pf::NewEnumerator3;
				}
			}
		case 636:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsSniper_Pick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsSniper_Pick_Up__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
			}
		case 637:
			{
				bpf__ChangeWeapon__pf();
				__CurrentState = -1;
				break;
			}
		case 638:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AKnifePickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 639:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<AKnifePickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 640:
			{
				b1l__K2Node_DynamicCast_AsKnife_Pick_Up__pf = Cast<AKnifePickUp_C__pf1651478651>(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf);
				b1l__K2Node_DynamicCast_bSuccess_15__pf = (b1l__K2Node_DynamicCast_AsKnife_Pick_Up__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_15__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 641:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__WeaponKnife__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__WeaponKnife__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 642:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__WeaponKnife__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__WeaponKnife__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__SkeletalMesh__pf, true);
				}
			}
		case 643:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsKnife_Pick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsKnife_Pick_Up__pf->bpv__WeaponType__pf = E__EnumWeapon__pf::NewEnumerator2;
				}
			}
		case 644:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsKnife_Pick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsKnife_Pick_Up__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
			}
		case 645:
			{
				bpf__ChangeWeapon__pf();
				__CurrentState = -1;
				break;
			}
		case 646:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AShotgunPickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 647:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<AShotgunPickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 648:
			{
				b1l__K2Node_DynamicCast_AsShotgun_Pick_Up__pf = Cast<AShotgunPickUp_C__pf1651478651>(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_13__pf = (b1l__K2Node_DynamicCast_AsShotgun_Pick_Up__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_13__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 649:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponShotgun__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponShotgun__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 650:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponShotgun__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponShotgun__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__SkeletalMesh__pf, true);
				}
			}
		case 651:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__NeedFullAmmo__pf = false;
				}
			}
		case 652:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponType__pf = E__EnumWeapon__pf::NewEnumerator1;
				}
			}
		case 653:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsShotgun_Pick_Up__pf))
				{
					b1l__K2Node_DynamicCast_AsShotgun_Pick_Up__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
			}
		case 654:
			{
				bpf__ChangeWeapon__pf();
				__CurrentState = -1;
				break;
			}
		case 655:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ARiflePickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 656:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ARiflePickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 657:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponRifle__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponRifle__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 658:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponRifle__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponRifle__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__SkeletalMesh__pf, true);
				}
			}
		case 659:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__NeedFullAmmo__pf = false;
				}
			}
		case 660:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponType__pf = E__EnumWeapon__pf::NewEnumerator0;
				}
			}
		case 661:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
			}
		case 662:
			{
				bpf__ChangeWeapon__pf();
				__CurrentState = -1;
				break;
			}
		case 670:
			{
				if (!bpv__IsSlave__pf)
				{
					__CurrentState = 611;
					break;
				}
			}
		case 671:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 611;
				break;
			}
		case 786:
			{
				__CurrentState = 670;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_4__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_5__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_7__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_8__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_9__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceMulti_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_10__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_9__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_12__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_13__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_14__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_18__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_8__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_9__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_10__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_12__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6__pf{};
	AMissileRPG_C__pf2054339363* bpfv__CallFunc_FinishSpawningActor_ReturnValue_6__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_11__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_12__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_13__pf{};
	FFMODEventInstance bpfv__CallFunc_PlayEvent2D_ReturnValue__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_14__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_15__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_16__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_8__pf{};
	float bpfv__CallFunc_DegTan_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_13__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_14__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_24__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_8__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_5__pf{};
	FVector bpfv__CallFunc_GetRightVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_15__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue_6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_9__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_6__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_20__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_21__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_22__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_23__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_24__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_25__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_25__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_26__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_DegTan_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_16__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_17__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_10__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_11__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_27__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_12__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_7__pf{};
	FVector bpfv__CallFunc_GetRightVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_18__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue_8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_13__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_8__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_26__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_27__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_28__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_29__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_30__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_31__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 23:
			{
				__CurrentState = 24;
				break;
			}
		case 24:
			{
				bpv__ShotgunShoot__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				__CurrentState = 26;
				break;
			}
		case 26:
			{
				UKismetSystemLibrary::Delay(this, 0.050000, FLatentActionInfo(27, 1111921759, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
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
				bpf__SpawnBullet__pf(E__EnumWeapon__pf::NewEnumerator3);
			}
		case 29:
			{
				if(::IsValid(bpv__MuzzleFlash__pf))
				{
					bpv__MuzzleFlash__pf->SetActive(false, true);
				}
			}
		case 30:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Ammunition__pf, 1);
				b1l__Temp_int_Variable_8__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf;
			}
		case 31:
			{
				bpv__Ammunition__pf = b1l__Temp_int_Variable_8__pf;
			}
		case 32:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 33:
			{
				bpv__Ammunition__pf = 99;
			}
		case 34:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_9__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_7__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_3__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_9__pf);
				(b1l__CallFunc_LineTraceMulti_OutHits_1__pf).Reset();
				bpfv__CallFunc_LineTraceMulti_ReturnValue_1__pf = UKismetSystemLibrary::LineTraceMulti(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_7__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf, ETraceTypeQuery::TraceTypeQuery3, false, b1l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceMulti_OutHits_1__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 35:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_9__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_3__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_9__pf);
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
				}
			}
		case 36:
			{
				if(::IsValid(bpv__SniperBeam__pf))
				{
					bpv__SniperBeam__pf->SetActive(true, false);
				}
			}
		case 37:
			{
				if(::IsValid(bpv__SniperBeam__pf))
				{
					bpv__SniperBeam__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 38:
			{
				if (!bpfv__CallFunc_LineTraceMulti_ReturnValue_1__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 39:
			{
				__CurrentState = 40;
				break;
			}
		case 40:
			{
				b1l__Temp_int_Loop_Counter_Variable_4__pf = 0;
			}
		case 41:
			{
				b1l__Temp_int_Array_Index_Variable_4__pf = 0;
			}
		case 42:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_LineTraceMulti_OutHits_1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable_4__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 43:
			{
				b1l__Temp_int_Array_Index_Variable_4__pf = b1l__Temp_int_Loop_Counter_Variable_4__pf;
			}
		case 44:
			{
				__StateStack.Push(50);
			}
		case 45:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_6__pf);
				b1l__K2Node_DynamicCast_bSuccess_36__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_36__pf)
				{
					__CurrentState = 65;
					break;
				}
			}
		case 46:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				UBoxComponent*  __Local__157 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_13__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf->bpv__BoxCollision__pf) : (__Local__157)), b1l__CallFunc_BreakHitResult_HitComponent_6__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_13__pf)
				{
					__CurrentState = 74;
					break;
				}
			}
		case 47:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(b1l__CallFunc_BreakHitResult_Location_6__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_8__pf, true);
				}
			}
		case 48:
			{
				__StateStack.Push(75);
			}
		case 49:
			{
				if (!b1l__Temp_bool_Has_Been_Initd_Variable_4__pf)
				{
					__CurrentState = 80;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_8__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable_4__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable_4__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_8__pf;
				__CurrentState = 42;
				break;
			}
		case 51:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_9__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_3__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_3__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_9__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf);
			}
		case 52:
			{
				bpf__CameraShake__pf(E__EnumWeapon__pf::NewEnumerator3);
			}
		case 53:
			{
				bpf__GunShoot__pf(E__EnumWeapon__pf::NewEnumerator3, false);
			}
		case 54:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_10__pf = AActor::K2_GetActorLocation();
				AActor::MakeNoise(1.000000, ((APawn*)nullptr), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_10__pf, 0.000000, FName(TEXT("Noise")));
			}
		case 55:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_8__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__SniperBeam__pf))
				{
					bpv__SniperBeam__pf->SetBeamSourcePoint(0, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_8__pf, 0);
				}
			}
		case 56:
			{
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_9__pf = bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__SniperBeam__pf))
				{
					bpv__SniperBeam__pf->SetBeamTargetPoint(0, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_9__pf, 0);
				}
			}
		case 57:
			{
				if(::IsValid(bpv__SniperPrediction__pf))
				{
					bpv__SniperPrediction__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 58:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(59, -1872699933, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				__CurrentState = 60;
				break;
			}
		case 60:
			{
				if(::IsValid(bpv__LaserBeam__pf))
				{
					bpv__LaserBeam__pf->SetActive(false, false);
				}
			}
		case 61:
			{
				if(::IsValid(bpv__SniperBeam__pf))
				{
					bpv__SniperBeam__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 62:
			{
				if(::IsValid(bpv__SniperBeam__pf))
				{
					bpv__SniperBeam__pf->SetActive(false, false);
				}
			}
		case 63:
			{
				b1l__Temp_bool_IsClosed_Variable_4__pf = false;
			}
		case 64:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable_4__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_6__pf);
				b1l__K2Node_DynamicCast_bSuccess_37__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_37__pf)
				{
					__CurrentState = 72;
					break;
				}
			}
		case 66:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				USkeletalMeshComponent*  __Local__159 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_12__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf->bpv__SkeletalMesh__pf) : (__Local__159)), b1l__CallFunc_BreakHitResult_HitComponent_6__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_12__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 67:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf->bpf__TakeDamage__pf(1000, FName(TEXT("None")));
				}
			}
		case 68:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(b1l__CallFunc_BreakHitResult_Location_6__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_6__pf, true);
				}
			}
		case 69:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf);
			}
		case 70:
			{
				b1l__K2Node_DynamicCast_AsLevel_Completer_BP__pf = Cast<ALevelCompleterBP_C__pf922009354>(bpv__LevelCompleterRef__pf);
				b1l__K2Node_DynamicCast_bSuccess_41__pf = (b1l__K2Node_DynamicCast_AsLevel_Completer_BP__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_41__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 71:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsLevel_Completer_BP__pf))
				{
					b1l__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpf__SniperHit__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 72:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_6__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf);
			}
		case 73:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(b1l__CallFunc_BreakHitResult_Location_6__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_7__pf, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 74:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits_1__pf, b1l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b1l__CallFunc_Array_Get_Item_2__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_6__pf);
				USkeletalMeshComponent*  __Local__160 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_11__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf->bpv__SkeletalMesh__pf) : (__Local__160)), b1l__CallFunc_BreakHitResult_HitComponent_6__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_11__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 47;
				break;
			}
		case 75:
			{
				if (!b1l__Temp_bool_IsClosed_Variable_4__pf)
				{
					__CurrentState = 76;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 76:
			{
				b1l__Temp_bool_IsClosed_Variable_4__pf = true;
			}
		case 77:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_18__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf->bpf__TakeDamage__pf(1000, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_18__pf, this);
				}
			}
		case 78:
			{
				bool  __Local__161 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf->bpv__IsSlave__pf) : (__Local__161)))
				{
					__CurrentState = 79;
					break;
				}
				__CurrentState = 70;
				break;
			}
		case 79:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf);
				__CurrentState = 70;
				break;
			}
		case 80:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable_4__pf = true;
			}
		case 81:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 82:
			{
				b1l__Temp_bool_IsClosed_Variable_4__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 83:
			{
				__CurrentState = 84;
				break;
			}
		case 84:
			{
				bpv__AttackingWithKnife__pf = false;
			}
		case 85:
			{
				UKismetSystemLibrary::Delay(this, 0.750000, FLatentActionInfo(86, 571832911, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 86:
			{
				__CurrentState = 87;
				break;
			}
		case 87:
			{
				bpf__AttackingFunction__pf(false);
			}
		case 88:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 800.000000;
				}
			}
		case 89:
			{
				b1l__Temp_bool_IsClosed_Variable_3__pf = false;
			}
		case 90:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable_3__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 91:
			{
				__CurrentState = 92;
				break;
			}
		case 92:
			{
				bpf__GunShoot__pf(E__EnumWeapon__pf::NewEnumerator2, false);
			}
		case 93:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(83, 645063802, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 113:
			{
				__CurrentState = 114;
				break;
			}
		case 114:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 800.000000;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 115:
			{
				__CurrentState = 116;
				break;
			}
		case 116:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_12__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_12__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue_1__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AMissileRPG_C__pf2054339363::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 117:
			{
				UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6__pf, FName(TEXT("Instigator")), this);
			}
		case 118:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_12__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_12__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue_1__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_6__pf = CastChecked<AMissileRPG_C__pf2054339363>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6__pf, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 119:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpv__WeaponEnemy__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed));
				}
			}
		case 120:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(113, -2021693869, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 151:
			{
				__CurrentState = 152;
				break;
			}
		case 152:
			{
				bpv__ShotgunShoot__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 265:
			{
				__StateStack.Push(302);
			}
		case 266:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(b1l__Temp_int_Variable_1__pf, 9);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 284;
					break;
				}
			}
		case 267:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::GetRightVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_15__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_6__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetRightVector_ReturnValue_1__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_9__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_6__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_15__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_6__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_15__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_9__pf, ETraceTypeQuery::TraceTypeQuery4, false, b1l__Temp_object_Variable_6__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit_6__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 268:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue_6__pf)
				{
					__CurrentState = 283;
					break;
				}
			}
		case 269:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_10__pf);
				b1l__K2Node_DynamicCast_bSuccess_51__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_51__pf)
				{
					__CurrentState = 276;
					break;
				}
			}
		case 270:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				UBoxComponent*  __Local__165 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_24__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf->bpv__BoxCollision__pf) : (__Local__165)), b1l__CallFunc_BreakHitResult_HitComponent_10__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_24__pf)
				{
					__CurrentState = 275;
					break;
				}
			}
		case 271:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_24__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_24__pf, this);
				}
			}
		case 272:
			{
				bool  __Local__166 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf->bpv__IsSlave__pf) : (__Local__166)))
				{
					__CurrentState = 274;
					break;
				}
			}
		case 273:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_10__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 274:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf);
				__CurrentState = 273;
				break;
			}
		case 275:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				USkeletalMeshComponent*  __Local__167 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_22__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_8__pf->bpv__SkeletalMesh__pf) : (__Local__167)), b1l__CallFunc_BreakHitResult_HitComponent_10__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_22__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 271;
				break;
			}
		case 276:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_7__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_10__pf);
				b1l__K2Node_DynamicCast_bSuccess_52__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_7__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_52__pf)
				{
					__CurrentState = 281;
					break;
				}
			}
		case 277:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				USkeletalMeshComponent*  __Local__168 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_23__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_7__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_7__pf->bpv__SkeletalMesh__pf) : (__Local__168)), b1l__CallFunc_BreakHitResult_HitComponent_10__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_23__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 278:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_7__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_7__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")));
				}
			}
		case 279:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_7__pf);
			}
		case 280:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_10__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 281:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_10__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf);
			}
		case 282:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_6__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_10__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_10__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_10__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 283:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::GetRightVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_15__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_6__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetRightVector_ReturnValue_1__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_9__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_6__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_15__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_9__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 284:
			{
				bpfv__CallFunc_DegTan_ReturnValue__pf = UKismetMathLibrary::DegTan(bpv__BulletAngleShotgun__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_DegTan_ReturnValue__pf, 1000.000000);
				bpf__RandPointInCircle__pf(/*out*/ bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, /*out*/ b1l__CallFunc_RandPointInCircle_PointZ__pf);
			}
		case 285:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::GetForwardVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_13__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_5__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_5__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_5__pf, 10000);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, b1l__CallFunc_RandPointInCircle_PointZ__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_5__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_13__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_14__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf, FVector(1.000000,1.000000,0.000000));
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_14__pf, /*out*/ b1l__CallFunc_BreakVector_X_5__pf, /*out*/ b1l__CallFunc_BreakVector_Y_5__pf, /*out*/ b1l__CallFunc_BreakVector_Z_5__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_4__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, b1l__CallFunc_BreakVector_Z_5__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_8__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, bpfv__CallFunc_MakeVector_ReturnValue_4__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_5__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_13__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_8__pf, ETraceTypeQuery::TraceTypeQuery4, false, b1l__Temp_object_Variable_7__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit_5__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 286:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue_5__pf)
				{
					__CurrentState = 301;
					break;
				}
			}
		case 287:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_9__pf);
				b1l__K2Node_DynamicCast_bSuccess_50__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_50__pf)
				{
					__CurrentState = 294;
					break;
				}
			}
		case 288:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				UBoxComponent*  __Local__169 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_21__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf->bpv__BoxCollision__pf) : (__Local__169)), b1l__CallFunc_BreakHitResult_HitComponent_9__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_21__pf)
				{
					__CurrentState = 293;
					break;
				}
			}
		case 289:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_14__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_14__pf, this);
				}
			}
		case 290:
			{
				bool  __Local__170 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf->bpv__IsSlave__pf) : (__Local__170)))
				{
					__CurrentState = 292;
					break;
				}
			}
		case 291:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_9__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 292:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf);
				__CurrentState = 291;
				break;
			}
		case 293:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				USkeletalMeshComponent*  __Local__171 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_20__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_7__pf->bpv__SkeletalMesh__pf) : (__Local__171)), b1l__CallFunc_BreakHitResult_HitComponent_9__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_20__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 289;
				break;
			}
		case 294:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_8__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_9__pf);
				b1l__K2Node_DynamicCast_bSuccess_53__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_8__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_53__pf)
				{
					__CurrentState = 299;
					break;
				}
			}
		case 295:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				USkeletalMeshComponent*  __Local__172 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_25__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_8__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_8__pf->bpv__SkeletalMesh__pf) : (__Local__172)), b1l__CallFunc_BreakHitResult_HitComponent_9__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_25__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 296:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_8__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_8__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")));
				}
			}
		case 297:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_8__pf);
			}
		case 298:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_9__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 299:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_9__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf);
			}
		case 300:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_9__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_9__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_9__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 301:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::GetForwardVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_13__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_5__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_5__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_5__pf, 10000);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, b1l__CallFunc_RandPointInCircle_PointZ__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_5__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_13__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_14__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf, FVector(1.000000,1.000000,0.000000));
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_14__pf, /*out*/ b1l__CallFunc_BreakVector_X_5__pf, /*out*/ b1l__CallFunc_BreakVector_Y_5__pf, /*out*/ b1l__CallFunc_BreakVector_Z_5__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_4__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, b1l__CallFunc_BreakVector_Z_5__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_8__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, bpfv__CallFunc_MakeVector_ReturnValue_4__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_8__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 302:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Variable_1__pf, 1);
				b1l__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 303:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::LessEqual_IntInt(b1l__Temp_int_Variable_1__pf, 11);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 304;
					break;
				}
				__CurrentState = 265;
				break;
			}
		case 304:
			{
				bpf__ExpositionEvent__pf();
			}
		case 305:
			{
				bpf__ExposePlayer__pf();
			}
		case 306:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_8__pf = AActor::K2_GetActorLocation();
				AActor::MakeNoise(1.000000, ((APawn*)nullptr), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_8__pf, 0.000000, FName(TEXT("Noise")));
			}
		case 307:
			{
				bpf__CameraShake__pf(E__EnumWeapon__pf::NewEnumerator1);
			}
		case 308:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(23, 1764325113, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 417:
			{
				b1l__Temp_int_Variable_1__pf = 1;
				__CurrentState = 303;
				break;
			}
		case 418:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 419;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 419:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 511;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 499;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 488;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 483;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 476;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 420;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 420:
			{
				if (!bpv__ShotgunShoot__pf)
				{
					__CurrentState = 421;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 421:
			{
				bpf__AttackingFunction__pf(true);
			}
		case 422:
			{
				bpv__ShotgunShoot__pf = true;
			}
		case 423:
			{
				bpv__AttackingWithGun__pf = true;
			}
		case 424:
			{
				bpf__GunShoot__pf(E__EnumWeapon__pf::NewEnumerator6, false);
			}
		case 425:
			{
				bpf__SpawnBullet__pf(E__EnumWeapon__pf::NewEnumerator6);
			}
		case 426:
			{
				if(::IsValid(bpv__MuzzleFlash__pf))
				{
					bpv__MuzzleFlash__pf->SetActive(true, true);
				}
			}
		case 427:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Ammunition__pf, 1);
				b1l__Temp_int_Variable_3__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf;
			}
		case 428:
			{
				bpv__Ammunition__pf = b1l__Temp_int_Variable_3__pf;
			}
		case 429:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = 431;
					break;
				}
			}
		case 430:
			{
				bpv__Ammunition__pf = 99;
			}
		case 431:
			{
				b1l__Temp_int_Variable_2__pf = 1;
			}
		case 432:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_3__pf = UKismetMathLibrary::LessEqual_IntInt(b1l__Temp_int_Variable_2__pf, 7);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = 471;
					break;
				}
			}
		case 433:
			{
				__StateStack.Push(470);
			}
		case 434:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(b1l__Temp_int_Variable_2__pf, 7);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 452;
					break;
				}
			}
		case 435:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue_2__pf = bpv__FireRifle__pf->USceneComponent::GetRightVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_18__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_8__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetRightVector_ReturnValue_2__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_13__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_8__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_18__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_8__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_18__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_13__pf, ETraceTypeQuery::TraceTypeQuery4, false, b1l__Temp_object_Variable_4__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit_8__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 436:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue_8__pf)
				{
					__CurrentState = 451;
					break;
				}
			}
		case 437:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_12__pf);
				b1l__K2Node_DynamicCast_bSuccess_55__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_55__pf)
				{
					__CurrentState = 444;
					break;
				}
			}
		case 438:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				UBoxComponent*  __Local__174 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_30__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf->bpv__BoxCollision__pf) : (__Local__174)), b1l__CallFunc_BreakHitResult_HitComponent_12__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_30__pf)
				{
					__CurrentState = 443;
					break;
				}
			}
		case 439:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_27__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_27__pf, this);
				}
			}
		case 440:
			{
				bool  __Local__175 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf->bpv__IsSlave__pf) : (__Local__175)))
				{
					__CurrentState = 442;
					break;
				}
			}
		case 441:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_12__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 442:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf);
				__CurrentState = 441;
				break;
			}
		case 443:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				USkeletalMeshComponent*  __Local__176 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_28__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_10__pf->bpv__SkeletalMesh__pf) : (__Local__176)), b1l__CallFunc_BreakHitResult_HitComponent_12__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_28__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 439;
				break;
			}
		case 444:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_9__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_12__pf);
				b1l__K2Node_DynamicCast_bSuccess_56__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_9__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_56__pf)
				{
					__CurrentState = 449;
					break;
				}
			}
		case 445:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				USkeletalMeshComponent*  __Local__177 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_29__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_9__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_9__pf->bpv__SkeletalMesh__pf) : (__Local__177)), b1l__CallFunc_BreakHitResult_HitComponent_12__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_29__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 446:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_9__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_9__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")));
				}
			}
		case 447:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_9__pf);
			}
		case 448:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_12__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 449:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_12__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf);
			}
		case 450:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_12__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_12__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_12__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 451:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue_2__pf = bpv__FireRifle__pf->USceneComponent::GetRightVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_18__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_8__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetRightVector_ReturnValue_2__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_13__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_8__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_18__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_13__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 452:
			{
				bpfv__CallFunc_DegTan_ReturnValue_1__pf = UKismetMathLibrary::DegTan(bpv__BulletAngleShotgun__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_DegTan_ReturnValue_1__pf, 1000.000000);
				bpf__RandPointInCircle__pf(/*out*/ bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf, /*out*/ b1l__CallFunc_RandPointInCircle_PointZ_1__pf);
			}
		case 453:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, b1l__CallFunc_RandPointInCircle_PointZ_1__pf);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_16__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_6__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_7__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_6__pf, 10000);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_17__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue_10__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_7__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_16__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_17__pf, /*out*/ b1l__CallFunc_BreakVector_X_6__pf, /*out*/ b1l__CallFunc_BreakVector_Y_6__pf, /*out*/ b1l__CallFunc_BreakVector_Z_6__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_11__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_10__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_5__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, b1l__CallFunc_BreakVector_Z_6__pf);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_11__pf, FVector(1.000000,1.000000,0.000000));
				bpfv__CallFunc_Add_VectorVector_ReturnValue_12__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue_5__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_7__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_16__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_12__pf, ETraceTypeQuery::TraceTypeQuery4, false, b1l__Temp_object_Variable_5__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit_7__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 454:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue_7__pf)
				{
					__CurrentState = 469;
					break;
				}
			}
		case 455:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_11__pf);
				b1l__K2Node_DynamicCast_bSuccess_54__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_54__pf)
				{
					__CurrentState = 462;
					break;
				}
			}
		case 456:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				UBoxComponent*  __Local__178 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_27__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf->bpv__BoxCollision__pf) : (__Local__178)), b1l__CallFunc_BreakHitResult_HitComponent_11__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_27__pf)
				{
					__CurrentState = 461;
					break;
				}
			}
		case 457:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_26__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_26__pf, this);
				}
			}
		case 458:
			{
				bool  __Local__179 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf->bpv__IsSlave__pf) : (__Local__179)))
				{
					__CurrentState = 460;
					break;
				}
			}
		case 459:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_11__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 460:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf);
				__CurrentState = 459;
				break;
			}
		case 461:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				USkeletalMeshComponent*  __Local__180 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_26__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_9__pf->bpv__SkeletalMesh__pf) : (__Local__180)), b1l__CallFunc_BreakHitResult_HitComponent_11__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_26__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 457;
				break;
			}
		case 462:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_10__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_11__pf);
				b1l__K2Node_DynamicCast_bSuccess_57__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_10__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_57__pf)
				{
					__CurrentState = 467;
					break;
				}
			}
		case 463:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				USkeletalMeshComponent*  __Local__181 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_31__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_10__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_10__pf->bpv__SkeletalMesh__pf) : (__Local__181)), b1l__CallFunc_BreakHitResult_HitComponent_11__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_31__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 464:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_10__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_10__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")));
				}
			}
		case 465:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_10__pf);
			}
		case 466:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_11__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 467:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_11__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf);
			}
		case 468:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_11__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_11__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_11__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 469:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, b1l__CallFunc_RandPointInCircle_PointZ_1__pf);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_16__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_6__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_7__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_6__pf, 10000);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_17__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue_10__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_7__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_16__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_17__pf, /*out*/ b1l__CallFunc_BreakVector_X_6__pf, /*out*/ b1l__CallFunc_BreakVector_Y_6__pf, /*out*/ b1l__CallFunc_BreakVector_Z_6__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_11__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_10__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_5__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, b1l__CallFunc_BreakVector_Z_6__pf);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_11__pf, FVector(1.000000,1.000000,0.000000));
				bpfv__CallFunc_Add_VectorVector_ReturnValue_12__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue_5__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_12__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 470:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Variable_2__pf, 1);
				b1l__Temp_int_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 432;
				break;
			}
		case 471:
			{
				bpf__ExpositionEvent__pf();
			}
		case 472:
			{
				bpf__ExposePlayer__pf();
			}
		case 473:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_25__pf = AActor::K2_GetActorLocation();
				AActor::MakeNoise(1.000000, ((APawn*)nullptr), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_25__pf, 0.000000, FName(TEXT("Noise")));
			}
		case 474:
			{
				bpf__CameraShake__pf(E__EnumWeapon__pf::NewEnumerator6);
			}
		case 475:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(151, 1867886419, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 476:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 477;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 477:
			{
				bpf__GunShoot__pf(E__EnumWeapon__pf::NewEnumerator5, false);
			}
		case 478:
			{
				bpf__AttackingFunction__pf(true);
			}
		case 479:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Ammunition__pf, 1);
				b1l__Temp_int_Variable_6__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf;
			}
		case 480:
			{
				bpv__Ammunition__pf = b1l__Temp_int_Variable_6__pf;
			}
		case 481:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 0.000000;
				}
			}
		case 482:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(115, -2017164234, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 483:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_7__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__CameraType__pf), static_cast<uint8>(E__EnumCameraType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 484:
			{
				bpf__AttackingFunction__pf(true);
			}
		case 485:
			{
				bpv__AttackingWithGun__pf = true;
			}
		case 486:
			{
				if(::IsValid(bpv__LaserBeam__pf))
				{
					bpv__LaserBeam__pf->SetActive(true, false);
				}
			}
		case 487:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(25, -1200723799, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 488:
			{
				if (!bpv__AttackingWithKnife__pf)
				{
					__CurrentState = 489;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 489:
			{
				__StateStack.Push(494);
			}
		case 490:
			{
				if (!b1l__Temp_bool_Has_Been_Initd_Variable_3__pf)
				{
					__CurrentState = 491;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 491:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable_3__pf = true;
			}
		case 492:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 493:
			{
				b1l__Temp_bool_IsClosed_Variable_3__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 494:
			{
				if (!b1l__Temp_bool_IsClosed_Variable_3__pf)
				{
					__CurrentState = 495;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 495:
			{
				b1l__Temp_bool_IsClosed_Variable_3__pf = true;
			}
		case 496:
			{
				bpf__AttackingFunction__pf(true);
			}
		case 497:
			{
				bpv__AttackingWithKnife__pf = true;
			}
		case 498:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(91, 1551219892, TEXT("ExecuteUbergraph_EnemyShootingCh_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 499:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_6__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__CameraType__pf), static_cast<uint8>(E__EnumCameraType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 500:
			{
				if (!bpv__ShotgunShoot__pf)
				{
					__CurrentState = 501;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 501:
			{
				bpf__AttackingFunction__pf(true);
			}
		case 502:
			{
				bpv__ShotgunShoot__pf = true;
			}
		case 503:
			{
				bpv__AttackingWithGun__pf = true;
			}
		case 504:
			{
				bpf__GunShoot__pf(E__EnumWeapon__pf::NewEnumerator1, false);
			}
		case 505:
			{
				bpf__SpawnBullet__pf(E__EnumWeapon__pf::NewEnumerator1);
			}
		case 506:
			{
				if(::IsValid(bpv__MuzzleFlash__pf))
				{
					bpv__MuzzleFlash__pf->SetActive(true, true);
				}
			}
		case 507:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Ammunition__pf, 1);
				b1l__Temp_int_Variable_9__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf;
			}
		case 508:
			{
				bpv__Ammunition__pf = b1l__Temp_int_Variable_9__pf;
			}
		case 509:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = 417;
					break;
				}
			}
		case 510:
			{
				bpv__Ammunition__pf = 99;
				__CurrentState = 417;
				break;
			}
		case 511:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_4__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__CameraType__pf), static_cast<uint8>(E__EnumCameraType__pf::NewEnumerator0));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_4__pf)
				{
					__CurrentState = 533;
					break;
				}
			}
		case 512:
			{
				bpf__AttackingFunction__pf(true);
			}
		case 513:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Ammunition__pf, 1);
				b1l__Temp_int_Variable_11__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf;
			}
		case 514:
			{
				bpv__Ammunition__pf = b1l__Temp_int_Variable_11__pf;
			}
		case 515:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = 517;
					break;
				}
			}
		case 516:
			{
				bpv__Ammunition__pf = 99;
			}
		case 517:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_6__pf = AActor::K2_GetActorLocation();
				AActor::MakeNoise(1.000000, ((APawn*)nullptr), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_6__pf, 0.000000, FName(TEXT("Noise")));
			}
		case 518:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf, /*out*/ b1l__CallFunc_BreakVector_X_1__pf, /*out*/ b1l__CallFunc_BreakVector_Y_1__pf, /*out*/ b1l__CallFunc_BreakVector_Z_1__pf);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue_1__pf = bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult_1__pf);
				}
				UGameplayStatics::BreakHitResult(b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				UKismetMathLibrary::BreakVector(b1l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b1l__CallFunc_BreakVector_X_2__pf, /*out*/ b1l__CallFunc_BreakVector_Y_2__pf, /*out*/ b1l__CallFunc_BreakVector_Z_2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X_2__pf, b1l__CallFunc_BreakVector_Y_1__pf, b1l__CallFunc_BreakVector_Z_2__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_3__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf, bpfv__CallFunc_MakeVector_ReturnValue_1__pf, ETraceTypeQuery::TraceTypeQuery4, false, b1l__Temp_object_Variable_9__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit_3__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 519:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_7__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_7__pf);
				b1l__K2Node_DynamicCast_bSuccess_45__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_45__pf)
				{
					__CurrentState = 529;
					break;
				}
			}
		case 520:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_7__pf);
				UBoxComponent*  __Local__186 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_15__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpv__BoxCollision__pf) : (__Local__186)), b1l__CallFunc_BreakHitResult_HitComponent_7__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_15__pf)
				{
					__CurrentState = 528;
					break;
				}
			}
		case 521:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_12__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_12__pf, this);
				}
			}
		case 522:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpv__SkeletalMesh__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpv__SkeletalMesh__pf->SetSimulatePhysics(true);
				}
			}
		case 523:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf) && ::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf), ACharacter::__PPO__CharacterMovement() )))->StopMovementImmediately();
				}
			}
		case 524:
			{
				bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf = UKismetMathLibrary::Conv_FloatToVector(bpv__ImpactVelocity__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_7__pf);
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpv__SkeletalMesh__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpv__SkeletalMesh__pf->AddImpulse(bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf, b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, false);
				}
			}
		case 525:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_7__pf);
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpv__SkeletalMesh__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpv__SkeletalMesh__pf->SetPhysicsLinearVelocity(b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, false, b1l__CallFunc_BreakHitResult_HitBoneName_7__pf);
				}
			}
		case 526:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf, /*out*/ b1l__CallFunc_BreakVector_X_1__pf, /*out*/ b1l__CallFunc_BreakVector_Y_1__pf, /*out*/ b1l__CallFunc_BreakVector_Z_1__pf);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue_1__pf = bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult_1__pf);
				}
				UGameplayStatics::BreakHitResult(b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				UKismetMathLibrary::BreakVector(b1l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b1l__CallFunc_BreakVector_X_2__pf, /*out*/ b1l__CallFunc_BreakVector_Y_2__pf, /*out*/ b1l__CallFunc_BreakVector_Z_2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X_2__pf, b1l__CallFunc_BreakVector_Y_1__pf, b1l__CallFunc_BreakVector_Z_2__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
			}
		case 527:
			{
				bpf__ExposePlayer__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 528:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_7__pf);
				USkeletalMeshComponent*  __Local__187 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_14__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf->bpv__SkeletalMesh__pf) : (__Local__187)), b1l__CallFunc_BreakHitResult_HitComponent_7__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_14__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 521;
				break;
			}
		case 529:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_7__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_5__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_7__pf);
				b1l__K2Node_DynamicCast_bSuccess_46__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_5__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_46__pf)
				{
					__CurrentState = 532;
					break;
				}
			}
		case 530:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_7__pf);
				USkeletalMeshComponent*  __Local__188 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_16__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_5__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_5__pf), ACharacter::__PPO__Mesh() )))) : (__Local__188)), b1l__CallFunc_BreakHitResult_HitComponent_7__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_16__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 531:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_5__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_5__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")));
				}
				__CurrentState = 526;
				break;
			}
		case 532:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_7__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_7__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_7__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_7__pf);
				__CurrentState = 526;
				break;
			}
		case 533:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_5__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__CameraType__pf), static_cast<uint8>(E__EnumCameraType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 534:
			{
				bpv__AttackingWithGun__pf = true;
			}
		case 535:
			{
				if(::IsValid(bpv__MuzzleFlash__pf))
				{
					bpv__MuzzleFlash__pf->SetActive(true, true);
				}
			}
		case 536:
			{
				bpf__CameraShake__pf(E__EnumWeapon__pf::NewEnumerator0);
			}
		case 537:
			{
				bpf__GunShoot__pf(E__EnumWeapon__pf::NewEnumerator0, false);
			}
		case 538:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Ammunition__pf, 1);
				b1l__Temp_int_Variable_10__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf;
			}
		case 539:
			{
				bpv__Ammunition__pf = b1l__Temp_int_Variable_10__pf;
			}
		case 540:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = 542;
					break;
				}
			}
		case 541:
			{
				bpv__Ammunition__pf = 99;
			}
		case 542:
			{
				bpf__SpawnBullet__pf(E__EnumWeapon__pf::NewEnumerator0);
			}
		case 543:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_7__pf = AActor::K2_GetActorLocation();
				AActor::MakeNoise(1.000000, ((APawn*)nullptr), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_7__pf, 0.000000, FName(TEXT("Noise")));
			}
		case 544:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf = AActor::K2_GetActorLocation();
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_2__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery4, false, b1l__Temp_object_Variable_8__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit_2__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 545:
			{
				bpf__ExpositionEvent__pf();
			}
		case 546:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_5__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_5__pf);
				b1l__K2Node_DynamicCast_bSuccess_33__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_33__pf)
				{
					__CurrentState = 554;
					break;
				}
			}
		case 547:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_5__pf);
				UBoxComponent*  __Local__189 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_10__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf->bpv__BoxCollision__pf) : (__Local__189)), b1l__CallFunc_BreakHitResult_HitComponent_5__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_10__pf)
				{
					__CurrentState = 553;
					break;
				}
			}
		case 548:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_13__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_13__pf, this);
				}
			}
		case 549:
			{
				bool  __Local__190 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf->bpv__IsSlave__pf) : (__Local__190)))
				{
					__CurrentState = 552;
					break;
				}
			}
		case 550:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_2__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf);
			}
		case 551:
			{
				bpf__ExposePlayer__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 552:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf);
				__CurrentState = 550;
				break;
			}
		case 553:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_5__pf);
				USkeletalMeshComponent*  __Local__191 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_8__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf->bpv__SkeletalMesh__pf) : (__Local__191)), b1l__CallFunc_BreakHitResult_HitComponent_5__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_8__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 548;
				break;
			}
		case 554:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_5__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_5__pf);
				b1l__K2Node_DynamicCast_bSuccess_34__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_34__pf)
				{
					__CurrentState = 558;
					break;
				}
			}
		case 555:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_5__pf);
				USkeletalMeshComponent*  __Local__192 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_9__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf->bpv__SkeletalMesh__pf) : (__Local__192)), b1l__CallFunc_BreakHitResult_HitComponent_5__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_9__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 556:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")));
				}
			}
		case 557:
			{
				bpf__SumPoints__pf(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf);
				__CurrentState = 550;
				break;
			}
		case 558:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_5__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_5__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_5__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_5__pf);
				__CurrentState = 550;
				break;
			}
		case 559:
			{
				__CurrentState = 560;
				break;
			}
		case 560:
			{
				if (!bpv__Attacking__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 561:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__Ammunition__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 562;
					break;
				}
				__CurrentState = 418;
				break;
			}
		case 562:
			{
				bpv__AttackingWithGun__pf = false;
			}
		case 563:
			{
				bpfv__CallFunc_PlayEvent2D_ReturnValue__pf = UFMODBlueprintStatics::PlayEvent2D(this, CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed), true);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_3(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 564:
			{
				bpv__TimerCadence__pf = 0.100000;
			}
		case 565:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("Shooting")));
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_1__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b1l__K2Node_CreateDelegate_OutputDelegate_1__pf, bpv__TimerCadence__pf, true, 0.000000, 0.000000);
			}
		case 566:
			{
				bpf__Shooting__pf();
				__CurrentState = -1;
				break;
			}
		case 567:
			{
				bpv__TimerCadence__pf = 0.200000;
				__CurrentState = 565;
				break;
			}
		case 568:
			{
				bpv__TimerCadence__pf = 5.000000;
				__CurrentState = 565;
				break;
			}
		case 663:
			{
				if (!bpv__IsSlave__pf)
				{
					__CurrentState = 665;
					break;
				}
			}
		case 664:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 665:
			{
				bpf__AttackingFunction__pf(true);
			}
		case 666:
			{
				b1l__Temp_byte_Variable__pf = E__EnumWeapon__pf::NewEnumerator0;
				b1l__Temp_byte_Variable_1__pf = E__EnumWeapon__pf::NewEnumerator1;
				b1l__Temp_byte_Variable_2__pf = E__EnumWeapon__pf::NewEnumerator2;
				b1l__Temp_byte_Variable_3__pf = E__EnumWeapon__pf::NewEnumerator3;
				b1l__Temp_byte_Variable_4__pf = E__EnumWeapon__pf::NewEnumerator0;
				b1l__Temp_byte_Variable_5__pf = E__EnumWeapon__pf::NewEnumerator0;
				b1l__Temp_byte_Variable_6__pf = E__EnumWeapon__pf::NewEnumerator0;
				b1l__Temp_byte_Variable_7__pf = bpv__Weapon__pf;
				b1l__K2Node_SwitchEnum_CmpSuccess_7__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(TSwitchValue<E__EnumWeapon__pf , E__EnumWeapon__pf >(b1l__Temp_byte_Variable_7__pf, b1l__K2Node_Select_Default__pf, 7, TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator0, b1l__Temp_byte_Variable__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator1, b1l__Temp_byte_Variable_1__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator2, b1l__Temp_byte_Variable_2__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator3, b1l__Temp_byte_Variable_3__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator5, b1l__Temp_byte_Variable_4__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator6, b1l__Temp_byte_Variable_5__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator4, b1l__Temp_byte_Variable_6__pf))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_7__pf)
				{
					__CurrentState = 564;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_7__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(TSwitchValue<E__EnumWeapon__pf , E__EnumWeapon__pf >(b1l__Temp_byte_Variable_7__pf, b1l__K2Node_Select_Default__pf, 7, TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator0, b1l__Temp_byte_Variable__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator1, b1l__Temp_byte_Variable_1__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator2, b1l__Temp_byte_Variable_2__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator3, b1l__Temp_byte_Variable_3__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator5, b1l__Temp_byte_Variable_4__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator6, b1l__Temp_byte_Variable_5__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator4, b1l__Temp_byte_Variable_6__pf))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_7__pf)
				{
					__CurrentState = 567;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_7__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(TSwitchValue<E__EnumWeapon__pf , E__EnumWeapon__pf >(b1l__Temp_byte_Variable_7__pf, b1l__K2Node_Select_Default__pf, 7, TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator0, b1l__Temp_byte_Variable__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator1, b1l__Temp_byte_Variable_1__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator2, b1l__Temp_byte_Variable_2__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator3, b1l__Temp_byte_Variable_3__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator5, b1l__Temp_byte_Variable_4__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator6, b1l__Temp_byte_Variable_5__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator4, b1l__Temp_byte_Variable_6__pf))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_7__pf)
				{
					__CurrentState = 669;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_7__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(TSwitchValue<E__EnumWeapon__pf , E__EnumWeapon__pf >(b1l__Temp_byte_Variable_7__pf, b1l__K2Node_Select_Default__pf, 7, TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator0, b1l__Temp_byte_Variable__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator1, b1l__Temp_byte_Variable_1__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator2, b1l__Temp_byte_Variable_2__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator3, b1l__Temp_byte_Variable_3__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator5, b1l__Temp_byte_Variable_4__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator6, b1l__Temp_byte_Variable_5__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator4, b1l__Temp_byte_Variable_6__pf))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_7__pf)
				{
					__CurrentState = 568;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_7__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(TSwitchValue<E__EnumWeapon__pf , E__EnumWeapon__pf >(b1l__Temp_byte_Variable_7__pf, b1l__K2Node_Select_Default__pf, 7, TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator0, b1l__Temp_byte_Variable__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator1, b1l__Temp_byte_Variable_1__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator2, b1l__Temp_byte_Variable_2__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator3, b1l__Temp_byte_Variable_3__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator5, b1l__Temp_byte_Variable_4__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator6, b1l__Temp_byte_Variable_5__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator4, b1l__Temp_byte_Variable_6__pf))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_7__pf)
				{
					__CurrentState = 668;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_7__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(TSwitchValue<E__EnumWeapon__pf , E__EnumWeapon__pf >(b1l__Temp_byte_Variable_7__pf, b1l__K2Node_Select_Default__pf, 7, TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator0, b1l__Temp_byte_Variable__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator1, b1l__Temp_byte_Variable_1__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator2, b1l__Temp_byte_Variable_2__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator3, b1l__Temp_byte_Variable_3__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator5, b1l__Temp_byte_Variable_4__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator6, b1l__Temp_byte_Variable_5__pf), TSwitchPair<E__EnumWeapon__pf , E__EnumWeapon__pf >(E__EnumWeapon__pf::NewEnumerator4, b1l__Temp_byte_Variable_6__pf))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_7__pf)
				{
					__CurrentState = 667;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 667:
			{
				bpv__TimerCadence__pf = 0.200000;
				__CurrentState = 565;
				break;
			}
		case 668:
			{
				bpv__TimerCadence__pf = 5.000000;
				__CurrentState = 565;
				break;
			}
		case 669:
			{
				bpv__TimerCadence__pf = 1.500000;
				__CurrentState = 565;
				break;
			}
		case 768:
			{
				__CurrentState = 769;
				break;
			}
		case 769:
			{
				b1l__Temp_struct_Variable__pf = b1l__K2Node_InputActionEvent_Key_3__pf;
				__CurrentState = 663;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_22__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf{};
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_11__pf{};
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf{};
	FFMODEventInstance bpfv__CallFunc_PlayEvent2D_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 94:
			{
				__CurrentState = 95;
				break;
			}
		case 95:
			{
				bpf__SplatterBloodPlayer__pf();
			}
		case 96:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_11__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_11__pf)
				{
					__CurrentState = 103;
					break;
				}
			}
		case 97:
			{
				bpf__GunShoot__pf(E__EnumWeapon__pf::NewEnumerator2, false);
			}
		case 98:
			{
				bpf__DyingAnimation__pf();
			}
		case 99:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(100, 985598307, TEXT("ExecuteUbergraph_EnemyShootingCh_4"), this));
				__CurrentState = -1;
				break;
			}
		case 100:
			{
				__CurrentState = 101;
				break;
			}
		case 101:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 102;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 102:
			{
				bpf__DiePlayerFunction__pf(this);
				__CurrentState = -1;
				break;
			}
		case 103:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Ammunition__pf, 1);
				b1l__Temp_int_Variable_7__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf;
			}
		case 104:
			{
				bpv__Ammunition__pf = b1l__Temp_int_Variable_7__pf;
			}
		case 105:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_22__pf = AActor::K2_GetActorLocation();
				AActor::MakeNoise(1.000000, ((APawn*)nullptr), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_22__pf, 0.000000, FName(TEXT("Noise")));
			}
		case 106:
			{
				bpf__GunShoot__pf(bpv__Weapon__pf, true);
			}
		case 107:
			{
				bpf__DyingAnimation__pf();
				__CurrentState = 101;
				break;
			}
		case 108:
			{
				__CurrentState = 95;
				break;
			}
		case 731:
			{
				bpv__HP__pf = 0;
			}
		case 732:
			{
				bpv__IsDeath__pf = false;
			}
		case 733:
			{
				bpv__IsSuiciding__pf = true;
			}
		case 734:
			{
				bpf__ExposePlayer__pf();
			}
		case 735:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_9__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_9__pf)
				{
					__CurrentState = 739;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_9__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_9__pf)
				{
					__CurrentState = 737;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_9__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_9__pf)
				{
					__CurrentState = 736;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_9__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_9__pf)
				{
					__CurrentState = 737;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 736:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(108, -122182997, TEXT("ExecuteUbergraph_EnemyShootingCh_4"), this));
				__CurrentState = -1;
				break;
			}
		case 737:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(5.137000,0.432300,2.156000), FRotator(34.266998,125.279999,184.289993), false, /*out*/ b1l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2__pf, true);
				}
			}
		case 738:
			{
				UKismetSystemLibrary::Delay(this, 0.800000, FLatentActionInfo(94, 1091818671, TEXT("ExecuteUbergraph_EnemyShootingCh_4"), this));
				__CurrentState = -1;
				break;
			}
		case 739:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(9.830000,3.411000,-4.358000), FRotator(7.675000,125.919998,-170.800003), false, /*out*/ b1l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3__pf, true);
				}
				__CurrentState = 738;
				break;
			}
		case 740:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 741;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 741:
			{
				if (!bpv__IsSlave__pf)
				{
					__CurrentState = 742;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 742:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpv__Ammunition__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 745;
					break;
				}
			}
		case 743:
			{
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 744:
			{
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 731;
				break;
			}
		case 745:
			{
				bpfv__CallFunc_PlayEvent2D_ReturnValue_1__pf = UFMODBlueprintStatics::PlayEvent2D(this, CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed), true);
				__CurrentState = -1;
				break;
			}
		case 767:
			{
				__CurrentState = 740;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 574:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b1l__Temp_bool_Variable__pf);
				b1l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 575:
			{
				if (!b1l__Temp_bool_Variable__pf)
				{
					__CurrentState = 584;
					break;
				}
			}
		case 576:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_60__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_60__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 577:
			{
				UGamepadInteraction_C__pf197907997*  __Local__196 = ((UGamepadInteraction_C__pf197907997*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(((::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf)) ? (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf->bpv__CurrentWidget__pf) : (__Local__196)));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 579;
					break;
				}
			}
		case 578:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf->bpv__CurrentWidget__pf))
				{
					b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf->bpv__CurrentWidget__pf->RemoveFromParent();
				}
			}
		case 579:
			{
				b1l__CallFunc_Create_ReturnValue__pf = CastChecked<UPauseHUD_C__pf197907997>(UWidgetBlueprintLibrary::Create(this, UPauseHUD_C__pf197907997::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 580:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_58__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_58__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 581:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf))
				{
					b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf->bpf__ResetWidget__pf(b1l__CallFunc_Create_ReturnValue__pf);
				}
			}
		case 582:
			{
				if(::IsValid(b1l__CallFunc_Create_ReturnValue__pf))
				{
					b1l__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 583:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue_2__pf->bShowMouseCursor = true;
				}
				__CurrentState = -1;
				break;
			}
		case 584:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_59__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_59__pf)
				{
					__CurrentState = 588;
					break;
				}
			}
		case 585:
			{
				UGamepadInteraction_C__pf197907997*  __Local__197 = ((UGamepadInteraction_C__pf197907997*)nullptr);
				b1l__K2Node_DynamicCast_AsPause_HUD__pf = Cast<UPauseHUD_C__pf197907997>(((::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf)) ? (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf->bpv__CurrentWidget__pf) : (__Local__197)));
				b1l__K2Node_DynamicCast_bSuccess_61__pf = (b1l__K2Node_DynamicCast_AsPause_HUD__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_61__pf)
				{
					__CurrentState = 587;
					break;
				}
			}
		case 586:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsPause_HUD__pf))
				{
					b1l__K2Node_DynamicCast_AsPause_HUD__pf->bpf__ClosexMenu__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 587:
			{
				bpf__OpenxMenu__pfT();
				__CurrentState = -1;
				break;
			}
		case 588:
			{
				bpf__OpenxMenu__pfT();
				__CurrentState = -1;
				break;
			}
		case 756:
			{
				__CurrentState = 757;
				break;
			}
		case 757:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 759;
					break;
				}
			}
		case 758:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("WorldMapLevel")), true, FString(TEXT("")));
				__CurrentState = -1;
				break;
			}
		case 759:
			{
				if (!bpv__blockMenu__pf)
				{
					__CurrentState = 574;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 787:
			{
				__CurrentState = 574;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 790);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_1__pf = b1l__K2Node_InputTouchEvent_Location_1__pf;
	b1l__Temp_byte_Variable_8__pf = b1l__K2Node_InputTouchEvent_FingerIndex_1__pf;
	// optimized KCST_UnconditionalGoto
	StopJumping();
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_7(int32 bpp__EntryPoint__pf)
{
	FVector2D bpfv__CallFunc_GetViewportSize_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_4__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_5__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_6__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_7__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf{};
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_4__pf{};
	FVector2D bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue_1__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 776);
	// optimized KCST_UnconditionalGoto
	UKismetMathLibrary::BreakVector2D(bpv__lastRotationAxis__pf, /*out*/ b1l__CallFunc_BreakVector2D_X_3__pf, /*out*/ b1l__CallFunc_BreakVector2D_Y_3__pf);
	bpfv__CallFunc_GetInputAxisValue_ReturnValue_6__pf = AActor::GetInputAxisValue(FName(TEXT("AimX")));
	bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::NotEqual_FloatFloat(b1l__CallFunc_BreakVector2D_X_3__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue_6__pf);
	bpfv__CallFunc_GetInputAxisValue_ReturnValue_7__pf = AActor::GetInputAxisValue(FName(TEXT("AimY")));
	bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::NotEqual_FloatFloat(b1l__CallFunc_BreakVector2D_Y_3__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue_7__pf);
	bpfv__CallFunc_BooleanOR_ReturnValue_4__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_3__pf);
	if (!bpfv__CallFunc_BooleanOR_ReturnValue_4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetInputAxisValue_ReturnValue_4__pf = AActor::GetInputAxisValue(FName(TEXT("AimX")));
	bpfv__CallFunc_GetInputAxisValue_ReturnValue_5__pf = AActor::GetInputAxisValue(FName(TEXT("AimY")));
	bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_GetInputAxisValue_ReturnValue_4__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue_5__pf);
	bpv__lastRotationAxis__pf = bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf;
	bpfv__CallFunc_GetViewportSize_ReturnValue__pf = UWidgetLayoutLibrary::GetViewportSize(this);
	UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetViewportSize_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakVector2D_X__pf, /*out*/ b1l__CallFunc_BreakVector2D_Y__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(b1l__CallFunc_BreakVector2D_Y__pf, 2.000000);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(b1l__CallFunc_BreakVector2D_Y__pf, 3.000000);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(b1l__CallFunc_BreakVector2D_X__pf, 2.000000);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, -1.000000);
	bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("AimX")));
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
	bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf = AActor::GetInputAxisValue(FName(TEXT("AimY")));
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf);
	bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue_3__pf->APlayerController::SetMouseLocation(bpfv__CallFunc_FTrunc_ReturnValue__pf, bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
	}
	bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue_1__pf = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
	bpv__lastMousePosition__pf = bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue_1__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
	}
	UGameplayStatics::BreakHitResult(b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, b1l__CallFunc_BreakHitResult_Location__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b1l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_K2_SetActorRotation_ReturnValue_1__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_MakeRotator_ReturnValue_1__pf, false);
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
	}
	UGameplayStatics::BreakHitResult(b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, b1l__CallFunc_BreakHitResult_Location__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw__pf);
	bpf__FixAreaRotation__pf(b1l__CallFunc_BreakRotator_Yaw__pf);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	FVector2D bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanOR_ReturnValue_2__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsControlled_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 400:
			{
				if (!bpv__IsPlayer__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 401:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpv__IsDeath__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 402:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(bpv__IsSuiciding__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 403:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__CameraType__pf), static_cast<uint8>(E__EnumCameraType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 404:
			{
				bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
			}
		case 405:
			{
				UKismetMathLibrary::BreakVector2D(bpv__lastMousePosition__pf, /*out*/ b1l__CallFunc_BreakVector2D_X_1__pf, /*out*/ b1l__CallFunc_BreakVector2D_Y_1__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakVector2D_X_2__pf, /*out*/ b1l__CallFunc_BreakVector2D_Y_2__pf);
				bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(b1l__CallFunc_BreakVector2D_Y_1__pf, b1l__CallFunc_BreakVector2D_Y_2__pf);
				bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_FloatFloat(b1l__CallFunc_BreakVector2D_X_1__pf, b1l__CallFunc_BreakVector2D_X_2__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue_3__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_3__pf)
				{
					__CurrentState = 408;
					break;
				}
			}
		case 406:
			{
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakVector2D_X_2__pf, /*out*/ b1l__CallFunc_BreakVector2D_Y_2__pf);
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(b1l__CallFunc_BreakVector2D_X_2__pf, b1l__CallFunc_BreakVector2D_Y_2__pf);
				bpv__lastMousePosition__pf = bpfv__CallFunc_MakeVector2D_ReturnValue__pf;
			}
		case 407:
			{
				bpf__RotatexWithxMouse__pfTT();
				__CurrentState = -1;
				break;
			}
		case 408:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf = AActor::GetInputAxisValue(FName(TEXT("AimY")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf = AActor::GetInputAxisValue(FName(TEXT("AimX")));
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf, -0.200000);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf, -0.200000);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf, 0.200000);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf, 0.200000);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf, bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf, bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue_2__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue__pf, bpfv__CallFunc_BooleanOR_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 409:
			{
				bpf__RotatexWithxGamepad__pfTT();
				__CurrentState = -1;
				break;
			}
		case 609:
			{
				__CurrentState = 610;
				break;
			}
		case 610:
			{
				bpfv__CallFunc_IsControlled_ReturnValue__pf = APawn::IsControlled();
				if (!bpfv__CallFunc_IsControlled_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 400;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_9(int32 bpp__EntryPoint__pf)
{
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAttached_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 710:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 711:
			{
				b1l__Temp_bool_IsClosed_Variable_2__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 712:
			{
				__StateStack.Push(715);
			}
		case 713:
			{
				if (!b1l__Temp_bool_Has_Been_Initd_Variable_2__pf)
				{
					__CurrentState = 714;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 714:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable_2__pf = true;
				__CurrentState = 710;
				break;
			}
		case 715:
			{
				if (!b1l__Temp_bool_IsClosed_Variable_2__pf)
				{
					__CurrentState = 716;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 716:
			{
				b1l__Temp_bool_IsClosed_Variable_2__pf = true;
			}
		case 717:
			{
				bpfv__CallFunc_SpawnEmitterAttached_ReturnValue__pf = UGameplayStatics::SpawnEmitterAttached(CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed), (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("None")), FVector(0.000000,0.000000,150.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000), EAttachLocation::KeepRelativeOffset, true, EPSCPoolMethod::None, true);
			}
		case 718:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_4__pf.BindUFunction(this,FName(TEXT("OnCollideEvent")));
				if(::IsValid(bpfv__CallFunc_SpawnEmitterAttached_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnEmitterAttached_ReturnValue__pf->OnParticleCollide.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_4__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 721:
			{
				__CurrentState = 712;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_10(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue_2__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_5__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 788);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_IntFloat(-1, b1l__K2Node_CustomEvent_Z__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue_5__pf = UKismetMathLibrary::MakeRotator(-90.000000, 0.000000, bpfv__CallFunc_Multiply_IntFloat_ReturnValue_2__pf);
	if(::IsValid(bpv__PaperSprite__pf))
	{
		bpv__PaperSprite__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue_5__pf, false, /*out*/ b1l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
	}
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_11(int32 bpp__EntryPoint__pf)
{
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAttached_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 698:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 699:
			{
				b1l__Temp_bool_IsClosed_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 701:
			{
				__StateStack.Push(704);
			}
		case 702:
			{
				if (!b1l__Temp_bool_Has_Been_Initd_Variable_1__pf)
				{
					__CurrentState = 703;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 703:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
				__CurrentState = 698;
				break;
			}
		case 704:
			{
				if (!b1l__Temp_bool_IsClosed_Variable_1__pf)
				{
					__CurrentState = 705;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 705:
			{
				b1l__Temp_bool_IsClosed_Variable_1__pf = true;
			}
		case 706:
			{
				bpfv__CallFunc_SpawnEmitterAttached_ReturnValue_1__pf = UGameplayStatics::SpawnEmitterAttached(CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed), (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("None")), FVector(0.000000,0.000000,150.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000), EAttachLocation::KeepRelativeOffset, true, EPSCPoolMethod::None, true);
			}
		case 707:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("CustomEvent")));
				if(::IsValid(bpfv__CallFunc_SpawnEmitterAttached_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SpawnEmitterAttached_ReturnValue_1__pf->OnParticleCollide.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_3__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 726:
			{
				__CurrentState = 701;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_12(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 760);
	// optimized KCST_UnconditionalGoto
	if (!bpv__CanActivatePowerUp__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b1l__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf = Cast<ALevelCompleterBP_C__pf922009354>(bpv__LevelCompleterRef__pf);
	b1l__K2Node_DynamicCast_bSuccess_43__pf = (b1l__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_43__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf))
	{
		b1l__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf->bpf__PowerUpSlowTime__pf(bpv__ChameleonRef__pf);
	}
	bpv__CanActivatePowerUp__pf = false;
	b1l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("PowerUpCooldown")));
	bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_2__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b1l__K2Node_CreateDelegate_OutputDelegate_2__pf, bpv__CooldownPowerUp__pf, false, 0.000000, 0.000000);
	bpv__RemainingTimePowerUp__pf = bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue_2__pf;
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_13(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf{};
	FName bpfv__CallFunc_Conv_StringToName_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 785);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
	b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
	b1l__K2Node_DynamicCast_bSuccess_35__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_35__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bool  __Local__198 = false;
	if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsPlayerDeath__pf) : (__Local__198)))
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf = UGameplayStatics::GetGameInstance(this);
	b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf);
	b1l__K2Node_DynamicCast_bSuccess_44__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_44__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf))
	{
		b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpf__ResetPoints__pf();
	}
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf = UGameplayStatics::GetCurrentLevelName(this, true);
	bpfv__CallFunc_Conv_StringToName_ReturnValue__pf = UKismetStringLibrary::Conv_StringToName(bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf);
	UGameplayStatics::OpenLevel(this, bpfv__CallFunc_Conv_StringToName_ReturnValue__pf, true, FString(TEXT("")));
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 782);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable_1__pf = b1l__K2Node_InputTouchEvent_Location__pf;
	b1l__Temp_byte_Variable_8__pf = b1l__K2Node_InputTouchEvent_FingerIndex__pf;
	// optimized KCST_UnconditionalGoto
	Jump();
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_15(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 775);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
	}
	UGameplayStatics::BreakHitResult(b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, b1l__CallFunc_BreakHitResult_Location__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b1l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false);
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
	}
	UGameplayStatics::BreakHitResult(b1l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, b1l__CallFunc_BreakHitResult_Location__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw__pf);
	bpf__FixAreaRotation__pf(b1l__CallFunc_BreakRotator_Yaw__pf);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_16(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf{};
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	AController* bpfv__CallFunc_GetController_ReturnValue_3__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_4__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue_2__pf{};
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_6__pf(EForceInit::ForceInit);
	AController* bpfv__CallFunc_GetController_ReturnValue_9__pf{};
	bool bpfv__CallFunc_LineTraceMulti_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_8__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_9__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_10__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_5__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_6__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_7__pf{};
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_10__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue_4__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_11__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_15__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_16__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_19__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_20__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_21__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_7__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_4__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_3__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_4__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_17__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_18__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_19__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 125:
			{
				__CurrentState = 126;
				break;
			}
		case 126:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 127;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 127:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_3__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_3__pf)
				{
					__CurrentState = 128;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 128:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed));
				}
			}
		case 129:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::Play();
				}
			}
		case 130:
			{
				bpf__SpawnBullet__pf(E__EnumWeapon__pf::NewEnumerator1);
			}
		case 131:
			{
				if(::IsValid(bpv__MuzzleFlash__pf))
				{
					bpv__MuzzleFlash__pf->SetActive(true, true);
				}
			}
		case 132:
			{
				bpfv__CallFunc_GetController_ReturnValue_3__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf = Cast<AAIShootingController_C__pf681293266>(bpfv__CallFunc_GetController_ReturnValue_3__pf);
				b1l__K2Node_DynamicCast_bSuccess_18__pf = (b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_18__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 133:
			{
				b1l__Temp_int_Variable__pf = 0;
			}
		case 134:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(b1l__Temp_int_Variable__pf, 7);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 135:
			{
				__StateStack.Push(150);
			}
		case 136:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf->bpv__EnemyReference__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue_4__pf = b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf->bpv__EnemyReference__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue_1__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_4__pf);
				bpfv__CallFunc_K2_SetActorRotation_ReturnValue_3__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_FindLookAtRotation_ReturnValue_1__pf, true);
			}
		case 137:
			{
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(b1l__Temp_int_Variable__pf, 5000.000000);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntFloat(b1l__Temp_int_Variable__pf, -5000.000000);
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf, bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf = AActor::GetActorForwardVector();
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_1__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, ETraceTypeQuery::TraceTypeQuery4, false, b1l__Temp_object_Variable_3__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 138:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				b1l__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(b1l__CallFunc_BreakHitResult_HitActor_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_19__pf = (b1l__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_19__pf)
				{
					__CurrentState = 143;
					break;
				}
			}
		case 139:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				USkeletalMeshComponent*  __Local__199 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsThird_Person_Character__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b1l__K2Node_DynamicCast_AsThird_Person_Character__pf), ACharacter::__PPO__Mesh() )))) : (__Local__199)), b1l__CallFunc_BreakHitResult_HitComponent_2__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 140:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_20__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsThird_Person_Character__pf))
				{
					b1l__K2Node_DynamicCast_AsThird_Person_Character__pf->bpf__TakeDamage__pf(100, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_20__pf, this);
				}
			}
		case 141:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf->bpv__EnemyReference__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue_4__pf = b1l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf->bpv__EnemyReference__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue_1__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_3__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_4__pf);
				bpfv__CallFunc_K2_SetActorRotation_ReturnValue_2__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_FindLookAtRotation_ReturnValue_1__pf, true);
			}
		case 142:
			{
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(b1l__Temp_int_Variable__pf, 5000.000000);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntFloat(b1l__Temp_int_Variable__pf, -5000.000000);
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf, bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf = AActor::GetActorForwardVector();
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_1__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_1__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 143:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_20__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_20__pf)
				{
					__CurrentState = 146;
					break;
				}
			}
		case 144:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				UBoxComponent*  __Local__200 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__BoxCollision__pf) : (__Local__200)), b1l__CallFunc_BreakHitResult_HitComponent_2__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 145:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_15__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_15__pf, this);
				}
				__CurrentState = 141;
				break;
			}
		case 146:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_21__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_21__pf)
				{
					__CurrentState = 149;
					break;
				}
			}
		case 147:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				USkeletalMeshComponent*  __Local__201 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf->bpv__SkeletalMesh__pf) : (__Local__201)), b1l__CallFunc_BreakHitResult_HitComponent_2__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 148:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")));
				}
				__CurrentState = 141;
				break;
			}
		case 149:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_2__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_2__pf);
				__CurrentState = 141;
				break;
			}
		case 150:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Variable__pf, 1);
				b1l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 134;
				break;
			}
		case 320:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 321;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 321:
			{
				if (!bpv__IsPlayer__pf)
				{
					__CurrentState = 322;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 322:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_9__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b1l__K2Node_CustomEvent_Type_Of_Controller__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_9__pf)
				{
					__CurrentState = 357;
					break;
				}
			}
		case 323:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 326;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 324;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 324:
			{
				bpv__Attacking__pf = true;
			}
		case 325:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(125, -844941529, TEXT("ExecuteUbergraph_EnemyShootingCh_16"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 326:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_7__pf = UKismetMathLibrary::Add_IntInt(bpv__AttackAim__pf, 1);
				b1l__Temp_int_Variable_5__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_7__pf;
			}
		case 327:
			{
				bpv__AttackAim__pf = b1l__Temp_int_Variable_5__pf;
			}
		case 328:
			{
				bpv__Attacking__pf = true;
			}
		case 329:
			{
				if(::IsValid(bpv__MuzzleFlash__pf))
				{
					bpv__MuzzleFlash__pf->SetActive(true, true);
				}
			}
		case 330:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed));
				}
			}
		case 331:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::Play();
				}
			}
		case 332:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_10__pf = bpv__SkeletalMesh__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue_2__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_10__pf, b1l__K2Node_CustomEvent_EnemyLocation__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue_2__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll_2__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch_2__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw_2__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(b1l__CallFunc_BreakRotator_Yaw_2__pf, -1.500000);
				bpfv__CallFunc_MakeRotator_ReturnValue_3__pf = UKismetMathLibrary::MakeRotator(b1l__CallFunc_BreakRotator_Roll_2__pf, b1l__CallFunc_BreakRotator_Pitch_2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf);
				bpfv__CallFunc_K2_SetActorRotation_ReturnValue_4__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_MakeRotator_ReturnValue_3__pf, false);
			}
		case 333:
			{
				bpf__SpawnBullet__pf(E__EnumWeapon__pf::NewEnumerator0);
			}
		case 334:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_4__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__AttackAim__pf, 2);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_4__pf)
				{
					__CurrentState = 355;
					break;
				}
			}
		case 335:
			{
				bpf__FloatWithMaxAndMin__pf(2000.000000, 1000.000000, -2000.000000, -1000.000000, /*out*/ b1l__CallFunc_FloatWithMaxAndMin_Return__pf);
			}
		case 336:
			{
				bpv__XDispersion__pf = b1l__CallFunc_FloatWithMaxAndMin_Return__pf;
			}
		case 337:
			{
				bpf__FloatWithMaxAndMin__pf(2000.000000, 1000.000000, -2000.000000, -1000.000000, /*out*/ b1l__CallFunc_FloatWithMaxAndMin_Return_1__pf);
			}
		case 338:
			{
				bpv__YDispersion__pf = b1l__CallFunc_FloatWithMaxAndMin_Return_1__pf;
			}
		case 339:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakVector_X__pf, /*out*/ b1l__CallFunc_BreakVector_Y__pf, /*out*/ b1l__CallFunc_BreakVector_Z__pf);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_4__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_4__pf, 10000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf, /*out*/ b1l__CallFunc_BreakVector_X_3__pf, /*out*/ b1l__CallFunc_BreakVector_Y_3__pf, /*out*/ b1l__CallFunc_BreakVector_Z_3__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X_3__pf, b1l__CallFunc_BreakVector_Y_3__pf, b1l__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_MakeVector_ReturnValue_2__pf, /*out*/ b1l__CallFunc_BreakVector_X_4__pf, /*out*/ b1l__CallFunc_BreakVector_Y_4__pf, /*out*/ b1l__CallFunc_BreakVector_Z_4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Add_FloatFloat(bpv__XDispersion__pf, b1l__CallFunc_BreakVector_X_4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Add_FloatFloat(b1l__CallFunc_BreakVector_Y_4__pf, bpv__YDispersion__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_3__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf, b1l__CallFunc_BreakVector_Z_4__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_4__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpfv__CallFunc_MakeVector_ReturnValue_3__pf, ETraceTypeQuery::TraceTypeQuery4, false, b1l__Temp_object_Variable_10__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit_4__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 340:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				if (!b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf)
				{
					__CurrentState = 354;
					break;
				}
			}
		case 341:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				b1l__K2Node_DynamicCast_AsThird_Person_Character_2__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(b1l__CallFunc_BreakHitResult_HitActor_8__pf);
				b1l__K2Node_DynamicCast_bSuccess_49__pf = (b1l__K2Node_DynamicCast_AsThird_Person_Character_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_49__pf)
				{
					__CurrentState = 347;
					break;
				}
			}
		case 342:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				USkeletalMeshComponent*  __Local__203 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_19__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b1l__CallFunc_BreakHitResult_HitComponent_8__pf, ((::IsValid(b1l__K2Node_DynamicCast_AsThird_Person_Character_2__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b1l__K2Node_DynamicCast_AsThird_Person_Character_2__pf), ACharacter::__PPO__Mesh() )))) : (__Local__203)));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_19__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 343:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_19__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsThird_Person_Character_2__pf))
				{
					b1l__K2Node_DynamicCast_AsThird_Person_Character_2__pf->bpf__TakeDamage__pf(100, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_19__pf, this);
				}
			}
		case 344:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				bpf__BulletTrace__pf(b1l__CallFunc_BreakHitResult_Location_8__pf);
			}
		case 345:
			{
				if (!bpv__IsPlayer__pf)
				{
					__CurrentState = 346;
					break;
				}
			}
		case 346:
			{
				bpv__Attacking__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 347:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_6__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_8__pf);
				b1l__K2Node_DynamicCast_bSuccess_48__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_6__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_48__pf)
				{
					__CurrentState = 350;
					break;
				}
			}
		case 348:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				UBoxComponent*  __Local__204 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_18__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_6__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_6__pf->bpv__BoxCollision__pf) : (__Local__204)), b1l__CallFunc_BreakHitResult_HitComponent_8__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_18__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 349:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_11__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_6__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_6__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_11__pf, this);
				}
				__CurrentState = 344;
				break;
			}
		case 350:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_6__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_8__pf);
				b1l__K2Node_DynamicCast_bSuccess_47__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_6__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_47__pf)
				{
					__CurrentState = 353;
					break;
				}
			}
		case 351:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				USkeletalMeshComponent*  __Local__205 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_17__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_6__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_6__pf->bpv__SkeletalMesh__pf) : (__Local__205)), b1l__CallFunc_BreakHitResult_HitComponent_8__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_17__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 352:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_6__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_6__pf->bpf__TakeDamage__pf(100, b1l__CallFunc_BreakHitResult_HitBoneName_8__pf);
				}
				__CurrentState = 344;
				break;
			}
		case 353:
			{
				UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_8__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_8__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_8__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_8__pf);
				__CurrentState = 344;
				break;
			}
		case 354:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakVector_X__pf, /*out*/ b1l__CallFunc_BreakVector_Y__pf, /*out*/ b1l__CallFunc_BreakVector_Z__pf);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetActorForwardVector_ReturnValue_4__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_4__pf, 10000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_4__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf, /*out*/ b1l__CallFunc_BreakVector_X_3__pf, /*out*/ b1l__CallFunc_BreakVector_Y_3__pf, /*out*/ b1l__CallFunc_BreakVector_Z_3__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X_3__pf, b1l__CallFunc_BreakVector_Y_3__pf, b1l__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_MakeVector_ReturnValue_2__pf, /*out*/ b1l__CallFunc_BreakVector_X_4__pf, /*out*/ b1l__CallFunc_BreakVector_Y_4__pf, /*out*/ b1l__CallFunc_BreakVector_Z_4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Add_FloatFloat(bpv__XDispersion__pf, b1l__CallFunc_BreakVector_X_4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Add_FloatFloat(b1l__CallFunc_BreakVector_Y_4__pf, bpv__YDispersion__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_3__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf, b1l__CallFunc_BreakVector_Z_4__pf);
				bpf__BulletTrace__pf(bpfv__CallFunc_MakeVector_ReturnValue_3__pf);
				__CurrentState = 345;
				break;
			}
		case 355:
			{
				bpv__XDispersion__pf = 0.000000;
			}
		case 356:
			{
				bpv__YDispersion__pf = 0.000000;
				__CurrentState = 339;
				break;
			}
		case 357:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_10__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b1l__K2Node_CustomEvent_Type_Of_Controller__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator5));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_10__pf)
				{
					__CurrentState = 388;
					break;
				}
			}
		case 358:
			{
				bpfv__CallFunc_GetController_ReturnValue_9__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAISniper_Controller_3__pf = Cast<AAISniperController_C__pf1156381827>(bpfv__CallFunc_GetController_ReturnValue_9__pf);
				b1l__K2Node_DynamicCast_bSuccess_27__pf = (b1l__K2Node_DynamicCast_AsAISniper_Controller_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_27__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 359:
			{
				if(::IsValid(bpv__SniperPreBeam__pf))
				{
					bpv__SniperPreBeam__pf->SetActive(false, true);
				}
			}
		case 360:
			{
				if(::IsValid(bpv__SniperPreBeam__pf))
				{
					bpv__SniperPreBeam__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 361:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed));
				}
			}
		case 362:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::Play();
				}
			}
		case 363:
			{
				bpf__SpawnBullet__pf(E__EnumWeapon__pf::NewEnumerator3);
			}
		case 364:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_6__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				(b1l__CallFunc_LineTraceMulti_OutHits__pf).Reset();
				bpfv__CallFunc_LineTraceMulti_ReturnValue__pf = UKismetSystemLibrary::LineTraceMulti(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_6__pf, bpv__SniperEnemyLocation__pf, ETraceTypeQuery::TraceTypeQuery3, false, b1l__Temp_object_Variable_1__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceMulti_OutHits__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 365:
			{
				if (!bpfv__CallFunc_LineTraceMulti_ReturnValue__pf)
				{
					__CurrentState = 387;
					break;
				}
			}
		case 366:
			{
				b1l__Temp_int_Loop_Counter_Variable_2__pf = 0;
			}
		case 367:
			{
				b1l__Temp_int_Array_Index_Variable_3__pf = 0;
			}
		case 368:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_LineTraceMulti_OutHits__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 386;
					break;
				}
			}
		case 369:
			{
				b1l__Temp_int_Array_Index_Variable_3__pf = b1l__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 370:
			{
				__StateStack.Push(385);
			}
		case 371:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_31__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_31__pf)
				{
					__CurrentState = 375;
					break;
				}
			}
		case 372:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				UBoxComponent*  __Local__206 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_6__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__BoxCollision__pf) : (__Local__206)), b1l__CallFunc_BreakHitResult_HitComponent_4__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 373:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_16__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpf__TakeDamage__pf(1000, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_16__pf, this);
				}
			}
		case 374:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(b1l__CallFunc_BreakHitResult_Location_4__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_2__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 375:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				b1l__K2Node_DynamicCast_AsThird_Person_Character_1__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(b1l__CallFunc_BreakHitResult_HitActor_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_30__pf = (b1l__K2Node_DynamicCast_AsThird_Person_Character_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_30__pf)
				{
					__CurrentState = 379;
					break;
				}
			}
		case 376:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				USkeletalMeshComponent*  __Local__207 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_5__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b1l__CallFunc_BreakHitResult_HitComponent_4__pf, ((::IsValid(b1l__K2Node_DynamicCast_AsThird_Person_Character_1__pf)) ? ((*(AccessPrivateProperty<USkeletalMeshComponent* >((b1l__K2Node_DynamicCast_AsThird_Person_Character_1__pf), ACharacter::__PPO__Mesh() )))) : (__Local__207)));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 377:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_21__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsThird_Person_Character_1__pf))
				{
					b1l__K2Node_DynamicCast_AsThird_Person_Character_1__pf->bpf__TakeDamage__pf(1000, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_21__pf, this);
				}
			}
		case 378:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(b1l__CallFunc_BreakHitResult_Location_4__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_3__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 379:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_2__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__CallFunc_BreakHitResult_HitActor_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_32__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_32__pf)
				{
					__CurrentState = 383;
					break;
				}
			}
		case 380:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				USkeletalMeshComponent*  __Local__208 = ((USkeletalMeshComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_7__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_2__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_2__pf->bpv__SkeletalMesh__pf) : (__Local__208)), b1l__CallFunc_BreakHitResult_HitComponent_4__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 381:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_2__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_2__pf->bpf__TakeDamage__pf(1000, FName(TEXT("None")));
				}
			}
		case 382:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(b1l__CallFunc_BreakHitResult_Location_4__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_4__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 383:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				bpf__DestroyerMeshFunction__pf(b1l__CallFunc_BreakHitResult_HitActor_4__pf, b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf);
			}
		case 384:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_LineTraceMulti_OutHits__pf, b1l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b1l__CallFunc_Array_Get_Item_1__pf);
				UGameplayStatics::BreakHitResult(b1l__CallFunc_Array_Get_Item_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_4__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_4__pf);
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(b1l__CallFunc_BreakHitResult_Location_4__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_5__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 385:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable_2__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf;
				__CurrentState = 368;
				break;
			}
		case 386:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(-1, -382334108, TEXT("ExecuteUbergraph_EnemyShootingCh"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 387:
			{
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(bpv__SniperEnemyLocation__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf, false);
				}
				__CurrentState = 386;
				break;
			}
		case 388:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_8__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b1l__K2Node_CustomEvent_Type_Of_Controller__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator2));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_8__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 389:
			{
				bpf__SuicideEvent__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 708:
			{
				__CurrentState = 320;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 774);
	// optimized KCST_UnconditionalGoto
	StopJumping();
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_18(int32 bpp__EntryPoint__pf)
{
	AController* bpfv__CallFunc_GetController_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_23__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	FFMODEventInstance bpfv__CallFunc_PlayEventAtLocation_ReturnValue__pf{};
	FFMODEventInstance bpfv__CallFunc_PlayEventAtLocation_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_2__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_2__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 6;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 17;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 7;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_6__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_6__pf)
				{
					__CurrentState = 7;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_23__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_23__pf);
				bpfv__CallFunc_PlayEventAtLocation_ReturnValue__pf = UFMODBlueprintStatics::PlayEventAtLocation(this, CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, true);
			}
		case 7:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::Play();
				}
			}
		case 8:
			{
				bpf__SplatterBloodNPC__pf();
			}
		case 9:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				bpf__DyingAnimation__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_GetController_ReturnValue_1__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAIShooting_Controller_1__pf = Cast<AAIShootingController_C__pf681293266>(bpfv__CallFunc_GetController_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_7__pf = (b1l__K2Node_DynamicCast_AsAIShooting_Controller_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAIShooting_Controller_1__pf))
				{
					b1l__K2Node_DynamicCast_AsAIShooting_Controller_1__pf->bpf__DieFunction__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_GetController_ReturnValue_1__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAISuicide_Controller_2__pf = Cast<AAISuicideController_C__pf3889547882>(bpfv__CallFunc_GetController_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_6__pf = (b1l__K2Node_DynamicCast_AsAISuicide_Controller_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 14:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISuicide_Controller_2__pf))
				{
					b1l__K2Node_DynamicCast_AsAISuicide_Controller_2__pf->bpf__DieFunction__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_GetController_ReturnValue_1__pf = APawn::GetController();
				b1l__K2Node_DynamicCast_AsAISniper_Controller_1__pf = Cast<AAISniperController_C__pf1156381827>(bpfv__CallFunc_GetController_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_5__pf = (b1l__K2Node_DynamicCast_AsAISniper_Controller_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISniper_Controller_1__pf))
				{
					b1l__K2Node_DynamicCast_AsAISniper_Controller_1__pf->bpf__DieFunction__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_23__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_23__pf);
				bpfv__CallFunc_PlayEventAtLocation_ReturnValue_1__pf = UFMODBlueprintStatics::PlayEventAtLocation(this, CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[26], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, true);
				__CurrentState = 7;
				break;
			}
		case 109:
			{
				__CurrentState = 110;
				break;
			}
		case 110:
			{
				bpv__SuicidingWithKnife__pf = true;
			}
		case 111:
			{
				bpv__DelayAnimationSuicide__pf = 1.000000;
			}
		case 112:
			{
				UKismetSystemLibrary::Delay(this, bpv__DelayAnimationSuicide__pf, FLatentActionInfo(2, -1559473667, TEXT("ExecuteUbergraph_EnemyShootingCh_18"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 309:
			{
				bpv__IsDeath__pf = false;
			}
		case 310:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 0.000000;
				}
			}
		case 311:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->RotationRate = FRotator(0.000000,0.000000,0.000000);
				}
			}
		case 312:
			{
				bpv__IsSuiciding__pf = true;
			}
		case 313:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 317;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 315;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 314;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 315;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 314:
			{
				UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(109, 165113509, TEXT("ExecuteUbergraph_EnemyShootingCh_18"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 315:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(5.137000,0.432300,2.156000), FRotator(34.266998,125.279999,184.289993), false, /*out*/ b1l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, true);
				}
			}
		case 316:
			{
				bpv__DelayAnimationSuicide__pf = 1.500000;
				__CurrentState = 112;
				break;
			}
		case 317:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(6.944000,5.390000,-1.822600), FRotator(2.600000,120.620003,184.339996), false, /*out*/ b1l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1__pf, true);
				}
			}
		case 318:
			{
				bpv__DelayAnimationSuicide__pf = 1.500000;
				__CurrentState = 112;
				break;
			}
		case 319:
			{
				bpv__Attacking__pf = false;
				__CurrentState = 309;
				break;
			}
		case 598:
			{
				__CurrentState = 599;
				break;
			}
		case 599:
			{
				bpv__HP__pf = 0;
			}
		case 600:
			{
				__StateStack.Push(605);
			}
		case 601:
			{
				if (!b1l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 602;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 602:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 603:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 604:
			{
				b1l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 605:
			{
				if (!b1l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 606;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 606:
			{
				b1l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = 319;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_19(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf{};
	APawn* bpfv__CallFunc_SpawnAIFromClass_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_4__pf{};
	APawn* bpfv__CallFunc_SpawnAIFromClass_ReturnValue_1__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_5__pf{};
	APawn* bpfv__CallFunc_SpawnAIFromClass_ReturnValue_2__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_6__pf{};
	APawn* bpfv__CallFunc_SpawnAIFromClass_ReturnValue_3__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_7__pf{};
	APawn* bpfv__CallFunc_SpawnAIFromClass_ReturnValue_4__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue_8__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__InitGodMode__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 190:
			{
				__CurrentState = 191;
				break;
			}
		case 191:
			{
				__StateStack.Push(228);
				__StateStack.Push(1);
				__StateStack.Push(227);
				__StateStack.Push(226);
				__StateStack.Push(193);
				__StateStack.Push(202);
				__StateStack.Push(210);
				__StateStack.Push(211);
				__StateStack.Push(214);
				__StateStack.Push(215);
				__StateStack.Push(216);
			}
		case 192:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 237;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 242;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 247;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 252;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 257;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 193:
			{
				(b1l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALevelCompleterBP_C__pf922009354::StaticClass(), /*out*/ TArrayCaster<ALevelCompleterBP_C__pf922009354*>(b1l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Get<AActor*>());
			}
		case 194:
			{
				b1l__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 195:
			{
				b1l__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 196:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_4__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetAllActorsOfClass_OutActors_2__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_4__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 197:
			{
				b1l__Temp_int_Array_Index_Variable_1__pf = b1l__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 198:
			{
				__StateStack.Push(201);
			}
		case 199:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetAllActorsOfClass_OutActors_2__pf, b1l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b1l__CallFunc_Array_Get_Item_4__pf);
				b1l__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf = Cast<ALevelCompleterBP_C__pf922009354>(b1l__CallFunc_Array_Get_Item_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_42__pf = (b1l__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_42__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 200:
			{
				bpv__LevelCompleterRef__pf = b1l__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 201:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf;
				__CurrentState = 196;
				break;
			}
		case 202:
			{
				bpf__SpawnWithWeapons__pf(bpv__Weapon__pf, true);
			}
		case 203:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 207;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 204;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 263;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 264;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 204:
			{
				if (!bpv__ExtraAmmoShotgun__pf)
				{
					__CurrentState = 206;
					break;
				}
			}
		case 205:
			{
				bpv__Ammunition__pf = 12;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 206:
			{
				bpv__Ammunition__pf = 8;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 207:
			{
				if (!bpv__ExtraAmmoRifle__pf)
				{
					__CurrentState = 209;
					break;
				}
			}
		case 208:
			{
				bpv__Ammunition__pf = 40;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 209:
			{
				bpv__Ammunition__pf = 30;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 210:
			{
				bpf__CheckExtraAmmo__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 211:
			{
				if(::IsValid(bpv__LaserBeam__pf))
				{
					bpv__LaserBeam__pf->SetActive(false, false);
				}
			}
		case 212:
			{
				if(::IsValid(bpv__SniperPreBeam__pf))
				{
					bpv__SniperPreBeam__pf->SetActive(false, true);
				}
			}
		case 213:
			{
				if(::IsValid(bpv__MuzzleFlash__pf))
				{
					bpv__MuzzleFlash__pf->SetActive(false, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 214:
			{
				bpf__MaskChange__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 215:
			{
				bpf__LightFunction__pf(false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 216:
			{
				(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ACameraActor_C__pf1295471953::StaticClass(), /*out*/ TArrayCaster<ACameraActor_C__pf1295471953*>(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 217:
			{
				b1l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 218:
			{
				b1l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 219:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 220:
			{
				b1l__Temp_int_Array_Index_Variable__pf = b1l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 221:
			{
				__StateStack.Push(225);
			}
		case 222:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				b1l__K2Node_DynamicCast_AsCamera_Actor__pf = Cast<ACameraActor_C__pf1295471953>(b1l__CallFunc_Array_Get_Item__pf);
				b1l__K2Node_DynamicCast_bSuccess_9__pf = (b1l__K2Node_DynamicCast_AsCamera_Actor__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_9__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 223:
			{
				bpv__CameraActor__pf = b1l__K2Node_DynamicCast_AsCamera_Actor__pf;
			}
		case 224:
			{
				E__EnumCameraType__pf  __Local__212 = E__EnumCameraType__pf::NewEnumerator0;
				bpv__CameraType__pf = ((::IsValid(b1l__K2Node_DynamicCast_AsCamera_Actor__pf)) ? (b1l__K2Node_DynamicCast_AsCamera_Actor__pf->bpv__CameraType__pf) : (__Local__212));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 225:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 219;
				break;
			}
		case 226:
			{
				bpf__LoadPowerUp__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 227:
			{
				bpf__MuzzleFlashRotation__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 228:
			{
				(b1l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AAlarmDetectorPawn_C__pf2693064426::StaticClass(), /*out*/ TArrayCaster<AAlarmDetectorPawn_C__pf2693064426*>(b1l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
			}
		case 229:
			{
				b1l__Temp_int_Loop_Counter_Variable_3__pf = 0;
			}
		case 230:
			{
				b1l__Temp_int_Array_Index_Variable_2__pf = 0;
			}
		case 231:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_3__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetAllActorsOfClass_OutActors_1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable_3__pf, bpfv__CallFunc_Array_Length_ReturnValue_3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 232:
			{
				b1l__Temp_int_Array_Index_Variable_2__pf = b1l__Temp_int_Loop_Counter_Variable_3__pf;
			}
		case 233:
			{
				__StateStack.Push(236);
			}
		case 234:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetAllActorsOfClass_OutActors_1__pf, b1l__Temp_int_Array_Index_Variable_2__pf, /*out*/ b1l__CallFunc_Array_Get_Item_3__pf);
				b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn__pf = Cast<AAlarmDetectorPawn_C__pf2693064426>(b1l__CallFunc_Array_Get_Item_3__pf);
				b1l__K2Node_DynamicCast_bSuccess_38__pf = (b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_38__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 235:
			{
				bpv__AlarmReference__pf = b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 236:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_6__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable_3__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_6__pf;
				__CurrentState = 231;
				break;
			}
		case 237:
			{
				bpfv__CallFunc_SpawnAIFromClass_ReturnValue_2__pf = UAIBlueprintHelperLibrary::SpawnAIFromClass(this, AAIShootingPawn_C__pf681293266::StaticClass(), CastChecked<UBehaviorTree>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[27], ECastCheckedType::NullAllowed), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), false, ((AActor*)nullptr));
			}
		case 238:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue_6__pf = bpfv__CallFunc_SpawnAIFromClass_ReturnValue_2__pf->APawn::GetController();
				}
				b1l__K2Node_DynamicCast_AsAIShooting_Controller_3__pf = Cast<AAIShootingController_C__pf681293266>(bpfv__CallFunc_GetController_ReturnValue_6__pf);
				b1l__K2Node_DynamicCast_bSuccess_24__pf = (b1l__K2Node_DynamicCast_AsAIShooting_Controller_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_24__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 239:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAIShooting_Controller_3__pf))
				{
					b1l__K2Node_DynamicCast_AsAIShooting_Controller_3__pf->AController::Possess(this);
				}
			}
		case 240:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue_2__pf))
				{
					bpfv__CallFunc_SpawnAIFromClass_ReturnValue_2__pf->K2_DestroyActor();
				}
			}
		case 241:
			{
				bpf__CreateMeshIA__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 242:
			{
				bpfv__CallFunc_SpawnAIFromClass_ReturnValue_1__pf = UAIBlueprintHelperLibrary::SpawnAIFromClass(this, AAISuicidePawn_C__pf3889547882::StaticClass(), CastChecked<UBehaviorTree>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[28], ECastCheckedType::NullAllowed), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), false, ((AActor*)nullptr));
			}
		case 243:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue_5__pf = bpfv__CallFunc_SpawnAIFromClass_ReturnValue_1__pf->APawn::GetController();
				}
				b1l__K2Node_DynamicCast_AsAISuicide_Controller_3__pf = Cast<AAISuicideController_C__pf3889547882>(bpfv__CallFunc_GetController_ReturnValue_5__pf);
				b1l__K2Node_DynamicCast_bSuccess_23__pf = (b1l__K2Node_DynamicCast_AsAISuicide_Controller_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_23__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 244:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISuicide_Controller_3__pf))
				{
					b1l__K2Node_DynamicCast_AsAISuicide_Controller_3__pf->AController::Possess(this);
				}
			}
		case 245:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SpawnAIFromClass_ReturnValue_1__pf->K2_DestroyActor();
				}
			}
		case 246:
			{
				bpf__CreateMeshIA__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 247:
			{
				bpfv__CallFunc_SpawnAIFromClass_ReturnValue_4__pf = UAIBlueprintHelperLibrary::SpawnAIFromClass(this, AAISniperPawn_C__pf1156381827::StaticClass(), CastChecked<UBehaviorTree>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[29], ECastCheckedType::NullAllowed), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), false, ((AActor*)nullptr));
			}
		case 248:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue_4__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue_8__pf = bpfv__CallFunc_SpawnAIFromClass_ReturnValue_4__pf->APawn::GetController();
				}
				b1l__K2Node_DynamicCast_AsAISniper_Controller_2__pf = Cast<AAISniperController_C__pf1156381827>(bpfv__CallFunc_GetController_ReturnValue_8__pf);
				b1l__K2Node_DynamicCast_bSuccess_26__pf = (b1l__K2Node_DynamicCast_AsAISniper_Controller_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_26__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 249:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISniper_Controller_2__pf))
				{
					b1l__K2Node_DynamicCast_AsAISniper_Controller_2__pf->AController::Possess(this);
				}
			}
		case 250:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue_4__pf))
				{
					bpfv__CallFunc_SpawnAIFromClass_ReturnValue_4__pf->K2_DestroyActor();
				}
			}
		case 251:
			{
				bpf__CreateMeshIA__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 252:
			{
				bpfv__CallFunc_SpawnAIFromClass_ReturnValue__pf = UAIBlueprintHelperLibrary::SpawnAIFromClass(this, AAISlavePawn_C__pf1263353332::StaticClass(), CastChecked<UBehaviorTree>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), false, ((AActor*)nullptr));
			}
		case 253:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue_4__pf = bpfv__CallFunc_SpawnAIFromClass_ReturnValue__pf->APawn::GetController();
				}
				b1l__K2Node_DynamicCast_AsAISlave_Controller_1__pf = Cast<AAISlaveController_C__pf1263353332>(bpfv__CallFunc_GetController_ReturnValue_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_22__pf = (b1l__K2Node_DynamicCast_AsAISlave_Controller_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_22__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 254:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISlave_Controller_1__pf))
				{
					b1l__K2Node_DynamicCast_AsAISlave_Controller_1__pf->AController::Possess(this);
				}
			}
		case 255:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnAIFromClass_ReturnValue__pf->K2_DestroyActor();
				}
			}
		case 256:
			{
				bpf__CreatingSlave__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 257:
			{
				bpfv__CallFunc_SpawnAIFromClass_ReturnValue_3__pf = UAIBlueprintHelperLibrary::SpawnAIFromClass(this, AAISlavePawn_C__pf1263353332::StaticClass(), CastChecked<UBehaviorTree>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), false, ((AActor*)nullptr));
			}
		case 258:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue_3__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue_7__pf = bpfv__CallFunc_SpawnAIFromClass_ReturnValue_3__pf->APawn::GetController();
				}
				b1l__K2Node_DynamicCast_AsAISlave_Controller_2__pf = Cast<AAISlaveController_C__pf1263353332>(bpfv__CallFunc_GetController_ReturnValue_7__pf);
				b1l__K2Node_DynamicCast_bSuccess_25__pf = (b1l__K2Node_DynamicCast_AsAISlave_Controller_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_25__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 259:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISlave_Controller_2__pf))
				{
					b1l__K2Node_DynamicCast_AsAISlave_Controller_2__pf->bpv__IsAggressivex__pfT = true;
				}
			}
		case 260:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsAISlave_Controller_2__pf))
				{
					b1l__K2Node_DynamicCast_AsAISlave_Controller_2__pf->AController::Possess(this);
				}
			}
		case 261:
			{
				if(::IsValid(bpfv__CallFunc_SpawnAIFromClass_ReturnValue_3__pf))
				{
					bpfv__CallFunc_SpawnAIFromClass_ReturnValue_3__pf->K2_DestroyActor();
				}
			}
		case 262:
			{
				bpf__CreatingSlave__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 263:
			{
				bpv__Ammunition__pf = 1;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 264:
			{
				bpv__Ammunition__pf = 1;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_20(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 772);
	// optimized KCST_UnconditionalGoto
	bpv__CanActivatePowerUp__pf = true;
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_21(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 121:
			{
				__CurrentState = 122;
				break;
			}
		case 122:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Greater_IntInt(bpv__AttackAim__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 123:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf = UKismetMathLibrary::Subtract_IntInt(bpv__AttackAim__pf, 1);
				b1l__Temp_int_Variable_4__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf;
			}
		case 124:
			{
				bpv__AttackAim__pf = b1l__Temp_int_Variable_4__pf;
				__CurrentState = -1;
				break;
			}
		case 390:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 391;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 391:
			{
				if (!bpv__IsSuiciding__pf)
				{
					__CurrentState = 392;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 392:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 600.000000;
				}
			}
		case 393:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(121, -777414638, TEXT("ExecuteUbergraph_EnemyShootingCh_21"), this));
				__CurrentState = -1;
				break;
			}
		case 678:
			{
				__CurrentState = 390;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_22(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 394:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 395;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 395:
			{
				if (!bpv__IsSuiciding__pf)
				{
					__CurrentState = 396;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 396:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 200.000000;
				}
			}
		case 397:
			{
				bpv__AttackAim__pf = 0;
				__CurrentState = -1;
				break;
			}
		case 679:
			{
				__CurrentState = 394;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_23(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 770);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable__pf = b1l__K2Node_InputActionEvent_Key_4__pf;
	// optimized KCST_UnconditionalGoto
	bpv__Attacking__pf = false;
	// optimized KCST_UnconditionalGoto
	bpv__AttackingWithGun__pf = false;
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_24(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_NegateVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 153:
			{
				__CurrentState = 154;
				break;
			}
		case 154:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 155;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 155:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__CameraType__pf), static_cast<uint8>(E__EnumCameraType__pf::NewEnumerator0));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 160;
					break;
				}
			}
		case 156:
			{
				if (!bpv__IsSuiciding__pf)
				{
					__CurrentState = 157;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 157:
			{
				bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll_1__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue_2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b1l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_MakeRotator_ReturnValue_2__pf);
				bpfv__CallFunc_NegateVector_ReturnValue__pf = UKismetMathLibrary::NegateVector(bpfv__CallFunc_GetRightVector_ReturnValue__pf);
				AddMovementInput(bpfv__CallFunc_NegateVector_ReturnValue__pf, b1l__K2Node_InputAxisEvent_AxisValue_3__pf, false);
			}
		case 158:
			{
				b1l__K2Node_DynamicCast_AsCamera_Actor_2__pf = Cast<ACameraActor_C__pf1295471953>(bpv__CameraActor__pf);
				b1l__K2Node_DynamicCast_bSuccess_11__pf = (b1l__K2Node_DynamicCast_AsCamera_Actor_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_11__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 159:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsCamera_Actor_2__pf))
				{
					b1l__K2Node_DynamicCast_AsCamera_Actor_2__pf->bpf__MoveCam__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 160:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__CameraType__pf), static_cast<uint8>(E__EnumCameraType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 161:
			{
				if (!bpv__IsSuiciding__pf)
				{
					__CurrentState = 162;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 162:
			{
				bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll_1__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue_2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b1l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_MakeRotator_ReturnValue_2__pf);
				bpfv__CallFunc_NegateVector_ReturnValue__pf = UKismetMathLibrary::NegateVector(bpfv__CallFunc_GetRightVector_ReturnValue__pf);
				AddMovementInput(bpfv__CallFunc_NegateVector_ReturnValue__pf, b1l__K2Node_InputAxisEvent_AxisValue_3__pf, false);
			}
		case 163:
			{
				b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf = Cast<ACameraActor_C__pf1295471953>(bpv__CameraActor__pf);
				b1l__K2Node_DynamicCast_bSuccess_10__pf = (b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_10__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 164:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf))
				{
					b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf->bpf__MoveCam__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_25(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf{};
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_NegateVector_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 165:
			{
				__CurrentState = 166;
				break;
			}
		case 166:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 167;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 167:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__CameraType__pf), static_cast<uint8>(E__EnumCameraType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 168:
			{
				if (!bpv__IsSuiciding__pf)
				{
					__CurrentState = 169;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 169:
			{
				bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll_1__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue_2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b1l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_MakeRotator_ReturnValue_2__pf);
				bpfv__CallFunc_NegateVector_ReturnValue_1__pf = UKismetMathLibrary::NegateVector(bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf);
				AddMovementInput(bpfv__CallFunc_NegateVector_ReturnValue_1__pf, b1l__K2Node_InputAxisEvent_AxisValue_2__pf, false);
			}
		case 170:
			{
				b1l__K2Node_DynamicCast_AsCamera_Actor_3__pf = Cast<ACameraActor_C__pf1295471953>(bpv__CameraActor__pf);
				b1l__K2Node_DynamicCast_bSuccess_12__pf = (b1l__K2Node_DynamicCast_AsCamera_Actor_3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_12__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 171:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsCamera_Actor_3__pf))
				{
					b1l__K2Node_DynamicCast_AsCamera_Actor_3__pf->bpf__MoveCam__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_26(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 18:
			{
				__CurrentState = 19;
				break;
			}
		case 19:
			{
				b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_2__pf = Cast<AAlarmDetectorPawn_C__pf2693064426>(bpv__AlarmReference__pf);
				b1l__K2Node_DynamicCast_bSuccess_40__pf = (b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_40__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 20:
			{
				bool  __Local__214 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_2__pf)) ? (b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_2__pf->bpv__CooldownIsActive__pf) : (__Local__214)))
				{
					__CurrentState = 22;
					break;
				}
			}
		case 21:
			{
				bpv__Exposed__pf = false;
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpv__Squad__pf = bpv__PreviousSquad__pf;
				__CurrentState = 21;
				break;
			}
		case 589:
			{
				__CurrentState = 590;
				break;
			}
		case 590:
			{
				if (!bpv__Exposed__pf)
				{
					__CurrentState = 591;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 591:
			{
				b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_1__pf = Cast<AAlarmDetectorPawn_C__pf2693064426>(bpv__AlarmReference__pf);
				b1l__K2Node_DynamicCast_bSuccess_39__pf = (b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_39__pf)
				{
					__CurrentState = 593;
					break;
				}
			}
		case 592:
			{
				bool  __Local__215 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_1__pf)) ? (b1l__K2Node_DynamicCast_AsAlarm_Detector_Pawn_1__pf->bpv__CooldownIsActive__pf) : (__Local__215)))
				{
					__CurrentState = 593;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 593:
			{
				bpv__Exposed__pf = true;
			}
		case 594:
			{
				bpv__PreviousSquad__pf = bpv__Squad__pf;
			}
		case 595:
			{
				bpv__Squad__pf = 0;
			}
		case 596:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(18, -108814238, TEXT("ExecuteUbergraph_EnemyShootingCh_26"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_27(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_4__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_17__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 687:
			{
				__CurrentState = 688;
				break;
			}
		case 688:
			{
				b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_1__pf = Cast<AEnemyDogCh_C__pf3349424045>(b1l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b1l__K2Node_DynamicCast_bSuccess_29__pf = (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_29__pf)
				{
					__CurrentState = 692;
					break;
				}
			}
		case 689:
			{
				UBoxComponent*  __Local__217 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_4__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b1l__K2Node_ComponentBoundEvent_OtherComp__pf, ((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_1__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_1__pf->bpv__Collision__pf) : (__Local__217)));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 690:
			{
				if (!bpv__AttackingWithKnife__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 691:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_1__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Dog_Ch_1__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")));
				}
				__CurrentState = -1;
				break;
			}
		case 692:
			{
				b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf = Cast<AEnemyShootingCh_C__pf3349424045>(b1l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b1l__K2Node_DynamicCast_bSuccess_28__pf = (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_28__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 693:
			{
				UBoxComponent*  __Local__218 = ((UBoxComponent*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b1l__K2Node_ComponentBoundEvent_OtherComp__pf, ((::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf)) ? (b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__BoxCollision__pf) : (__Local__218)));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_3__pf)
				{
					__CurrentState = 694;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 694:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf))
				{
					bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf = b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->IsPlayerControlled();
				}
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf)
				{
					__CurrentState = 695;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 695:
			{
				if (!bpv__AttackingWithKnife__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 696:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue_17__pf = AActor::K2_GetActorLocation();
				if(::IsValid(b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf))
				{
					b1l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpf__TakeDamage__pf(100, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue_17__pf, this);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_28(int32 bpp__EntryPoint__pf)
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_RandomInteger_ReturnValue_2__pf{};
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_4__pf{};
	FVector bpfv__CallFunc_Conv_FloatToVector_ReturnValue_3__pf(EForceInit::ForceInit);
	UDecalComponent* bpfv__CallFunc_SpawnDecalAtLocation_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 746);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[31], ECastCheckedType::NullAllowed), FName(TEXT("None")), EMIDCreationFlags::None);
	bpfv__CallFunc_RandomInteger_ReturnValue_2__pf = UKismetMathLibrary::RandomInteger(11);
	bpfv__CallFunc_Conv_IntToFloat_ReturnValue_2__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_RandomInteger_ReturnValue_2__pf);
	if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Frame")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue_2__pf);
	}
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(b1l__K2Node_CustomEvent_Normal__pf, -1.000000);
	bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf);
	bpfv__CallFunc_RandomFloatInRange_ReturnValue_4__pf = UKismetMathLibrary::RandomFloatInRange(30.000000, 30.000000);
	bpfv__CallFunc_Conv_FloatToVector_ReturnValue_3__pf = UKismetMathLibrary::Conv_FloatToVector(bpfv__CallFunc_RandomFloatInRange_ReturnValue_4__pf);
	bpfv__CallFunc_SpawnDecalAtLocation_ReturnValue_2__pf = UGameplayStatics::SpawnDecalAtLocation(this, bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf, bpfv__CallFunc_Conv_FloatToVector_ReturnValue_3__pf, b1l__K2Node_CustomEvent_Location__pf, bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_2__pf, 0.000000);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_29(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_RandomInteger_ReturnValue_1__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_3__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Conv_FloatToVector_ReturnValue_2__pf(EForceInit::ForceInit);
	UDecalComponent* bpfv__CallFunc_SpawnDecalAtLocation_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 727);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[31], ECastCheckedType::NullAllowed), FName(TEXT("None")), EMIDCreationFlags::None);
	bpfv__CallFunc_RandomInteger_ReturnValue_1__pf = UKismetMathLibrary::RandomInteger(11);
	bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_RandomInteger_ReturnValue_1__pf);
	if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Frame")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf);
	}
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(b1l__K2Node_CustomEvent_Normal_1__pf, -1.000000);
	bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
	bpfv__CallFunc_RandomFloatInRange_ReturnValue_3__pf = UKismetMathLibrary::RandomFloatInRange(30.000000, 30.000000);
	bpfv__CallFunc_Conv_FloatToVector_ReturnValue_2__pf = UKismetMathLibrary::Conv_FloatToVector(bpfv__CallFunc_RandomFloatInRange_ReturnValue_3__pf);
	bpfv__CallFunc_SpawnDecalAtLocation_ReturnValue_1__pf = UGameplayStatics::SpawnDecalAtLocation(this, bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf, bpfv__CallFunc_Conv_FloatToVector_ReturnValue_2__pf, b1l__K2Node_CustomEvent_Location_1__pf, bpfv__CallFunc_Conv_VectorToRotator_ReturnValue_1__pf, 0.000000);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_30(int32 bpp__EntryPoint__pf)
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_RandomInteger_ReturnValue__pf{};
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Conv_FloatToVector_ReturnValue_1__pf(EForceInit::ForceInit);
	UDecalComponent* bpfv__CallFunc_SpawnDecalAtLocation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 722);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[31], ECastCheckedType::NullAllowed), FName(TEXT("None")), EMIDCreationFlags::None);
	bpfv__CallFunc_RandomInteger_ReturnValue__pf = UKismetMathLibrary::RandomInteger(11);
	bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_RandomInteger_ReturnValue__pf);
	if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Frame")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
	}
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(b1l__K2Node_CustomEvent_Normal_2__pf, -1.000000);
	bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpfv__CallFunc_RandomFloatInRange_ReturnValue_2__pf = UKismetMathLibrary::RandomFloatInRange(30.000000, 30.000000);
	bpfv__CallFunc_Conv_FloatToVector_ReturnValue_1__pf = UKismetMathLibrary::Conv_FloatToVector(bpfv__CallFunc_RandomFloatInRange_ReturnValue_2__pf);
	bpfv__CallFunc_SpawnDecalAtLocation_ReturnValue__pf = UGameplayStatics::SpawnDecalAtLocation(this, bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf, bpfv__CallFunc_Conv_FloatToVector_ReturnValue_1__pf, b1l__K2Node_CustomEvent_Location_2__pf, bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, 0.000000);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_31(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 682:
			{
				__CurrentState = 683;
				break;
			}
		case 683:
			{
				if (!bpv__IsSuiciding__pf)
				{
					__CurrentState = 685;
					break;
				}
			}
		case 684:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess_8__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_8__pf)
				{
					__CurrentState = 685;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_8__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_8__pf)
				{
					__CurrentState = 685;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_8__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_8__pf)
				{
					__CurrentState = 685;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess_8__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess_8__pf)
				{
					__CurrentState = 685;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 685:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USkeletalMeshComponent::PlayAnimation(CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[32], ECastCheckedType::NullAllowed), false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_32(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 700);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_33(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 697);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_34(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 686);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_35(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_1__pf{};
	float bpfv__CallFunc_Vector_Distance_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 673);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_GetActorForwardVector_ReturnValue_2__pf = AActor::GetActorForwardVector();
	bpfv__CallFunc_Multiply_VectorInt_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue_2__pf, 100000);
	bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue_2__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf);
	bpfv__CallFunc_LineTraceSingle_ReturnValue_1__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf, ETraceTypeQuery::TraceTypeQuery1, false, b1l__Temp_object_Variable_2__pf, EDrawDebugTrace::None, /*out*/ b1l__CallFunc_LineTraceSingle_OutHit_1__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
	if (!bpfv__CallFunc_LineTraceSingle_ReturnValue_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf = AActor::K2_GetActorLocation();
	UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_3__pf);
	bpfv__CallFunc_Vector_Distance_ReturnValue__pf = UKismetMathLibrary::Vector_Distance(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf, b1l__CallFunc_BreakHitResult_Location_3__pf);
	bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Vector_Distance_ReturnValue__pf, 2500.000000);
	if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf = AActor::K2_GetActorLocation();
	UGameplayStatics::BreakHitResult(b1l__CallFunc_LineTraceSingle_OutHit_1__pf, /*out*/ b1l__CallFunc_BreakHitResult_bBlockingHit_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_bInitialOverlap_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_Time_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_Distance_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_Location_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactPoint_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_Normal_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_ImpactNormal_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_PhysMat_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitActor_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitComponent_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitBoneName_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_HitItem_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_FaceIndex_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceStart_3__pf, /*out*/ b1l__CallFunc_BreakHitResult_TraceEnd_3__pf);
	bpfv__CallFunc_Vector_Distance_ReturnValue__pf = UKismetMathLibrary::Vector_Distance(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_5__pf, b1l__CallFunc_BreakHitResult_Location_3__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Vector_Distance_ReturnValue__pf, 400.000000);
	if(::IsValid(bpv__SpotLight__pf))
	{
		bpv__SpotLight__pf->ULocalLightComponent::SetAttenuationRadius(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf);
	}
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_36(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 672);
	// optimized KCST_UnconditionalGoto
	b1l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("Light_Range")));
	bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b1l__K2Node_CreateDelegate_OutputDelegate__pf, 0.100000, true, 0.000000, 0.000000);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_37(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 607);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_38(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 597);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_39(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 416);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExecuteUbergraph_EnemyShootingCh__pf_40(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 415);
	return; //KCST_EndOfThread
}
void AEnemyShootingCh_C__pf3349424045::bpf__FixAreaRotation__pf(float bpp__Z__pf)
{
	b1l__K2Node_CustomEvent_Z__pf = bpp__Z__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_10(788);
}
void AEnemyShootingCh_C__pf3349424045::bpf__OpenxMenu__pfT()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_5(787);
}
void AEnemyShootingCh_C__pf3349424045::bpf__RotatexWithxGamepad__pfTT()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_7(776);
}
void AEnemyShootingCh_C__pf3349424045::bpf__RotatexWithxMouse__pfTT()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_15(775);
}
void AEnemyShootingCh_C__pf3349424045::bpf__PowerUpCooldown__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_20(772);
}
void AEnemyShootingCh_C__pf3349424045::bpf__CustomEvent_1__pf(FName bpp__EventName__pf, float bpp__EmitterTime__pf, int32 bpp__ParticleTime__pf, FVector bpp__Location__pf, FVector bpp__Velocity__pf, FVector bpp__Direction__pf, FVector bpp__Normal__pf, FName bpp__BoneName__pf, UPhysicalMaterial* bpp__PhysMat__pf)
{
	b1l__K2Node_CustomEvent_EventName__pf = bpp__EventName__pf;
	b1l__K2Node_CustomEvent_EmitterTime__pf = bpp__EmitterTime__pf;
	b1l__K2Node_CustomEvent_ParticleTime__pf = bpp__ParticleTime__pf;
	b1l__K2Node_CustomEvent_Location__pf = bpp__Location__pf;
	b1l__K2Node_CustomEvent_Velocity__pf = bpp__Velocity__pf;
	b1l__K2Node_CustomEvent_Direction__pf = bpp__Direction__pf;
	b1l__K2Node_CustomEvent_Normal__pf = bpp__Normal__pf;
	b1l__K2Node_CustomEvent_BoneName__pf = bpp__BoneName__pf;
	b1l__K2Node_CustomEvent_PhysMat__pf = bpp__PhysMat__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_28(746);
}
void AEnemyShootingCh_C__pf3349424045::bpf__CustomEvent__pf(FName bpp__EventName__pf, float bpp__EmitterTime__pf, int32 bpp__ParticleTime__pf, FVector bpp__Location__pf, FVector bpp__Velocity__pf, FVector bpp__Direction__pf, FVector bpp__Normal__pf, FName bpp__BoneName__pf, UPhysicalMaterial* bpp__PhysMat__pf)
{
	b1l__K2Node_CustomEvent_EventName_1__pf = bpp__EventName__pf;
	b1l__K2Node_CustomEvent_EmitterTime_1__pf = bpp__EmitterTime__pf;
	b1l__K2Node_CustomEvent_ParticleTime_1__pf = bpp__ParticleTime__pf;
	b1l__K2Node_CustomEvent_Location_1__pf = bpp__Location__pf;
	b1l__K2Node_CustomEvent_Velocity_1__pf = bpp__Velocity__pf;
	b1l__K2Node_CustomEvent_Direction_1__pf = bpp__Direction__pf;
	b1l__K2Node_CustomEvent_Normal_1__pf = bpp__Normal__pf;
	b1l__K2Node_CustomEvent_BoneName_1__pf = bpp__BoneName__pf;
	b1l__K2Node_CustomEvent_PhysMat_1__pf = bpp__PhysMat__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_29(727);
}
void AEnemyShootingCh_C__pf3349424045::bpf__SplatterBloodPlayer__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_11(726);
}
void AEnemyShootingCh_C__pf3349424045::bpf__OnCollideEvent__pf(FName bpp__EventName__pf, float bpp__EmitterTime__pf, int32 bpp__ParticleTime__pf, FVector bpp__Location__pf, FVector bpp__Velocity__pf, FVector bpp__Direction__pf, FVector bpp__Normal__pf, FName bpp__BoneName__pf, UPhysicalMaterial* bpp__PhysMat__pf)
{
	b1l__K2Node_CustomEvent_EventName_2__pf = bpp__EventName__pf;
	b1l__K2Node_CustomEvent_EmitterTime_2__pf = bpp__EmitterTime__pf;
	b1l__K2Node_CustomEvent_ParticleTime_2__pf = bpp__ParticleTime__pf;
	b1l__K2Node_CustomEvent_Location_2__pf = bpp__Location__pf;
	b1l__K2Node_CustomEvent_Velocity_2__pf = bpp__Velocity__pf;
	b1l__K2Node_CustomEvent_Direction_2__pf = bpp__Direction__pf;
	b1l__K2Node_CustomEvent_Normal_2__pf = bpp__Normal__pf;
	b1l__K2Node_CustomEvent_BoneName_2__pf = bpp__BoneName__pf;
	b1l__K2Node_CustomEvent_PhysMat_2__pf = bpp__PhysMat__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_30(722);
}
void AEnemyShootingCh_C__pf3349424045::bpf__SplatterBloodNPC__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_9(721);
}
void AEnemyShootingCh_C__pf3349424045::bpf__BndEvt__KnifeBoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__219;
	T__Local__219& bpp__SweepResult__pf = *const_cast<T__Local__219 *>(&bpp__SweepResult__pf__const);
	b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b1l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b1l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b1l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b1l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_27(687);
}
void AEnemyShootingCh_C__pf3349424045::bpf__DyingAnimation__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_31(682);
}
void AEnemyShootingCh_C__pf3349424045::bpf__Light_Range__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_35(673);
}
void AEnemyShootingCh_C__pf3349424045::bpf__LightEvent__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_36(672);
}
void AEnemyShootingCh_C__pf3349424045::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b1l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_8(609);
}
void AEnemyShootingCh_C__pf3349424045::bpf__TakeDamage__pf(int32 bpp__DamageTaken__pf, FName bpp__HitBoneName__pf, FVector bpp__EnemyHitLocation__pf, AActor* bpp__ActorWhoKilledPlayer__pf)
{
	b1l__K2Node_CustomEvent_DamageTaken__pf = bpp__DamageTaken__pf;
	b1l__K2Node_CustomEvent_HitBoneName__pf = bpp__HitBoneName__pf;
	b1l__K2Node_CustomEvent_EnemyHitLocation__pf = bpp__EnemyHitLocation__pf;
	b1l__K2Node_CustomEvent_ActorWhoKilledPlayer__pf = bpp__ActorWhoKilledPlayer__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_0(608);
}
void AEnemyShootingCh_C__pf3349424045::bpf__BndEvt__AudioCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b1l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf = bpp__OverlappedComponent__pf;
	b1l__K2Node_ComponentBoundEvent_OtherActor_1__pf = bpp__OtherActor__pf;
	b1l__K2Node_ComponentBoundEvent_OtherComp_1__pf = bpp__OtherComp__pf;
	b1l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_37(607);
}
void AEnemyShootingCh_C__pf3349424045::bpf__SuicideEvent__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_18(598);
}
void AEnemyShootingCh_C__pf3349424045::bpf__BndEvt__AudioCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__220;
	T__Local__220& bpp__SweepResult__pf = *const_cast<T__Local__220 *>(&bpp__SweepResult__pf__const);
	b1l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf = bpp__OverlappedComponent__pf;
	b1l__K2Node_ComponentBoundEvent_OtherActor_2__pf = bpp__OtherActor__pf;
	b1l__K2Node_ComponentBoundEvent_OtherComp_2__pf = bpp__OtherComp__pf;
	b1l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf = bpp__OtherBodyIndex__pf;
	b1l__K2Node_ComponentBoundEvent_bFromSweep_1__pf = bpp__bFromSweep__pf;
	b1l__K2Node_ComponentBoundEvent_SweepResult_1__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_38(597);
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExpositionEvent__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_26(589);
}
void AEnemyShootingCh_C__pf3349424045::bpf__Shooting__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_2(559);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_39(416);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_40(415);
}
void AEnemyShootingCh_C__pf3349424045::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_19(190);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_25(165);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_24(153);
}
void AEnemyShootingCh_C__pf3349424045::bpf__Run__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_21(678);
}
void AEnemyShootingCh_C__pf3349424045::bpf__Walk__pf()
{
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_22(679);
}
void AEnemyShootingCh_C__pf3349424045::bpf__BndEvt__BoxWeaponCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__221;
	T__Local__221& bpp__SweepResult__pf = *const_cast<T__Local__221 *>(&bpp__SweepResult__pf__const);
	b1l__K2Node_ComponentBoundEvent_OverlappedComponent_3__pf = bpp__OverlappedComponent__pf;
	b1l__K2Node_ComponentBoundEvent_OtherActor_3__pf = bpp__OtherActor__pf;
	b1l__K2Node_ComponentBoundEvent_OtherComp_3__pf = bpp__OtherComp__pf;
	b1l__K2Node_ComponentBoundEvent_OtherBodyIndex_3__pf = bpp__OtherBodyIndex__pf;
	b1l__K2Node_ComponentBoundEvent_bFromSweep_2__pf = bpp__bFromSweep__pf;
	b1l__K2Node_ComponentBoundEvent_SweepResult_2__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_34(686);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_33(697);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_5__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_32(700);
}
void AEnemyShootingCh_C__pf3349424045::bpf__Attack__pf(E__EnumTypesOfCharacters__pf bpp__TypexOfxController__pfTT, FVector bpp__EnemyLocation__pf)
{
	b1l__K2Node_CustomEvent_Type_Of_Controller__pf = bpp__TypexOfxController__pfTT;
	b1l__K2Node_CustomEvent_EnemyLocation__pf = bpp__EnemyLocation__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_16(708);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpActEvt_Pause_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_5(756);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpActEvt_PowerUp_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_12(760);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpActEvt_Suicide_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_4(767);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpActEvt_Shoot_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_3(768);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpActEvt_Shoot_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_23(770);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpActEvt_Restart_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_13(785);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpActEvt_PickWeapon_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_1(786);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpActEvt_Jump_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_17(774);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpTchEvt_Pressed__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b1l__K2Node_InputTouchEvent_FingerIndex__pf = bpp__FingerIndex__pf;
	b1l__K2Node_InputTouchEvent_Location__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_14(782);
}
void AEnemyShootingCh_C__pf3349424045::bpf__InpTchEvt_Released__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b1l__K2Node_InputTouchEvent_FingerIndex_1__pf = bpp__FingerIndex__pf;
	b1l__K2Node_InputTouchEvent_Location_1__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_EnemyShootingCh__pf_6(790);
}
void AEnemyShootingCh_C__pf3349424045::bpf__DiePlayerFunction__pf(AActor* bpp__ActorWhoKilledPlayer__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	TArray<ALevelCompleterBP_C__pf922009354*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	TArray<ALevelCompleterBP_C__pf922009354*> bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_2__pf{};
	TArray<ALevelCompleterBP_C__pf922009354*> bpfv__CallFunc_GetAllActorsOfClass_OutActors_2__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__CallFunc_Array_Get_Item__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__CallFunc_Array_Get_Item_1__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	ACameraActor_C__pf1295471953* bpfv__K2Node_DynamicCast_AsCamera_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_3__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_4__pf{};
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_5__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_3__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_3__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__CallFunc_Array_Get_Item_2__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_6__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_7__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	TArray<AEnemyShootingCh_C__pf3349424045*> bpfv__CallFunc_GetAllActorsOfClass_OutActors_3__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__CallFunc_Array_Get_Item_3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_3__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_8__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf{};
	float bpfv__CallFunc_GetDistanceTo_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, GetClass(), /*out*/ TArrayCaster<AEnemyShootingCh_C__pf3349424045*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Get<AActor*>());
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_3__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors_3__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(56);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors_3__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(this, bpfv__CallFunc_Array_Get_Item_3__pf);
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors_3__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_GetDistanceTo_ReturnValue__pf = AActor::GetDistanceTo(bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetDistanceTo_ReturnValue__pf, bpv__MinDistance__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetDistanceTo_ReturnValue__pf, bpv__ClosestDistance__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors_3__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__K2Node_DynamicCast_bSuccess_8__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_8__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				bool  __Local__222 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf->bpv__IsDeath__pf) : (__Local__222)))
				{
					__CurrentState = 57;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__ToPossessActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 12:
			{
				bpv__DyingActor__pf = this;
			}
		case 13:
			{
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpv__ToPossessActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 59;
					break;
				}
			}
		case 14:
			{
				bool  __Local__223 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__IsVIP__pf) : (__Local__223)))
				{
					__CurrentState = 23;
					break;
				}
			}
		case 15:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALevelCompleterBP_C__pf922009354::StaticClass(), /*out*/ TArrayCaster<ALevelCompleterBP_C__pf922009354*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Get<AActor*>());
			}
		case 16:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 17:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 18:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors_2__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 20:
			{
				__StateStack.Push(60);
			}
		case 21:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors_2__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf = Cast<ALevelCompleterBP_C__pf922009354>(bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_1__pf->bpf__VIPEliminated__pf();
				}
			}
		case 23:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALevelCompleterBP_C__pf922009354::StaticClass(), /*out*/ TArrayCaster<ALevelCompleterBP_C__pf922009354*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
			}
		case 24:
			{
				bpfv__Temp_int_Loop_Counter_Variable_2__pf = 0;
			}
		case 25:
			{
				bpfv__Temp_int_Array_Index_Variable_3__pf = 0;
			}
		case 26:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				bpfv__Temp_int_Array_Index_Variable_3__pf = bpfv__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 28:
			{
				__StateStack.Push(61);
			}
		case 29:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf, bpfv__Temp_int_Array_Index_Variable_3__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf = Cast<ALevelCompleterBP_C__pf922009354>(bpfv__CallFunc_Array_Get_Item_2__pf);
				bpfv__K2Node_DynamicCast_bSuccess_6__pf = (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf))
				{
					bpfv__K2Node_DynamicCast_AsLevel_Completer_BP_2__pf->bpf__EnemyDeath__pf();
				}
			}
		case 31:
			{
				if(::IsValid(bpv__ToPossessActor__pf))
				{
					bpv__ToPossessActor__pf->bpv__IsPlayer__pf = true;
				}
			}
		case 32:
			{
				if(::IsValid(bpv__ToPossessActor__pf))
				{
					bpv__ToPossessActor__pf->bpf__MakeVisibleCubeDistance__pf();
				}
			}
		case 33:
			{
				if(::IsValid(bpv__ToPossessActor__pf) && ::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((bpv__ToPossessActor__pf), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((bpv__ToPossessActor__pf), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 800.000000;
				}
			}
		case 34:
			{
				bpf__SpawnPossesionPS__pf(bpv__ToPossessActor__pf);
			}
		case 35:
			{
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpv__ToPossessActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_5__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 36:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__Attacking__pf = false;
				}
			}
		case 37:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__IsDeath__pf = false;
				}
			}
		case 38:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__IsSuiciding__pf = false;
				}
			}
		case 39:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__LaserBeam__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__LaserBeam__pf->UParticleSystemComponent::SetTemplate(CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
				}
			}
		case 40:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf))
				{
					E__EnumWeapon__pf  __Local__224 = E__EnumWeapon__pf::NewEnumerator0;
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpf__SpawnWithWeapons__pf(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__Weapon__pf) : (__Local__224)), true);
				}
			}
		case 41:
			{
				bool  __Local__225 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__ZeroAmmo__pf) : (__Local__225)))
				{
					__CurrentState = 43;
					break;
				}
			}
		case 42:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__Ammunition__pf = 0;
				}
			}
		case 43:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__LaserBeam__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__LaserBeam__pf->CustomTimeDilation = 3.600000;
				}
			}
		case 44:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__LaserBeam__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__LaserBeam__pf->SetActive(false, false);
				}
			}
		case 45:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SniperPreBeam__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SniperPreBeam__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 46:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SniperPreBeam__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SniperPreBeam__pf->SetActive(false, false);
				}
			}
		case 47:
			{
				if(::IsValid(bpv__ToPossessActor__pf))
				{
					bpv__ToPossessActor__pf->bpf__MakePosesionEffect__pf();
				}
			}
		case 48:
			{
				if(::IsValid(bpv__ToPossessActor__pf))
				{
					bpv__ToPossessActor__pf->bpv__ChameleonRef__pf = bpv__ChameleonRef__pf;
				}
			}
		case 49:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf), ACharacter::__PPO__CharacterMovement() )))->bOrientRotationToMovement = false;
				}
			}
		case 50:
			{
				if(::IsValid(bpv__ToPossessActor__pf))
				{
					bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = bpv__ToPossessActor__pf->AActor::K2_SetActorRotation(FRotator(180.000000,0.000000,0.000000), false);
				}
			}
		case 51:
			{
				E__EnumWeapon__pf  __Local__226 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__Weapon__pf) : (__Local__226))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 62;
					break;
				}
				E__EnumWeapon__pf  __Local__227 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__Weapon__pf) : (__Local__227))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 83;
					break;
				}
				E__EnumWeapon__pf  __Local__228 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__Weapon__pf) : (__Local__228))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 84;
					break;
				}
				E__EnumWeapon__pf  __Local__229 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__Weapon__pf) : (__Local__229))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 85;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_7__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 53:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf))
				{
					bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpf__PlayerDeath__pf(bpp__ActorWhoKilledPlayer__pf);
				}
			}
		case 54:
			{
				if(::IsValid(bpv__ChameleonRef__pf))
				{
					bpv__ChameleonRef__pf->bpv__ScreenxDecals__pfT = true;
				}
			}
		case 55:
			{
				bpf__FullPlayerDeath__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 57:
			{
				bpv__ToPossessActor__pf = bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf;
			}
		case 58:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors_3__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_GetDistanceTo_ReturnValue__pf = AActor::GetDistanceTo(bpfv__CallFunc_Array_Get_Item_3__pf);
				bpv__ClosestDistance__pf = bpfv__CallFunc_GetDistanceTo_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("FailedToGetToPossesActor")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 60:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 18;
				break;
			}
		case 61:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 26;
				break;
			}
		case 62:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SkeletalMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SkeletalMesh__pf->SetAnimClass(UPlayerRifleInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
			}
		case 63:
			{
				bpfv__K2Node_DynamicCast_AsCamera_Actor__pf = Cast<ACameraActor_C__pf1295471953>(bpv__CameraActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_3__pf = (bpfv__K2Node_DynamicCast_AsCamera_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 64:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsCamera_Actor__pf))
				{
					bpfv__K2Node_DynamicCast_AsCamera_Actor__pf->bpv__Player__pf = bpv__ToPossessActor__pf;
				}
			}
		case 65:
			{
				bool  __Local__230 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__IsSlave__pf) : (__Local__230)))
				{
					__CurrentState = 82;
					break;
				}
			}
		case 66:
			{
				if(::IsValid(bpv__ToPossessActor__pf))
				{
					bpv__ToPossessActor__pf->bpv__CameraType__pf = E__EnumCameraType__pf::NewEnumerator1;
				}
			}
		case 67:
			{
				if(::IsValid(bpv__ToPossessActor__pf))
				{
					bpv__ToPossessActor__pf->AIControllerClass = APlayerController::StaticClass();
				}
			}
		case 68:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if(::IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf->AController::Possess(bpv__ToPossessActor__pf);
				}
			}
		case 69:
			{
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpv__ToPossessActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_4__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 70:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALevelCompleterBP_C__pf922009354::StaticClass(), /*out*/ TArrayCaster<ALevelCompleterBP_C__pf922009354*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 71:
			{
				bpfv__Temp_int_Loop_Counter_Variable_3__pf = 0;
			}
		case 72:
			{
				bpfv__Temp_int_Array_Index_Variable_2__pf = 0;
			}
		case 73:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_3__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 81;
					break;
				}
			}
		case 74:
			{
				bpfv__Temp_int_Array_Index_Variable_2__pf = bpfv__Temp_int_Loop_Counter_Variable_3__pf;
			}
		case 75:
			{
				__StateStack.Push(80);
			}
		case 76:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf = Cast<ALevelCompleterBP_C__pf922009354>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 77:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf))
				{
					bool  __Local__231 = false;
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpf__LightFunction__pf(((::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__IsDarkLevel__pf) : (__Local__231)));
				}
			}
		case 78:
			{
				if(::IsValid(bpv__SpotLight__pf))
				{
					bpv__SpotLight__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 79:
			{
				if(::IsValid(bpv__PointLight__pf))
				{
					bpv__PointLight__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 80:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_3__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 73;
				break;
			}
		case 81:
			{
				bpf__FullPlayerDeath__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 82:
			{
				bpf__SumPoints__pf(bpv__ToPossessActor__pf);
				__CurrentState = 66;
				break;
			}
		case 83:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SkeletalMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SkeletalMesh__pf->SetAnimClass(UPlayerHeavyInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
				__CurrentState = 63;
				break;
			}
		case 84:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SkeletalMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SkeletalMesh__pf->SetAnimClass(UPlayerAnimKnifeInEnemyBP_C__pf2266844876::StaticClass());
				}
				__CurrentState = 63;
				break;
			}
		case 85:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SkeletalMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf->bpv__SkeletalMesh__pf->SetAnimClass(UPlayerHeavyInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
			}
		case 86:
			{
				if(::IsValid(bpv__ToPossessActor__pf) && ::IsValid(bpv__ToPossessActor__pf->bpv__SniperPrediction__pf))
				{
					bpv__ToPossessActor__pf->bpv__SniperPrediction__pf->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = 63;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__FullPlayerDeath__pf()
{
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	AKnifePickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	AShotgunPickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	ARiflePickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	ASniperPickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf{};
	ARPGPickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__IsDeath__pf = true;
			}
		case 2:
			{
				bpf__DyingAnimation__pf();
			}
		case 3:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__BoxCollision__pf))
				{
					bpv__BoxCollision__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 5:
			{
				if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
				{
					(*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 6:
			{
				AActor::SetActorEnableCollision(false);
			}
		case 7:
			{
				if(::IsValid(bpv__PaperSprite__pf))
				{
					bpv__PaperSprite__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 8:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 25;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 30;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ARiflePickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 10:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<ARiflePickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 11:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__WeaponRifle__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__WeaponRifle__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__WeaponRifle__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__WeaponRifle__pf->UPrimitiveComponent::IgnoreComponentWhenMoving((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), true);
				}
			}
		case 13:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
			}
		case 14:
			{
				bpv__IsDeath__pf = true;
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AShotgunPickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 16:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<AShotgunPickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 17:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponShotgun__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponShotgun__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 18:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponShotgun__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WeaponShotgun__pf->UPrimitiveComponent::IgnoreComponentWhenMoving((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), true);
				}
			}
		case 19:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
				__CurrentState = 14;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AKnifePickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 21:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AKnifePickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 22:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponKnife__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponKnife__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 23:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponKnife__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponKnife__pf->UPrimitiveComponent::IgnoreComponentWhenMoving((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), true);
				}
			}
		case 24:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
				__CurrentState = 14;
				break;
			}
		case 25:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ASniperPickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 26:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<ASniperPickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 27:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__WeaponSniper__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__WeaponSniper__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 28:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__WeaponSniper__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__WeaponSniper__pf->UPrimitiveComponent::IgnoreComponentWhenMoving((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), true);
				}
			}
		case 29:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
				__CurrentState = 14;
				break;
			}
		case 30:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ARPGPickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 31:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf = CastChecked<ARPGPickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 32:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__WeaponRPG__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__WeaponRPG__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 33:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__WeaponRPG__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__WeaponRPG__pf->UPrimitiveComponent::IgnoreComponentWhenMoving((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), true);
				}
			}
		case 34:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_4__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
				__CurrentState = 14;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__PossessingPlayerFunction__pf(AEnemyShootingCh_C__pf3349424045* bpp__ToPossessActor__pf)
{
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	TArray<ALevelCompleterBP_C__pf922009354*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	ALevelCompleterBP_C__pf922009354* bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	ACameraActor_C__pf1295471953* bpfv__K2Node_DynamicCast_AsCamera_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_3__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__DyingActor__pf = this;
			}
		case 2:
			{
				bpv__IsPlayer__pf = false;
			}
		case 3:
			{
				if(::IsValid(bpp__ToPossessActor__pf))
				{
					bpp__ToPossessActor__pf->bpf__MakeVisibleCubeDistance__pf();
				}
			}
		case 4:
			{
				if(::IsValid(bpp__ToPossessActor__pf))
				{
					bpp__ToPossessActor__pf->bpv__IsPlayer__pf = true;
				}
			}
		case 5:
			{
				if(::IsValid(bpp__ToPossessActor__pf) && ::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((bpp__ToPossessActor__pf), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((bpp__ToPossessActor__pf), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 800.000000;
				}
			}
		case 6:
			{
				bpfv__K2Node_DynamicCast_AsCamera_Actor__pf = Cast<ACameraActor_C__pf1295471953>(bpv__CameraActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_3__pf = (bpfv__K2Node_DynamicCast_AsCamera_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsCamera_Actor__pf))
				{
					bpfv__K2Node_DynamicCast_AsCamera_Actor__pf->bpv__Player__pf = bpp__ToPossessActor__pf;
				}
			}
		case 8:
			{
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpp__ToPossessActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpp__ToPossessActor__pf))
				{
					bpp__ToPossessActor__pf->bpv__Attacking__pf = false;
				}
			}
		case 10:
			{
				if(::IsValid(bpp__ToPossessActor__pf))
				{
					bpp__ToPossessActor__pf->bpv__IsDeath__pf = false;
				}
			}
		case 11:
			{
				if(::IsValid(bpp__ToPossessActor__pf))
				{
					bpp__ToPossessActor__pf->bpv__IsSuiciding__pf = false;
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__LaserBeam__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__LaserBeam__pf->UParticleSystemComponent::SetTemplate(CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
				}
			}
		case 13:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__LaserBeam__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__LaserBeam__pf->SetActive(false, false);
				}
			}
		case 14:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__LaserBeam__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__LaserBeam__pf->CustomTimeDilation = 3.600000;
				}
			}
		case 15:
			{
				E__EnumWeapon__pf  __Local__232 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__Weapon__pf) : (__Local__232))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				E__EnumWeapon__pf  __Local__233 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__Weapon__pf) : (__Local__233))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 31;
					break;
				}
				E__EnumWeapon__pf  __Local__234 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__Weapon__pf) : (__Local__234))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 32;
					break;
				}
				E__EnumWeapon__pf  __Local__235 = E__EnumWeapon__pf::NewEnumerator0;
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf)) ? (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__Weapon__pf) : (__Local__235))), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 31;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__SkeletalMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__SkeletalMesh__pf->SetAnimClass(UPlayerRifleInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
			}
		case 17:
			{
				if(::IsValid(bpp__ToPossessActor__pf))
				{
					bpp__ToPossessActor__pf->AIControllerClass = APlayerController::StaticClass();
				}
			}
		case 18:
			{
				if(::IsValid(bpp__ToPossessActor__pf))
				{
					bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = bpp__ToPossessActor__pf->AActor::K2_SetActorRotation(FRotator(180.000000,0.000000,0.000000), false);
				}
			}
		case 19:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if(::IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf->AController::Possess(bpp__ToPossessActor__pf);
				}
			}
		case 20:
			{
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpp__ToPossessActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 21:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALevelCompleterBP_C__pf922009354::StaticClass(), /*out*/ TArrayCaster<ALevelCompleterBP_C__pf922009354*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 22:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 23:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 24:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 26:
			{
				__StateStack.Push(30);
			}
		case 27:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf = Cast<ALevelCompleterBP_C__pf922009354>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 28:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf))
				{
					bool  __Local__236 = false;
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpf__LightFunction__pf(((::IsValid(bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsLevel_Completer_BP__pf->bpv__IsDarkLevel__pf) : (__Local__236)));
				}
			}
		case 29:
			{
				if(::IsValid(bpv__SpotLight__pf))
				{
					bpv__SpotLight__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 24;
				break;
			}
		case 31:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__SkeletalMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__SkeletalMesh__pf->SetAnimClass(UPlayerHeavyInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
				__CurrentState = 17;
				break;
			}
		case 32:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__SkeletalMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf->bpv__SkeletalMesh__pf->SetAnimClass(UPlayerAnimKnifeInEnemyBP_C__pf2266844876::StaticClass());
				}
				__CurrentState = 17;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ImpulseShoot__pf(UPrimitiveComponent* bpp__Mesh__pf, UMovementComponent* bpp__CharacterMovement__pf)
{
	FVector bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf(EForceInit::ForceInit);
	if(::IsValid(bpp__Mesh__pf))
	{
		bpp__Mesh__pf->SetSimulatePhysics(true);
	}
	if(::IsValid(bpp__CharacterMovement__pf))
	{
		bpp__CharacterMovement__pf->StopMovementImmediately();
	}
	bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf = UKismetMathLibrary::Conv_FloatToVector(bpv__ImpactVelocity__pf);
	if(::IsValid(bpp__Mesh__pf))
	{
		bpp__Mesh__pf->AddImpulse(bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf, FName(TEXT("None")), false);
	}
	bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf = UKismetMathLibrary::Conv_FloatToVector(bpv__ImpactVelocity__pf);
	if(::IsValid(bpp__Mesh__pf))
	{
		bpp__Mesh__pf->SetPhysicsLinearVelocity(bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf, false, FName(TEXT("None")));
	}
}
void AEnemyShootingCh_C__pf3349424045::bpf__ExposePlayer__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	AAIShootingController_C__pf681293266* bpfv__K2Node_DynamicCast_AsAIShooting_Controller__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	AAISuicideController_C__pf3889547882* bpfv__K2Node_DynamicCast_AsAISuicide_Controller__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__ActorsInVision__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(9);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsInVision__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->APawn::GetController();
				}
				bpfv__K2Node_DynamicCast_AsAIShooting_Controller__pf = Cast<AAIShootingController_C__pf681293266>(bpfv__CallFunc_GetController_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsAIShooting_Controller__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsAIShooting_Controller__pf))
				{
					bpfv__K2Node_DynamicCast_AsAIShooting_Controller__pf->bpf__DetectPlayer__pf(this);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->APawn::GetController();
				}
				bpfv__K2Node_DynamicCast_AsAISuicide_Controller__pf = Cast<AAISuicideController_C__pf3889547882>(bpfv__CallFunc_GetController_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsAISuicide_Controller__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsAISuicide_Controller__pf))
				{
					bpfv__K2Node_DynamicCast_AsAISuicide_Controller__pf->bpf__DetectPlayer__pf(this);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__MakeVisibleCubeDistance__pf()
{
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
				if(::IsValid(bpv__CubeDistance__pf))
				{
					bpv__CubeDistance__pf->USceneComponent::SetVisibility(false, false);
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
				bool  __Local__237 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__AreaVisible__pf) : (__Local__237)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__PaperSprite__pf))
				{
					bpv__PaperSprite__pf->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__BulletTrace__pf(FVector bpp__EndLocation__pf)
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	ABulletTracerActor_C__pf1062751476* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	ABullet_Trail_C__pf1062751476* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	ABulletTracerActor_C__pf1062751476* bpfv__K2Node_DynamicCast_AsBullet_Tracer_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ABullet_Trail_C__pf1062751476* bpfv__K2Node_DynamicCast_AsBullet_Trail__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	ABullet_Trail_C__pf1062751476* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	ABullet_Trail_C__pf1062751476* bpfv__K2Node_DynamicCast_AsBullet_Trail_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpp__EndLocation__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABulletTracerActor_C__pf1062751476::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 2:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpp__EndLocation__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABulletTracerActor_C__pf1062751476>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpfv__K2Node_DynamicCast_AsBullet_Tracer_Actor__pf = Cast<ABulletTracerActor_C__pf1062751476>(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBullet_Tracer_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBullet_Tracer_Actor__pf))
				{
					bpfv__K2Node_DynamicCast_AsBullet_Tracer_Actor__pf->bpv__EndLocation__pf = bpp__EndLocation__pf;
				}
			}
		case 5:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::GetRightVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpp__EndLocation__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_GetRightVector_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(10.000000,10.000000,10.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABullet_Trail_C__pf1062751476::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_2__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 7:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::GetRightVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpp__EndLocation__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_GetRightVector_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(10.000000,10.000000,10.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<ABullet_Trail_C__pf1062751476>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_MakeTransform_ReturnValue_2__pf), ECastCheckedType::NullAllowed);
			}
		case 8:
			{
				bpfv__K2Node_DynamicCast_AsBullet_Trail_1__pf = Cast<ABullet_Trail_C__pf1062751476>(bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsBullet_Trail_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBullet_Trail_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsBullet_Trail_1__pf->bpv__EndLocation__pf = bpp__EndLocation__pf;
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::GetRightVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpp__EndLocation__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_GetRightVector_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(10.000000,10.000000,10.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABullet_Trail_C__pf1062751476::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 11:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::GetRightVector();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpp__EndLocation__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_GetRightVector_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(10.000000,10.000000,10.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<ABullet_Trail_C__pf1062751476>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 12:
			{
				bpfv__K2Node_DynamicCast_AsBullet_Trail__pf = Cast<ABullet_Trail_C__pf1062751476>(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsBullet_Trail__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsBullet_Trail__pf))
				{
					bpfv__K2Node_DynamicCast_AsBullet_Trail__pf->bpv__EndLocation__pf = bpp__EndLocation__pf;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__SpawnWeaponPlayer__pf()
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ARiflePickUp_C__pf1651478651* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ARiflePickUp_C__pf1651478651::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 3:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ARiflePickUp_C__pf1651478651>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponRifle__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponRifle__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__WeaponEnemy__pf, true);
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponRifle__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__WeaponRifle__pf->UPrimitiveComponent::IgnoreComponentWhenMoving(bpv__SkeletalMesh__pf, true);
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__Munition__pf = bpv__Ammunition__pf;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__ChangeWeapon__pf()
{
	ARiflePickUp_C__pf1651478651* bpfv__K2Node_DynamicCast_AsRifle_Pick_Up__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AAShotgunPickUp_C__pf1651478651* bpfv__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	ARPGPickUp_C__pf1651478651* bpfv__K2Node_DynamicCast_AsRPGPick_Up__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	AKnifePickUp_C__pf1651478651* bpfv__K2Node_DynamicCast_AsKnife_Pick_Up__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_3__pf{};
	ASniperPickUp_C__pf1651478651* bpfv__K2Node_DynamicCast_AsSniper_Pick_Up__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_4__pf{};
	AShotgunPickUp_C__pf1651478651* bpfv__K2Node_DynamicCast_AsShotgun_Pick_Up__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_5__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsRifle_Pick_Up__pf = Cast<ARiflePickUp_C__pf1651478651>(bpv__OverlapingActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsRifle_Pick_Up__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator0;
			}
		case 3:
			{
				bpf__SpawnWithWeapons__pf(bpv__Weapon__pf, false);
			}
		case 4:
			{
				int32  __Local__238 = 0;
				bpv__Ammunition__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsRifle_Pick_Up__pf)) ? (bpfv__K2Node_DynamicCast_AsRifle_Pick_Up__pf->bpv__Munition__pf) : (__Local__238));
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsRifle_Pick_Up__pf))
				{
					bpfv__K2Node_DynamicCast_AsRifle_Pick_Up__pf->K2_DestroyActor();
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__K2Node_DynamicCast_AsShotgun_Pick_Up__pf = Cast<AShotgunPickUp_C__pf1651478651>(bpv__OverlapingActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_5__pf = (bpfv__K2Node_DynamicCast_AsShotgun_Pick_Up__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 7:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator1;
			}
		case 8:
			{
				bpf__SpawnWithWeapons__pf(bpv__Weapon__pf, false);
			}
		case 9:
			{
				int32  __Local__239 = 0;
				bpv__Ammunition__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsShotgun_Pick_Up__pf)) ? (bpfv__K2Node_DynamicCast_AsShotgun_Pick_Up__pf->bpv__Munition__pf) : (__Local__239));
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsShotgun_Pick_Up__pf))
				{
					bpfv__K2Node_DynamicCast_AsShotgun_Pick_Up__pf->K2_DestroyActor();
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpfv__K2Node_DynamicCast_AsKnife_Pick_Up__pf = Cast<AKnifePickUp_C__pf1651478651>(bpv__OverlapingActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_3__pf = (bpfv__K2Node_DynamicCast_AsKnife_Pick_Up__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 12:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator2;
			}
		case 13:
			{
				bpf__SpawnWithWeapons__pf(bpv__Weapon__pf, false);
			}
		case 14:
			{
				int32  __Local__240 = 0;
				bpv__Ammunition__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsKnife_Pick_Up__pf)) ? (bpfv__K2Node_DynamicCast_AsKnife_Pick_Up__pf->bpv__Munition__pf) : (__Local__240));
			}
		case 15:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsKnife_Pick_Up__pf))
				{
					bpfv__K2Node_DynamicCast_AsKnife_Pick_Up__pf->K2_DestroyActor();
				}
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpfv__K2Node_DynamicCast_AsSniper_Pick_Up__pf = Cast<ASniperPickUp_C__pf1651478651>(bpv__OverlapingActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_4__pf = (bpfv__K2Node_DynamicCast_AsSniper_Pick_Up__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 17:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator3;
			}
		case 18:
			{
				bpf__SpawnWithWeapons__pf(bpv__Weapon__pf, false);
			}
		case 19:
			{
				int32  __Local__241 = 0;
				bpv__Ammunition__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsSniper_Pick_Up__pf)) ? (bpfv__K2Node_DynamicCast_AsSniper_Pick_Up__pf->bpv__Munition__pf) : (__Local__241));
			}
		case 20:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsSniper_Pick_Up__pf))
				{
					bpfv__K2Node_DynamicCast_AsSniper_Pick_Up__pf->K2_DestroyActor();
				}
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				bpfv__K2Node_DynamicCast_AsRPGPick_Up__pf = Cast<ARPGPickUp_C__pf1651478651>(bpv__OverlapingActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsRPGPick_Up__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 22:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator5;
			}
		case 23:
			{
				bpf__SpawnWithWeapons__pf(bpv__Weapon__pf, false);
			}
		case 24:
			{
				int32  __Local__242 = 0;
				bpv__Ammunition__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsRPGPick_Up__pf)) ? (bpfv__K2Node_DynamicCast_AsRPGPick_Up__pf->bpv__Munition__pf) : (__Local__242));
			}
		case 25:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsRPGPick_Up__pf))
				{
					bpfv__K2Node_DynamicCast_AsRPGPick_Up__pf->K2_DestroyActor();
				}
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				bpfv__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf = Cast<AAShotgunPickUp_C__pf1651478651>(bpv__OverlapingActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 27:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator6;
			}
		case 28:
			{
				bpf__SpawnWithWeapons__pf(bpv__Weapon__pf, false);
			}
		case 29:
			{
				int32  __Local__243 = 0;
				bpv__Ammunition__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf)) ? (bpfv__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf->bpv__Munition__pf) : (__Local__243));
			}
		case 30:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf))
				{
					bpfv__K2Node_DynamicCast_AsAShotgun_Pick_Up__pf->K2_DestroyActor();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__SpawnWithWeapons__pf(E__EnumWeapon__pf bpp__WeaponGet__pf, bool bpp__FullxAmmo__pfT)
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf{};
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_3__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_4__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_5__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_6__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_1__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_2__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_4__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_3__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_2__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_4__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_5__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_4__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_6__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_5__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_6__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_7__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_3__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_4__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue_5__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_7__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_8__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_8__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_9__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_10__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_11__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator6));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator4));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__WeaponGet__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__WeaponGet__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 25;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__WeaponGet__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 54;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__WeaponGet__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 73;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__WeaponGet__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 96;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__WeaponGet__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 114;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__WeaponGet__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 131;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_5__pf = bpv__WeaponEnemy__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				}
			}
		case 5:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[33], ECastCheckedType::NullAllowed));
				}
			}
		case 6:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(7.999025,4.120587,0.044301), FRotator(0.153932,89.857864,176.727463), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_9__pf, false);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_8__pf = bpv__WeaponEnemy__pf->USceneComponent::K2_AttachToComponent(bpv__SkeletalMesh__pf, FName(TEXT("RightHand")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetRelativeScale3D(FVector(1.000000,1.000000,1.000000));
				}
			}
		case 9:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpv__FireRifle__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-0.000023,62.021809,8.227814), FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_11__pf, true);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__PointSpawnBullet__pf))
				{
					bpv__PointSpawnBullet__pf->USceneComponent::K2_SetRelativeLocation(FVector(-8.460000,0.210000,12.220000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_3__pf, true);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__SniperCanon__pf))
				{
					bpv__SniperCanon__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 12:
			{
				if(::IsValid(bpv__SniperScope__pf))
				{
					bpv__SniperScope__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__ShotgunButtStock__pf))
				{
					bpv__ShotgunButtStock__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__ShotgunBarrelCover__pf))
				{
					bpv__ShotgunBarrelCover__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__ShotgunHandGuard__pf))
				{
					bpv__ShotgunHandGuard__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 16:
			{
				if(::IsValid(bpv__SniperPrediction__pf))
				{
					bpv__SniperPrediction__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 17:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_4__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_4__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UPlayerRifleInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
			}
		case 19:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator0;
			}
		case 20:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed));
				}
			}
		case 21:
			{
				if (!bpp__FullxAmmo__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 22:
			{
				if (!bpv__ExtraAmmoRifle__pf)
				{
					__CurrentState = 136;
					break;
				}
			}
		case 23:
			{
				bpv__Ammunition__pf = 40;
				__CurrentState = -1;
				break;
			}
		case 24:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UAnimBP_Shooting_C__pf3266658394::StaticClass());
				}
				__CurrentState = 19;
				break;
			}
		case 25:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_4__pf = bpv__WeaponEnemy__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[34], ECastCheckedType::NullAllowed));
				}
			}
		case 26:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[35], ECastCheckedType::NullAllowed));
				}
			}
		case 27:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(1, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[35], ECastCheckedType::NullAllowed));
				}
			}
		case 28:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(7.010000,3.990000,-1.400000), FRotator(0.617000,88.739998,-180.699997), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_8__pf, true);
				}
			}
		case 29:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_7__pf = bpv__WeaponEnemy__pf->USceneComponent::K2_AttachToComponent(bpv__SkeletalMesh__pf, FName(TEXT("RightHand")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 30:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetRelativeScale3D(FVector(1.000000,1.000000,1.000000));
				}
			}
		case 31:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpv__FireRifle__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-0.120000,72.089996,11.950000), FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_10__pf, true);
				}
			}
		case 32:
			{
				if(::IsValid(bpv__PointSpawnBullet__pf))
				{
					bpv__PointSpawnBullet__pf->USceneComponent::K2_SetRelativeLocation(FVector(-5.180000,12.400000,13.710000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf, true);
				}
			}
		case 33:
			{
				if(::IsValid(bpv__SniperCanon__pf))
				{
					bpv__SniperCanon__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 34:
			{
				if(::IsValid(bpv__SniperScope__pf))
				{
					bpv__SniperScope__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 35:
			{
				if(::IsValid(bpv__ShotgunButtStock__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_1__pf = bpv__ShotgunButtStock__pf->USceneComponent::K2_AttachToComponent(bpv__WeaponEnemy__pf, FName(TEXT("Buttstock_Bone")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 36:
			{
				if(::IsValid(bpv__ShotgunButtStock__pf))
				{
					bpv__ShotgunButtStock__pf->USceneComponent::K2_SetRelativeLocation(FVector(0.124700,-1.838000,9.088000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_6__pf, false);
				}
			}
		case 37:
			{
				if(::IsValid(bpv__ShotgunButtStock__pf))
				{
					bpv__ShotgunButtStock__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 38:
			{
				if(::IsValid(bpv__ShotgunBarrelCover__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_2__pf = bpv__ShotgunBarrelCover__pf->USceneComponent::K2_AttachToComponent(bpv__WeaponEnemy__pf, FName(TEXT("Barrel_Cover_Bone")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 39:
			{
				if(::IsValid(bpv__ShotgunBarrelCover__pf))
				{
					bpv__ShotgunBarrelCover__pf->USceneComponent::K2_SetRelativeLocation(FVector(-0.007720,40.754890,13.310640), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_4__pf, true);
				}
			}
		case 40:
			{
				if(::IsValid(bpv__ShotgunBarrelCover__pf))
				{
					bpv__ShotgunBarrelCover__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 41:
			{
				if(::IsValid(bpv__ShotgunHandGuard__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__ShotgunHandGuard__pf->USceneComponent::K2_AttachToComponent(bpv__WeaponEnemy__pf, FName(TEXT("Barrel_Cover_Bone")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 42:
			{
				if(::IsValid(bpv__ShotgunHandGuard__pf))
				{
					bpv__ShotgunHandGuard__pf->USceneComponent::K2_SetRelativeLocation(FVector(0.227772,33.248310,7.601350), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_5__pf, true);
				}
			}
		case 43:
			{
				if(::IsValid(bpv__ShotgunHandGuard__pf))
				{
					bpv__ShotgunHandGuard__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 44:
			{
				if(::IsValid(bpv__SniperPrediction__pf))
				{
					bpv__SniperPrediction__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 45:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_4__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_4__pf)
				{
					__CurrentState = 53;
					break;
				}
			}
		case 46:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UPlayerHeavyInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
			}
		case 47:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator1;
			}
		case 48:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed));
				}
			}
		case 49:
			{
				if (!bpp__FullxAmmo__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 50:
			{
				if (!bpv__ExtraAmmoShotgun__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 51:
			{
				bpv__Ammunition__pf = 12;
				__CurrentState = -1;
				break;
			}
		case 52:
			{
				bpv__Ammunition__pf = 8;
				__CurrentState = -1;
				break;
			}
		case 53:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UAnimBP_Shooting_C__pf3266658394::StaticClass());
				}
				__CurrentState = 47;
				break;
			}
		case 54:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_1__pf = bpv__WeaponEnemy__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[36], ECastCheckedType::NullAllowed));
				}
			}
		case 55:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[37], ECastCheckedType::NullAllowed));
				}
			}
		case 56:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-8.330000,-3.589000,3.134000), FRotator(-5.001502,-0.000682,-179.999954), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3__pf, true);
				}
			}
		case 57:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_6__pf = bpv__WeaponEnemy__pf->USceneComponent::K2_AttachToComponent(bpv__SkeletalMesh__pf, FName(TEXT("LeftHand")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 58:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetRelativeScale3D(FVector(1.000000,1.000000,1.000000));
				}
			}
		case 59:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpv__FireRifle__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-0.080000,0.248000,-24.441999), FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2__pf, true);
				}
			}
		case 60:
			{
				if(::IsValid(bpv__SniperCanon__pf))
				{
					bpv__SniperCanon__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 61:
			{
				if(::IsValid(bpv__SniperScope__pf))
				{
					bpv__SniperScope__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 62:
			{
				if(::IsValid(bpv__ShotgunButtStock__pf))
				{
					bpv__ShotgunButtStock__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 63:
			{
				if(::IsValid(bpv__ShotgunBarrelCover__pf))
				{
					bpv__ShotgunBarrelCover__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 64:
			{
				if(::IsValid(bpv__ShotgunHandGuard__pf))
				{
					bpv__ShotgunHandGuard__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 65:
			{
				if(::IsValid(bpv__SniperPrediction__pf))
				{
					bpv__SniperPrediction__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 66:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator2;
			}
		case 67:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_3__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_3__pf)
				{
					__CurrentState = 72;
					break;
				}
			}
		case 68:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UPlayerAnimKnifeInEnemyBP_C__pf2266844876::StaticClass());
				}
			}
		case 69:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[38], ECastCheckedType::NullAllowed));
				}
			}
		case 70:
			{
				if (!true)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 71:
			{
				bpv__Ammunition__pf = 1;
				__CurrentState = -1;
				break;
			}
		case 72:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UEnemyKnifeAnimBP_C__pf3266658394::StaticClass());
				}
				__CurrentState = 69;
				break;
			}
		case 73:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_2__pf = bpv__WeaponEnemy__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[39], ECastCheckedType::NullAllowed));
				}
			}
		case 74:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[40], ECastCheckedType::NullAllowed));
				}
			}
		case 75:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(1, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[41], ECastCheckedType::NullAllowed));
				}
			}
		case 76:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(2, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[42], ECastCheckedType::NullAllowed));
				}
			}
		case 77:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetRelativeScale3D(FVector(1.200000,1.200000,1.200000));
				}
			}
		case 78:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(7.369000,3.201700,-0.850000), FRotator(9.511000,85.176003,-172.673996), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_5__pf, true);
				}
			}
		case 79:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_4__pf = bpv__WeaponEnemy__pf->USceneComponent::K2_AttachToComponent(bpv__SkeletalMesh__pf, FName(TEXT("RightHand")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 80:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpv__FireRifle__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(0.050000,82.120003,6.939000), FRotator(0.000000,-90.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_6__pf, true);
				}
			}
		case 81:
			{
				if(::IsValid(bpv__PointSpawnBullet__pf))
				{
					bpv__PointSpawnBullet__pf->USceneComponent::K2_SetRelativeLocation(FVector(-9.780000,8.100000,8.640000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf, true);
				}
			}
		case 82:
			{
				if(::IsValid(bpv__SniperCanon__pf))
				{
					bpv__SniperCanon__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 83:
			{
				if(::IsValid(bpv__SniperScope__pf))
				{
					bpv__SniperScope__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 84:
			{
				if(::IsValid(bpv__ShotgunButtStock__pf))
				{
					bpv__ShotgunButtStock__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 85:
			{
				if(::IsValid(bpv__ShotgunBarrelCover__pf))
				{
					bpv__ShotgunBarrelCover__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 86:
			{
				if(::IsValid(bpv__ShotgunHandGuard__pf))
				{
					bpv__ShotgunHandGuard__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 87:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf)
				{
					__CurrentState = 89;
					break;
				}
			}
		case 88:
			{
				if(::IsValid(bpv__SniperPrediction__pf))
				{
					bpv__SniperPrediction__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 89:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator3;
			}
		case 90:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed));
				}
			}
		case 91:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_2__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_2__pf)
				{
					__CurrentState = 95;
					break;
				}
			}
		case 92:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UPlayerHeavyInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
			}
		case 93:
			{
				if (!bpp__FullxAmmo__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 94:
			{
				bpv__Ammunition__pf = 1;
				__CurrentState = -1;
				break;
			}
		case 95:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UAnimBP_Shooting_C__pf3266658394::StaticClass());
				}
				__CurrentState = 93;
				break;
			}
		case 96:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpv__WeaponEnemy__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[43], ECastCheckedType::NullAllowed));
				}
			}
		case 97:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[44], ECastCheckedType::NullAllowed));
				}
			}
		case 98:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(1, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[45], ECastCheckedType::NullAllowed));
				}
			}
		case 99:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(2, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[46], ECastCheckedType::NullAllowed));
				}
			}
		case 100:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetRelativeScale3D(FVector(1.500000,1.500000,1.500000));
				}
			}
		case 101:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(1.858000,-2.678000,4.277000), FRotator(-26.223000,19.600000,-20.799999), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_4__pf, true);
				}
			}
		case 102:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_3__pf = bpv__WeaponEnemy__pf->USceneComponent::K2_AttachToComponent(bpv__SkeletalMesh__pf, FName(TEXT("RightHandSocket")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 103:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpv__FireRifle__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-14.737000,-0.704000,-12.146000), FRotator(-5.000000,-180.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1__pf, true);
				}
			}
		case 104:
			{
				if(::IsValid(bpv__SniperScope__pf))
				{
					bpv__SniperScope__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 105:
			{
				if(::IsValid(bpv__SniperCanon__pf))
				{
					bpv__SniperCanon__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 106:
			{
				if(::IsValid(bpv__ShotgunButtStock__pf))
				{
					bpv__ShotgunButtStock__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 107:
			{
				if(::IsValid(bpv__ShotgunBarrelCover__pf))
				{
					bpv__ShotgunBarrelCover__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 108:
			{
				if(::IsValid(bpv__ShotgunHandGuard__pf))
				{
					bpv__ShotgunHandGuard__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 109:
			{
				if(::IsValid(bpv__SniperPrediction__pf))
				{
					bpv__SniperPrediction__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 110:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator5;
			}
		case 111:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UPlayerRPGInEnemyWeaponAnimBP_C__pf2266844876::StaticClass());
				}
			}
		case 112:
			{
				if (!true)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 113:
			{
				bpv__Ammunition__pf = 1;
				__CurrentState = -1;
				break;
			}
		case 114:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue_3__pf = bpv__WeaponEnemy__pf->SetStaticMesh(CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[47], ECastCheckedType::NullAllowed));
				}
			}
		case 115:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[48], ECastCheckedType::NullAllowed));
				}
			}
		case 116:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(7.010000,3.990000,-1.400000), FRotator(0.617000,88.739998,-180.699997), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_7__pf, true);
				}
			}
		case 117:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_5__pf = bpv__WeaponEnemy__pf->USceneComponent::K2_AttachToComponent(bpv__SkeletalMesh__pf, FName(TEXT("RightHand")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 118:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetRelativeScale3D(FVector(1.000000,1.000000,1.000000));
				}
			}
		case 119:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpv__FireRifle__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-0.120000,72.089996,11.950000), FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, true);
				}
			}
		case 120:
			{
				if(::IsValid(bpv__PointSpawnBullet__pf))
				{
					bpv__PointSpawnBullet__pf->USceneComponent::K2_SetRelativeLocation(FVector(-5.180000,12.400000,13.710000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, true);
				}
			}
		case 121:
			{
				if(::IsValid(bpv__SniperCanon__pf))
				{
					bpv__SniperCanon__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 122:
			{
				if(::IsValid(bpv__SniperScope__pf))
				{
					bpv__SniperScope__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 123:
			{
				if(::IsValid(bpv__ShotgunButtStock__pf))
				{
					bpv__ShotgunButtStock__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 124:
			{
				if(::IsValid(bpv__ShotgunBarrelCover__pf))
				{
					bpv__ShotgunBarrelCover__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 125:
			{
				if(::IsValid(bpv__ShotgunHandGuard__pf))
				{
					bpv__ShotgunHandGuard__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 126:
			{
				if(::IsValid(bpv__SniperPrediction__pf))
				{
					bpv__SniperPrediction__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 127:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UPlayerHeavyInEnemyAnimBP_C__pf2266844876::StaticClass());
				}
			}
		case 128:
			{
				bpv__Weapon__pf = E__EnumWeapon__pf::NewEnumerator6;
			}
		case 129:
			{
				if (!bpp__FullxAmmo__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 130:
			{
				bpv__Ammunition__pf = 15;
				__CurrentState = -1;
				break;
			}
		case 131:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 132:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf)
				{
					__CurrentState = 135;
					break;
				}
			}
		case 133:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UPlayerAnimKnifeInEnemyBP_C__pf2266844876::StaticClass());
				}
			}
		case 134:
			{
				bpv__Ammunition__pf = 0;
				__CurrentState = -1;
				break;
			}
		case 135:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetAnimClass(UEnemyKnifeAnimBP_C__pf3266658394::StaticClass());
				}
				__CurrentState = 134;
				break;
			}
		case 136:
			{
				bpv__Ammunition__pf = 30;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__RunAway__pf(AActor* bpp__Actor__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	if(::IsValid(bpp__Actor__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpp__Actor__pf->AActor::K2_GetActorLocation();
	}
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue_1__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
	bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, false);
	if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue__pf = (*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->USceneComponent::GetForwardVector();
	}
	bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
	bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, 100);
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(bpfv__CallFunc_GetController_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf);
}
void AEnemyShootingCh_C__pf3349424045::bpf__CreatingSlave__pf()
{
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, 2);
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[49], ECastCheckedType::NullAllowed), true);
				}
			}
		case 3:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[50], ECastCheckedType::NullAllowed));
				}
			}
		case 4:
			{
				if(::IsValid(bpv__WeaponEnemy__pf))
				{
					bpv__WeaponEnemy__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 5:
			{
				bpv__IsSlave__pf = true;
			}
		case 6:
			{
				bpv__Squad__pf = -10;
			}
		case 7:
			{
				bpv__Ammunition__pf = 0;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[51], ECastCheckedType::NullAllowed), true);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[52], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 4;
				break;
			}
		case 10:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[53], ECastCheckedType::NullAllowed), true);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[54], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__LightFunction__pf(bool bpp__IsDark__pf)
{
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsDark__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf = IsPlayerControlled();
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__SpotLight__pf))
				{
					bpv__SpotLight__pf->USceneComponent::SetVisibility(bpp__IsDark__pf, false);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__PointLight__pf))
				{
					bpv__PointLight__pf->USceneComponent::SetVisibility(bpp__IsDark__pf, false);
				}
			}
		case 5:
			{
				bpf__LightEvent__pf();
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__SpotLight__pf))
				{
					bpv__SpotLight__pf->USceneComponent::SetVisibility(bpp__IsDark__pf, false);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__PointLight__pf))
				{
					bpv__PointLight__pf->USceneComponent::SetVisibility(bpp__IsDark__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__SniperMakePreBeamPartycle__pf(FVector bpp__EnemyLocation__pf, bool bpp__IsFromPlayer__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsDeath__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(-5000.000000, 5000.000000);
				bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(-5000.000000, 5000.000000);
				bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf, bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, 100000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X_1__pf, bpfv__CallFunc_BreakVector_Y_1__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpv__SniperEnemyLocation__pf = bpfv__CallFunc_MakeVector_ReturnValue_1__pf;
			}
		case 3:
			{
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_SetWorldLocation(bpv__SniperEnemyLocation__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__SniperPreBeam__pf))
				{
					bpv__SniperPreBeam__pf->SetActive(true, true);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__SniperPreBeam__pf))
				{
					bpv__SniperPreBeam__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__LaserBeam__pf))
				{
					bpv__LaserBeam__pf->SetActive(true, true);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__LaserBeam__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__LaserBeam__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__SniperEnemyLocation__pf);
				if(::IsValid(bpv__LaserBeam__pf))
				{
					bpv__LaserBeam__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__SniperPreBeam__pf))
				{
					bpv__SniperPreBeam__pf->SetActive(true, true);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__SniperPreBeam__pf))
				{
					bpv__SniperPreBeam__pf->SetBeamSourcePoint(0, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf, 0);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__SniperBeamFinalPoint__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf = bpv__SniperBeamFinalPoint__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__SniperPreBeam__pf))
				{
					bpv__SniperPreBeam__pf->SetBeamTargetPoint(0, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf, 0);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__CameraShake__pf(E__EnumWeapon__pf bpp__Weapon__pf)
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	ACameraActor_C__pf1295471953* bpfv__K2Node_DynamicCast_AsCamera_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsCamera_Actor__pf = Cast<ACameraActor_C__pf1295471953>(bpv__CameraActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsCamera_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsCamera_Actor__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsCamera_Actor__pf->AActor::K2_GetActorLocation();
				}
				UGameplayStatics::PlayWorldCameraShake(this, CastChecked<UClass>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[55], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, 0.000000, 10.000000, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsCamera_Actor__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsCamera_Actor__pf->AActor::K2_GetActorLocation();
				}
				UGameplayStatics::PlayWorldCameraShake(this, CastChecked<UClass>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[56], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, 0.000000, 10.000000, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsCamera_Actor__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsCamera_Actor__pf->AActor::K2_GetActorLocation();
				}
				UGameplayStatics::PlayWorldCameraShake(this, CastChecked<UClass>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[57], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, 0.000000, 10.000000, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsCamera_Actor__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsCamera_Actor__pf->AActor::K2_GetActorLocation();
				}
				UGameplayStatics::PlayWorldCameraShake(this, CastChecked<UClass>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[56], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, 0.000000, 10.000000, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__GunShoot__pf(E__EnumWeapon__pf bpp__Weapon__pf, bool bpp__IsSuicide__pf)
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	FFMODEventInstance bpfv__CallFunc_PlayEventAtLocation_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed));
				}
			}
		case 3:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if (!bpp__IsSuicide__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
				bpfv__CallFunc_PlayEventAtLocation_ReturnValue__pf = UFMODBlueprintStatics::PlayEventAtLocation(this, CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[26], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, true);
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed));
				}
			}
		case 7:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[38], ECastCheckedType::NullAllowed));
				}
			}
		case 9:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed));
				}
			}
		case 11:
			{
				if(::IsValid(bpv__AudioEnemy__pf))
				{
					bpv__AudioEnemy__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[58], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__MaskChange__pf()
{
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__GasMask__pf->USceneComponent::K2_AttachToComponent(bpv__SkeletalMesh__pf, FName(TEXT("Head")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
			}
		case 2:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 6);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 7);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 8);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 9);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 10);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 11);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__Squad__pf, 12);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[59], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[60], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[61], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[62], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[63], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[64], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[65], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[66], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[67], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[68], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[69], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[70], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__SpawnBullet__pf(E__EnumWeapon__pf bpp__WeaponEquipped__pf)
{
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABullet_Actor_C__pf2054339363* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsGodModeActive__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABullet_Actor_C__pf2054339363::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 3:
			{
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__FireRifle__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__FireRifle__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABullet_Actor_C__pf2054339363>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__BulletType__pf = bpp__WeaponEquipped__pf;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__AttackingFunction__pf(bool bpp__Attacking__pf)
{
	bpv__Attacking__pf = bpp__Attacking__pf;
}
void AEnemyShootingCh_C__pf3349424045::bpf__DestroyerMeshFunction__pf(AActor* bpp__Actor__pf, FVector bpp__HitOrigin__pf)
{
	ACurved_Pipe_C__pf1894626796* bpfv__K2Node_DynamicCast_AsCurved_Pipe__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	APipe_C__pf1894626796* bpfv__K2Node_DynamicCast_AsPipe__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	AExplosiveBarrel_C__pf3544028049* bpfv__K2Node_DynamicCast_AsExplosive_Barrel__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	ALight_01_C__pf1894626796* bpfv__K2Node_DynamicCast_AsLight_01__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_3__pf{};
	ATable_Lamp_C__pf1894626796* bpfv__K2Node_DynamicCast_AsTable_Lamp__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_4__pf{};
	AOld_Chair_C__pf1894626796* bpfv__K2Node_DynamicCast_AsOld_Chair__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_5__pf{};
	AGlass_C__pf345340536* bpfv__K2Node_DynamicCast_AsGlass__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_6__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsGlass__pf = Cast<AGlass_C__pf345340536>(bpp__Actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_6__pf = (bpfv__K2Node_DynamicCast_AsGlass__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsGlass__pf))
				{
					bpfv__K2Node_DynamicCast_AsGlass__pf->bpf__GlassBreaked__pf(bpp__HitOrigin__pf);
				}
			}
		case 3:
			{
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__K2Node_DynamicCast_AsTable_Lamp__pf = Cast<ATable_Lamp_C__pf1894626796>(bpp__Actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_4__pf = (bpfv__K2Node_DynamicCast_AsTable_Lamp__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsTable_Lamp__pf))
				{
					bpfv__K2Node_DynamicCast_AsTable_Lamp__pf->bpf__DestroyFunction__pf(bpp__HitOrigin__pf);
				}
				__CurrentState = 3;
				break;
			}
		case 6:
			{
				bpfv__K2Node_DynamicCast_AsOld_Chair__pf = Cast<AOld_Chair_C__pf1894626796>(bpp__Actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_5__pf = (bpfv__K2Node_DynamicCast_AsOld_Chair__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsOld_Chair__pf))
				{
					bpfv__K2Node_DynamicCast_AsOld_Chair__pf->bpf__DestroyFunction__pf(bpp__HitOrigin__pf);
				}
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				bpfv__K2Node_DynamicCast_AsLight_01__pf = Cast<ALight_01_C__pf1894626796>(bpp__Actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_3__pf = (bpfv__K2Node_DynamicCast_AsLight_01__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsLight_01__pf))
				{
					bpfv__K2Node_DynamicCast_AsLight_01__pf->bpf__DestroyFunction__pf(bpp__HitOrigin__pf);
				}
				__CurrentState = 3;
				break;
			}
		case 10:
			{
				bpfv__K2Node_DynamicCast_AsExplosive_Barrel__pf = Cast<AExplosiveBarrel_C__pf3544028049>(bpp__Actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsExplosive_Barrel__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsExplosive_Barrel__pf))
				{
					bpfv__K2Node_DynamicCast_AsExplosive_Barrel__pf->bpf__DestroyFunction__pf(bpp__HitOrigin__pf);
				}
				__CurrentState = 3;
				break;
			}
		case 12:
			{
				bpfv__K2Node_DynamicCast_AsPipe__pf = Cast<APipe_C__pf1894626796>(bpp__Actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsPipe__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 13:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsPipe__pf))
				{
					bpfv__K2Node_DynamicCast_AsPipe__pf->bpf__DestroyFunction__pf(bpp__HitOrigin__pf);
				}
				__CurrentState = 3;
				break;
			}
		case 14:
			{
				bpfv__K2Node_DynamicCast_AsCurved_Pipe__pf = Cast<ACurved_Pipe_C__pf1894626796>(bpp__Actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsCurved_Pipe__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsCurved_Pipe__pf))
				{
					bpfv__K2Node_DynamicCast_AsCurved_Pipe__pf->bpf__DestroyFunction__pf(bpp__HitOrigin__pf);
				}
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__CreateMeshIA__pf()
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_3__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf{};
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
				bool  __Local__244 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__NF_Enemies__pf) : (__Local__244)))
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 11;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 19;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 29;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 31;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__SelfEnemyType__pf), static_cast<uint8>(E__EnumTypesOfCharacters__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 41;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 6;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 43;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), true);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
				}
			}
		case 8:
			{
				if (!bpv__IsVIP__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[71], ECastCheckedType::NullAllowed), true);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[72], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 17;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 12;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[73], ECastCheckedType::NullAllowed), true);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[74], ECastCheckedType::NullAllowed));
				}
			}
		case 14:
			{
				if (!bpv__IsVIP__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[71], ECastCheckedType::NullAllowed), true);
				}
			}
		case 16:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[72], ECastCheckedType::NullAllowed));
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[75], ECastCheckedType::NullAllowed), true);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[76], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 14;
				break;
			}
		case 19:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 26;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 24;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[77], ECastCheckedType::NullAllowed), true);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[78], ECastCheckedType::NullAllowed));
				}
			}
		case 22:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->USceneComponent::SetRelativeScale3D(FVector(0.900000,0.600000,0.600000));
				}
			}
		case 23:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->USceneComponent::K2_SetRelativeLocation(FVector(3.220600,0.514800,4.513500), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, true);
				}
				__CurrentState = 14;
				break;
			}
		case 24:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[79], ECastCheckedType::NullAllowed), true);
				}
			}
		case 25:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[80], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 14;
				break;
			}
		case 26:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[81], ECastCheckedType::NullAllowed), true);
				}
			}
		case 27:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[82], ECastCheckedType::NullAllowed));
				}
			}
		case 28:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->USceneComponent::K2_SetRelativeLocation(FVector(6.314000,-0.219810,4.244000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf, true);
				}
				__CurrentState = 14;
				break;
			}
		case 29:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[83], ECastCheckedType::NullAllowed), true);
				}
			}
		case 30:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[84], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 14;
				break;
			}
		case 31:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 38;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 36;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Weapon__pf), static_cast<uint8>(E__EnumWeapon__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 32;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[85], ECastCheckedType::NullAllowed), true);
				}
			}
		case 33:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[86], ECastCheckedType::NullAllowed));
				}
			}
		case 34:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->USceneComponent::SetRelativeScale3D(FVector(0.900000,0.600000,0.600000));
				}
			}
		case 35:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->USceneComponent::K2_SetRelativeLocation(FVector(3.220600,0.514800,4.513500), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf, true);
				}
				__CurrentState = 8;
				break;
			}
		case 36:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[87], ECastCheckedType::NullAllowed), true);
				}
			}
		case 37:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[88], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 8;
				break;
			}
		case 38:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[89], ECastCheckedType::NullAllowed), true);
				}
			}
		case 39:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[90], ECastCheckedType::NullAllowed));
				}
			}
		case 40:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->USceneComponent::K2_SetRelativeLocation(FVector(6.314000,-0.219810,4.244000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_3__pf, true);
				}
				__CurrentState = 8;
				break;
			}
		case 41:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[91], ECastCheckedType::NullAllowed), true);
				}
			}
		case 42:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[92], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 8;
				break;
			}
		case 43:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[93], ECastCheckedType::NullAllowed), true);
				}
			}
		case 44:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnemyShootingCh_C__pf3349424045::StaticClass())->UsedAssets[94], ECastCheckedType::NullAllowed));
				}
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__SumPoints__pf(AActor* bpp__ActorWhoDied__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item_1__pf{};
	AEnemyDogCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf = false;
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf);
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__DeathActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(24);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__DeathActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf, bpp__ActorWhoDied__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpv__ActorIsAlreadyDeath__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 11:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 12:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__DeathActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 14:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 15:
			{
				__StateStack.Push(25);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__DeathActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf = Cast<AEnemyDogCh_C__pf3349424045>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf, bpp__ActorWhoDied__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				bpv__ActorIsAlreadyDeath__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				if (!bpv__ActorIsAlreadyDeath__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 20:
			{
				bpv__ActorIsAlreadyDeath__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__DeathActors__pf, bpp__ActorWhoDied__pf);
			}
		case 22:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf))
				{
					bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpf__SumPoints__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 13;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__CheckExtraAmmo__pf()
{
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
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
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("Save_File")), 0);
			}
		case 2:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 4:
			{
				bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bool  __Local__245 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__ExtraAmmoRifle__pf) : (__Local__245)))
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				bpv__ExtraAmmoRifle__pf = true;
			}
		case 7:
			{
				bool  __Local__246 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__ExtraAmmoShotgun__pf) : (__Local__246)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				bpv__ExtraAmmoShotgun__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__LoadPowerUp__pf()
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	UMyGameInstance_C__pf2410127383* bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	USaveGameBP_C__pf4030252459* bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
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
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bool  __Local__247 = false;
				bpv__CanActivatePowerUp__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__PowerUpUnlocked__pf) : (__Local__247));
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
				bool  __Local__248 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__GodxxxAccesToAllLevels__pfGG_) : (__Local__248)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bpv__CanActivatePowerUp__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__MakePosesionEffect__pf()
{
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	APossesionEffect_C__pf2815001878* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, APossesionEffect_C__pf2815001878::StaticClass(), bpfv__CallFunc_GetTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
	bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<APossesionEffect_C__pf2815001878>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_GetTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__ActorRef__pf = this;
	}
}
void AEnemyShootingCh_C__pf3349424045::bpf__MuzzleFlashRotation__pf()
{
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf{};
	if(::IsValid(bpv__MuzzleFlash__pf))
	{
		bpv__MuzzleFlash__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(0.220410,0.804810,-1.189260), FRotator(4.341254,95.628647,-0.463470), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, true);
	}
}
void AEnemyShootingCh_C__pf3349424045::bpf__FloatWithMaxAndMin__pf(float bpp__xMax__pfI, float bpp__xMin__pfI, float bpp__xMax__pfG, float bpp__xMin__pfG, /*out*/ float& bpp__Return__pf)
{
	float bpfv__DispersionReturn__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpp__xMax__pfG, bpp__xMax__pfI);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpp__xMax__pfG, bpp__xMax__pfI);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, bpp__xMax__pfG, bpp__xMin__pfG);
				bpfv__DispersionReturn__pf = bpfv__CallFunc_FClamp_ReturnValue__pf;
			}
		case 3:
			{
				bpp__Return__pf = bpfv__DispersionReturn__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpp__xMax__pfG, bpp__xMax__pfI);
				bpfv__CallFunc_FClamp_ReturnValue_1__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, bpp__xMin__pfI, bpp__xMax__pfI);
				bpfv__DispersionReturn__pf = bpfv__CallFunc_FClamp_ReturnValue_1__pf;
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AEnemyShootingCh_C__pf3349424045::bpf__SpawnPossesionPS__pf(AActor* bpp__TargetActor__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FParticleSysParam bpfv__K2Node_MakeStruct_ParticleSysParam__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	APossesionPS_C__pf386987942* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	FParticleSysParam bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf{};
	TArray<FParticleSysParam> bpfv__K2Node_MakeArray_Array__pf{};
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, APossesionPS_C__pf386987942::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<APossesionPS_C__pf386987942>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.Name = FName(TEXT("Target"));
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.ParamType = EParticleSysParamType::PSPT_Actor;
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.Scalar = 0.000000;
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.Scalar_Low = 0.000000;
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.Vector = FVector(0.000000,0.000000,0.000000);
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.Vector_Low = FVector(0.000000,0.000000,0.000000);
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.Color = FColor(0,0,0,0);
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.Actor = bpp__TargetActor__pf;
	bpfv__K2Node_MakeStruct_ParticleSysParam__pf.Material = ((UMaterialInterface*)nullptr);
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.Name = FName(TEXT("Source"));
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.ParamType = EParticleSysParamType::PSPT_Actor;
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.Scalar = 0.000000;
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.Scalar_Low = 0.000000;
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.Vector = FVector(0.000000,0.000000,0.000000);
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.Vector_Low = FVector(0.000000,0.000000,0.000000);
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.Color = FColor(0,0,0,0);
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.Actor = this;
	bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf.Material = ((UMaterialInterface*)nullptr);
	bpfv__K2Node_MakeArray_Array__pf.SetNum(2, true);
	bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__K2Node_MakeStruct_ParticleSysParam_1__pf;
	bpfv__K2Node_MakeArray_Array__pf[1] = bpfv__K2Node_MakeStruct_ParticleSysParam__pf;
	if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf) && ::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__ParticleSystem__pf))
	{
		bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__ParticleSystem__pf->InstanceParameters = bpfv__K2Node_MakeArray_Array__pf;
	}
}
void AEnemyShootingCh_C__pf3349424045::bpf__RandPointInCircle__pf(/*out*/ float& bpp__Radiuss__pf, /*out*/ float& bpp__PointZ__pf)
{
	float bpfv__DistanceFromCenter__pf{};
	float bpfv__Angle__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpfv__CallFunc_DegTan_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 360.000000);
	bpfv__Angle__pf = bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf;
	bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, bpp__Radiuss__pf);
	bpfv__DistanceFromCenter__pf = bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf;
	bpfv__CallFunc_DegTan_ReturnValue__pf = UKismetMathLibrary::DegTan(bpfv__Angle__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__DistanceFromCenter__pf, bpfv__CallFunc_DegTan_ReturnValue__pf);
	bpp__PointZ__pf = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf;
}
void AEnemyShootingCh_C__pf3349424045::bpf__InitGodMode__pf()
{
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
				bool  __Local__249 = false;
				bpv__IsGodModeActive__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsGodModeActive__pf) : (__Local__249));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void AEnemyShootingCh_C__pf3349424045::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Rifle_Walk_mixamo_com.Rifle_Walk_mixamo_com 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy1/EnemyType1.EnemyType1 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/Enemy1_MAT.Enemy1_MAT 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/_Eye_trans._Eye_trans 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ka47/SM_KA47.SM_KA47 
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
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/GasMask/GasMask.GasMask 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Circle/Circulo1_Mat.Circulo1_Mat 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/Art/Circle/Circulo3_Sprite.Circulo3_Sprite 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Weapons/RPG/RPGNoAmmoStatic.RPGNoAmmoStatic 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/NoAmmo/NoAmmo.NoAmmo 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Blood/Splatter_PS.Splatter_PS 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShoot.ShotgunShoot 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Rifle/RifleShoot.RifleShoot 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Sniper/SniperShoot.SniperShoot 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShootNoBump1.ShotgunShootNoBump1 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorShooting/ShootingAITree.ShootingAITree 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSuicide/SuicideAITree.SuicideAITree 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSniper/SniperAITree.SniperAITree 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSlave/SlaveAITree.SlaveAITree 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Blood/Splatters_Decal_M.Splatters_Decal_M 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Death1.Death1 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ka47/M_KA47.M_KA47 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Shotgun_StaticMesh.Shotgun_StaticMesh 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/BLS_Shotgun/Materials/Black/MI_Black_Tex1.MI_Black_Tex1 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/M9_Knife/SM_M9_Knife.SM_M9_Knife 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/M9_Knife/M_M9_Knife.M_M9_Knife 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Knife/KnifeShoot.KnifeShoot 
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
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave1/SlaveMesh1.SlaveMesh1 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave1/BodySlave1.BodySlave1 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave2/Slave2NoArms.Slave2NoArms 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave2/BodySlave2.BodySlave2 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave3/Slave3NoArms.Slave3NoArms 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave3/BodySlave3.BodySlave3 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeRifle.CameraShakeRifle_C 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeShotgun.CameraShakeShotgun_C 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeSniper.CameraShakeSniper_C 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/M4A4_Animated/Sounds/Sound_Packs/Warfare_SFX_Bundle/Gun_Sound_Essentials/Wavs/Shotgun01.Shotgun01 
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
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AEnemyShootingCh_C__pf3349424045::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{665, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/BaseCharacter.BaseCharacter_C 
		{71, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{48, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{80, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpotLightComponent 
		{96, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PointLightComponent 
		{97, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/FMODStudio.FMODAudioComponent 
		{98, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperSpriteComponent 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/FMODStudio.FMODEventInstance 
		{106, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.ParticleCollisionSignature__DelegateSignature 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/FMODStudio.FMODBlueprintStatics 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{111, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LocalLightComponent 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.ParticleSysParam 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EParticleSysParamType 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeRifle_C /Game/CameraActor/CameraShakeRifle.Default__CameraShakeRifle_C 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeShotgun_C /Game/CameraActor/CameraShakeShotgun.Default__CameraShakeShotgun_C 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeSniper_C /Game/CameraActor/CameraShakeSniper.Default__CameraShakeSniper_C 
		{179, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MovementComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TargetPoint 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Alarm/ScannerMaterial.ScannerMaterial 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Enemies/Expose_Trans_Clean_MAT_Inst.Expose_Trans_Clean_MAT_Inst 
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
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMesh 
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
		{249, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Art/Enemies/Enemy1/EnemyType1_Skeleton.EnemyType1_Skeleton 
		{250, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{251, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{252, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{269, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{270, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Gun_Trace01.Gun_Trace01 
		{271, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{272, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ApexDestruction.DestructibleComponent 
		{273, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/Objects/Glass/GlassMesh_DM.GlassMesh_DM 
		{274, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/BLS_RattleSnake_Content/Materials/M_Glass.M_Glass 
		{275, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{276, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/BulletTracer/BulletTracerMAT2.BulletTracerMAT2 
		{265, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/SuicideRifle.SuicideRifle 
		{266, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/PlayerAnimations/Gunplay-Shooting.Gunplay-Shooting 
		{277, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleRPG_Final.IdleRPG_Final 
		{267, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerInEnemyBlendSpace.PlayerInEnemyBlendSpace 
		{650, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/SuicideKnifePreparation.SuicideKnifePreparation 
		{651, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/EnemyBlendSpaceKnife.EnemyBlendSpaceKnife 
		{268, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpace.PlayerBlendSpace 
		{279, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_762x51.SM_Shell_762x51 
		{280, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_762x39.SM_Shell_762x39 
		{281, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_762x39_Empty.M_762x39_Empty 
		{282, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_12Gauge.SM_Shell_12Gauge 
		{283, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_Ammo_12gauge.M_Ammo_12gauge 
		{284, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_40mm_G.SM_Shell_40mm_G 
		{285, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/Ammunition/M_40mm_Grenade.M_40mm_Grenade 
		{287, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/FreeFurniturePack/Meshes/SM_Old_Chair_DM.SM_Old_Chair_DM 
		{286, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DestructibleMesh /Game/FreeFurniturePack/Meshes/SM_Table_Lamp_DM.SM_Table_Lamp_DM 
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
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/OnlineSubsystemUtils.AchievementWriteDelegate__DelegateSignature 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary 
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
		{324, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/IdleStatic_PostApoc.IdleStatic_PostApoc 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{403, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{404, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{405, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{325, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/DialoguePlugin.Dialogue 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{326, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{327, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{328, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{329, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.KeyEvent 
		{330, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/DialoguePlugin.DialogueUserWidget 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{331, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.HorizontalBox 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Button_Overlap.Button_Overlap 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Button_Normal.Button_Normal 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Up.Gamepad_Stick_Up 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Down.Gamepad_Stick_Down 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_X.Gamepad_X 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Y.Gamepad_Y 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Left.Gamepad_Stick_Left 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Right.Gamepad_Stick_Right 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/28_Days_Later_Font.28_Days_Later_Font 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
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
		{319, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Petting_PostApoc.Petting_PostApoc 
		{320, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/DanceMoves_Anim_PostApoc.DanceMoves_Anim_PostApoc 
		{321, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Running_Anim_PostApoc.Running_Anim_PostApoc 
		{322, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/IdleTouchFloor_PostApoc.IdleTouchFloor_PostApoc 
		{323, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Idle_Anim_PostApoc.Idle_Anim_PostApoc 
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
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{399, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/DialoguePlugin.DialogueNode 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{400, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{401, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBoxSlot 
		{402, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.EventReply 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{332, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_R.Key_R 
		{333, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Escape.Escape 
		{334, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_A.Gamepad_A 
		{335, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_B.Gamepad_B 
		{336, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Start.Gamepad_Start 
		{337, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Select.Gamepad_Select 
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
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/Mouse/Mira.Mira 
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
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/MousePlayerController.MousePlayerController_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MousePlayerController_C /Game/ThirdPersonBP/Blueprints/MousePlayerController.Default__MousePlayerController_C 
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
		{546, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{547, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{548, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/ShotgunLogo.ShotgunLogo 
		{549, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/KnifeLogo.KnifeLogo 
		{550, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/SniperLogo.SniperLogo 
		{551, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/RPGLogo.RPGLogo 
		{552, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/AShotgunLogo.AShotgunLogo 
		{553, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.BackgroundBlur 
		{554, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{555, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScaleBox 
		{556, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level3.BK_Level3 
		{557, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level6.BK_Level6 
		{558, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level8.BK_Level8 
		{559, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level12.BK_Level12 
		{560, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Endgame.BK_Endgame 
		{561, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_02.Tip_02 
		{562, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_03.Tip_03 
		{563, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_04.Tip_04 
		{564, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_05.Tip_05 
		{565, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_06.Tip_06 
		{566, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_07.Tip_07 
		{567, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_08.Tip_08 
		{568, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_09.Tip_09 
		{569, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_10.Tip_10 
		{570, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Default.BK_Default 
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
		{595, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarMale_Mat.Target_AvatarMale_Mat 
		{596, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarFemale__Mat.Target_AvatarFemale__Mat 
		{597, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarRobot_Mat.Target_AvatarRobot_Mat 
		{598, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarHara_Mat.Target_AvatarHara_Mat 
		{599, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarKnight_Mat.Target_AvatarKnight_Mat 
		{600, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarCyber_Mat.Target_AvatarCyber_Mat 
		{601, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarAstro_Mat.Target_AvatarAstro_Mat 
		{602, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneCapture2D 
		{603, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/ChangeAvatar/lock.lock 
		{604, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/ChangeAvatar/Target_AvatarFemale_Mat.Target_AvatarFemale_Mat 
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
		{616, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
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
		{652, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_Thundara_02.Par_Thundara_02 
		{638, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/PossesionBeam/PossesionLightning_PT.PossesionLightning_PT 
		{653, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/BlendSpaceShooting.BlendSpaceShooting 
		{278, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/PlayerBlendSpaceKnife.PlayerBlendSpaceKnife 
		{634, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Hara/Hara_Anim/Combat/Demon_Combat_BS.Demon_Combat_BS 
		{635, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/AnimRobot/AvatarRobot_BS.AvatarRobot_BS 
		{636, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Rifle_Idle_PostApoc.Rifle_Idle_PostApoc 
		{637, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Art/Enemies/AnimationTree_Shooting/AvatarRifleBlendSpace.AvatarRifleBlendSpace 
		{639, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/BulletTracer/BulletTracerMAT.BulletTracerMAT 
		{642, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Extra_Ammo_Holder.SM_Extra_Ammo_Holder 
		{643, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/BLS_Shotgun/Materials/Black/MI_Black_Tex2.MI_Black_Tex2 
		{640, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/KA_Val/SM_KA_Val_X.SM_KA_Val_X 
		{641, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/FPS_Weapon_Bundle/Weapons/Materials/KA_Val/M_KA_Val.M_KA_Val 
		{644, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VFX_Toolkit_V1/StaticMeshes/Various/SM_MatraRocket_01.SM_MatraRocket_01 
		{645, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VFX_Toolkit_V1/StaticMeshes/Beams/SM_MatraThruster_01.SM_MatraThruster_01 
		{646, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VFX_Toolkit_V1/Materials/356Days/M_MatraThruster_01.M_MatraThruster_01 
		{647, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Missile/MissileExplosionFlesh.MissileExplosionFlesh 
		{648, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/M4A4/Sounds/Sound_Packs/W_SFX/Exp_Sound/Wavs/Explosion_Flesh_01.Explosion_Flesh_01 
		{649, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/M5VFXVOL2/Particles/Explosion/Fire_Exp_02.Fire_Exp_02 
		{759, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/Enemies/AnimationTree_Shooting/AnimBP_Shooting.AnimBP_Shooting_C 
		{696, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraActor.CameraActor_C 
		{748, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/BehaviorSniper/AISniperController.AISniperController_C 
		{747, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/BehaviorSuicide/AISuicideController.AISuicideController_C 
		{756, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/BehaviorSlave/AISlaveController.AISlaveController_C 
		{752, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/BehaviorShooting/AIShootingController.AIShootingController_C 
		{699, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/PickUps/RiflePickUp.RiflePickUp_C 
		{700, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/PickUps/ShotgunPickUp.ShotgunPickUp_C 
		{702, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/PickUps/SniperPickUp.SniperPickUp_C 
		{701, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/PickUps/KnifePickUp.KnifePickUp_C 
		{703, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/PickUps/RPGPickUp.RPGPickUp_C 
		{706, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/PickUps/AShotgunPickUp.AShotgunPickUp_C 
		{684, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C 
		{685, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/EnemyDogCh.EnemyDogCh_C 
		{707, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/PauseHUD.PauseHUD_C 
		{704, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/Bullets/MissileRPG.MissileRPG_C 
		{657, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/MyGameInstance/MyGameInstance.MyGameInstance_C 
		{746, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/Alarm/AlarmDetectorPawn.AlarmDetectorPawn_C 
		{705, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/LevelCompleter/LevelCompleterBP.LevelCompleterBP_C 
		{654, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/DieAgainGamemode.DieAgainGamemode_C 
		{760, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/BehaviorShooting/AIShootingPawn.AIShootingPawn_C 
		{761, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/BehaviorSuicide/AiSuicidePawn.AISuicidePawn_C 
		{762, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/BehaviorSniper/AISniperPawn.AISniperPawn_C 
		{763, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/BehaviorSlave/AiSlavePawn.AISlavePawn_C 
		{663, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/GamepadInteraction.GamepadInteraction_C 
		{678, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Chameleon/Chameleon.Chameleon_C 
		{708, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/Possesion_PS/PossesionPS.PossesionPS_C 
		{764, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/PossesionEffect/PossesionEffect.PossesionEffect_C 
		{677, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/SaveGame/SaveGameBP.SaveGameBP_C 
		{688, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Art/DestructibleMesh/Curved_Pipe.Curved_Pipe_C 
		{689, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Art/DestructibleMesh/Pipe.Pipe_C 
		{694, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/Barrel/ExplosiveBarrel.ExplosiveBarrel_C 
		{690, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Art/DestructibleMesh/Light_01.Light_01_C 
		{692, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Art/DestructibleMesh/Table_Lamp.Table_Lamp_C 
		{691, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Art/DestructibleMesh/Old_Chair.Old_Chair_C 
		{693, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/Glass/Glass.Glass_C 
		{712, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/Bullets/Bullet_Actor.Bullet_Actor_C 
		{719, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/Enemies/PlayerAnimations/PlayerRifleInEnemyAnimBP.PlayerRifleInEnemyAnimBP_C 
		{720, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/Enemies/PlayerAnimations/PlayerHeavyInEnemyAnimBP.PlayerHeavyInEnemyAnimBP_C 
		{721, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/Enemies/PlayerAnimations/PlayerAnimKnifeInEnemyBP.PlayerAnimKnifeInEnemyBP_C 
		{765, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/Enemies/AnimationTree_Shooting/EnemyKnifeAnimBP.EnemyKnifeAnimBP_C 
		{766, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/Enemies/PlayerAnimations/PlayerRPGInEnemyWeaponAnimBP.PlayerRPGInEnemyWeaponAnimBP_C 
		{717, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Art/BulletTracer/BulletTracerActor.BulletTracerActor_C 
		{718, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Art/BulletTracer/Bullet_Trail.Bullet_Trail_C 
		{753, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Objects/Alarm/Alarm.Alarm_C 
		{695, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Enemies/EnumWeapon.EnumWeapon 
		{757, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Enemies/EnumTypesOfCharacters.EnumTypesOfCharacters 
		{722, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Enemies/EnumCameraType.EnumCameraType 
		{758, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Enemies/EnumState.EnumState 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AEnemyShootingCh_C__pf3349424045
{
	FRegisterHelper__AEnemyShootingCh_C__pf3349424045()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Enemies/EnemyShootingCh"), &AEnemyShootingCh_C__pf3349424045::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AEnemyShootingCh_C__pf3349424045 Instance;
};
FRegisterHelper__AEnemyShootingCh_C__pf3349424045 FRegisterHelper__AEnemyShootingCh_C__pf3349424045::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
