#include "NativizedAssets.h"
#include "Door_A_BP__pf116893152.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
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
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ADoor_A_BP_C__pf116893152::ADoor_A_BP_C__pf116893152(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Door_Small_A__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door_Small_A"));
	bpv__Key1__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key1"));
	bpv__Key2__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key2"));
	bpv__Key3__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key3"));
	bpv__Key4__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key4"));
	bpv__Key5__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key5"));
	bpv__Key3b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key3b"));
	bpv__Key7__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key7"));
	bpv__Key8__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key8"));
	bpv__Key9__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key9"));
	bpv__Key1b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key1b"));
	bpv__Key2b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key2b"));
	bpv__Key6__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key6"));
	bpv__Key4b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key4b"));
	bpv__Key5b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key5b"));
	bpv__Key6b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key6b"));
	bpv__Key7b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key7b"));
	bpv__Key8b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key8b"));
	bpv__Key9b__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Key9b"));
	bpv__Cautionb__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Cautionb"));
	bpv__Caution__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Caution"));
	bpv__Door_Small_UI__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door_Small_UI"));
	bpv__Door_Small_A_Glass__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door_Small_A_Glass"));
	bpv__Trigger__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	bpv__SteamDoor__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SteamDoor"));
	bpv__SteamDoor2__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SteamDoor2"));
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
	bpv__Door_Small_A__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Door_Small_A__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Door_Small_A__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Door_Small_A__pf), true, 0));
	bpv__Key1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key1__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key1__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__3 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__Key1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__4 = FVector(6.801502, -31.507030, 146.198334);
	auto& __Local__5 = (*(AccessPrivateProperty<FRotator >((bpv__Key1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__5 = FRotator(25.200090, -0.000030, 90.000061);
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__Key1__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__6 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key1__pf), false, 0));
	bpv__Key2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key2__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__7 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key2__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__7 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__Key2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__8 = FVector(6.801493, -33.609062, 146.198334);
	auto& __Local__9 = (*(AccessPrivateProperty<FRotator >((bpv__Key2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__9 = FRotator(25.200172, -0.000005, 89.999977);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__Key2__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__10 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key2__pf), false, 0));
	bpv__Key3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key3__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key3__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__11 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__Key3__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(6.801596, -35.685860, 146.198334);
	auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((bpv__Key3__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__13 = FRotator(25.200172, -0.000005, 89.999977);
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__Key3__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__14 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key3__pf), false, 0));
	bpv__Key4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key4__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key4__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__15 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__Key4__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(7.870320, -31.507030, 143.927673);
	auto& __Local__17 = (*(AccessPrivateProperty<FRotator >((bpv__Key4__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__17 = FRotator(25.200172, -0.000005, 89.999977);
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__Key4__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__18 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key4__pf), false, 0));
	bpv__Key5__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key5__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key5__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__19 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__Key5__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__20 = FVector(7.850331, -33.609062, 143.927673);
	auto& __Local__21 = (*(AccessPrivateProperty<FRotator >((bpv__Key5__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__21 = FRotator(25.200172, -0.000005, 89.999977);
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__Key5__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__22 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key5__pf), false, 0));
	bpv__Key3b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key3b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__23 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key3b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__23 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__Key3b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__24 = FVector(-6.780550, -31.550194, 146.116058);
	auto& __Local__25 = (*(AccessPrivateProperty<FRotator >((bpv__Key3b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__25 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__26 = (*(AccessPrivateProperty<FVector >((bpv__Key3b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__26 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key3b__pf), false, 0));
	bpv__Key7__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key7__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__27 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key7__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__27 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__Key7__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__28 = FVector(8.922140, -31.507030, 141.692032);
	auto& __Local__29 = (*(AccessPrivateProperty<FRotator >((bpv__Key7__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__29 = FRotator(25.200172, -0.000005, 89.999977);
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__Key7__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__30 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key7__pf), false, 0));
	bpv__Key8__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key8__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__31 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key8__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__31 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	auto& __Local__32 = (*(AccessPrivateProperty<FVector >((bpv__Key8__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__32 = FVector(8.910662, -33.609062, 141.692032);
	auto& __Local__33 = (*(AccessPrivateProperty<FRotator >((bpv__Key8__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__33 = FRotator(25.200172, -0.000005, 89.999977);
	auto& __Local__34 = (*(AccessPrivateProperty<FVector >((bpv__Key8__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__34 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key8__pf), false, 0));
	bpv__Key9__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key9__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__35 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key9__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__35 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	auto& __Local__36 = (*(AccessPrivateProperty<FVector >((bpv__Key9__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__36 = FVector(8.909622, -35.685860, 141.692032);
	auto& __Local__37 = (*(AccessPrivateProperty<FRotator >((bpv__Key9__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__37 = FRotator(25.200172, -0.000005, 89.999977);
	auto& __Local__38 = (*(AccessPrivateProperty<FVector >((bpv__Key9__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__38 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key9__pf), false, 0));
	bpv__Key1b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key1b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__39 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key1b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__39 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__40 = (*(AccessPrivateProperty<FVector >((bpv__Key1b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__40 = FVector(-6.780503, -35.710663, 146.116058);
	auto& __Local__41 = (*(AccessPrivateProperty<FRotator >((bpv__Key1b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__41 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__42 = (*(AccessPrivateProperty<FVector >((bpv__Key1b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__42 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key1b__pf), false, 0));
	bpv__Key2b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key2b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__43 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key2b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__43 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__44 = (*(AccessPrivateProperty<FVector >((bpv__Key2b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__44 = FVector(-6.780607, -33.680023, 146.116058);
	auto& __Local__45 = (*(AccessPrivateProperty<FRotator >((bpv__Key2b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__45 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__46 = (*(AccessPrivateProperty<FVector >((bpv__Key2b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__46 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key2b__pf), false, 0));
	bpv__Key6__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key6__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__47 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key6__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__47 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	auto& __Local__48 = (*(AccessPrivateProperty<FVector >((bpv__Key6__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__48 = FVector(7.847868, -35.685860, 143.927673);
	auto& __Local__49 = (*(AccessPrivateProperty<FRotator >((bpv__Key6__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__49 = FRotator(25.200172, -0.000005, 89.999977);
	auto& __Local__50 = (*(AccessPrivateProperty<FVector >((bpv__Key6__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__50 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key6__pf), false, 0));
	bpv__Key4b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key4b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__51 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key4b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__51 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__52 = (*(AccessPrivateProperty<FVector >((bpv__Key4b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__52 = FVector(-7.844671, -35.710663, 143.855713);
	auto& __Local__53 = (*(AccessPrivateProperty<FRotator >((bpv__Key4b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__53 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__54 = (*(AccessPrivateProperty<FVector >((bpv__Key4b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__54 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key4b__pf), false, 0));
	bpv__Key5b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key5b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__55 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key5b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__55 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	auto& __Local__56 = (*(AccessPrivateProperty<FVector >((bpv__Key5b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__56 = FVector(-7.874655, -33.680023, 143.855713);
	auto& __Local__57 = (*(AccessPrivateProperty<FRotator >((bpv__Key5b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__57 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__58 = (*(AccessPrivateProperty<FVector >((bpv__Key5b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__58 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key5b__pf), false, 0));
	bpv__Key6b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key6b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__59 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key6b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__59 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	auto& __Local__60 = (*(AccessPrivateProperty<FVector >((bpv__Key6b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__60 = FVector(-7.864640, -31.550194, 143.855713);
	auto& __Local__61 = (*(AccessPrivateProperty<FRotator >((bpv__Key6b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__61 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__62 = (*(AccessPrivateProperty<FVector >((bpv__Key6b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__62 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key6b__pf), false, 0));
	bpv__Key7b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key7b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__63 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key7b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__63 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	auto& __Local__64 = (*(AccessPrivateProperty<FVector >((bpv__Key7b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__64 = FVector(-8.871976, -35.710663, 141.672043);
	auto& __Local__65 = (*(AccessPrivateProperty<FRotator >((bpv__Key7b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__65 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__66 = (*(AccessPrivateProperty<FVector >((bpv__Key7b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__66 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key7b__pf), false, 0));
	bpv__Key8b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key8b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__67 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key8b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__67 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	auto& __Local__68 = (*(AccessPrivateProperty<FVector >((bpv__Key8b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__68 = FVector(-8.858941, -33.680023, 141.672043);
	auto& __Local__69 = (*(AccessPrivateProperty<FRotator >((bpv__Key8b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__69 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__70 = (*(AccessPrivateProperty<FVector >((bpv__Key8b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__70 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key8b__pf), false, 0));
	bpv__Key9b__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Key9b__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__71 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Key9b__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__71 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	auto& __Local__72 = (*(AccessPrivateProperty<FVector >((bpv__Key9b__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__72 = FVector(-8.875876, -31.550194, 141.672043);
	auto& __Local__73 = (*(AccessPrivateProperty<FRotator >((bpv__Key9b__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__73 = FRotator(25.200090, -179.999969, 90.000076);
	auto& __Local__74 = (*(AccessPrivateProperty<FVector >((bpv__Key9b__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__74 = FVector(0.003000, 0.003000, -0.003000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Key9b__pf), false, 0));
	bpv__Cautionb__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Cautionb__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__75 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Cautionb__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__75 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	auto& __Local__76 = (*(AccessPrivateProperty<FVector >((bpv__Cautionb__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__76 = FVector(-9.571859, 0.000951, 61.422081);
	auto& __Local__77 = (*(AccessPrivateProperty<FRotator >((bpv__Cautionb__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__77 = FRotator(-0.000246, 0.000031, 89.999954);
	auto& __Local__78 = (*(AccessPrivateProperty<FVector >((bpv__Cautionb__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__78 = FVector(0.035000, 0.035000, 0.070000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Cautionb__pf), false, 0));
	bpv__Caution__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Caution__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__79 = (*(AccessPrivateProperty<UMaterialInterface* >((bpv__Caution__pf), UDecalComponent::__PPO__DecalMaterial() )));
	__Local__79 = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	auto& __Local__80 = (*(AccessPrivateProperty<FVector >((bpv__Caution__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__80 = FVector(9.593727, 0.000527, 61.422009);
	auto& __Local__81 = (*(AccessPrivateProperty<FRotator >((bpv__Caution__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__81 = FRotator(0.000000, -179.999634, 89.999939);
	auto& __Local__82 = (*(AccessPrivateProperty<FVector >((bpv__Caution__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__82 = FVector(0.035000, 0.035000, 0.070000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Caution__pf), false, 0));
	bpv__Door_Small_UI__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Door_Small_UI__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__83 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Door_Small_UI__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__83 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpv__Door_Small_UI__pf->bUseDefaultCollision = true;
	bpv__Door_Small_UI__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Door_Small_UI__pf->OverrideMaterials.Reserve(1);
	bpv__Door_Small_UI__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed));
	auto& __Local__84 = (*(AccessPrivateProperty<FVector >((bpv__Door_Small_UI__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__84 = FVector(0.000007, 0.000000, 0.000000);
	auto& __Local__85 = (*(AccessPrivateProperty<FRotator >((bpv__Door_Small_UI__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__85 = FRotator(0.000020, -0.000004, 0.000004);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Door_Small_UI__pf), true, 0));
	bpv__Door_Small_A_Glass__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Door_Small_A_Glass__pf->AttachToComponent(bpv__Door_Small_A__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__86 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Door_Small_A_Glass__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__86 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	bpv__Door_Small_A_Glass__pf->bUseDefaultCollision = true;
	auto& __Local__87 = (*(AccessPrivateProperty<FVector >((bpv__Door_Small_A_Glass__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__87 = FVector(-0.000001, -0.000004, 0.000000);
	auto& __Local__88 = (*(AccessPrivateProperty<FRotator >((bpv__Door_Small_A_Glass__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__88 = FRotator(0.000020, -0.000004, 0.000004);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Door_Small_A_Glass__pf), true, 0));
	bpv__Trigger__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Trigger__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Trigger__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__89 = (*(AccessPrivateProperty<FVector >((bpv__Trigger__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__89 = FVector(0.000000, 0.000000, 151.000000);
	auto& __Local__90 = (*(AccessPrivateProperty<FVector >((bpv__Trigger__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__90 = FVector(6.984920, 2.288818, 8.430756);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Trigger__pf), true, 0));
	bpv__SteamDoor__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SteamDoor__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SteamDoor__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	bpv__SteamDoor__pf->WarmupTime = 10.000000f;
	auto& __Local__91 = (*(AccessPrivateProperty<FVector >((bpv__SteamDoor__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__91 = FVector(0.000000, -75.000000, 35.000000);
	auto& __Local__92 = (*(AccessPrivateProperty<FRotator >((bpv__SteamDoor__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__92 = FRotator(0.000000, 0.000000, 39.375011);
	bpv__SteamDoor__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	bpv__SteamDoor__pf->bAutoActivate = false;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SteamDoor__pf), false, 0));
	bpv__SteamDoor2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SteamDoor2__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SteamDoor2__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(ADoor_A_BP_C__pf116893152::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	bpv__SteamDoor2__pf->WarmupTime = 10.000000f;
	auto& __Local__93 = (*(AccessPrivateProperty<FVector >((bpv__SteamDoor2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__93 = FVector(-0.000046, 75.000000, 35.000000);
	auto& __Local__94 = (*(AccessPrivateProperty<FRotator >((bpv__SteamDoor2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__94 = FRotator(0.000041, -179.999954, 39.374687);
	bpv__SteamDoor2__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	bpv__SteamDoor2__pf->bAutoActivate = false;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SteamDoor2__pf), false, 0));
	bpv__Timeline_0_DoorPosition_82357DCC478D1E67DCBF5FB5CD310262__pf = 0.000000f;
	bpv__Timeline_0__Direction_82357DCC478D1E67DCBF5FB5CD310262__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__DoorOpen__pf = FVector(0.000000, 0.000000, 268.000000);
	bpv__DoorClosed__pf = FVector(0.000000, 0.000000, 0.000000);
	auto& __Local__95 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__95 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ADoor_A_BP_C__pf116893152::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Door_Small_A__pf)
	{
		bpv__Door_Small_A__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key1__pf)
	{
		bpv__Key1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key2__pf)
	{
		bpv__Key2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key3__pf)
	{
		bpv__Key3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key4__pf)
	{
		bpv__Key4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key5__pf)
	{
		bpv__Key5__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key3b__pf)
	{
		bpv__Key3b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key7__pf)
	{
		bpv__Key7__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key8__pf)
	{
		bpv__Key8__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key9__pf)
	{
		bpv__Key9__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key1b__pf)
	{
		bpv__Key1b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key2b__pf)
	{
		bpv__Key2b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key6__pf)
	{
		bpv__Key6__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key4b__pf)
	{
		bpv__Key4b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key5b__pf)
	{
		bpv__Key5b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key6b__pf)
	{
		bpv__Key6b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key7b__pf)
	{
		bpv__Key7b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key8b__pf)
	{
		bpv__Key8b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Key9b__pf)
	{
		bpv__Key9b__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Cautionb__pf)
	{
		bpv__Cautionb__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Caution__pf)
	{
		bpv__Caution__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Door_Small_UI__pf)
	{
		bpv__Door_Small_UI__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Door_Small_A_Glass__pf)
	{
		bpv__Door_Small_A_Glass__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Trigger__pf)
	{
		bpv__Trigger__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SteamDoor__pf)
	{
		bpv__SteamDoor__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SteamDoor2__pf)
	{
		bpv__SteamDoor2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ADoor_A_BP_C__pf116893152::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__96 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__96);
	auto __Local__97 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__97);
	__Local__96->TimelineLength = 2.000000f;
	__Local__96->LengthMode = ETimelineLengthMode::TL_LastKeyFrame;
	__Local__96->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__96->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__96->FloatTracks.GetData(), 1);
	auto& __Local__98 = __Local__96->FloatTracks[0];
	auto __Local__99 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__99);
	__Local__99->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__99->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__99->FloatCurve.Keys.GetData(), 2);
	auto& __Local__100 = __Local__99->FloatCurve.Keys[0];
	__Local__100.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__101 = __Local__99->FloatCurve.Keys[1];
	__Local__101.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__101.Time = 2.000000f;
	__Local__101.Value = 1.000000f;
	__Local__98.CurveFloat = __Local__99;
	auto& __Local__102 = (*(AccessPrivateProperty<FName >(&(__Local__98), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__102 = FName(TEXT("Timeline_0_DoorPosition_82357DCC478D1E67DCBF5FB5CD310262"));
	auto& __Local__103 = (*(AccessPrivateProperty<FName >(&(__Local__98), FTTTrackBase::__PPO__TrackName() )));
	__Local__103 = FName(TEXT("DoorPosition"));
	__Local__96->TimelineGuid = FGuid(0x82357DCC, 0x478D1E67, 0xDCBF5FB5, 0xCD310262);
	auto& __Local__104 = (*(AccessPrivateProperty<FName >((__Local__96), UTimelineTemplate::__PPO__VariableName() )));
	__Local__104 = FName(TEXT("Timeline_0"));
	auto& __Local__105 = (*(AccessPrivateProperty<FName >((__Local__96), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__105 = FName(TEXT("Timeline_0__Direction_82357DCC478D1E67DCBF5FB5CD310262"));
	auto& __Local__106 = (*(AccessPrivateProperty<FName >((__Local__96), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__106 = FName(TEXT("Timeline_0__UpdateFunc"));
	auto& __Local__107 = (*(AccessPrivateProperty<FName >((__Local__96), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__107 = FName(TEXT("Timeline_0__FinishedFunc"));
	__Local__97->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__97->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__97->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__108 = __Local__97->ComponentDelegateBindings[0];
	__Local__108.ComponentPropertyName = FName(TEXT("Trigger"));
	__Local__108.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__108.FunctionNameToBind = FName(TEXT("BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__109 = __Local__97->ComponentDelegateBindings[1];
	__Local__109.ComponentPropertyName = FName(TEXT("Trigger"));
	__Local__109.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__109.FunctionNameToBind = FName(TEXT("BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ADoor_A_BP_C__pf116893152::bpf__ExecuteUbergraph_Door_A_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__SteamDoor__pf))
	{
		bpv__SteamDoor__pf->Activate(false);
	}
	if(::IsValid(bpv__SteamDoor2__pf))
	{
		bpv__SteamDoor2__pf->Activate(false);
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Timeline_0__pf))
	{
		bpv__Timeline_0__pf->UTimelineComponent::Play();
	}
	return; // KCST_GotoReturn
}
void ADoor_A_BP_C__pf116893152::bpf__ExecuteUbergraph_Door_A_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_VLerp_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_VLerp_ReturnValue__pf = UKismetMathLibrary::VLerp(bpv__DoorClosed__pf, bpv__DoorOpen__pf, bpv__Timeline_0_DoorPosition_82357DCC478D1E67DCBF5FB5CD310262__pf);
	if(::IsValid(bpv__Door_Small_A__pf))
	{
		bpv__Door_Small_A__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_VLerp_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	return; // KCST_GotoReturn
}
void ADoor_A_BP_C__pf116893152::bpf__ExecuteUbergraph_Door_A_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Timeline_0__pf))
	{
		bpv__Timeline_0__pf->UTimelineComponent::Reverse();
	}
	return; // KCST_GotoReturn
}
void ADoor_A_BP_C__pf116893152::bpf__ExecuteUbergraph_Door_A_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; // KCST_GotoReturn
}
void ADoor_A_BP_C__pf116893152::bpf__BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_Door_A_BP__pf_2(8);
}
void ADoor_A_BP_C__pf116893152::bpf__BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__110;
	T__Local__110& bpp__SweepResult__pf = *const_cast<T__Local__110 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_Door_A_BP__pf_0(6);
}
void ADoor_A_BP_C__pf116893152::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_Door_A_BP__pf_1(2);
}
void ADoor_A_BP_C__pf116893152::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_Door_A_BP__pf_3(1);
}
PRAGMA_DISABLE_OPTIMIZATION
void ADoor_A_BP_C__pf116893152::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{990, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ModSci_Engineer/Meshes/SM_Door_Small_A.SM_Door_Small_A 
		{991, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_1.MI_Text_1 
		{992, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_2.MI_Text_2 
		{993, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_3.MI_Text_3 
		{994, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_4.MI_Text_4 
		{995, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_5.MI_Text_5 
		{996, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_7.MI_Text_7 
		{997, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_8.MI_Text_8 
		{998, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_9.MI_Text_9 
		{999, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Text_Num/MI_Text_6.MI_Text_6 
		{1000, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/Decals/Signs/MI_Caution.MI_Caution 
		{1001, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ModSci_Engineer/Meshes/SM_Door_Small_UI.SM_Door_Small_UI 
		{1019, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/ModSci_Engineer/Materials/UI/MI_Door_Unlocked.MI_Door_Unlocked 
		{1002, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ModSci_Engineer/Meshes/SM_Door_Small_A_Glass.SM_Door_Small_A_Glass 
		{1020, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/ModSci_Engineer/Particles/PS_SteamDoor.PS_SteamDoor 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ADoor_A_BP_C__pf116893152::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{105, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{71, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{80, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{950, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{951, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ADoor_A_BP_C__pf116893152
{
	FRegisterHelper__ADoor_A_BP_C__pf116893152()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ModSci_Engineer/Blueprints/Door_A_BP"), &ADoor_A_BP_C__pf116893152::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ADoor_A_BP_C__pf116893152 Instance;
};
FRegisterHelper__ADoor_A_BP_C__pf116893152 FRegisterHelper__ADoor_A_BP_C__pf116893152::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
