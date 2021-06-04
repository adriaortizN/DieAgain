#include "NativizedAssets.h"
#include "Chameleon__pf565858488.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
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
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#include "Runtime/Engine/Classes/Components/MaterialBillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetRenderingLibrary.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTargetVolume.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2DArray.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "BlendModes__pf3652918773.h"
#include "LOOKCGStruct__pf2387075495.h"
#include "Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AChameleon_C__pf565858488::AChameleon_C__pf565858488(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__BoundingxBox__pfT = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounding Box"));
	bpv__InternalPP__pf = CreateDefaultSubobject<UPostProcessComponent>(TEXT("InternalPP"));
	bpv__MaterialBillboard__pf = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("MaterialBillboard"));
	RootComponent = bpv__BoundingxBox__pfT;
	bpv__BoundingxBox__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__BoundingxBox__pfT->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__BoundingxBox__pfT->ShapeColor = FColor(55, 154, 213, 255);
	bpv__BoundingxBox__pfT->SetCollisionProfileName(FName(TEXT("Trigger")));
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__BoundingxBox__pfT), true, 0));
	bpv__InternalPP__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__InternalPP__pf->AttachToComponent(bpv__BoundingxBox__pfT, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__InternalPP__pf->BlendRadius = 0.000000f;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__InternalPP__pf), false, 0));
	bpv__MaterialBillboard__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MaterialBillboard__pf->AttachToComponent(bpv__BoundingxBox__pfT, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__MaterialBillboard__pf->Elements = TArray<FMaterialSpriteElement> ();
	bpv__MaterialBillboard__pf->Elements.AddUninitialized(1);
	FMaterialSpriteElement::StaticStruct()->InitializeStruct(bpv__MaterialBillboard__pf->Elements.GetData(), 1);
	auto& __Local__2 = bpv__MaterialBillboard__pf->Elements[0];
	__Local__2.Material = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__2.BaseSizeX = 175.000000f;
	__Local__2.BaseSizeY = 175.000000f;
	__Local__2.DistanceToSizeCurve = CastChecked<UCurveFloat>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__MaterialBillboard__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__MaterialBillboard__pf), false, 0));
	bpv__BleachxBypass__pfT = false;
	bpv__DistancexFog__pfT = false;
	bpv__ChannelxClamper__pfT = false;
	bpv__mChannelClamper__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__iChannelClamper__pf = nullptr;
	bpv__ChannelxSwapper__pfT = false;
	bpv__ScreenxDrops__pfT = false;
	bpv__Alcohol__pf = false;
	bpv__Drug__pf = false;
	bpv__Mosaic__pf = false;
	bpv__PixelxDissolve__pfT = false;
	bpv__Blur__pf = false;
	bpv__mBleachBypass__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__mDistanceFog__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__mChannelSwapper__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__mScreenDrops__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__mAlcohol__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__mDrug__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__mMosaic__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__mPixelDissolve__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__mBlur__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpv__ChannelxClamperxRedxIntensity__pfTTT = 1.000000f;
	bpv__ChannelxClamperxGreenxIntensity__pfTTT = 1.000000f;
	bpv__ChannelxClamperxBluexIntensity__pfTTT = 1.000000f;
	bpv__iBleachBypass__pf = nullptr;
	bpv__iDistanceFog__pf = nullptr;
	bpv__iChannelSwapper__pf = nullptr;
	bpv__ChannelxSwapperxRed__pfTT = E__ColorChannels__pf::NewEnumerator0;
	bpv__ChannelxSwapperxGreen__pfTT = E__ColorChannels__pf::NewEnumerator1;
	bpv__ChannelxSwapperxBlue__pfTT = E__ColorChannels__pf::NewEnumerator2;
	bpv__iScreenDrops__pf = nullptr;
	bpv__iAlcohol__pf = nullptr;
	bpv__iDrug__pf = nullptr;
	bpv__iMosaic__pf = nullptr;
	bpv__iPixelDissolve__pf = nullptr;
	bpv__iBlur__pf = nullptr;
	bpv__ScreenxDropsxLayerx1xMap__pfTTTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	bpv__ScreenxDropsxLayerx1xIntensity__pfTTTT = 0.200000f;
	bpv__MosaicxScale__pfT = 200.000000f;
	bpv__AlcoholxSpeed__pfT = 1.000000f;
	bpv__DrugxSpeed__pfT = 2.000000f;
	bpv__PixelxDissolvexIntensity__pfTT = 1.000000f;
	bpv__BlurxAmount__pfT = 0.200000f;
	bpv__ASCII__pf = false;
	bpv__mAscii__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	bpv__iAscii__pf = nullptr;
	bpv__Colorize__pf = false;
	bpv__mColorize__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	bpv__iColorize__pf = nullptr;
	bpv__ColorizexDetail__pfT = 3.000000f;
	bpv__Comic__pf = false;
	bpv__mComic__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	bpv__iComic__pf = nullptr;
	bpv__ComicxBlendxColor__pfTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__ComicxThreshold__pfT = 0.370000f;
	bpv__EdgexDetect__pfT = false;
	bpv__mEdgeDetect__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	bpv__iEdgeDetect__pf = nullptr;
	bpv__Emboss__pf = false;
	bpv__mEmboss__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
	bpv__iEmboss__pf = nullptr;
	bpv__Glitch__pf = false;
	bpv__mGlitch__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
	bpv__iGlitch__pf = nullptr;
	bpv__GlitchxSpeed__pfT = 7.000000f;
	bpv__GlitchxLines__pfT = 20.000000f;
	bpv__GlitchxBlocking__pfT = 0.050000f;
	bpv__MonitorxEffects__pfT = false;
	bpv__mGrainNLines__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	bpv__iGrainNLines__pf = nullptr;
	bpv__MonitorxEffectsxLinexCount__pfTTT = 1000.000000f;
	bpv__MonitorxEffectsxIntensityx1__pfTTT = 2.000000f;
	bpv__MonitorxEffectsxIntensityx2__pfTTT = 0.300000f;
	bpv__HardxEmboss__pfT = false;
	bpv__mHardEmboss__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed);
	bpv__iHardEmboss__pf = nullptr;
	bpv__HuexPanner__pfT = false;
	bpv__mHuePanner__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed);
	bpv__iHuePanner__pf = nullptr;
	bpv__HuexPannerxSpeed__pfTT = 2.000000f;
	bpv__Monochrome__pf = false;
	bpv__mMonochrome__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed);
	bpv__iMonochrome__pf = nullptr;
	bpv__MonochromexColor__pfT = FLinearColor(0.000000, 0.491777, 1.000000, 1.000000);
	bpv__RadialxBlur__pfT = false;
	bpv__mRadialBlur__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed);
	bpv__iRadialBlur__pf = nullptr;
	bpv__RadialxBlurxWidth__pfTT = 0.500000f;
	bpv__RadialxBlurxSamples__pfTT = 8;
	bpv__Scratches__pf = false;
	bpv__mScratches__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed);
	bpv__iScratches__pf = nullptr;
	bpv__ScreenxWaves__pfT = false;
	bpv__mScreenWaves__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed);
	bpv__iScreenWaves__pf = nullptr;
	bpv__ScreenxWavesxXxTiling__pfTTT = 35.000000f;
	bpv__ScreenxWavesxYxTiling__pfTTT = 35.000000f;
	bpv__MonitorxEffectsxDistortionx1__pfTTT = 0.010000f;
	bpv__MonitorxEffectsxDistortionx2__pfTTT = 1.000000f;
	bpv__MonitorxEffectsxPicturexScale__pfTTT = 0.700000f;
	bpv__DistancexFogxNearxColor__pfTTT = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	bpv__DistancexFogxFarxColor__pfTTT = FLinearColor(1.000000, 1.000000, 1.000000, 0.750000);
	bpv__DistancexFogxDistance__pfTT = 6.000000f;
	bpv__ScratchesxDistortionxMap__pfTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[26], ECastCheckedType::NullAllowed);
	bpv__ScratchesxDistortionxAmount__pfTT = 0.500000f;
	bpv__ScratchesxColor__pfT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__ScreenxDropsxLayerx1xSpeed__pfTTTT = 0.100000f;
	bpv__ScreenxDropsxLayerx1xNoise__pfTTTT = 0.250000f;
	bpv__ScreenxDropsxLayerx2xMap__pfTTTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[27], ECastCheckedType::NullAllowed);
	bpv__ScreenxDropsxLayerx2xIntensity__pfTTTT = 0.200000f;
	bpv__ScreenxDropsxLayerx2xSpeed__pfTTTT = 0.200000f;
	bpv__ScreenxDropsxLayerx2xNoise__pfTTTT = 0.250000f;
	bpv__ScreenxDropsxLayerx3xMap__pfTTTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	bpv__ScreenxDropsxLayerx3xIntensity__pfTTTT = 0.200000f;
	bpv__ScreenxDropsxLayerx3xSpeed__pfTTTT = 0.300000f;
	bpv__Invert__pf = false;
	bpv__mInvert__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[28], ECastCheckedType::NullAllowed);
	bpv__iInvert__pf = nullptr;
	bpv__Iridescent__pf = false;
	bpv__mIridescent__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[29], ECastCheckedType::NullAllowed);
	bpv__iIridescent__pf = nullptr;
	bpv__IridescentxIridescence__pfT = 1.190000f;
	bpv__Kuwahara__pf = false;
	bpv__mKuwahara__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed);
	bpv__iKuwahara__pf = nullptr;
	bpv__KuwaharaxAmount__pfT = 2;
	bpv__Pulse__pf = false;
	bpv__mPulse__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[31], ECastCheckedType::NullAllowed);
	bpv__iPulse__pf = nullptr;
	bpv__PulsexCenterxX__pfTT = 0.500000f;
	bpv__PulsexCenterxY__pfTT = 0.500000f;
	bpv__PulsexSpeed__pfT = 1.000000f;
	bpv__PulsexSmoothing__pfT = 50.000000f;
	bpv__Squares__pf = false;
	bpv__mSquares__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[32], ECastCheckedType::NullAllowed);
	bpv__iSquares__pf = nullptr;
	bpv__SquaresxScale__pfT = 50.000000f;
	bpv__SquaresxRatio__pfT = 1.000000f;
	bpv__SquaresxRadius__pfT = 2.000000f;
	bpv__SquaresxBrightness__pfT = 1.000000f;
	bpv__Tiles__pf = false;
	bpv__mTiles__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[33], ECastCheckedType::NullAllowed);
	bpv__iTiles__pf = nullptr;
	bpv__TilesxCentered__pfT = true;
	bpv__TilesxCount__pfT = 5.000000f;
	bpv__TVxNoise__pfT = false;
	bpv__mTVNoise__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[34], ECastCheckedType::NullAllowed);
	bpv__iTVNoise__pf = nullptr;
	bpv__TVxNoisexContrast__pfTT = 2.000000f;
	bpv__TVxNoisexIntensity__pfTT = 0.500000f;
	bpv__NativexPostxProcess__pfTT.FilmHealAmount = 0.180000f;
	bpv__NativexPostxProcess__pfTT.BloomIntensity = 1.000000f;
	bpv__NativexPostxProcess__pfTT.BloomThreshold = 1.000000f;
	bpv__NativexPostxProcess__pfTT.Bloom1Size = 1.000000f;
	bpv__NativexPostxProcess__pfTT.Bloom2Size = 4.000000f;
	bpv__NativexPostxProcess__pfTT.Bloom3Size = 16.000000f;
	bpv__NativexPostxProcess__pfTT.Bloom4Size = 32.000000f;
	bpv__NativexPostxProcess__pfTT.Bloom5Size = 64.000000f;
	bpv__NativexPostxProcess__pfTT.Bloom1Tint = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	bpv__NativexPostxProcess__pfTT.Bloom2Tint = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	bpv__NativexPostxProcess__pfTT.Bloom3Tint = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	bpv__NativexPostxProcess__pfTT.Bloom4Tint = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	bpv__NativexPostxProcess__pfTT.Bloom5Tint = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	bpv__NativexPostxProcess__pfTT.Bloom6Tint = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	bpv__NativexPostxProcess__pfTT.BloomDirtMaskIntensity = 1.000000f;
	bpv__NativexPostxProcess__pfTT.DepthOfFieldBladeCount = 7;
	bpv__NativexPostxProcess__pfTT.AutoExposureBias = 0.000000f;
	bpv__NativexPostxProcess__pfTT.AutoExposureLowPercent = 80.000000f;
	bpv__NativexPostxProcess__pfTT.AutoExposureHighPercent = 98.300003f;
	bpv__NativexPostxProcess__pfTT.AutoExposureMaxBrightness = 2.000000f;
	bpv__NativexPostxProcess__pfTT.RayTracingGISamplesPerPixel = 1;
	bpv__LOOKx__pfS = false;
	bpv__LOOKxxPresets__pfST = E__LOOKPresetsEnum__pf::NewEnumerator0;
	bpv__Circles__pf = false;
	bpv__mCircles__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[35], ECastCheckedType::NullAllowed);
	bpv__iCircles__pf = nullptr;
	bpv__CirclesxRatio__pfT = 1.000000f;
	bpv__CirclesxTiling__pfT = 100.000000f;
	bpv__Sonar__pf = false;
	bpv__mSonar__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[36], ECastCheckedType::NullAllowed);
	bpv__iSonar__pf = nullptr;
	bpv__SonarxColor__pfT = FLinearColor(0.000000, 0.332433, 1.000000, 1.000000);
	bpv__SonarxColorxIntensity__pfTT = 1.000000f;
	bpv__SonarxDepth__pfT = 50.000000f;
	bpv__SonarxWavexDistance__pfTT = 650.000000f;
	bpv__SonarxDistortionxIntensity__pfTT = 0.020000f;
	bpv__SonarxSharpness__pfT = 6.700000f;
	bpv__AlcoholxOffset__pfT = 1.000000f;
	bpv__DistancexDistortion__pfT = false;
	bpv__mDistanceDistortion__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[37], ECastCheckedType::NullAllowed);
	bpv__iDistanceDistortion__pf = nullptr;
	bpv__DistancexDistortionxNormal__pfTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[38], ECastCheckedType::NullAllowed);
	bpv__DistancexDistortionxAmount__pfTT = 0.120000f;
	bpv__DistancexDistortionxEdgexDistance__pfTTT = 875.000000f;
	bpv__DistancexDistortionxEdgexFading__pfTTT = 0.000000f;
	bpv__DistancexDistortionxMovementxSpeed__pfTTT = 0.100000f;
	bpv__DistancexDistortionxMovementxScale__pfTTT = 0.200000f;
	bpv__DistancexDistortionxAffectedxBrightness__pfTTT = 0.000000f;
	bpv__DistancexDistortionxUnaffectedxBrightness__pfTTT = 0.000000f;
	bpv__Drawing__pf = false;
	bpv__mDrawing__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[39], ECastCheckedType::NullAllowed);
	bpv__iDrawing__pf = nullptr;
	bpv__DrawingxPaperxTexture__pfTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[40], ECastCheckedType::NullAllowed);
	bpv__DrawingxNoisexAlgorithm__pfTT = E__DrawingNoiseModes__pf::NewEnumerator0;
	bpv__DrawingxInkxAmount__pfTT = 0.100000f;
	bpv__DrawingxLinerxAmount__pfTT = 1.000000f;
	bpv__DrawingxBlendingxColor__pfTT = FLinearColor(0.239583, 0.201165, 0.192166, 1.000000);
	bpv__MagicxTransitions__pfT = false;
	bpv__mMagicTransitions__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[41], ECastCheckedType::NullAllowed);
	bpv__iMagicTransitions__pf = nullptr;
	bpv__MagicxTransitionsxFinalxTexture__pfTTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[42], ECastCheckedType::NullAllowed);
	bpv__MagicxTransitionsxMaskxTexture__pfTTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[43], ECastCheckedType::NullAllowed);
	bpv__MagicxTransitionsxTransitionxAmount__pfTTT = 0.250000f;
	bpv__MagicxTransitionsxFlashingxIntensity__pfTTT = 5.000000f;
	bpv__MagicxTransitionsxFlashingxTolerance__pfTTT = 0.030000f;
	bpv__MagicxTransitionsxFlashingxColor__pfTTT = FLinearColor(1.000000, 0.000000, 0.063044, 1.000000);
	bpv__ScreenxDamage__pfT = false;
	bpv__mScreenDamage__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[44], ECastCheckedType::NullAllowed);
	bpv__iScreenDamage__pf = nullptr;
	bpv__ScreenxDamagexTexture__pfTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[45], ECastCheckedType::NullAllowed);
	bpv__ScreenxDamagexTexture_Blue__pfTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[46], ECastCheckedType::NullAllowed);
	bpv__ScreenxDamagexIntensity__pfTT = 10.000000f;
	bpv__ScreenxDamagexDistortion__pfTT = 0.150000f;
	bpv__ScreenxDamagexTint__pfTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__ScreenxDamagexEdgexSize__pfTTT = 0.800000f;
	bpv__ScreenxDamagexFading__pfTT = 0.300000f;
	bpv__ScreenxDecals__pfT = false;
	bpv__mScreenDecals__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[47], ECastCheckedType::NullAllowed);
	bpv__iScreenDecals__pf = nullptr;
	bpv__ScreenxDecalsxSlotx1xxxTexture__pfTTTTGT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[48], ECastCheckedType::NullAllowed);
	bpv__ScreenxDecalsxSlotx1xxxDistortion__pfTTTTGT = 0.160000f;
	bpv__ScreenxDecalsxSlotx1xxxIntensity__pfTTTTGT = 1.000000f;
	bpv__ScreenxDecalsxSlotx1xxxPositionxX__pfTTTTGTT = 0.190000f;
	bpv__ScreenxDecalsxSlotx1xxxPositionxY__pfTTTTGTT = 0.260000f;
	bpv__ScreenxDecalsxSlotx1xxxRotation__pfTTTTGT = 0.000000f;
	bpv__ScreenxDecalsxSlotx1xxxSize__pfTTTTGT = 0.500000f;
	bpv__ScreenxDecalsxSlotx2xxxTexture__pfTTTTGT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[48], ECastCheckedType::NullAllowed);
	bpv__ScreenxDecalsxSlotx2xxxDistortion__pfTTTTGT = 0.160000f;
	bpv__ScreenxDecalsxSlotx2xxxIntensity__pfTTTTGT = 1.000000f;
	bpv__ScreenxDecalsxSlotx2xxxPositionxX__pfTTTTGTT = 0.600000f;
	bpv__ScreenxDecalsxSlotx2xxxPositionxY__pfTTTTGTT = 0.700000f;
	bpv__ScreenxDecalsxSlotx2xxxRotation__pfTTTTGT = 0.000000f;
	bpv__ScreenxDecalsxSlotx2xxxSize__pfTTTTGT = 0.500000f;
	bpv__ScreenxDecalsxSlotx3xxxTexture__pfTTTTGT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[48], ECastCheckedType::NullAllowed);
	bpv__ScreenxDecalsxSlotx3xxxDistortion__pfTTTTGT = 0.160000f;
	bpv__ScreenxDecalsxSlotx3xxxIntensity__pfTTTTGT = 1.000000f;
	bpv__ScreenxDecalsxSlotx3xxxPositionxX__pfTTTTGTT = 0.780000f;
	bpv__ScreenxDecalsxSlotx3xxxPositionxY__pfTTTTGTT = 0.480000f;
	bpv__ScreenxDecalsxSlotx3xxxRotation__pfTTTTGT = 0.000000f;
	bpv__ScreenxDecalsxSlotx3xxxSize__pfTTTTGT = 0.500000f;
	bpv__ScreenxDecalsxSlotx4xxxTexture__pfTTTTGT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[48], ECastCheckedType::NullAllowed);
	bpv__ScreenxDecalsxSlotx4xxxDistortion__pfTTTTGT = 0.160000f;
	bpv__ScreenxDecalsxSlotx4xxxIntensity__pfTTTTGT = 1.000000f;
	bpv__ScreenxDecalsxSlotx4xxxPositionxX__pfTTTTGTT = 0.350000f;
	bpv__ScreenxDecalsxSlotx4xxxPositionxY__pfTTTTGTT = 0.500000f;
	bpv__ScreenxDecalsxSlotx4xxxRotation__pfTTTTGT = 0.000000f;
	bpv__ScreenxDecalsxSlotx4xxxSize__pfTTTTGT = 0.500000f;
	bpv__Sharpen__pf = false;
	bpv__mSharpen__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[49], ECastCheckedType::NullAllowed);
	bpv__iSharpen__pf = nullptr;
	bpv__SharpenxValue__pfT = 1.000000f;
	bpv__ToonxShading__pfT = false;
	bpv__mToonShading__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[50], ECastCheckedType::NullAllowed);
	bpv__iToonShading__pf = nullptr;
	bpv__ToonxShadingxUsexDiffusexBuffer__pfTTTT = false;
	bpv__ToonxShadingxDetails__pfTT = 220.000000f;
	bpv__ToonxShadingxFadingx__pfTTT = 1024.000000f;
	bpv__ToonxShadingxSize__pfTT = 1.000000f;
	bpv__ToonxShadingxSobelxStrength__pfTTT = 0.000000f;
	bpv__AnamorphicxLensxFlares__pfTT = false;
	bpv__mAnamorphicLensFlares__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[51], ECastCheckedType::NullAllowed);
	bpv__iAnamorphicLensFlares__pf = nullptr;
	bpv__AnamorphicxLensxFlaresxLinearxColor__pfTTTT = 2.380000f;
	bpv__AnamorphicxLensxFlaresxExposurexScale__pfTTTT = 1.000000f;
	bpv__AnamorphicxLensxFlaresxThreshold__pfTTT = 3.000000f;
	bpv__AnamorphicxLensxFlaresxIntensity__pfTTT = 2.000000f;
	bpv__AnamorphicxLensxFlaresxSteps__pfTTT = 100.000000f;
	bpv__AnamorphicxLensxFlaresxLength__pfTTT = 0.070000f;
	bpv__AnamorphicxLensxFlaresxTint__pfTTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__Frost__pf = false;
	bpv__mFrost__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[52], ECastCheckedType::NullAllowed);
	bpv__iFrost__pf = nullptr;
	bpv__FrostxTexture__pfT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[53], ECastCheckedType::NullAllowed);
	bpv__FrostxColorization__pfT = 0.300000f;
	bpv__FrostxDistortionxStrength__pfTT = 2.000000f;
	bpv__FrostxVisiblexArea__pfTT = 1.000000f;
	bpv__ASCIIxColorxMultiplier__pfTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__Neon__pf = false;
	bpv__mNeon__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[54], ECastCheckedType::NullAllowed);
	bpv__iNeon__pf = nullptr;
	bpv__NeonxColor__pfT = FLinearColor(0.000000, 240.000000, 500.000000, 1.000000);
	bpv__NeonxBackgroundxColor__pfTT = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__NeonxPower__pfT = 1.000000f;
	bpv__NeonxNoise__pfT = 0.000000f;
	bpv__NeonxNoisexSpeed__pfTT = 0.020000f;
	bpv__CustomxDepthxHighlighter__pfTT = false;
	bpv__mCustomDepthHighlighter__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[55], ECastCheckedType::NullAllowed);
	bpv__iCustomDepthHighlighter__pf = nullptr;
	bpv__CustomxDepthxHighlighterxHighlightxColor__pfTTTT = FLinearColor(0.049707, 0.000000, 0.017642, 1.000000);
	bpv__CustomxDepthxHighlighterxHighlightxOpacity__pfTTTT = 0.200000f;
	bpv__CustomxDepthxHighlighterxxClipx__pfTTTLK = false;
	bpv__mCustomDepthHighlighterClip__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[56], ECastCheckedType::NullAllowed);
	bpv__iCustomDepthHighlighterClip__pf = nullptr;
	bpv__CustomxDepthxHighlighterxxCxxHighlightxColor__pfTTTLKTT = FLinearColor(0.000000, 0.049707, 0.080220, 1.000000);
	bpv__CustomxDepthxHighlighterxxCxxHighlightxOpacity__pfTTTLKTT = 0.200000f;
	bpv__EdgexDetectxThreshold__pfTT = 0.400000f;
	bpv__ScratchesxNoising__pfT = 1.000000f;
	bpv__Enabled__pf = true;
	bpv__Unbound__pf = true;
	bpv__AllMaterials__pf = TArray<UMaterial*> ();
	bpv__AllMaterials__pf.Reserve(128);
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[28], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[57], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[29], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[31], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[32], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[33], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[34], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[58], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[35], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[36], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[37], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[39], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[41], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[44], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[47], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[49], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[50], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[51], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[52], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[54], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[55], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[56], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[59], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[60], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[61], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[62], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[63], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[64], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[65], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[66], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[67], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[68], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[69], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[70], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[71], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[72], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[73], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[74], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[75], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[76], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[28], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[57], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[29], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[31], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[32], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[33], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[34], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[58], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[35], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[36], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[37], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[39], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[41], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[44], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[47], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[49], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[50], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[51], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[52], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[54], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[55], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[56], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[59], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[60], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[61], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[62], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[63], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[64], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[65], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[66], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[67], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[68], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[69], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[70], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[71], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[72], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[73], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[74], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[75], ECastCheckedType::NullAllowed));
	bpv__AllMaterials__pf.Add(CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[76], ECastCheckedType::NullAllowed));
	bpv__ScreenxDropsxLayerx3xNoise__pfTTTT = 0.250000f;
	bpv__ScreenxDropsxDiffusexColor__pfTTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__ScreenxDropsxSplashesxAmount__pfTTT = 2.000000f;
	bpv__ScreenxDropsxSplashesxTiling__pfTTT = 5.000000f;
	bpv__ScreenxDropsxSplashesxIntensity__pfTTT = 1.000000f;
	bpv__ScreenxDropsxBump__pfTT = 0.500000f;
	bpv__2DxTransform__pfT = false;
	bpv__m2DTransform__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[59], ECastCheckedType::NullAllowed);
	bpv__i2DTransform__pf = nullptr;
	bpv__Kaleidoscope__pf = false;
	bpv__mKaleidoscope__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[60], ECastCheckedType::NullAllowed);
	bpv__iKaleidoscope__pf = nullptr;
	bpv__Letterboxing__pf = false;
	bpv__mLetterboxing__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[61], ECastCheckedType::NullAllowed);
	bpv__iLetterboxing__pf = nullptr;
	bpv__Snow__pf = false;
	bpv__mSnow__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[62], ECastCheckedType::NullAllowed);
	bpv__iSnow__pf = nullptr;
	bpv__2DxTransformxAnchorxPointxxXx__pfTTTTLK = 0.500000f;
	bpv__2DxTransformxAnchorxPointxxYx__pfTTTTLK = 0.500000f;
	bpv__2DxTransformxRotate__pfTT = 0.000000f;
	bpv__2DxTransformxPanxxXx__pfTTTLK = 0.000000f;
	bpv__2DxTransformxPanxxYx__pfTTTLK = 0.000000f;
	bpv__2DxTransformxScalexxXx__pfTTTLK = 1.000000f;
	bpv__2DxTransformxScalexxYx__pfTTTLK = 1.000000f;
	bpv__2DxTransformxTiled__pfTT = false;
	bpv__KaleidoscopexAmount__pfT = 3;
	bpv__KaleidoscopexSphericalDistortion__pfT = 0.400000f;
	bpv__KaleidoscopexWarp__pfT = 10.000000f;
	bpv__KaleidoscopexFMul__pfT = 1.200000f;
	bpv__LetterboxingxTexture__pfT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[77], ECastCheckedType::NullAllowed);
	bpv__LetterboxingxSize__pfT = 0.140000f;
	bpv__LetterboxingxHorizontal__pfT = true;
	bpv__LetterboxingxVertical__pfT = false;
	bpv__SnowxAmount__pfT = 5.000000f;
	bpv__SnowxDistortion__pfT = 0.000000f;
	bpv__SnowxSize__pfT = 7.000000f;
	bpv__SnowxSpeedxxXx__pfTTLK = 500.000000f;
	bpv__SnowxSpeedxxYx__pfTTLK = 0.500000f;
	bpv__DrawingxAnimationxSpeed__pfTT = 7.000000f;
	bpv__DistancexFogxEdgexSharpness__pfTTT = 1.000000f;
	bpv__ScreenxDropsxDiffusexIntensity__pfTTT = 0.100000f;
	bpv__WorldxSplash__pfT = false;
	bpv__mWorldSplash__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[63], ECastCheckedType::NullAllowed);
	bpv__iWorldSplash__pf = nullptr;
	bpv__WorldxSplashxDistort__pfTT = 0.000000f;
	bpv__WorldxSplashxSmoothness__pfTT = 0.000000f;
	bpv__WorldxSplashxTiling__pfTT = 1.000000f;
	bpv__WorldxSplashxColorxTint__pfTTT = FLinearColor(0.005000, 0.000262, 0.000000, 0.655000);
	bpv__BlurxSamples__pfT = 24;
	bpv__FrostxColor__pfT = FLinearColor(0.700000, 1.000000, 1.000000, 1.000000);
	bpv__ComicxPreMultiplier__pfT = 10.000000f;
	bpv__ComicxDesaturation__pfT = 0.000000f;
	bpv__WorldxGlitch__pfT = false;
	bpv__mWorldGlitch__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[64], ECastCheckedType::NullAllowed);
	bpv__iWorldGlitch__pf = nullptr;
	bpv__WorldxGlitchxAnimated__pfTT = false;
	bpv__WorldxGlitchxAnimationxSpeed__pfTTT = 0.250000f;
	bpv__WorldxGlitchxDistance__pfTT = 2.000000f;
	bpv__WorldxGlitchxDistancexSharpness__pfTTT = 1.000000f;
	bpv__WorldxGlitchxPhase__pfTT = 0.500000f;
	bpv__WorldxGlitchxPower__pfTT = 1.000000f;
	bpv__WorldxGlitchxGridxPosition__pfTTT = FVector(0.100000, 0.100000, 0.100000);
	bpv__WorldxGlitchxGridxSize__pfTTT = FVector(21.100000, 21.100000, 21.100000);
	bpv__Digitize__pf = false;
	bpv__mDigitize__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[65], ECastCheckedType::NullAllowed);
	bpv__iDigitize__pf = nullptr;
	bpv__DigitizexCellxColor__pfTT = FLinearColor(0.000000, 0.385502, 1.000000, 1.000000);
	bpv__DigitizexCellxPosition__pfTT = FVector(0.000000, 0.000000, 0.000000);
	bpv__DigitizexCellxPositionxOverxTime__pfTTTT = FVector(0.000000, 50.000000, 0.000000);
	bpv__DigitizexDistance__pfT = 0.500000f;
	bpv__DigitizexDistancexSharpness__pfTT = 14.000000f;
	bpv__DigitizexCellxSize__pfTT = 0.300000f;
	bpv__DigitizexCellxColorxMultiplier__pfTTT = 1.000000f;
	bpv__DigitizexCellxDistortion__pfTT = 1.000000f;
	bpv__DigitizexBackgroundxColorxMultiplier__pfTTT = 0.000000f;
	bpv__Alarm__pf = false;
	bpv__mAlarm__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[66], ECastCheckedType::NullAllowed);
	bpv__iAlarm__pf = nullptr;
	bpv__AlarmxColor__pfT = FLinearColor(1.000000, 0.000000, 0.063044, 1.000000);
	bpv__AlarmxSpeed__pfT = 0.500000f;
	bpv__Sketch__pf = false;
	bpv__mSketch__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[67], ECastCheckedType::NullAllowed);
	bpv__iSketch__pf = nullptr;
	bpv__SketchxColor__pfT = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__SketchxBackgroundxColor__pfTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__SketchxPower__pfT = 0.300000f;
	bpv__SketchxPatternxRotation__pfTT = 0.910000f;
	bpv__SketchxPatternxSpeed__pfTT = 1.500000f;
	bpv__CustomxDepthxHighlighterxOutlinexColor__pfTTTT = FLinearColor(1.000000, 0.000000, 0.063044, 1.000000);
	bpv__CustomxDepthxHighlighterxOutlinexOpacity__pfTTTT = 2.000000f;
	bpv__CustomxDepthxHighlighterxxCxxOutlinexColor__pfTTTLKTT = FLinearColor(0.000000, 0.473531, 1.000000, 1.000000);
	bpv__CustomxDepthxHighlighterxxCxxOutlinexOpacity__pfTTTLKTT = 2.000000f;
	bpv__Wired__pf = false;
	bpv__iWired__pf = nullptr;
	bpv__mWired__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[68], ECastCheckedType::NullAllowed);
	bpv__WiredxColor__pfT = FLinearColor(0.265000, 0.265000, 0.265000, 1.000000);
	bpv__WiredxPower__pfT = 1.000000f;
	bpv__ASCIIxPreMultiplier__pfT = 1.000000f;
	bpv__GlitchxGridxDistortionxPower__pfTTT = 0.001000f;
	bpv__GlitchxGridxDistortionxSize__pfTTT = 10.000000f;
	bpv__GlitchxGridxDistortionxSpeed__pfTTT = 1.000000f;
	bpv__MonitorxEffectsxTiled__pfTT = false;
	bpv__RadialxBlurxCenter__pfTT = FVector2D(0.500000, 0.500000);
	bpv__RadialxBlurxSamplexOffset__pfTTT = FVector2D(0.000000, 0.000000);
	bpv__2DxTransformxBackgroundxColor__pfTTT = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__ComicxPatternxIntensity__pfTT = 1.000000f;
	bpv__ComicxPatternxLinexCount__pfTTT = 6;
	bpv__ComicxPatternxRotation__pfTT = 1.170000f;
	bpv__ActorxFeaturette__pfT = false;
	bpv__mActorFeaturette__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[69], ECastCheckedType::NullAllowed);
	bpv__iActorFeaturette__pf = nullptr;
	bpv__ActorxFeaturettexBackgroundxMultiplier__pfTTT = FLinearColor(1.000000, 0.000000, 0.396755, 1.000000);
	bpv__ActorxFeaturettexBackgroundxDesaturation__pfTTT = 1.000000f;
	bpv__ActorxFeaturettexForegroundxMultiplier__pfTTT = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__ActorxFeaturettexForegroundxSaturation__pfTTT = 0.000000f;
	bpv__ActorxFeaturettexBlurxAmount__pfTTT = 1.000000f;
	bpv__ActorxFeaturettexBlurxSamples__pfTTT = 6;
	bpv__ActorxFeaturettexStencilxMask__pfTTT = 0;
	bpv__Infected__pf = false;
	bpv__mInfected__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[70], ECastCheckedType::NullAllowed);
	bpv__iInfected__pf = nullptr;
	bpv__InfectedxDistortionxAmount__pfTT = 1.000000f;
	bpv__InfectedxSmoothness__pfT = 0.036000f;
	bpv__InfectedxSpeed__pfT = 0.165000f;
	bpv__InfectedxTransformZ__pfT = 0.037000f;
	bpv__ColoredxAO__pfT = false;
	bpv__mColoredAO__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[72], ECastCheckedType::NullAllowed);
	bpv__iColoredAO__pf = nullptr;
	bpv__ColoredxAOxColor__pfTT = FLinearColor(0.000000, 0.863157, 1.000000, 1.000000);
	bpv__ColoredxAOxIntensity__pfTT = 0.400000f;
	bpv__CameraxShake__pfT = false;
	bpv__mCameraShake__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[71], ECastCheckedType::NullAllowed);
	bpv__iCameraShake__pf = nullptr;
	bpv__CameraxShakexPowerxxXx__pfTTTLK = 0.010000f;
	bpv__CameraxShakexPowerxxYx__pfTTTLK = 0.010000f;
	bpv__CameraxShakexFrequency__pfTT = 10.000000f;
	bpv__DiscoxBall__pfT = false;
	bpv__mDiscoBall__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[73], ECastCheckedType::NullAllowed);
	bpv__iDiscoBall__pf = nullptr;
	bpv__DiscoxBallxColorx1__pfTTT = FLinearColor(0.000000, 82.978966, 500.000000, 1.000000);
	bpv__DiscoxBallxColorx2__pfTTT = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__DiscoxBallxBlockxScale__pfTTT = FVector(0.060000, 0.060000, 0.060000);
	bpv__DiscoxBallxBlockxDistribution__pfTTT = 0.145000f;
	bpv__DiscoxBallxRotationxSpeed__pfTTT = 0.590000f;
	bpv__DiscoxBallxManualxRotation__pfTTT = 0.000000f;
	bpv__HazyxLights__pfT = false;
	bpv__mHazyLights__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[74], ECastCheckedType::NullAllowed);
	bpv__iHazyLights__pf = nullptr;
	bpv__HazyxLightsxMovexSpeed__pfTTT.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf = 2.000000f;
	bpv__HazyxLightsxPosition__pfTT.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf = 2.000000f;
	bpv__MeltedxWorld__pfT = false;
	bpv__mMeltedWorld__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[75], ECastCheckedType::NullAllowed);
	bpv__iMeltedWorld__pf = nullptr;
	bpv__MeltedxWorldxSize__pfTT = FVector(0.009200, 0.009200, 0.009200);
	bpv__MeltedxWorldxDistance__pfTT = 0.000000f;
	bpv__MeltedxWorldxPower__pfTT = 0.200000f;
	bpv__MeltedxWorldxSharpness__pfTT = 1.000000f;
	bpv__SelectivexColor__pfT = false;
	bpv__mSelectiveColor__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[76], ECastCheckedType::NullAllowed);
	bpv__iSelectiveColor__pf = nullptr;
	bpv__SelectivexColorxMaskxColor__pfTTT = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	bpv__SelectivexColorxHuexTolerance__pfTTT = 33.000000f;
	bpv__SelectivexColorxSaturationxTolerance__pfTTT = 20.000000f;
	bpv__SelectivexColorxValuexTolerance__pfTTT = 70.000000f;
	bpv__ScreenxFire__pfT = false;
	bpv__mScreenFire__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[57], ECastCheckedType::NullAllowed);
	bpv__iScreenFire__pf = nullptr;
	bpv__ScreenxFirexColor__pfTT = FLinearColor(500.000000, 63.000000, 0.000000, 1.000000);
	bpv__ScreenxFirexDistortionxAmount__pfTTT = 0.100000f;
	bpv__ScreenxFirexMaskxContrast__pfTTT = 3.700000f;
	bpv__ScreenxFirexMaskxScale__pfTTT = 1.400000f;
	bpv__ScreenxFirexFlamexTiling__pfTTT = 5.000000f;
	bpv__ScreenxFirexSpeed__pfTT = 1.000000f;
	bpv__Haunted__pf = false;
	bpv__mHaunted__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[58], ECastCheckedType::NullAllowed);
	bpv__iHaunted__pf = nullptr;
	bpv__HauntedxAmount__pfT = 0.500000f;
	bpv__HauntedxMaskxScale__pfTT = 1.000000f;
	bpv__HauntedxTexture__pfT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[78], ECastCheckedType::NullAllowed);
	bpv__HauntedxTexturexScale__pfTT = 1140.000000f;
	bpv__GridxCell__pfT = false;
	bpv__mGridCell__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[79], ECastCheckedType::NullAllowed);
	bpv__iGridCell__pf = nullptr;
	bpv__GridxCellxAnimated__pfTT = true;
	bpv__GridxCellxAnimationxSpeed__pfTTT = 0.250000f;
	bpv__GridxCellxColor__pfTT = FLinearColor(0.000000, 69.000000, 100.000000, 1.000000);
	bpv__GridxCellxVoidxColor__pfTTT = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__GridxCellxTiling__pfTT = 3.000000f;
	bpv__GridxCellxTransitionxAmount__pfTTT = 3.000000f;
	bpv__LensxDistortion__pfT = false;
	bpv__mLensDistortion__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[80], ECastCheckedType::NullAllowed);
	bpv__iLensDistortion__pf = nullptr;
	bpv__LensxDistortionxOpticxRefinement__pfTTT = 500.000000f;
	bpv__LensxDistortionxOpticxSize__pfTTT = 0.544000f;
	bpv__LensxDistortionxOpticxPositionxX__pfTTTT = 0.500000f;
	bpv__LensxDistortionxOpticxPositionxY__pfTTTT = 0.500000f;
	bpv__LensxDistortionxScopexTexture__pfTTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[81], ECastCheckedType::NullAllowed);
	bpv__LensxDistortionxScopexTexturexScalexX__pfTTTTT = 0.990000f;
	bpv__LensxDistortionxScopexTexturexScalexY__pfTTTTT = 0.990000f;
	bpv__Zone__pf = false;
	bpv__mZone__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[82], ECastCheckedType::NullAllowed);
	bpv__iZone__pf = nullptr;
	bpv__ZonexCenter__pfT = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	bpv__ZonexRadius__pfT = 1900.000000f;
	bpv__ZonexEdgexHardness__pfTT = 0.950000f;
	bpv__ZonexEdgexColor__pfTT = FLinearColor(0.000000, 10.000000, 6.110988, 1.000000);
	bpv__ZonexCoveragexColor__pfTT = FLinearColor(0.000000, 0.354167, 0.216431, 1.000000);
	bpv__Pyramid__pf = false;
	bpv__mPyramid__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[83], ECastCheckedType::NullAllowed);
	bpv__iPyramid__pf = nullptr;
	bpv__PyramidxMasked__pfT = false;
	bpv__PyramidxBackgroundxColor__pfTT = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__PyramidxWidth__pfT = 1.000000f;
	bpv__PyramidxPan__pfT = 0.500000f;
	bpv__PyramidxTilexAmount__pfTT = 2.000000f;
	bpv__Mojo__pf = false;
	bpv__mMojo__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[84], ECastCheckedType::NullAllowed);
	bpv__iMojo__pf = nullptr;
	bpv__MojoxAnimated__pfT = true;
	bpv__MojoxAnimationxSpeed__pfTT = 0.250000f;
	bpv__MojoxMask__pfT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[85], ECastCheckedType::NullAllowed);
	bpv__MojoxDistortionxMap__pfTT = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[86], ECastCheckedType::NullAllowed);
	bpv__MojoxDistortionxAmount__pfTT = 0.500000f;
	bpv__MojoxColor__pfT = FLinearColor(0.000000, 4.761732, 10.000000, 1.000000);
	bpv__MojoxIntensity__pfT = 50.000000f;
	bpv__MojoxPhase__pfT = 0.400000f;
	bpv__MojoxTolerance__pfT = 0.030000f;
	bpv__GradientxFog__pfT = false;
	bpv__mGradientFog__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[87], ECastCheckedType::NullAllowed);
	bpv__iGradientFog__pf = nullptr;
	bpv__GradientxFogxColors__pfTT = TArray<FColor> ();
	bpv__GradientxFogxColors__pfTT.Reserve(3);
	bpv__GradientxFogxColors__pfTT.Add(FColor(255, 0, 0, 255));
	bpv__GradientxFogxColors__pfTT.Add(FColor(0, 255, 0, 255));
	bpv__GradientxFogxColors__pfTT.Add(FColor(0, 0, 255, 255));
	bpv__GradientxFogxDistance__pfTT = 6.000000f;
	bpv__GradientxFogxSharpness__pfTT = 0.350000f;
	bpv__ColorIndexRT__pf = nullptr;
	bpv__M_ColorIndexer__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[88], ECastCheckedType::NullAllowed);
	bpv__I_ColorIndexer__pf = nullptr;
	bpv__Dither__pf = false;
	bpv__mDither__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[89], ECastCheckedType::NullAllowed);
	bpv__iDither__pf = nullptr;
	bpv__DitherxLimit__pfT = 1.000000f;
	bpv__SpeedxLines__pfT = false;
	bpv__mSpeedLinesx__pfT = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[90], ECastCheckedType::NullAllowed);
	bpv__iSpeedLines__pf = nullptr;
	bpv__SpeedxLinesxIntensity__pfTT = 1.200000f;
	bpv__SpeedxLinesxLinexWidth__pfTTT = 30.000000f;
	bpv__SpeedxLinesxSpeed__pfTT = 1.000000f;
	bpv__SpeedxLinesxMaskxRadius__pfTTT = 3.400000f;
	bpv__SpeedxLinesxMaskxHardness__pfTTT = 0.100000f;
	bpv__CyberxScan__pfT = false;
	bpv__mCyberScan__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[91], ECastCheckedType::NullAllowed);
	bpv__iCyberScan__pf = nullptr;
	bpv__CyberxScanxSpeed__pfTT = 0.100000f;
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__3 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__3 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AChameleon_C__pf565858488::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__BoundingxBox__pfT)
	{
		bpv__BoundingxBox__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__InternalPP__pf)
	{
		bpv__InternalPP__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MaterialBillboard__pf)
	{
		bpv__MaterialBillboard__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AChameleon_C__pf565858488::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Chameleon/Enums/BlendModes.BlendModes")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Chameleon/Enums/DrawingNoiseModes.DrawingNoiseModes")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Chameleon/Enums/LOOKPresetsEnum.LOOKPresetsEnum")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Chameleon/Enums/colorChannels.ColorChannels")));
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FAdvancedEffectFeatures__pf2387075495();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FAdvancedEffectFeatures__pf2387075495());
	extern UScriptStruct* Z_Construct_UScriptStruct_FVector2DN__pf2387075495();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FVector2DN__pf2387075495());
	extern UScriptStruct* Z_Construct_UScriptStruct_FVector3DN__pf2387075495();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FVector3DN__pf2387075495());
	extern UScriptStruct* Z_Construct_UScriptStruct_FAdvancedEffectFeaturesNoCustomDepth__pf2387075495();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FAdvancedEffectFeaturesNoCustomDepth__pf2387075495());
	extern UScriptStruct* Z_Construct_UScriptStruct_FLOOKCGStruct__pf2387075495();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FLOOKCGStruct__pf2387075495());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__4 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	static TWeakFieldPtr<FProperty> __Local__6{};
	const FProperty* __Local__5 = __Local__6.Get();
	if (nullptr == __Local__5)
	{
		__Local__5 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__5);
		__Local__6 = __Local__5;
	}
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__4), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void AChameleon_C__pf565858488::bpf__ExecuteUbergraph_Chameleon__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpf__InitChameleon__pf();
	return; // KCST_GotoReturn
}
void AChameleon_C__pf565858488::bpf__ExecuteUbergraph_Chameleon__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	return; // KCST_GotoReturn
}
void AChameleon_C__pf565858488::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_Chameleon__pf_0(3);
}
void AChameleon_C__pf565858488::bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
{
	b0l__K2Node_Event_OtherActor__pf = bpp__OtherActor__pf;
	bpf__ExecuteUbergraph_Chameleon__pf_1(2);
}
void AChameleon_C__pf565858488::bpf__UserConstructionScript__pf()
{
	bpf__InitChameleon__pf();
}
void AChameleon_C__pf565858488::bpf__CreatexMaterialxInstances__pfTT()
{
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_4__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_5__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_5__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_5__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_6__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_7__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_7__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_7__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_8__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_8__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_8__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_9__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_9__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_9__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_10__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_10__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_10__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_11__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_11__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_11__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_12__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_12__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_12__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_13__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_13__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_13__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_14__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_14__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_14__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_15__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_15__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_15__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_16__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_16__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_16__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_17__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_17__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_17__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_18__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_18__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_18__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_19__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_19__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_19__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_20__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_20__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_20__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_21__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_21__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_21__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_22__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_22__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_22__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_23__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_23__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_23__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_24__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_24__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_24__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_25__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_25__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_25__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_26__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_26__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_26__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_27__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_27__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_27__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_28__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_28__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_28__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_29__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_29__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_29__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_30__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_31__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_30__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_31__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_30__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_31__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_32__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_32__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_32__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_33__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_33__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_33__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_34__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_34__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_34__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_35__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_35__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_35__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_36__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_37__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_38__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_39__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_40__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_41__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_42__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_43__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_44__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_45__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_46__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_47__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_48__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_49__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_50__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_51__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_52__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_53__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_54__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_55__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_56__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_57__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_58__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_59__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_60__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_61__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_62__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_63__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_64__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_65__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_66__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_67__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_36__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_37__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_36__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_37__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_38__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_39__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_38__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_39__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_40__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_41__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_40__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_41__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_42__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_43__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_42__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_43__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_44__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_45__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_44__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_45__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_46__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_47__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_46__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_47__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_48__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_49__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_48__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_49__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_50__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_51__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_50__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_51__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_52__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_53__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_52__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_53__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_54__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_55__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_54__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_55__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_56__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_57__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_56__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_57__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_58__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_59__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_58__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_59__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_60__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_61__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_60__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_61__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_62__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_63__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_62__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_63__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_64__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_65__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_64__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_65__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_66__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_67__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_66__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_67__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_67__pf = UKismetSystemLibrary::IsValid(bpv__iDistanceFog__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_67__pf)
				{
					__CurrentState = 71;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_IsValid_ReturnValue_66__pf = UKismetSystemLibrary::IsValid(bpv__iChannelClamper__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_66__pf)
				{
					__CurrentState = 74;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_IsValid_ReturnValue_65__pf = UKismetSystemLibrary::IsValid(bpv__iChannelSwapper__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_65__pf)
				{
					__CurrentState = 77;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_IsValid_ReturnValue_64__pf = UKismetSystemLibrary::IsValid(bpv__iScreenDrops__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_64__pf)
				{
					__CurrentState = 80;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_IsValid_ReturnValue_63__pf = UKismetSystemLibrary::IsValid(bpv__iAlcohol__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_63__pf)
				{
					__CurrentState = 83;
					break;
				}
			}
		case 7:
			{
				bpfv__CallFunc_IsValid_ReturnValue_62__pf = UKismetSystemLibrary::IsValid(bpv__iDrug__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_62__pf)
				{
					__CurrentState = 86;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_IsValid_ReturnValue_61__pf = UKismetSystemLibrary::IsValid(bpv__iMosaic__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_61__pf)
				{
					__CurrentState = 89;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_IsValid_ReturnValue_60__pf = UKismetSystemLibrary::IsValid(bpv__iPixelDissolve__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_60__pf)
				{
					__CurrentState = 92;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_IsValid_ReturnValue_59__pf = UKismetSystemLibrary::IsValid(bpv__iBlur__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_59__pf)
				{
					__CurrentState = 95;
					break;
				}
			}
		case 11:
			{
				bpfv__CallFunc_IsValid_ReturnValue_58__pf = UKismetSystemLibrary::IsValid(bpv__iAscii__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_58__pf)
				{
					__CurrentState = 98;
					break;
				}
			}
		case 12:
			{
				bpfv__CallFunc_IsValid_ReturnValue_57__pf = UKismetSystemLibrary::IsValid(bpv__iColorize__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_57__pf)
				{
					__CurrentState = 101;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_IsValid_ReturnValue_56__pf = UKismetSystemLibrary::IsValid(bpv__iComic__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_56__pf)
				{
					__CurrentState = 104;
					break;
				}
			}
		case 14:
			{
				bpfv__CallFunc_IsValid_ReturnValue_55__pf = UKismetSystemLibrary::IsValid(bpv__iEdgeDetect__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_55__pf)
				{
					__CurrentState = 107;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_IsValid_ReturnValue_54__pf = UKismetSystemLibrary::IsValid(bpv__iEmboss__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_54__pf)
				{
					__CurrentState = 110;
					break;
				}
			}
		case 16:
			{
				bpfv__CallFunc_IsValid_ReturnValue_53__pf = UKismetSystemLibrary::IsValid(bpv__iHardEmboss__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_53__pf)
				{
					__CurrentState = 113;
					break;
				}
			}
		case 17:
			{
				bpfv__CallFunc_IsValid_ReturnValue_52__pf = UKismetSystemLibrary::IsValid(bpv__iGlitch__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_52__pf)
				{
					__CurrentState = 116;
					break;
				}
			}
		case 18:
			{
				bpfv__CallFunc_IsValid_ReturnValue_51__pf = UKismetSystemLibrary::IsValid(bpv__iGrainNLines__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_51__pf)
				{
					__CurrentState = 119;
					break;
				}
			}
		case 19:
			{
				bpfv__CallFunc_IsValid_ReturnValue_50__pf = UKismetSystemLibrary::IsValid(bpv__iHuePanner__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_50__pf)
				{
					__CurrentState = 122;
					break;
				}
			}
		case 20:
			{
				bpfv__CallFunc_IsValid_ReturnValue_49__pf = UKismetSystemLibrary::IsValid(bpv__iMonochrome__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_49__pf)
				{
					__CurrentState = 125;
					break;
				}
			}
		case 21:
			{
				bpfv__CallFunc_IsValid_ReturnValue_48__pf = UKismetSystemLibrary::IsValid(bpv__iRadialBlur__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_48__pf)
				{
					__CurrentState = 128;
					break;
				}
			}
		case 22:
			{
				bpfv__CallFunc_IsValid_ReturnValue_47__pf = UKismetSystemLibrary::IsValid(bpv__iScratches__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_47__pf)
				{
					__CurrentState = 131;
					break;
				}
			}
		case 23:
			{
				bpfv__CallFunc_IsValid_ReturnValue_46__pf = UKismetSystemLibrary::IsValid(bpv__iScreenWaves__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_46__pf)
				{
					__CurrentState = 134;
					break;
				}
			}
		case 24:
			{
				bpfv__CallFunc_IsValid_ReturnValue_45__pf = UKismetSystemLibrary::IsValid(bpv__iInvert__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_45__pf)
				{
					__CurrentState = 137;
					break;
				}
			}
		case 25:
			{
				bpfv__CallFunc_IsValid_ReturnValue_6__pf = UKismetSystemLibrary::IsValid(bpv__iScreenFire__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_6__pf)
				{
					__CurrentState = 140;
					break;
				}
			}
		case 26:
			{
				bpfv__CallFunc_IsValid_ReturnValue_44__pf = UKismetSystemLibrary::IsValid(bpv__iIridescent__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_44__pf)
				{
					__CurrentState = 143;
					break;
				}
			}
		case 27:
			{
				bpfv__CallFunc_IsValid_ReturnValue_43__pf = UKismetSystemLibrary::IsValid(bpv__iKuwahara__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_43__pf)
				{
					__CurrentState = 146;
					break;
				}
			}
		case 28:
			{
				bpfv__CallFunc_IsValid_ReturnValue_42__pf = UKismetSystemLibrary::IsValid(bpv__iPulse__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_42__pf)
				{
					__CurrentState = 149;
					break;
				}
			}
		case 29:
			{
				bpfv__CallFunc_IsValid_ReturnValue_41__pf = UKismetSystemLibrary::IsValid(bpv__iSquares__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_41__pf)
				{
					__CurrentState = 152;
					break;
				}
			}
		case 30:
			{
				bpfv__CallFunc_IsValid_ReturnValue_40__pf = UKismetSystemLibrary::IsValid(bpv__iTiles__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_40__pf)
				{
					__CurrentState = 155;
					break;
				}
			}
		case 31:
			{
				bpfv__CallFunc_IsValid_ReturnValue_39__pf = UKismetSystemLibrary::IsValid(bpv__iTVNoise__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_39__pf)
				{
					__CurrentState = 158;
					break;
				}
			}
		case 32:
			{
				bpfv__CallFunc_IsValid_ReturnValue_5__pf = UKismetSystemLibrary::IsValid(bpv__iHaunted__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_5__pf)
				{
					__CurrentState = 161;
					break;
				}
			}
		case 33:
			{
				bpfv__CallFunc_IsValid_ReturnValue_38__pf = UKismetSystemLibrary::IsValid(bpv__iCircles__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_38__pf)
				{
					__CurrentState = 164;
					break;
				}
			}
		case 34:
			{
				bpfv__CallFunc_IsValid_ReturnValue_37__pf = UKismetSystemLibrary::IsValid(bpv__iSonar__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_37__pf)
				{
					__CurrentState = 167;
					break;
				}
			}
		case 35:
			{
				bpfv__CallFunc_IsValid_ReturnValue_36__pf = UKismetSystemLibrary::IsValid(bpv__iDistanceDistortion__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_36__pf)
				{
					__CurrentState = 170;
					break;
				}
			}
		case 36:
			{
				bpfv__CallFunc_IsValid_ReturnValue_35__pf = UKismetSystemLibrary::IsValid(bpv__iDrawing__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_35__pf)
				{
					__CurrentState = 173;
					break;
				}
			}
		case 37:
			{
				bpfv__CallFunc_IsValid_ReturnValue_34__pf = UKismetSystemLibrary::IsValid(bpv__iMagicTransitions__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_34__pf)
				{
					__CurrentState = 176;
					break;
				}
			}
		case 38:
			{
				bpfv__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(bpv__iGridCell__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_4__pf)
				{
					__CurrentState = 179;
					break;
				}
			}
		case 39:
			{
				bpfv__CallFunc_IsValid_ReturnValue_33__pf = UKismetSystemLibrary::IsValid(bpv__iScreenDamage__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_33__pf)
				{
					__CurrentState = 182;
					break;
				}
			}
		case 40:
			{
				bpfv__CallFunc_IsValid_ReturnValue_32__pf = UKismetSystemLibrary::IsValid(bpv__iScreenDecals__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_32__pf)
				{
					__CurrentState = 185;
					break;
				}
			}
		case 41:
			{
				bpfv__CallFunc_IsValid_ReturnValue_31__pf = UKismetSystemLibrary::IsValid(bpv__iSharpen__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_31__pf)
				{
					__CurrentState = 188;
					break;
				}
			}
		case 42:
			{
				bpfv__CallFunc_IsValid_ReturnValue_30__pf = UKismetSystemLibrary::IsValid(bpv__iToonShading__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_30__pf)
				{
					__CurrentState = 191;
					break;
				}
			}
		case 43:
			{
				bpfv__CallFunc_IsValid_ReturnValue_29__pf = UKismetSystemLibrary::IsValid(bpv__iAnamorphicLensFlares__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_29__pf)
				{
					__CurrentState = 194;
					break;
				}
			}
		case 44:
			{
				bpfv__CallFunc_IsValid_ReturnValue_28__pf = UKismetSystemLibrary::IsValid(bpv__iFrost__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_28__pf)
				{
					__CurrentState = 197;
					break;
				}
			}
		case 45:
			{
				bpfv__CallFunc_IsValid_ReturnValue_27__pf = UKismetSystemLibrary::IsValid(bpv__iNeon__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_27__pf)
				{
					__CurrentState = 200;
					break;
				}
			}
		case 46:
			{
				bpfv__CallFunc_IsValid_ReturnValue_26__pf = UKismetSystemLibrary::IsValid(bpv__iCustomDepthHighlighter__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_26__pf)
				{
					__CurrentState = 203;
					break;
				}
			}
		case 47:
			{
				bpfv__CallFunc_IsValid_ReturnValue_25__pf = UKismetSystemLibrary::IsValid(bpv__iCustomDepthHighlighterClip__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_25__pf)
				{
					__CurrentState = 206;
					break;
				}
			}
		case 48:
			{
				bpfv__CallFunc_IsValid_ReturnValue_24__pf = UKismetSystemLibrary::IsValid(bpv__i2DTransform__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_24__pf)
				{
					__CurrentState = 209;
					break;
				}
			}
		case 49:
			{
				bpfv__CallFunc_IsValid_ReturnValue_23__pf = UKismetSystemLibrary::IsValid(bpv__iKaleidoscope__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_23__pf)
				{
					__CurrentState = 212;
					break;
				}
			}
		case 50:
			{
				bpfv__CallFunc_IsValid_ReturnValue_22__pf = UKismetSystemLibrary::IsValid(bpv__iLetterboxing__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_22__pf)
				{
					__CurrentState = 215;
					break;
				}
			}
		case 51:
			{
				bpfv__CallFunc_IsValid_ReturnValue_21__pf = UKismetSystemLibrary::IsValid(bpv__iSnow__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_21__pf)
				{
					__CurrentState = 218;
					break;
				}
			}
		case 52:
			{
				bpfv__CallFunc_IsValid_ReturnValue_20__pf = UKismetSystemLibrary::IsValid(bpv__iWorldSplash__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_20__pf)
				{
					__CurrentState = 221;
					break;
				}
			}
		case 53:
			{
				bpfv__CallFunc_IsValid_ReturnValue_19__pf = UKismetSystemLibrary::IsValid(bpv__iWorldGlitch__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_19__pf)
				{
					__CurrentState = 224;
					break;
				}
			}
		case 54:
			{
				bpfv__CallFunc_IsValid_ReturnValue_18__pf = UKismetSystemLibrary::IsValid(bpv__iDigitize__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_18__pf)
				{
					__CurrentState = 227;
					break;
				}
			}
		case 55:
			{
				bpfv__CallFunc_IsValid_ReturnValue_17__pf = UKismetSystemLibrary::IsValid(bpv__iAlarm__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_17__pf)
				{
					__CurrentState = 230;
					break;
				}
			}
		case 56:
			{
				bpfv__CallFunc_IsValid_ReturnValue_16__pf = UKismetSystemLibrary::IsValid(bpv__iSketch__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_16__pf)
				{
					__CurrentState = 233;
					break;
				}
			}
		case 57:
			{
				bpfv__CallFunc_IsValid_ReturnValue_15__pf = UKismetSystemLibrary::IsValid(bpv__iWired__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_15__pf)
				{
					__CurrentState = 236;
					break;
				}
			}
		case 58:
			{
				bpfv__CallFunc_IsValid_ReturnValue_14__pf = UKismetSystemLibrary::IsValid(bpv__iActorFeaturette__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_14__pf)
				{
					__CurrentState = 239;
					break;
				}
			}
		case 59:
			{
				bpfv__CallFunc_IsValid_ReturnValue_13__pf = UKismetSystemLibrary::IsValid(bpv__iInfected__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_13__pf)
				{
					__CurrentState = 242;
					break;
				}
			}
		case 60:
			{
				bpfv__CallFunc_IsValid_ReturnValue_12__pf = UKismetSystemLibrary::IsValid(bpv__iCameraShake__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_12__pf)
				{
					__CurrentState = 245;
					break;
				}
			}
		case 61:
			{
				bpfv__CallFunc_IsValid_ReturnValue_11__pf = UKismetSystemLibrary::IsValid(bpv__iColoredAO__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_11__pf)
				{
					__CurrentState = 248;
					break;
				}
			}
		case 62:
			{
				bpfv__CallFunc_IsValid_ReturnValue_10__pf = UKismetSystemLibrary::IsValid(bpv__iDiscoBall__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_10__pf)
				{
					__CurrentState = 251;
					break;
				}
			}
		case 63:
			{
				bpfv__CallFunc_IsValid_ReturnValue_9__pf = UKismetSystemLibrary::IsValid(bpv__iHazyLights__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_9__pf)
				{
					__CurrentState = 254;
					break;
				}
			}
		case 64:
			{
				bpfv__CallFunc_IsValid_ReturnValue_8__pf = UKismetSystemLibrary::IsValid(bpv__iMeltedWorld__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_8__pf)
				{
					__CurrentState = 257;
					break;
				}
			}
		case 65:
			{
				bpfv__CallFunc_IsValid_ReturnValue_7__pf = UKismetSystemLibrary::IsValid(bpv__iSelectiveColor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_7__pf)
				{
					__CurrentState = 260;
					break;
				}
			}
		case 66:
			{
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpv__iLensDistortion__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = 263;
					break;
				}
			}
		case 67:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__iZone__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = 266;
					break;
				}
			}
		case 68:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__iPyramid__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 269;
					break;
				}
			}
		case 69:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__iMojo__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 272;
					break;
				}
			}
		case 70:
			{
				__CurrentState = -1;
				break;
			}
		case 71:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_66__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mDistanceFog__pf);
			}
		case 72:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_67__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mDistanceFog__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 73:
			{
				bpv__iDistanceFog__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_67__pf;
				__CurrentState = 3;
				break;
			}
		case 74:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_67__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mChannelClamper__pf);
			}
		case 75:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_66__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mChannelClamper__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 76:
			{
				bpv__iChannelClamper__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_66__pf;
				__CurrentState = 4;
				break;
			}
		case 77:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_65__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mChannelSwapper__pf);
			}
		case 78:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_64__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mChannelSwapper__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 79:
			{
				bpv__iChannelSwapper__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_64__pf;
				__CurrentState = 5;
				break;
			}
		case 80:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_64__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mScreenDrops__pf);
			}
		case 81:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_65__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mScreenDrops__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 82:
			{
				bpv__iScreenDrops__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_65__pf;
				__CurrentState = 6;
				break;
			}
		case 83:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_63__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mAlcohol__pf);
			}
		case 84:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_62__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mAlcohol__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 85:
			{
				bpv__iAlcohol__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_62__pf;
				__CurrentState = 7;
				break;
			}
		case 86:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_62__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mDrug__pf);
			}
		case 87:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_63__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mDrug__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 88:
			{
				bpv__iDrug__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_63__pf;
				__CurrentState = 8;
				break;
			}
		case 89:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_61__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mMosaic__pf);
			}
		case 90:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_60__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mMosaic__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 91:
			{
				bpv__iMosaic__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_60__pf;
				__CurrentState = 9;
				break;
			}
		case 92:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_60__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mPixelDissolve__pf);
			}
		case 93:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_61__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mPixelDissolve__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 94:
			{
				bpv__iPixelDissolve__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_61__pf;
				__CurrentState = 10;
				break;
			}
		case 95:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_59__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mBlur__pf);
			}
		case 96:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_58__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mBlur__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 97:
			{
				bpv__iBlur__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_58__pf;
				__CurrentState = 11;
				break;
			}
		case 98:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_58__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mAscii__pf);
			}
		case 99:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_59__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mAscii__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 100:
			{
				bpv__iAscii__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_59__pf;
				__CurrentState = 12;
				break;
			}
		case 101:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_57__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mColorize__pf);
			}
		case 102:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_56__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mColorize__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 103:
			{
				bpv__iColorize__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_56__pf;
				__CurrentState = 13;
				break;
			}
		case 104:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_56__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mComic__pf);
			}
		case 105:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_57__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mComic__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 106:
			{
				bpv__iComic__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_57__pf;
				__CurrentState = 14;
				break;
			}
		case 107:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_55__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mEdgeDetect__pf);
			}
		case 108:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_54__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mEdgeDetect__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 109:
			{
				bpv__iEdgeDetect__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_54__pf;
				__CurrentState = 15;
				break;
			}
		case 110:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_54__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mEmboss__pf);
			}
		case 111:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_55__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mEmboss__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 112:
			{
				bpv__iEmboss__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_55__pf;
				__CurrentState = 16;
				break;
			}
		case 113:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_53__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mHardEmboss__pf);
			}
		case 114:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_52__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mHardEmboss__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 115:
			{
				bpv__iHardEmboss__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_52__pf;
				__CurrentState = 17;
				break;
			}
		case 116:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_52__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mGlitch__pf);
			}
		case 117:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_53__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mGlitch__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 118:
			{
				bpv__iGlitch__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_53__pf;
				__CurrentState = 18;
				break;
			}
		case 119:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_51__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mGrainNLines__pf);
			}
		case 120:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_50__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mGrainNLines__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 121:
			{
				bpv__iGrainNLines__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_50__pf;
				__CurrentState = 19;
				break;
			}
		case 122:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_50__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mHuePanner__pf);
			}
		case 123:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_51__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mHuePanner__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 124:
			{
				bpv__iHuePanner__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_51__pf;
				__CurrentState = 20;
				break;
			}
		case 125:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_49__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mMonochrome__pf);
			}
		case 126:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_48__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mMonochrome__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 127:
			{
				bpv__iMonochrome__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_48__pf;
				__CurrentState = 21;
				break;
			}
		case 128:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_48__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mRadialBlur__pf);
			}
		case 129:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_49__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mRadialBlur__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 130:
			{
				bpv__iRadialBlur__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_49__pf;
				__CurrentState = 22;
				break;
			}
		case 131:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_47__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mScratches__pf);
			}
		case 132:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_46__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mScratches__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 133:
			{
				bpv__iScratches__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_46__pf;
				__CurrentState = 23;
				break;
			}
		case 134:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_46__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mScreenWaves__pf);
			}
		case 135:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_47__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mScreenWaves__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 136:
			{
				bpv__iScreenWaves__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_47__pf;
				__CurrentState = 24;
				break;
			}
		case 137:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_45__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mInvert__pf);
			}
		case 138:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_44__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mInvert__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 139:
			{
				bpv__iInvert__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_44__pf;
				__CurrentState = 25;
				break;
			}
		case 140:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_6__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mScreenFire__pf);
			}
		case 141:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_6__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mScreenFire__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 142:
			{
				bpv__iScreenFire__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_6__pf;
				__CurrentState = 26;
				break;
			}
		case 143:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_44__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mIridescent__pf);
			}
		case 144:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_45__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mIridescent__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 145:
			{
				bpv__iIridescent__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_45__pf;
				__CurrentState = 27;
				break;
			}
		case 146:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_43__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mKuwahara__pf);
			}
		case 147:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_42__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mKuwahara__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 148:
			{
				bpv__iKuwahara__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_42__pf;
				__CurrentState = 28;
				break;
			}
		case 149:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_42__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mPulse__pf);
			}
		case 150:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_43__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mPulse__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 151:
			{
				bpv__iPulse__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_43__pf;
				__CurrentState = 29;
				break;
			}
		case 152:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_41__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mSquares__pf);
			}
		case 153:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_40__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mSquares__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 154:
			{
				bpv__iSquares__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_40__pf;
				__CurrentState = 30;
				break;
			}
		case 155:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_40__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mTiles__pf);
			}
		case 156:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_41__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mTiles__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 157:
			{
				bpv__iTiles__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_41__pf;
				__CurrentState = 31;
				break;
			}
		case 158:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_39__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mTVNoise__pf);
			}
		case 159:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_38__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mTVNoise__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 160:
			{
				bpv__iTVNoise__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_38__pf;
				__CurrentState = 32;
				break;
			}
		case 161:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_5__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mHaunted__pf);
			}
		case 162:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_5__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mHaunted__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 163:
			{
				bpv__iHaunted__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_5__pf;
				__CurrentState = 33;
				break;
			}
		case 164:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_38__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mCircles__pf);
			}
		case 165:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_39__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mCircles__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 166:
			{
				bpv__iCircles__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_39__pf;
				__CurrentState = 34;
				break;
			}
		case 167:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_37__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mSonar__pf);
			}
		case 168:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_36__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mSonar__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 169:
			{
				bpv__iSonar__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_36__pf;
				__CurrentState = 35;
				break;
			}
		case 170:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_36__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mDistanceDistortion__pf);
			}
		case 171:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_37__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mDistanceDistortion__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 172:
			{
				bpv__iDistanceDistortion__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_37__pf;
				__CurrentState = 36;
				break;
			}
		case 173:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_35__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mDrawing__pf);
			}
		case 174:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_35__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mDrawing__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 175:
			{
				bpv__iDrawing__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_35__pf;
				__CurrentState = 37;
				break;
			}
		case 176:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_34__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mMagicTransitions__pf);
			}
		case 177:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_34__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mMagicTransitions__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 178:
			{
				bpv__iMagicTransitions__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_34__pf;
				__CurrentState = 38;
				break;
			}
		case 179:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_4__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mGridCell__pf);
			}
		case 180:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_4__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mGridCell__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 181:
			{
				bpv__iGridCell__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_4__pf;
				__CurrentState = 39;
				break;
			}
		case 182:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_33__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mScreenDamage__pf);
			}
		case 183:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_33__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mScreenDamage__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 184:
			{
				bpv__iScreenDamage__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_33__pf;
				__CurrentState = 40;
				break;
			}
		case 185:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_32__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mScreenDecals__pf);
			}
		case 186:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_32__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mScreenDecals__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 187:
			{
				bpv__iScreenDecals__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_32__pf;
				__CurrentState = 41;
				break;
			}
		case 188:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_31__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mSharpen__pf);
			}
		case 189:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_30__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mSharpen__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 190:
			{
				bpv__iSharpen__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_30__pf;
				__CurrentState = 42;
				break;
			}
		case 191:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_30__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mToonShading__pf);
			}
		case 192:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_31__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mToonShading__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 193:
			{
				bpv__iToonShading__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_31__pf;
				__CurrentState = 43;
				break;
			}
		case 194:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_29__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mAnamorphicLensFlares__pf);
			}
		case 195:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_29__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mAnamorphicLensFlares__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 196:
			{
				bpv__iAnamorphicLensFlares__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_29__pf;
				__CurrentState = 44;
				break;
			}
		case 197:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_28__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mFrost__pf);
			}
		case 198:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_28__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mFrost__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 199:
			{
				bpv__iFrost__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_28__pf;
				__CurrentState = 45;
				break;
			}
		case 200:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_27__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mNeon__pf);
			}
		case 201:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_27__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mNeon__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 202:
			{
				bpv__iNeon__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_27__pf;
				__CurrentState = 46;
				break;
			}
		case 203:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_26__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mCustomDepthHighlighter__pf);
			}
		case 204:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_26__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mCustomDepthHighlighter__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 205:
			{
				bpv__iCustomDepthHighlighter__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_26__pf;
				__CurrentState = 47;
				break;
			}
		case 206:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_25__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mCustomDepthHighlighterClip__pf);
			}
		case 207:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_25__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mCustomDepthHighlighterClip__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 208:
			{
				bpv__iCustomDepthHighlighterClip__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_25__pf;
				__CurrentState = 48;
				break;
			}
		case 209:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_24__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__m2DTransform__pf);
			}
		case 210:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_24__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__m2DTransform__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 211:
			{
				bpv__i2DTransform__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_24__pf;
				__CurrentState = 49;
				break;
			}
		case 212:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_23__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mKaleidoscope__pf);
			}
		case 213:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_23__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mKaleidoscope__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 214:
			{
				bpv__iKaleidoscope__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_23__pf;
				__CurrentState = 50;
				break;
			}
		case 215:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_22__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mLetterboxing__pf);
			}
		case 216:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_22__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mLetterboxing__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 217:
			{
				bpv__iLetterboxing__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_22__pf;
				__CurrentState = 51;
				break;
			}
		case 218:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_21__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mSnow__pf);
			}
		case 219:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_21__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mSnow__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 220:
			{
				bpv__iSnow__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_21__pf;
				__CurrentState = 52;
				break;
			}
		case 221:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_20__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mWorldSplash__pf);
			}
		case 222:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_20__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mWorldSplash__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 223:
			{
				bpv__iWorldSplash__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_20__pf;
				__CurrentState = 53;
				break;
			}
		case 224:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_19__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mWorldGlitch__pf);
			}
		case 225:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_19__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mWorldGlitch__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 226:
			{
				bpv__iWorldGlitch__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_19__pf;
				__CurrentState = 54;
				break;
			}
		case 227:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_18__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mDigitize__pf);
			}
		case 228:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_18__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mDigitize__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 229:
			{
				bpv__iDigitize__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_18__pf;
				__CurrentState = 55;
				break;
			}
		case 230:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_17__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mAlarm__pf);
			}
		case 231:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_17__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mAlarm__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 232:
			{
				bpv__iAlarm__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_17__pf;
				__CurrentState = 56;
				break;
			}
		case 233:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_16__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mSketch__pf);
			}
		case 234:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_16__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mSketch__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 235:
			{
				bpv__iSketch__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_16__pf;
				__CurrentState = 57;
				break;
			}
		case 236:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_15__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mWired__pf);
			}
		case 237:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_15__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mWired__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 238:
			{
				bpv__iWired__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_15__pf;
				__CurrentState = 58;
				break;
			}
		case 239:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_14__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mActorFeaturette__pf);
			}
		case 240:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_14__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mActorFeaturette__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 241:
			{
				bpv__iActorFeaturette__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_14__pf;
				__CurrentState = 59;
				break;
			}
		case 242:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_13__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mInfected__pf);
			}
		case 243:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_13__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mInfected__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 244:
			{
				bpv__iInfected__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_13__pf;
				__CurrentState = 60;
				break;
			}
		case 245:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_12__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mCameraShake__pf);
			}
		case 246:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_12__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mCameraShake__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 247:
			{
				bpv__iCameraShake__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_12__pf;
				__CurrentState = 61;
				break;
			}
		case 248:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_11__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mColoredAO__pf);
			}
		case 249:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_11__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mColoredAO__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 250:
			{
				bpv__iColoredAO__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_11__pf;
				__CurrentState = 62;
				break;
			}
		case 251:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_10__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mDiscoBall__pf);
			}
		case 252:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_10__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mDiscoBall__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 253:
			{
				bpv__iDiscoBall__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_10__pf;
				__CurrentState = 63;
				break;
			}
		case 254:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_9__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mHazyLights__pf);
			}
		case 255:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_9__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mHazyLights__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 256:
			{
				bpv__iHazyLights__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_9__pf;
				__CurrentState = 64;
				break;
			}
		case 257:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_8__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mMeltedWorld__pf);
			}
		case 258:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_8__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mMeltedWorld__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 259:
			{
				bpv__iMeltedWorld__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_8__pf;
				__CurrentState = 65;
				break;
			}
		case 260:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_7__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mSelectiveColor__pf);
			}
		case 261:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_7__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mSelectiveColor__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 262:
			{
				bpv__iSelectiveColor__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_7__pf;
				__CurrentState = 66;
				break;
			}
		case 263:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_3__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mLensDistortion__pf);
			}
		case 264:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mLensDistortion__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 265:
			{
				bpv__iLensDistortion__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_3__pf;
				__CurrentState = 67;
				break;
			}
		case 266:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_2__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mZone__pf);
			}
		case 267:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mZone__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 268:
			{
				bpv__iZone__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf;
				__CurrentState = 68;
				break;
			}
		case 269:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_1__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mPyramid__pf);
			}
		case 270:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mPyramid__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 271:
			{
				bpv__iPyramid__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf;
				__CurrentState = 69;
				break;
			}
		case 272:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__AllMaterials__pf, bpv__mMojo__pf);
			}
		case 273:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__mMojo__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 274:
			{
				bpv__iMojo__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
				__CurrentState = 70;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ChannelxClamperxFunc__pfTT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mChannelClamper__pf, /*out*/ bpv__iChannelClamper__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ChannelxClamperxxxAdvanced__pfTTGT, bpv__mChannelClamper__pf, bpv__iChannelClamper__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iChannelClamper__pf))
				{
					bpv__iChannelClamper__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("p_Red Intensity")), bpv__ChannelxClamperxRedxIntensity__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iChannelClamper__pf))
				{
					bpv__iChannelClamper__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("p_Green Intensity")), bpv__ChannelxClamperxGreenxIntensity__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iChannelClamper__pf))
				{
					bpv__iChannelClamper__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("p_Blue Intensity")), bpv__ChannelxClamperxBluexIntensity__pfTTT);
				}
			}
		case 7:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ChannelxSwapperxFunc__pfTT(bool bpp__isEnabled__pf)
{
	float bpfv__CallFunc_Conv_ByteToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_ByteToFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Conv_ByteToFloat_ReturnValue_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mChannelSwapper__pf, /*out*/ bpv__iChannelSwapper__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ChannelxSwapperxxxAdvanced__pfTTGT, bpv__mChannelSwapper__pf, bpv__iChannelSwapper__pf);
			}
		case 4:
			{
				bpfv__CallFunc_Conv_ByteToFloat_ReturnValue_2__pf = UKismetMathLibrary::Conv_ByteToFloat(static_cast<uint8>(bpv__ChannelxSwapperxRed__pfTT));
				if(::IsValid(bpv__iChannelSwapper__pf))
				{
					bpv__iChannelSwapper__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("p_Red")), bpfv__CallFunc_Conv_ByteToFloat_ReturnValue_2__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_Conv_ByteToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_ByteToFloat(static_cast<uint8>(bpv__ChannelxSwapperxGreen__pfTT));
				if(::IsValid(bpv__iChannelSwapper__pf))
				{
					bpv__iChannelSwapper__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("p_Green")), bpfv__CallFunc_Conv_ByteToFloat_ReturnValue_1__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_Conv_ByteToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_ByteToFloat(static_cast<uint8>(bpv__ChannelxSwapperxBlue__pfTT));
				if(::IsValid(bpv__iChannelSwapper__pf))
				{
					bpv__iChannelSwapper__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("p_Blue")), bpfv__CallFunc_Conv_ByteToFloat_ReturnValue__pf);
				}
			}
		case 7:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__InitChameleon__pf()
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__InternalPP__pf))
				{
					bpv__InternalPP__pf->bEnabled = bpv__Enabled__pf;
				}
			}
		case 2:
			{
				bool  __Local__7 = false;
				if (!((::IsValid(bpv__InternalPP__pf)) ? ((bpv__InternalPP__pf->bEnabled != 0)) : (__Local__7)))
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				bpf__ApplyChameleonSettings__pf();
			}
		case 4:
			{
				__StateStack.Push(6);
				__StateStack.Push(79);
				__StateStack.Push(78);
				__StateStack.Push(77);
				__StateStack.Push(76);
				__StateStack.Push(75);
				__StateStack.Push(74);
				__StateStack.Push(73);
				__StateStack.Push(72);
				__StateStack.Push(71);
				__StateStack.Push(70);
				__StateStack.Push(69);
				__StateStack.Push(68);
				__StateStack.Push(67);
				__StateStack.Push(66);
				__StateStack.Push(65);
				__StateStack.Push(64);
				__StateStack.Push(63);
				__StateStack.Push(62);
				__StateStack.Push(61);
				__StateStack.Push(60);
				__StateStack.Push(59);
				__StateStack.Push(58);
				__StateStack.Push(57);
				__StateStack.Push(56);
				__StateStack.Push(55);
				__StateStack.Push(54);
				__StateStack.Push(53);
				__StateStack.Push(52);
				__StateStack.Push(51);
				__StateStack.Push(50);
				__StateStack.Push(49);
				__StateStack.Push(48);
				__StateStack.Push(47);
				__StateStack.Push(46);
				__StateStack.Push(45);
				__StateStack.Push(44);
				__StateStack.Push(43);
				__StateStack.Push(42);
				__StateStack.Push(41);
				__StateStack.Push(40);
				__StateStack.Push(39);
				__StateStack.Push(38);
				__StateStack.Push(37);
				__StateStack.Push(36);
				__StateStack.Push(35);
				__StateStack.Push(34);
				__StateStack.Push(33);
				__StateStack.Push(32);
				__StateStack.Push(31);
				__StateStack.Push(30);
				__StateStack.Push(29);
				__StateStack.Push(28);
				__StateStack.Push(27);
				__StateStack.Push(26);
				__StateStack.Push(25);
				__StateStack.Push(24);
				__StateStack.Push(23);
				__StateStack.Push(22);
				__StateStack.Push(21);
				__StateStack.Push(20);
				__StateStack.Push(19);
				__StateStack.Push(18);
				__StateStack.Push(17);
				__StateStack.Push(16);
				__StateStack.Push(15);
				__StateStack.Push(14);
				__StateStack.Push(13);
				__StateStack.Push(12);
				__StateStack.Push(11);
				__StateStack.Push(10);
				__StateStack.Push(9);
				__StateStack.Push(8);
				__StateStack.Push(7);
			}
		case 5:
			{
				bpf__BleachxFunc__pfT(/*out*/ bpv__BleachxBypass__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpf__DistancexFogxFunc__pfTT(bpv__DistancexFog__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpf__ChannelxClamperxFunc__pfTT(/*out*/ bpv__ChannelxClamper__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpf__ChannelxSwapperxFunc__pfTT(bpv__ChannelxSwapper__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpf__ScreenxDropsxFunc__pfTT(bpv__ScreenxDrops__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpf__AlcoholxFunc__pfT(bpv__Alcohol__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpf__DrugxFunc__pfT(bpv__Drug__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpf__MosaicxFunc__pfT(bpv__Mosaic__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpf__PixelxDissolvexFunc__pfTT(bpv__PixelxDissolve__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpf__BlurxFunc__pfT(bpv__Blur__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpf__ASCIIxFunc__pfT(/*out*/ bpv__ASCII__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpf__ColorizexFunc__pfT(bpv__Colorize__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpf__ComicxFunc__pfT(bpv__Comic__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpf__ScreenxWavesxFunc__pfTT(bpv__ScreenxWaves__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpf__EdgexDetectxFunc__pfTT(/*out*/ bpv__EdgexDetect__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpf__EmbossxFunc__pfT(/*out*/ bpv__Emboss__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpf__GlitchxFunc__pfT(bpv__Glitch__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpf__MonitorFXxFunc__pfT(bpv__MonitorxEffects__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpf__HardxEmbossxFunc__pfTT(/*out*/ bpv__HardxEmboss__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				bpf__HuexPannerxFunc__pfTT(bpv__HuexPanner__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpf__MonochromexFunc__pfT(bpv__Monochrome__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpf__RadialxBlurxFunc__pfTT(bpv__RadialxBlur__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpf__ScratchesxFunc__pfT(bpv__Scratches__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				bpf__InvertxFunc__pfT(/*out*/ bpv__Invert__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpf__ScreenxFirexFunc__pfTT(bpv__ScreenxFire__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				bpf__IridescentxFunc__pfT(/*out*/ bpv__Iridescent__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				bpf__KuwaharaxFunc__pfT(/*out*/ bpv__Kuwahara__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpf__PulsexFunc__pfT(/*out*/ bpv__Pulse__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				bpf__2DxTransformxFunc__pfTT(bpv__2DxTransform__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpf__SquaresxFunc__pfT(/*out*/ bpv__Squares__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				bpf__TilesxFunc__pfT(/*out*/ bpv__Tiles__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				bpf__TVxNoisexFunc__pfTT(/*out*/ bpv__TVxNoise__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				bpf__HauntedxFunc__pfT(bpv__Haunted__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				bpf__LOOKxFunc__pfT(bpv__LOOKx__pfS);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				bpf__CirclesxFunc__pfT(bpv__Circles__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				bpf__SonarxFunc__pfT(bpv__Sonar__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				bpf__DistancexDistortionxFunc__pfTT(bpv__DistancexDistortion__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 43:
			{
				bpf__DrawingxFunc__pfT(bpv__Drawing__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				bpf__MagicxTransitionsxFunc__pfTT(bpv__MagicxTransitions__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				bpf__GridxCellxFunc__pfTT(bpv__GridxCell__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				bpf__ScreenxDamagexFunc__pfTT(bpv__ScreenxDamage__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				bpf__ScreenxDecalsxFunc__pfTT(bpv__ScreenxDecals__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				bpf__SharpenxFunc__pfT(bpv__Sharpen__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				bpf__ToonxShadingxFunc__pfTT(bpv__ToonxShading__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				bpf__AnamorphicxLensxFlaresxFunc__pfTTT(bpv__AnamorphicxLensxFlares__pfTT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				bpf__FrostxFunc__pfT(bpv__Frost__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				bpf__NeonxFunc__pfT(bpv__Neon__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 53:
			{
				bpf__CustomxDepthxHighlighterxFunc__pfTTT(bpv__CustomxDepthxHighlighter__pfTT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 54:
			{
				bpf__CustomxDepthxHighlighterxxNCxxFunc__pfTTTLKT(bpv__CustomxDepthxHighlighterxxClipx__pfTTTLK);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				bpf__KaleidoscopexFunc__pfT(bpv__Kaleidoscope__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				bpf__LetterboxingxFunc__pfT(bpv__Letterboxing__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 57:
			{
				bpf__SnowxFunc__pfT(bpv__Snow__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 58:
			{
				bpf__WorldxSplashxFunc__pfTT(bpv__WorldxSplash__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				bpf__WorldxGlitchxFunc__pfTT(bpv__WorldxGlitch__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 60:
			{
				bpf__DigitizexFunc__pfT(bpv__Digitize__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 61:
			{
				bpf__AlarmxFunc__pfT(bpv__Alarm__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 62:
			{
				bpf__SketchxFunc__pfT(bpv__Sketch__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				bpf__WiredxFunc__pfT(bpv__Wired__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 64:
			{
				bpf__ActorxFeaturettexFunc__pfTT(bpv__ActorxFeaturette__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				bpf__InfectedxFunc__pfT(bpv__Infected__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				bpf__ColoredxAOxFunc__pfTT(bpv__ColoredxAO__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 67:
			{
				bpf__CameraxShakexFunc__pfTT(bpv__CameraxShake__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				bpf__DiscoxBallxFunc__pfTT(bpv__DiscoxBall__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 69:
			{
				bpf__HazyxLightsxFunc__pfTT(bpv__HazyxLights__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 70:
			{
				bpf__MeltedxWorldxFunc__pfTT(bpv__MeltedxWorld__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 71:
			{
				bpf__SelectivexColorxFunc__pfTT(bpv__SelectivexColor__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 72:
			{
				bpf__LensxFunc__pfT(bpv__LensxDistortion__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 73:
			{
				bpf__ZonexFunc__pfT(bpv__Zone__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 74:
			{
				bpf__PyramidxFunc__pfT(bpv__Pyramid__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 75:
			{
				bpf__MojoxFunc__pfT(bpv__Mojo__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 76:
			{
				bpf__GradientxFogxFunc__pfTT(bpv__GradientxFog__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 77:
			{
				bpf__DitherxFunc__pfT(bpv__Dither__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 78:
			{
				bpf__SpeedxLinesxFunc__pfTT(bpv__SpeedxLines__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 79:
			{
				bpf__CyberxScanxFunc__pfTT(bpv__CyberxScan__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ScreenxDropsxFunc__pfTT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mScreenDrops__pf, /*out*/ bpv__iScreenDrops__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ScreenxDropsxxxAdvanced__pfTTGT, bpv__mScreenDrops__pf, bpv__iScreenDrops__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("DistortionMap")), bpv__ScreenxDropsxLayerx1xMap__pfTTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionValue")), bpv__ScreenxDropsxLayerx1xIntensity__pfTTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionSpeed")), bpv__ScreenxDropsxLayerx1xSpeed__pfTTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("DistortionMap2")), bpv__ScreenxDropsxLayerx2xMap__pfTTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionValue2")), bpv__ScreenxDropsxLayerx2xIntensity__pfTTTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionSpeed2")), bpv__ScreenxDropsxLayerx2xSpeed__pfTTTT);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("DistortionMap3")), bpv__ScreenxDropsxLayerx3xMap__pfTTTT);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionValue3")), bpv__ScreenxDropsxLayerx3xIntensity__pfTTTT);
				}
			}
		case 12:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionSpeed3")), bpv__ScreenxDropsxLayerx3xSpeed__pfTTTT);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("SplashesIntensity")), bpv__ScreenxDropsxSplashesxIntensity__pfTTT);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Amount")), bpv__ScreenxDropsxSplashesxAmount__pfTTT);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("SplashesTiling")), bpv__ScreenxDropsxSplashesxTiling__pfTTT);
				}
			}
		case 16:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Noising1")), bpv__ScreenxDropsxLayerx1xNoise__pfTTTT);
				}
			}
		case 17:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Noising2")), bpv__ScreenxDropsxLayerx2xNoise__pfTTTT);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Noising3")), bpv__ScreenxDropsxLayerx3xNoise__pfTTTT);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Screen Bump")), bpv__ScreenxDropsxBump__pfTT);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Color Intensity")), bpv__ScreenxDropsxDiffusexIntensity__pfTTT);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__iScreenDrops__pf))
				{
					bpv__iScreenDrops__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__ScreenxDropsxDiffusexColor__pfTTT);
				}
			}
		case 22:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__MosaicxFunc__pfT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mMosaic__pf, /*out*/ bpv__iMosaic__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__MosaicxxxAdvanced__pfTGT, bpv__mMosaic__pf, bpv__iMosaic__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iMosaic__pf))
				{
					bpv__iMosaic__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Tiling")), bpv__MosaicxScale__pfT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__AlcoholxFunc__pfT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mAlcohol__pf, /*out*/ bpv__iAlcohol__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__AlcoholxxxAdvanced__pfTGT, bpv__mAlcohol__pf, bpv__iAlcohol__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iAlcohol__pf))
				{
					bpv__iAlcohol__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__AlcoholxSpeed__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iAlcohol__pf))
				{
					bpv__iAlcohol__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Offset")), bpv__AlcoholxOffset__pfT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__DrugxFunc__pfT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mDrug__pf, /*out*/ bpv__iDrug__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__DrugxxxAdvanced__pfTGT, bpv__mDrug__pf, bpv__iDrug__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iDrug__pf))
				{
					bpv__iDrug__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__DrugxSpeed__pfT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__PixelxDissolvexFunc__pfTT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mPixelDissolve__pf, /*out*/ bpv__iPixelDissolve__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__PixelxDissolvexxxAdvanced__pfTTGT, bpv__mPixelDissolve__pf, bpv__iPixelDissolve__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iPixelDissolve__pf))
				{
					bpv__iPixelDissolve__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Corners")), bpv__PixelxDissolvexIntensity__pfTT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__BlurxFunc__pfT(bool bpp__isEnabled__pf)
{
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mBlur__pf, /*out*/ bpv__iBlur__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__BlurxxxAdvanced__pfTGT, bpv__mBlur__pf, bpv__iBlur__pf);
			}
		case 4:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__BlurxSamples__pfT);
				if(::IsValid(bpv__iBlur__pf))
				{
					bpv__iBlur__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("bSamples")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iBlur__pf))
				{
					bpv__iBlur__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("bVal")), bpv__BlurxAmount__pfT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ColorizexFunc__pfT(bool bpp__Condition__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__Condition__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mColorize__pf, /*out*/ bpv__iColorize__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ColorizexxxAdvanced__pfTGT, bpv__mColorize__pf, bpv__iColorize__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iColorize__pf))
				{
					bpv__iColorize__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Details")), bpv__ColorizexDetail__pfT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ComicxFunc__pfT(bool bpp__isEnabled__pf)
{
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mComic__pf, /*out*/ bpv__iComic__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ComicxxxAdvanced__pfTGT, bpv__mComic__pf, bpv__iComic__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iComic__pf))
				{
					bpv__iComic__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("BlendingColor")), bpv__ComicxBlendxColor__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iComic__pf))
				{
					bpv__iComic__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Threshold")), bpv__ComicxThreshold__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iComic__pf))
				{
					bpv__iComic__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("PreMultiply")), bpv__ComicxPreMultiplier__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iComic__pf))
				{
					bpv__iComic__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Desaturation")), bpv__ComicxDesaturation__pfT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iComic__pf))
				{
					bpv__iComic__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("PatternIntensity")), bpv__ComicxPatternxIntensity__pfTT);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__ComicxPatternxLinexCount__pfTTT);
				if(::IsValid(bpv__iComic__pf))
				{
					bpv__iComic__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("PatternLineCount")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iComic__pf))
				{
					bpv__iComic__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("PatternRotation")), bpv__ComicxPatternxRotation__pfTT);
				}
			}
		case 11:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__GlitchxFunc__pfT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mGlitch__pf, /*out*/ bpv__iGlitch__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__GlitchxxxAdvanced__pfTGT, bpv__mGlitch__pf, bpv__iGlitch__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iGlitch__pf))
				{
					bpv__iGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Amount")), bpv__GlitchxBlocking__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iGlitch__pf))
				{
					bpv__iGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__GlitchxSpeed__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iGlitch__pf))
				{
					bpv__iGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Density")), bpv__GlitchxLines__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iGlitch__pf))
				{
					bpv__iGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("GridDistortionPower")), bpv__GlitchxGridxDistortionxPower__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iGlitch__pf))
				{
					bpv__iGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("GridDistortionSize")), bpv__GlitchxGridxDistortionxSize__pfTTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iGlitch__pf))
				{
					bpv__iGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("GridDistortionSpeed")), bpv__GlitchxGridxDistortionxSpeed__pfTTT);
				}
			}
		case 10:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__MonitorFXxFunc__pfT(bool bpp__isEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mGrainNLines__pf, /*out*/ bpv__iGrainNLines__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__MonitorxEffectsxxxAdvanced__pfTTGT, bpv__mGrainNLines__pf, bpv__iGrainNLines__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iGrainNLines__pf))
				{
					bpv__iGrainNLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("LineCount")), bpv__MonitorxEffectsxLinexCount__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iGrainNLines__pf))
				{
					bpv__iGrainNLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Intensity1")), bpv__MonitorxEffectsxIntensityx1__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iGrainNLines__pf))
				{
					bpv__iGrainNLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Intensity2")), bpv__MonitorxEffectsxIntensityx2__pfTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iGrainNLines__pf))
				{
					bpv__iGrainNLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distortion1")), bpv__MonitorxEffectsxDistortionx1__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iGrainNLines__pf))
				{
					bpv__iGrainNLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distortion2")), bpv__MonitorxEffectsxDistortionx2__pfTTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iGrainNLines__pf))
				{
					bpv__iGrainNLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Scale")), bpv__MonitorxEffectsxPicturexScale__pfTTT);
				}
			}
		case 10:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__MonitorxEffectsxTiled__pfTT);
				if(::IsValid(bpv__iGrainNLines__pf))
				{
					bpv__iGrainNLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Tiled")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 11:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__HuexPannerxFunc__pfTT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mHuePanner__pf, /*out*/ bpv__iHuePanner__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__HuexPannerxxxAdvanced__pfTTGT, bpv__mHuePanner__pf, bpv__iHuePanner__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iHuePanner__pf))
				{
					bpv__iHuePanner__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__HuexPannerxSpeed__pfTT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__MonochromexFunc__pfT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mMonochrome__pf, /*out*/ bpv__iMonochrome__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__MonochromexxxAdvanced__pfTGT, bpv__mMonochrome__pf, bpv__iMonochrome__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iMonochrome__pf))
				{
					bpv__iMonochrome__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MonoColor")), bpv__MonochromexColor__pfT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__RadialxBlurxFunc__pfTT(bool bpp__isEnabled__pf)
{
	float bpfv__CallFunc_BreakVector2D_X__pf{};
	float bpfv__CallFunc_BreakVector2D_Y__pf{};
	float bpfv__CallFunc_BreakVector2D_X_1__pf{};
	float bpfv__CallFunc_BreakVector2D_Y_1__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mRadialBlur__pf, /*out*/ bpv__iRadialBlur__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__RadialxBlurxxxAdvanced__pfTTGT, bpv__mRadialBlur__pf, bpv__iRadialBlur__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iRadialBlur__pf))
				{
					bpv__iRadialBlur__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlurWidth")), bpv__RadialxBlurxWidth__pfTT);
				}
			}
		case 5:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__RadialxBlurxSamples__pfTT);
				if(::IsValid(bpv__iRadialBlur__pf))
				{
					bpv__iRadialBlur__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlurSamples")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 6:
			{
				UKismetMathLibrary::BreakVector2D(bpv__RadialxBlurxCenter__pfTT, /*out*/ bpfv__CallFunc_BreakVector2D_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y_1__pf);
				if(::IsValid(bpv__iRadialBlur__pf))
				{
					bpv__iRadialBlur__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CenterX")), bpfv__CallFunc_BreakVector2D_X_1__pf);
				}
			}
		case 7:
			{
				UKismetMathLibrary::BreakVector2D(bpv__RadialxBlurxCenter__pfTT, /*out*/ bpfv__CallFunc_BreakVector2D_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y_1__pf);
				if(::IsValid(bpv__iRadialBlur__pf))
				{
					bpv__iRadialBlur__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CenterY")), bpfv__CallFunc_BreakVector2D_Y_1__pf);
				}
			}
		case 8:
			{
				UKismetMathLibrary::BreakVector2D(bpv__RadialxBlurxSamplexOffset__pfTTT, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				if(::IsValid(bpv__iRadialBlur__pf))
				{
					bpv__iRadialBlur__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("SampleOffsetX")), bpfv__CallFunc_BreakVector2D_X__pf);
				}
			}
		case 9:
			{
				UKismetMathLibrary::BreakVector2D(bpv__RadialxBlurxSamplexOffset__pfTTT, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				if(::IsValid(bpv__iRadialBlur__pf))
				{
					bpv__iRadialBlur__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("SampleOffsetY")), bpfv__CallFunc_BreakVector2D_Y__pf);
				}
			}
		case 10:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ScreenxWavesxFunc__pfTT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mScreenWaves__pf, /*out*/ bpv__iScreenWaves__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ScreenxWavesxxxAdvanced__pfTTGT, bpv__mScreenWaves__pf, bpv__iScreenWaves__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iScreenWaves__pf))
				{
					bpv__iScreenWaves__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("xValue")), bpv__ScreenxWavesxXxTiling__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iScreenWaves__pf))
				{
					bpv__iScreenWaves__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("yValue")), bpv__ScreenxWavesxYxTiling__pfTTT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__DistancexFogxFunc__pfTT(bool bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mDistanceFog__pf, /*out*/ bpv__iDistanceFog__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__DistancexFogxxxAdvanced__pfTTGT, bpv__mDistanceFog__pf, bpv__iDistanceFog__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iDistanceFog__pf))
				{
					bpv__iDistanceFog__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("NearMultiply")), bpv__DistancexFogxNearxColor__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iDistanceFog__pf))
				{
					bpv__iDistanceFog__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("FogColor")), bpv__DistancexFogxFarxColor__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iDistanceFog__pf))
				{
					bpv__iDistanceFog__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distance")), bpv__DistancexFogxDistance__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iDistanceFog__pf))
				{
					bpv__iDistanceFog__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sharpness")), bpv__DistancexFogxEdgexSharpness__pfTTT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ScratchesxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mScratches__pf, /*out*/ bpv__iScratches__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ScratchesxxxAdvanced__pfTGT, bpv__mScratches__pf, bpv__iScratches__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iScratches__pf))
				{
					bpv__iScratches__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("ScratchesColor")), bpv__ScratchesxColor__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iScratches__pf))
				{
					bpv__iScratches__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Deformation Noise")), bpv__ScratchesxNoising__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iScratches__pf))
				{
					bpv__iScratches__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("DistortionMap")), bpv__ScratchesxDistortionxMap__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iScratches__pf))
				{
					bpv__iScratches__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionAmount")), bpv__ScratchesxDistortionxAmount__pfTT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__BleachxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mBleachBypass__pf, /*out*/ bpv__iBleachBypass__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__BleachxBypassxxxAdvanced__pfTTGT, bpv__mBleachBypass__pf, bpv__iBleachBypass__pf);
			}
		case 4:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ASCIIxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mAscii__pf, /*out*/ bpv__iAscii__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ASCIIxxxAdvanced__pfTGT, bpv__mAscii__pf, bpv__iAscii__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iAscii__pf))
				{
					bpv__iAscii__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color Multiplier")), bpv__ASCIIxColorxMultiplier__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iAscii__pf))
				{
					bpv__iAscii__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("PreMultiply")), bpv__ASCIIxPreMultiplier__pfT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__EdgexDetectxFunc__pfTT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mEdgeDetect__pf, /*out*/ bpv__iEdgeDetect__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__EdgexDetectxxxAdvanced__pfTTGT, bpv__mEdgeDetect__pf, bpv__iEdgeDetect__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iEdgeDetect__pf))
				{
					bpv__iEdgeDetect__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Threshold")), bpv__EdgexDetectxThreshold__pfTT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__EmbossxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mEmboss__pf, /*out*/ bpv__iEmboss__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__EmbossxxxAdvanced__pfTGT, bpv__mEmboss__pf, bpv__iEmboss__pf);
			}
		case 4:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__HardxEmbossxFunc__pfTT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mHardEmboss__pf, /*out*/ bpv__iHardEmboss__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__HardxEmbossxxxAdvanced__pfTTGT, bpv__mHardEmboss__pf, bpv__iHardEmboss__pf);
			}
		case 4:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__InvertxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mInvert__pf, /*out*/ bpv__iInvert__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__InvertxxxAdvanced__pfTGT, bpv__mInvert__pf, bpv__iInvert__pf);
			}
		case 4:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__IridescentxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mIridescent__pf, /*out*/ bpv__iIridescent__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__IridescentxxxAdvanced__pfTGT, bpv__mIridescent__pf, bpv__iIridescent__pf);
			}
		case 4:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(1.200000, bpv__IridescentxIridescence__pfT);
				if(::IsValid(bpv__iIridescent__pf))
				{
					bpv__iIridescent__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Scale")), bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__KuwaharaxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mKuwahara__pf, /*out*/ bpv__iKuwahara__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__KuwaharaxxxAdvanced__pfTGT, bpv__mKuwahara__pf, bpv__iKuwahara__pf);
			}
		case 4:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__KuwaharaxAmount__pfT);
				if(::IsValid(bpv__iKuwahara__pf))
				{
					bpv__iKuwahara__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Size")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__PulsexFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mPulse__pf, /*out*/ bpv__iPulse__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__PulsexxxAdvanced__pfTGT, bpv__mPulse__pf, bpv__iPulse__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iPulse__pf))
				{
					bpv__iPulse__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("X")), bpv__PulsexCenterxX__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iPulse__pf))
				{
					bpv__iPulse__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Y")), bpv__PulsexCenterxY__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iPulse__pf))
				{
					bpv__iPulse__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__PulsexSpeed__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iPulse__pf))
				{
					bpv__iPulse__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Power")), bpv__PulsexSmoothing__pfT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SquaresxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mSquares__pf, /*out*/ bpv__iSquares__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__SquaresxxxAdvanced__pfTGT, bpv__mSquares__pf, bpv__iSquares__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iSquares__pf))
				{
					bpv__iSquares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Scale")), bpv__SquaresxScale__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iSquares__pf))
				{
					bpv__iSquares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Ratio")), bpv__SquaresxRatio__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iSquares__pf))
				{
					bpv__iSquares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CellBorderRadius")), bpv__SquaresxRadius__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iSquares__pf))
				{
					bpv__iSquares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Lumi")), bpv__SquaresxBrightness__pfT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__TilesxFunc__pfT(/*out*/ bool& bpp__isEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mTiles__pf, /*out*/ bpv__iTiles__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__TilesxxxAdvanced__pfTGT, bpv__mTiles__pf, bpv__iTiles__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iTiles__pf))
				{
					bpv__iTiles__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("TileCount")), bpv__TilesxCount__pfT);
				}
			}
		case 5:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__TilesxCentered__pfT);
				if(::IsValid(bpv__iTiles__pf))
				{
					bpv__iTiles__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Centered")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__TVxNoisexFunc__pfTT(/*out*/ bool& bpp__isEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mTVNoise__pf, /*out*/ bpv__iTVNoise__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__TVxNoisexxxAdvanced__pfTTGT, bpv__mTVNoise__pf, bpv__iTVNoise__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iTVNoise__pf))
				{
					bpv__iTVNoise__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NoiseContrast")), bpv__TVxNoisexContrast__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iTVNoise__pf))
				{
					bpv__iTVNoise__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NoiseIntensity")), bpv__TVxNoisexIntensity__pfTT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__LOOKxFunc__pfT(bool bpp__Condition__pf)
{
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	FName bpfv__CallFunc_Conv_StringToName_ReturnValue__pf{};
	FLOOKCGStruct__pf2387075495 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__Condition__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->ReferencedConvertedFields[2]), static_cast<uint8>(bpv__LOOKxxPresets__pfST));
				bpfv__CallFunc_Conv_StringToName_ReturnValue__pf = UKismetStringLibrary::Conv_StringToName(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(CastChecked<UDataTable>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->UsedAssets[92], ECastCheckedType::NullAllowed), bpfv__CallFunc_Conv_StringToName_ReturnValue__pf, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 3:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__InternalPP__pf))
				{
					bpv__InternalPP__pf->Settings.ColorGradingLUT = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__File_13_63DC650B4BDD73EBAA9B97AAB0ABE957__pf;
				}
				if(::IsValid(bpv__InternalPP__pf))
				{
					bpv__InternalPP__pf->Settings.bOverride_ColorGradingLUT = true;
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__CirclesxFunc__pfT(bool bpp__Condition__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__Condition__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mCircles__pf, /*out*/ bpv__iCircles__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__CirclesxxxAdvanced__pfTGT, bpv__mCircles__pf, bpv__iCircles__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iCircles__pf))
				{
					bpv__iCircles__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Tiling")), bpv__CirclesxTiling__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iCircles__pf))
				{
					bpv__iCircles__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Ratio")), bpv__CirclesxRatio__pfT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SonarxFunc__pfT(bool bpp__Condition__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__Condition__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mSonar__pf, /*out*/ bpv__iSonar__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__SonarxxxAdvanced__pfTGT, bpv__mSonar__pf, bpv__iSonar__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iSonar__pf))
				{
					bpv__iSonar__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ColorIntensity")), bpv__SonarxColorxIntensity__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iSonar__pf))
				{
					bpv__iSonar__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Depth")), bpv__SonarxDepth__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iSonar__pf))
				{
					bpv__iSonar__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distance")), bpv__SonarxWavexDistance__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iSonar__pf))
				{
					bpv__iSonar__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionIntensity")), bpv__SonarxDistortionxIntensity__pfTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iSonar__pf))
				{
					bpv__iSonar__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sharpness")), bpv__SonarxSharpness__pfT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iSonar__pf))
				{
					bpv__iSonar__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__SonarxColor__pfT);
				}
			}
		case 10:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__DistancexDistortionxFunc__pfTT(bool bpp__Condition__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__Condition__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mDistanceDistortion__pf, /*out*/ bpv__iDistanceDistortion__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__DistancexDistortionxxxAdvanced__pfTTGT, bpv__mDistanceDistortion__pf, bpv__iDistanceDistortion__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iDistanceDistortion__pf))
				{
					bpv__iDistanceDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__DistancexDistortionxMovementxSpeed__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iDistanceDistortion__pf))
				{
					bpv__iDistanceDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Size")), bpv__DistancexDistortionxMovementxScale__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iDistanceDistortion__pf))
				{
					bpv__iDistanceDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionAmount")), bpv__DistancexDistortionxAmount__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iDistanceDistortion__pf))
				{
					bpv__iDistanceDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distance")), bpv__DistancexDistortionxEdgexDistance__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iDistanceDistortion__pf))
				{
					bpv__iDistanceDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("EdgeFading")), bpv__DistancexDistortionxEdgexFading__pfTTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iDistanceDistortion__pf))
				{
					bpv__iDistanceDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("AffectedBrightness")), bpv__DistancexDistortionxAffectedxBrightness__pfTTT);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iDistanceDistortion__pf))
				{
					bpv__iDistanceDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UnaffectedBrightness")), bpv__DistancexDistortionxUnaffectedxBrightness__pfTTT);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__iDistanceDistortion__pf))
				{
					bpv__iDistanceDistortion__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("DistortionNormal")), bpv__DistancexDistortionxNormal__pfTT);
				}
			}
		case 12:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__DrawingxFunc__pfT(bool bpp__IsEnabled__pf)
{
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mDrawing__pf, /*out*/ bpv__iDrawing__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__DrawingxxxAdvanced__pfTGT, bpv__mDrawing__pf, bpv__iDrawing__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iDrawing__pf))
				{
					bpv__iDrawing__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("SST")), bpv__DrawingxPaperxTexture__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iDrawing__pf))
				{
					bpv__iDrawing__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__DrawingxBlendingxColor__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iDrawing__pf))
				{
					bpv__iDrawing__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Details")), bpv__DrawingxInkxAmount__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iDrawing__pf))
				{
					bpv__iDrawing__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("LinerAmount")), bpv__DrawingxLinerxAmount__pfTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iDrawing__pf))
				{
					bpv__iDrawing__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NoiseAnimationSpeed")), bpv__DrawingxAnimationxSpeed__pfTT);
				}
			}
		case 9:
			{
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->ReferencedConvertedFields[1]), static_cast<uint8>(bpv__DrawingxNoisexAlgorithm__pfTT));
				bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf = UKismetStringLibrary::Conv_StringToFloat(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
				if(::IsValid(bpv__iDrawing__pf))
				{
					bpv__iDrawing__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NoiseMode")), bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf);
				}
			}
		case 10:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__MagicxTransitionsxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mMagicTransitions__pf, /*out*/ bpv__iMagicTransitions__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__MagicxTransitionsxxxAdvanced__pfTTGT, bpv__mMagicTransitions__pf, bpv__iMagicTransitions__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iMagicTransitions__pf))
				{
					bpv__iMagicTransitions__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("FinalTexture")), bpv__MagicxTransitionsxFinalxTexture__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iMagicTransitions__pf))
				{
					bpv__iMagicTransitions__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Mask")), bpv__MagicxTransitionsxMaskxTexture__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iMagicTransitions__pf))
				{
					bpv__iMagicTransitions__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FlashingIntensity")), bpv__MagicxTransitionsxFlashingxIntensity__pfTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iMagicTransitions__pf))
				{
					bpv__iMagicTransitions__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FlashingTolerance")), bpv__MagicxTransitionsxFlashingxTolerance__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iMagicTransitions__pf))
				{
					bpv__iMagicTransitions__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("TransitionAmount")), bpv__MagicxTransitionsxTransitionxAmount__pfTTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iMagicTransitions__pf))
				{
					bpv__iMagicTransitions__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("FlashingColor")), bpv__MagicxTransitionsxFlashingxColor__pfTTT);
				}
			}
		case 10:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ScreenxDamagexFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mScreenDamage__pf, /*out*/ bpv__iScreenDamage__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ScreenxDamagexxxAdvanced__pfTTGT, bpv__mScreenDamage__pf, bpv__iScreenDamage__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iScreenDamage__pf))
				{
					bpv__iScreenDamage__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("DamageTexture")), bpv__ScreenxDamagexTexture__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iScreenDamage__pf))
				{
					bpv__iScreenDamage__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Texture Intensity")), bpv__ScreenxDamagexIntensity__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iScreenDamage__pf))
				{
					bpv__iScreenDamage__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionValue")), bpv__ScreenxDamagexDistortion__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iScreenDamage__pf))
				{
					bpv__iScreenDamage__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Edge")), bpv__ScreenxDamagexEdgexSize__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iScreenDamage__pf))
				{
					bpv__iScreenDamage__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Fading")), bpv__ScreenxDamagexFading__pfTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iScreenDamage__pf))
				{
					bpv__iScreenDamage__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__ScreenxDamagexTint__pfTT);
				}
			}
		case 10:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ScreenxDecalsxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 32;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mScreenDecals__pf, /*out*/ bpv__iScreenDecals__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ScreenxDecalsxxxAdvanced__pfTTGT, bpv__mScreenDecals__pf, bpv__iScreenDecals__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Slot1 - Texture")), bpv__ScreenxDecalsxSlotx1xxxTexture__pfTTTTGT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot1 - Distortion")), bpv__ScreenxDecalsxSlotx1xxxDistortion__pfTTTTGT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot1 - Intensity")), bpv__ScreenxDecalsxSlotx1xxxIntensity__pfTTTTGT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot1 - Position.X")), bpv__ScreenxDecalsxSlotx1xxxPositionxX__pfTTTTGTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot1 - Position.Y")), bpv__ScreenxDecalsxSlotx1xxxPositionxY__pfTTTTGTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot1 - TextureScale")), bpv__ScreenxDecalsxSlotx1xxxSize__pfTTTTGT);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot1 - Rotation")), bpv__ScreenxDecalsxSlotx1xxxRotation__pfTTTTGT);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Slot2 - Texture")), bpv__ScreenxDecalsxSlotx2xxxTexture__pfTTTTGT);
				}
			}
		case 12:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot2 - Distortion")), bpv__ScreenxDecalsxSlotx2xxxDistortion__pfTTTTGT);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot2 - Intensity")), bpv__ScreenxDecalsxSlotx2xxxIntensity__pfTTTTGT);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot2 - Position.X")), bpv__ScreenxDecalsxSlotx2xxxPositionxX__pfTTTTGTT);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot2 - Position.Y")), bpv__ScreenxDecalsxSlotx2xxxPositionxY__pfTTTTGTT);
				}
			}
		case 16:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot2 - TextureScale")), bpv__ScreenxDecalsxSlotx2xxxSize__pfTTTTGT);
				}
			}
		case 17:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot2 - Rotation")), bpv__ScreenxDecalsxSlotx2xxxRotation__pfTTTTGT);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Slot3 - Texture")), bpv__ScreenxDecalsxSlotx3xxxTexture__pfTTTTGT);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot3 - Distortion")), bpv__ScreenxDecalsxSlotx3xxxDistortion__pfTTTTGT);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot3 - Intensity")), bpv__ScreenxDecalsxSlotx3xxxIntensity__pfTTTTGT);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot3 - Position.X")), bpv__ScreenxDecalsxSlotx3xxxPositionxX__pfTTTTGTT);
				}
			}
		case 22:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot3 - Position.Y")), bpv__ScreenxDecalsxSlotx3xxxPositionxY__pfTTTTGTT);
				}
			}
		case 23:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot3 - TextureScale")), bpv__ScreenxDecalsxSlotx3xxxSize__pfTTTTGT);
				}
			}
		case 24:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot3 - Rotation")), bpv__ScreenxDecalsxSlotx3xxxRotation__pfTTTTGT);
				}
			}
		case 25:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Slot4 - Texture")), bpv__ScreenxDecalsxSlotx4xxxTexture__pfTTTTGT);
				}
			}
		case 26:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot4 - Distortion")), bpv__ScreenxDecalsxSlotx4xxxDistortion__pfTTTTGT);
				}
			}
		case 27:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot4 - Intensity")), bpv__ScreenxDecalsxSlotx4xxxIntensity__pfTTTTGT);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot4 - Position.X")), bpv__ScreenxDecalsxSlotx4xxxPositionxX__pfTTTTGTT);
				}
			}
		case 29:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot4 - Position.Y")), bpv__ScreenxDecalsxSlotx4xxxPositionxY__pfTTTTGTT);
				}
			}
		case 30:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot4 - TextureScale")), bpv__ScreenxDecalsxSlotx4xxxSize__pfTTTTGT);
				}
			}
		case 31:
			{
				if(::IsValid(bpv__iScreenDecals__pf))
				{
					bpv__iScreenDecals__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Slot4 - Rotation")), bpv__ScreenxDecalsxSlotx4xxxRotation__pfTTTTGT);
				}
			}
		case 32:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SharpenxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mSharpen__pf, /*out*/ bpv__iSharpen__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__SharpenxxxAdvanced__pfTGT, bpv__mSharpen__pf, bpv__iSharpen__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iSharpen__pf))
				{
					bpv__iSharpen__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Value")), bpv__SharpenxValue__pfT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ToonxShadingxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mToonShading__pf, /*out*/ bpv__iToonShading__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ToonxShadingxxxAdvanced__pfTTGT, bpv__mToonShading__pf, bpv__iToonShading__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iToonShading__pf))
				{
					bpv__iToonShading__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Details")), bpv__ToonxShadingxDetails__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iToonShading__pf))
				{
					bpv__iToonShading__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Fading")), bpv__ToonxShadingxFadingx__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iToonShading__pf))
				{
					bpv__iToonShading__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Size")), bpv__ToonxShadingxSize__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iToonShading__pf))
				{
					bpv__iToonShading__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sobel Strength")), bpv__ToonxShadingxSobelxStrength__pfTTT);
				}
			}
		case 8:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__ToonxShadingxUsexDiffusexBuffer__pfTTTT);
				if(::IsValid(bpv__iToonShading__pf))
				{
					bpv__iToonShading__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("isDiffuseBuffer")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 9:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__AnamorphicxLensxFlaresxFunc__pfTTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mAnamorphicLensFlares__pf, /*out*/ bpv__iAnamorphicLensFlares__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__AnamorphicxLensxFlaresxxxAdvanced__pfTTTGT, bpv__mAnamorphicLensFlares__pf, bpv__iAnamorphicLensFlares__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iAnamorphicLensFlares__pf))
				{
					bpv__iAnamorphicLensFlares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("LinearColor")), bpv__AnamorphicxLensxFlaresxLinearxColor__pfTTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iAnamorphicLensFlares__pf))
				{
					bpv__iAnamorphicLensFlares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ExposureScale")), bpv__AnamorphicxLensxFlaresxExposurexScale__pfTTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iAnamorphicLensFlares__pf))
				{
					bpv__iAnamorphicLensFlares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BloomThreshold")), bpv__AnamorphicxLensxFlaresxThreshold__pfTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iAnamorphicLensFlares__pf))
				{
					bpv__iAnamorphicLensFlares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BloomAnamorphicIntensity")), bpv__AnamorphicxLensxFlaresxIntensity__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iAnamorphicLensFlares__pf))
				{
					bpv__iAnamorphicLensFlares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BloomAnamorphicSteps")), bpv__AnamorphicxLensxFlaresxSteps__pfTTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iAnamorphicLensFlares__pf))
				{
					bpv__iAnamorphicLensFlares__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BloomAnamorphicLength")), bpv__AnamorphicxLensxFlaresxLength__pfTTT);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iAnamorphicLensFlares__pf))
				{
					bpv__iAnamorphicLensFlares__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("BloomAnamorphicTint")), bpv__AnamorphicxLensxFlaresxTint__pfTTT);
				}
			}
		case 11:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__FrostxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mFrost__pf, /*out*/ bpv__iFrost__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__FrostxxxAdvanced__pfTGT, bpv__mFrost__pf, bpv__iFrost__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iFrost__pf))
				{
					bpv__iFrost__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("DistortionMap")), bpv__FrostxTexture__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iFrost__pf))
				{
					bpv__iFrost__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Colorization")), bpv__FrostxColorization__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iFrost__pf))
				{
					bpv__iFrost__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FrostVal1")), bpv__FrostxDistortionxStrength__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iFrost__pf))
				{
					bpv__iFrost__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FrostVal2")), bpv__FrostxVisiblexArea__pfTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iFrost__pf))
				{
					bpv__iFrost__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("IceColor")), bpv__FrostxColor__pfT);
				}
			}
		case 9:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__NeonxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mNeon__pf, /*out*/ bpv__iNeon__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__NeonxxxAdvanced__pfTGT, bpv__mNeon__pf, bpv__iNeon__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iNeon__pf))
				{
					bpv__iNeon__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Deformation Noise")), bpv__NeonxNoise__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iNeon__pf))
				{
					bpv__iNeon__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Power")), bpv__NeonxPower__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iNeon__pf))
				{
					bpv__iNeon__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("NoiseSpeed")), bpv__NeonxNoisexSpeed__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iNeon__pf))
				{
					bpv__iNeon__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__NeonxColor__pfT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iNeon__pf))
				{
					bpv__iNeon__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("ColorBG")), bpv__NeonxBackgroundxColor__pfTT);
				}
			}
		case 9:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__CustomxDepthxHighlighterxFunc__pfTTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mCustomDepthHighlighter__pf, /*out*/ bpv__iCustomDepthHighlighter__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeaturesxxNoxCustomxDepthx__pfTTTTLTTK(bpv__CustomxDepthxHighlighterxxxAdvanced__pfTTTGT, bpv__mCustomDepthHighlighter__pf, bpv__iCustomDepthHighlighter__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iCustomDepthHighlighter__pf))
				{
					bpv__iCustomDepthHighlighter__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), bpv__CustomxDepthxHighlighterxHighlightxOpacity__pfTTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iCustomDepthHighlighter__pf))
				{
					bpv__iCustomDepthHighlighter__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__CustomxDepthxHighlighterxHighlightxColor__pfTTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iCustomDepthHighlighter__pf))
				{
					bpv__iCustomDepthHighlighter__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("OutlineOpacity")), bpv__CustomxDepthxHighlighterxOutlinexOpacity__pfTTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iCustomDepthHighlighter__pf))
				{
					bpv__iCustomDepthHighlighter__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("OutlineColor")), bpv__CustomxDepthxHighlighterxOutlinexColor__pfTTTT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__CustomxDepthxHighlighterxxNCxxFunc__pfTTTLKT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mCustomDepthHighlighterClip__pf, /*out*/ bpv__iCustomDepthHighlighterClip__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeaturesxxNoxCustomxDepthx__pfTTTTLTTK(bpv__CustomxDepthxHighlighterxxClipxxxxAdvanced__pfTTTLKTGT, bpv__mCustomDepthHighlighterClip__pf, bpv__iCustomDepthHighlighterClip__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iCustomDepthHighlighterClip__pf))
				{
					bpv__iCustomDepthHighlighterClip__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), bpv__CustomxDepthxHighlighterxxCxxHighlightxOpacity__pfTTTLKTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iCustomDepthHighlighterClip__pf))
				{
					bpv__iCustomDepthHighlighterClip__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__CustomxDepthxHighlighterxxCxxHighlightxColor__pfTTTLKTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iCustomDepthHighlighterClip__pf))
				{
					bpv__iCustomDepthHighlighterClip__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("OutlineOpacity")), bpv__CustomxDepthxHighlighterxxCxxOutlinexOpacity__pfTTTLKTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iCustomDepthHighlighterClip__pf))
				{
					bpv__iCustomDepthHighlighterClip__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("OutlineColor")), bpv__CustomxDepthxHighlighterxxCxxOutlinexColor__pfTTTLKTT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ApplyChameleonSettings__pf()
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__InternalPP__pf))
				{
					bpv__InternalPP__pf->bUnbound = bpv__Unbound__pf;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__InternalPP__pf))
				{
					bpv__InternalPP__pf->Settings = bpv__NativexPostxProcess__pfTT;
				}
			}
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SetEffectPriority__pf(int32 bpp__Priority__pf, UMaterial* bpp__Material__pf)
{
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				int32  __Local__8 = 0;
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__Priority__pf, ((::IsValid(bpp__Material__pf)) ? (bpp__Material__pf->BlendablePriority) : (__Local__8)));
				if (!bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpp__Material__pf))
				{
					bpp__Material__pf->BlendablePriority = bpp__Priority__pf;
				}
			}
		case 3:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__2DxTransformxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__m2DTransform__pf, /*out*/ bpv__i2DTransform__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__2DxTransformxxxAdvanced__pfTTGT, bpv__m2DTransform__pf, bpv__i2DTransform__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("AnchorPoint (X)")), bpv__2DxTransformxAnchorxPointxxXx__pfTTTTLK);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("AnchorPoint (Y)")), bpv__2DxTransformxAnchorxPointxxYx__pfTTTTLK);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Rotate")), bpv__2DxTransformxRotate__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Pan (X)")), bpv__2DxTransformxPanxxXx__pfTTTLK);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Pan (Y)")), bpv__2DxTransformxPanxxYx__pfTTTLK);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Scale (X)")), bpv__2DxTransformxScalexxXx__pfTTTLK);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Scale (Y)")), bpv__2DxTransformxScalexxYx__pfTTTLK);
				}
			}
		case 11:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__2DxTransformxTiled__pfTT);
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Tiled")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 12:
			{
				if(::IsValid(bpv__i2DTransform__pf))
				{
					bpv__i2DTransform__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("BackgroundColor")), bpv__2DxTransformxBackgroundxColor__pfTTT);
				}
			}
		case 13:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__KaleidoscopexFunc__pfT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mKaleidoscope__pf, /*out*/ bpv__iKaleidoscope__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__KaleidoscopexxxAdvanced__pfTGT, bpv__mKaleidoscope__pf, bpv__iKaleidoscope__pf);
			}
		case 4:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__KaleidoscopexAmount__pfT);
				if(::IsValid(bpv__iKaleidoscope__pf))
				{
					bpv__iKaleidoscope__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Amount")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iKaleidoscope__pf))
				{
					bpv__iKaleidoscope__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("SphericalDistortion")), bpv__KaleidoscopexSphericalDistortion__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iKaleidoscope__pf))
				{
					bpv__iKaleidoscope__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Warp")), bpv__KaleidoscopexWarp__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iKaleidoscope__pf))
				{
					bpv__iKaleidoscope__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FMul")), bpv__KaleidoscopexFMul__pfT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__LetterboxingxFunc__pfT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mLetterboxing__pf, /*out*/ bpv__iLetterboxing__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__LetterboxingxxxAdvanced__pfTGT, bpv__mLetterboxing__pf, bpv__iLetterboxing__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iLetterboxing__pf))
				{
					bpv__iLetterboxing__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Size")), bpv__LetterboxingxSize__pfT);
				}
			}
		case 5:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__LetterboxingxHorizontal__pfT);
				if(::IsValid(bpv__iLetterboxing__pf))
				{
					bpv__iLetterboxing__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("HorizontalBoxing")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_1__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__LetterboxingxVertical__pfT);
				if(::IsValid(bpv__iLetterboxing__pf))
				{
					bpv__iLetterboxing__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("VerticalBoxing")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iLetterboxing__pf))
				{
					bpv__iLetterboxing__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("BorderTexture")), bpv__LetterboxingxTexture__pfT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SnowxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mSnow__pf, /*out*/ bpv__iSnow__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__SnowxxxAdvanced__pfTGT, bpv__mSnow__pf, bpv__iSnow__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iSnow__pf))
				{
					bpv__iSnow__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Amount")), bpv__SnowxAmount__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iSnow__pf))
				{
					bpv__iSnow__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distortion")), bpv__SnowxDistortion__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iSnow__pf))
				{
					bpv__iSnow__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Scale")), bpv__SnowxSize__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iSnow__pf))
				{
					bpv__iSnow__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("xSpeed")), bpv__SnowxSpeedxxXx__pfTTLK);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iSnow__pf))
				{
					bpv__iSnow__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ySpeed")), bpv__SnowxSpeedxxYx__pfTTLK);
				}
			}
		case 9:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__WorldxSplashxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mWorldSplash__pf, /*out*/ bpv__iWorldSplash__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__WorldxSplashxxxAdvanced__pfTTGT, bpv__mWorldSplash__pf, bpv__iWorldSplash__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iWorldSplash__pf))
				{
					bpv__iWorldSplash__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionStrength")), bpv__WorldxSplashxDistort__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iWorldSplash__pf))
				{
					bpv__iWorldSplash__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Smoothness")), bpv__WorldxSplashxSmoothness__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iWorldSplash__pf))
				{
					bpv__iWorldSplash__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Tiling")), bpv__WorldxSplashxTiling__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iWorldSplash__pf))
				{
					bpv__iWorldSplash__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__WorldxSplashxColorxTint__pfTTT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__WorldxGlitchxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mWorldGlitch__pf, /*out*/ bpv__iWorldGlitch__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__WorldxGlitchxxxAdvanced__pfTTGT, bpv__mWorldGlitch__pf, bpv__iWorldGlitch__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iWorldGlitch__pf))
				{
					bpv__iWorldGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distance")), bpv__WorldxGlitchxDistance__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iWorldGlitch__pf))
				{
					bpv__iWorldGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Phase")), bpv__WorldxGlitchxPhase__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iWorldGlitch__pf))
				{
					bpv__iWorldGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sharpness")), bpv__WorldxGlitchxDistancexSharpness__pfTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iWorldGlitch__pf))
				{
					bpv__iWorldGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UVBlending")), bpv__WorldxGlitchxPower__pfTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iWorldGlitch__pf))
				{
					bpv__iWorldGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("AnimationSpeed")), bpv__WorldxGlitchxAnimationxSpeed__pfTTT);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpv__WorldxGlitchxGridxSize__pfTTT);
				if(::IsValid(bpv__iWorldGlitch__pf))
				{
					bpv__iWorldGlitch__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("WSMul")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
			}
		case 10:
			{
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpv__WorldxGlitchxGridxPosition__pfTTT);
				if(::IsValid(bpv__iWorldGlitch__pf))
				{
					bpv__iWorldGlitch__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("WSAdd")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf);
				}
			}
		case 11:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__WorldxGlitchxAnimated__pfTT);
				if(::IsValid(bpv__iWorldGlitch__pf))
				{
					bpv__iWorldGlitch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Animated")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 12:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__DigitizexFunc__pfT(bool bpp__IsEnabled__pf)
{
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mDigitize__pf, /*out*/ bpv__iDigitize__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__DigitizexxxAdvanced__pfTGT, bpv__mDigitize__pf, bpv__iDigitize__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distance")), bpv__DigitizexDistance__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sharpness")), bpv__DigitizexDistancexSharpness__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CellSize")), bpv__DigitizexCellxSize__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CellMultiplier")), bpv__DigitizexCellxColorxMultiplier__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionAmount")), bpv__DigitizexCellxDistortion__pfTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BGMultiplier")), bpv__DigitizexBackgroundxColorxMultiplier__pfTTT);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("BGColor")), bpv__DigitizexCellxColor__pfTT);
				}
			}
		case 11:
			{
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpv__DigitizexCellxPosition__pfTT);
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("CellPosition")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
			}
		case 12:
			{
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpv__DigitizexCellxPositionxOverxTime__pfTTTT);
				if(::IsValid(bpv__iDigitize__pf))
				{
					bpv__iDigitize__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("CellPositionOverTime")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf);
				}
			}
		case 13:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__AlarmxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mAlarm__pf, /*out*/ bpv__iAlarm__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__AlarmxxxAdvanced__pfTGT, bpv__mAlarm__pf, bpv__iAlarm__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iAlarm__pf))
				{
					bpv__iAlarm__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__AlarmxSpeed__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iAlarm__pf))
				{
					bpv__iAlarm__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("AlarmColor")), bpv__AlarmxColor__pfT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SketchxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mSketch__pf, /*out*/ bpv__iSketch__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__SketchxxxAdvanced__pfTGT, bpv__mSketch__pf, bpv__iSketch__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iSketch__pf))
				{
					bpv__iSketch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("FinalPower")), bpv__SketchxPower__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iSketch__pf))
				{
					bpv__iSketch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("HatchRotation")), bpv__SketchxPatternxRotation__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iSketch__pf))
				{
					bpv__iSketch__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("HatchSpeed")), bpv__SketchxPatternxSpeed__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iSketch__pf))
				{
					bpv__iSketch__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("PencilColor")), bpv__SketchxColor__pfT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iSketch__pf))
				{
					bpv__iSketch__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("BackgroundColor")), bpv__SketchxBackgroundxColor__pfTT);
				}
			}
		case 9:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__WiredxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mWired__pf, /*out*/ bpv__iWired__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__WiredxxxAdvanced__pfTGT, bpv__mWired__pf, bpv__iWired__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iWired__pf))
				{
					bpv__iWired__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Strength")), bpv__WiredxPower__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iWired__pf))
				{
					bpv__iWired__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__WiredxColor__pfT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SetxAdvancedxEffectxFeatures__pfTTT(FAdvancedEffectFeatures__pf2387075495 bpp__Features__pf, UMaterial* bpp__Material__pf, UMaterialInstanceDynamic* bpp__DynamicxMaterialxInstance__pfTT)
{
	TScriptInterface<IBlendableInterface> bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf{};
	bpf__SetEffectPriority__pf(bpp__Features__pf.bpv__EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F__pf, bpp__Material__pf);
	bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_BoolToFloat(bpp__Features__pf.bpv__CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8__pf);
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("isCD")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_1__pf);
	}
	bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->ReferencedConvertedFields[0]), static_cast<uint8>(bpp__Features__pf.bpv__BlendMode_12_09737E6C44063CBE16D45A8896564C06__pf));
	bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf = UKismetStringLibrary::Conv_StringToFloat(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendMode")), bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendingOpacity")), bpp__Features__pf.bpv__BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B__pf);
	}
	bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpp__Features__pf.bpv__StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6__pf);
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("isStencil")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
	}
	bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpp__Features__pf.bpv__StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1__pf);
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("StencilMask")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendMaskScaleX")), bpp__Features__pf.bpv__BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0__pf.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendMaskScaleY")), bpp__Features__pf.bpv__BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0__pf.bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendDistance")), bpp__Features__pf.bpv__BlendDistance_33_7594D9DD4D782916B58945895B32667E__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendDistanceSharpness")), bpp__Features__pf.bpv__BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D__pf);
	}
	bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_2__pf = UKismetMathLibrary::Conv_BoolToFloat(bpp__Features__pf.bpv__BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Conv_BoolToFloat_ReturnValue_2__pf, 0.500000);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendDistanceLog")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("BlendMaskTexture")), bpp__Features__pf.bpv__BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5__pf);
	}
	if ( bpp__DynamicxMaterialxInstance__pfTT && bpp__DynamicxMaterialxInstance__pfTT->GetClass()->ImplementsInterface(UBlendableInterface::StaticClass()) )
	{
		bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf.SetObject(bpp__DynamicxMaterialxInstance__pfTT);
		void* IAddress = bpp__DynamicxMaterialxInstance__pfTT->GetInterfaceAddress(UBlendableInterface::StaticClass());
		bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf.SetInterface(IAddress);
	}
	else
	{
		bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf.SetObject(nullptr);
	}
	if(::IsValid(bpv__InternalPP__pf))
	{
		bpv__InternalPP__pf->UPostProcessComponent::AddOrUpdateBlendable(bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf, 1.000000);
	}
}
void AChameleon_C__pf565858488::bpf__SetxAdvancedxEffectxFeaturesxxNoxCustomxDepthx__pfTTTTLTTK(FAdvancedEffectFeaturesNoCustomDepth__pf2387075495 bpp__Features__pf, UMaterial* bpp__Material__pf, UMaterialInstanceDynamic* bpp__DynamicxMaterialxInstance__pfTT)
{
	TScriptInterface<IBlendableInterface> bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf{};
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf{};
	bpf__SetEffectPriority__pf(bpp__Features__pf.bpv__EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F__pf, bpp__Material__pf);
	bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(AChameleon_C__pf565858488::StaticClass())->ReferencedConvertedFields[0]), static_cast<uint8>(bpp__Features__pf.bpv__BlendMode_12_09737E6C44063CBE16D45A8896564C06__pf));
	bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf = UKismetStringLibrary::Conv_StringToFloat(bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendMode")), bpfv__CallFunc_Conv_StringToFloat_ReturnValue__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendingOpacity")), bpp__Features__pf.bpv__BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendMaskScaleX")), bpp__Features__pf.bpv__BlendMaskScale_18_615A76A449B11B7912A0AEA82EB64EA5__pf.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendMaskScaleY")), bpp__Features__pf.bpv__BlendMaskScale_18_615A76A449B11B7912A0AEA82EB64EA5__pf.bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendDistance")), bpp__Features__pf.bpv__BlendDistance_23_BD484C304DC4B8E69152DA879158606B__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendDistanceSharpness")), bpp__Features__pf.bpv__BlendDistanceSharpness_24_17B5A9EF45A85808BD4C3DB4D7A1BDE3__pf);
	}
	bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpp__Features__pf.bpv__BlendDistanceInvert_26_BAA4896D4DB1D15370EB73ABA02CBF01__pf);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf, 0.500000);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlendDistanceLog")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	}
	if(::IsValid(bpp__DynamicxMaterialxInstance__pfTT))
	{
		bpp__DynamicxMaterialxInstance__pfTT->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("BlendMaskTexture")), bpp__Features__pf.bpv__BlendMask_15_664A106449FD3C01747ABC9174124057__pf);
	}
	if ( bpp__DynamicxMaterialxInstance__pfTT && bpp__DynamicxMaterialxInstance__pfTT->GetClass()->ImplementsInterface(UBlendableInterface::StaticClass()) )
	{
		bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf.SetObject(bpp__DynamicxMaterialxInstance__pfTT);
		void* IAddress = bpp__DynamicxMaterialxInstance__pfTT->GetInterfaceAddress(UBlendableInterface::StaticClass());
		bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf.SetInterface(IAddress);
	}
	else
	{
		bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf.SetObject(nullptr);
	}
	if(::IsValid(bpv__InternalPP__pf))
	{
		bpv__InternalPP__pf->UPostProcessComponent::AddOrUpdateBlendable(bpfv__CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput__pf, 1.000000);
	}
}
void AChameleon_C__pf565858488::bpf__ActorxFeaturettexFunc__pfTT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mActorFeaturette__pf, /*out*/ bpv__iActorFeaturette__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeaturesxxNoxCustomxDepthx__pfTTTTLTTK(bpv__ActorxFeaturettexxxAdvanced__pfTTGT, bpv__mActorFeaturette__pf, bpv__iActorFeaturette__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iActorFeaturette__pf))
				{
					bpv__iActorFeaturette__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BackgroundDesaturationty")), bpv__ActorxFeaturettexBackgroundxDesaturation__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iActorFeaturette__pf))
				{
					bpv__iActorFeaturette__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("BackgroundColorMultiplier")), bpv__ActorxFeaturettexBackgroundxMultiplier__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iActorFeaturette__pf))
				{
					bpv__iActorFeaturette__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ForegroundDesaturation")), bpv__ActorxFeaturettexForegroundxSaturation__pfTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iActorFeaturette__pf))
				{
					bpv__iActorFeaturette__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("ForegroundColorMultiplier")), bpv__ActorxFeaturettexForegroundxMultiplier__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iActorFeaturette__pf))
				{
					bpv__iActorFeaturette__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("bVal")), bpv__ActorxFeaturettexBlurxAmount__pfTTT);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__ActorxFeaturettexBlurxSamples__pfTTT);
				if(::IsValid(bpv__iActorFeaturette__pf))
				{
					bpv__iActorFeaturette__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("bSamples")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf);
				}
			}
		case 10:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__ActorxFeaturettexStencilxMask__pfTTT);
				if(::IsValid(bpv__iActorFeaturette__pf))
				{
					bpv__iActorFeaturette__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("StencilMask")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 11:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__InfectedxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mInfected__pf, /*out*/ bpv__iInfected__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__InfectedxxxAdvanced__pfTGT, bpv__mInfected__pf, bpv__iInfected__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iInfected__pf))
				{
					bpv__iInfected__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionAmount")), bpv__InfectedxDistortionxAmount__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iInfected__pf))
				{
					bpv__iInfected__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Noise Filtering")), bpv__InfectedxSmoothness__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iInfected__pf))
				{
					bpv__iInfected__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__InfectedxSpeed__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iInfected__pf))
				{
					bpv__iInfected__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Transform")), bpv__InfectedxTransformZ__pfT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ColoredxAOxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mColoredAO__pf, /*out*/ bpv__iColoredAO__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ColoredxAOxxxAdvanced__pfTTGT, bpv__mColoredAO__pf, bpv__iColoredAO__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iColoredAO__pf))
				{
					bpv__iColoredAO__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__ColoredxAOxColor__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iColoredAO__pf))
				{
					bpv__iColoredAO__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Intensity")), bpv__ColoredxAOxIntensity__pfTT);
				}
			}
		case 6:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__CameraxShakexFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mCameraShake__pf, /*out*/ bpv__iCameraShake__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__CameraxShakexxxAdvanced__pfTTGT, bpv__mCameraShake__pf, bpv__iCameraShake__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iCameraShake__pf))
				{
					bpv__iCameraShake__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ShakePowerX")), bpv__CameraxShakexPowerxxXx__pfTTTLK);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iCameraShake__pf))
				{
					bpv__iCameraShake__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ShakePowerY")), bpv__CameraxShakexPowerxxYx__pfTTTLK);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iCameraShake__pf))
				{
					bpv__iCameraShake__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ShakeFQ")), bpv__CameraxShakexFrequency__pfTT);
				}
			}
		case 7:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__DiscoxBallxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mDiscoBall__pf, /*out*/ bpv__iDiscoBall__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__DiscoxBallxxxAdvanced__pfTTGT, bpv__mDiscoBall__pf, bpv__iDiscoBall__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color 1")), bpv__DiscoxBallxColorx1__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color 2")), bpv__DiscoxBallxColorx2__pfTTT);
				}
			}
		case 6:
			{
				UKismetMathLibrary::BreakVector(bpv__DiscoxBallxBlockxScale__pfTTT, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("X Scale")), bpfv__CallFunc_BreakVector_X__pf);
				}
			}
		case 7:
			{
				UKismetMathLibrary::BreakVector(bpv__DiscoxBallxBlockxScale__pfTTT, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Y Scale")), bpfv__CallFunc_BreakVector_Y__pf);
				}
			}
		case 8:
			{
				UKismetMathLibrary::BreakVector(bpv__DiscoxBallxBlockxScale__pfTTT, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Z Scale")), bpfv__CallFunc_BreakVector_Z__pf);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BlockProbability")), bpv__DiscoxBallxBlockxDistribution__pfTTT);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("RotationSpeed")), bpv__DiscoxBallxRotationxSpeed__pfTTT);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ManualRotation")), bpv__DiscoxBallxManualxRotation__pfTTT);
				}
			}
		case 12:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpv__DiscoxBallxWSxCenter__pfTTT.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf, bpv__DiscoxBallxWSxCenter__pfTTT.bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf, bpv__DiscoxBallxWSxCenter__pfTTT.bpv__Z_7_3931AEC34F09EC9204600DB26430DD22__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				if(::IsValid(bpv__iDiscoBall__pf))
				{
					bpv__iDiscoBall__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("WSCenter")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
			}
		case 13:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__HazyxLightsxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mHazyLights__pf, /*out*/ bpv__iHazyLights__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__HazyxLightsxxxAdvanced__pfTTGT, bpv__mHazyLights__pf, bpv__iHazyLights__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iHazyLights__pf))
				{
					bpv__iHazyLights__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color 1")), bpv__DiscoxBallxColorx1__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iHazyLights__pf))
				{
					bpv__iHazyLights__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color 2")), bpv__DiscoxBallxColorx2__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iHazyLights__pf))
				{
					bpv__iHazyLights__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MoveSpeedX")), bpv__HazyxLightsxMovexSpeed__pfTTT.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iHazyLights__pf))
				{
					bpv__iHazyLights__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MoveSpeedY")), bpv__HazyxLightsxMovexSpeed__pfTTT.bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iHazyLights__pf))
				{
					bpv__iHazyLights__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("PositionX")), bpv__HazyxLightsxPosition__pfTT.bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iHazyLights__pf))
				{
					bpv__iHazyLights__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("PositionY")), bpv__HazyxLightsxPosition__pfTT.bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf);
				}
			}
		case 10:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__MeltedxWorldxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mMeltedWorld__pf, /*out*/ bpv__iMeltedWorld__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__MeltedxWorldxxxAdvanced__pfTTGT, bpv__mMeltedWorld__pf, bpv__iMeltedWorld__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iMeltedWorld__pf))
				{
					bpv__iMeltedWorld__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distance")), bpv__MeltedxWorldxDistance__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iMeltedWorld__pf))
				{
					bpv__iMeltedWorld__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Power")), bpv__MeltedxWorldxPower__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iMeltedWorld__pf))
				{
					bpv__iMeltedWorld__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sharpness")), bpv__MeltedxWorldxSharpness__pfTT);
				}
			}
		case 7:
			{
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpv__MeltedxWorldxSize__pfTT);
				if(::IsValid(bpv__iMeltedWorld__pf))
				{
					bpv__iMeltedWorld__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("WSMul")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SelectivexColorxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mSelectiveColor__pf, /*out*/ bpv__iSelectiveColor__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__SelectivexColorxxxAdvanced__pfTTGT, bpv__mSelectiveColor__pf, bpv__iSelectiveColor__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iSelectiveColor__pf))
				{
					bpv__iSelectiveColor__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MaskColor")), bpv__SelectivexColorxMaskxColor__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iSelectiveColor__pf))
				{
					bpv__iSelectiveColor__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("HueTolerance")), bpv__SelectivexColorxHuexTolerance__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iSelectiveColor__pf))
				{
					bpv__iSelectiveColor__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("SaturationTolerance")), bpv__SelectivexColorxSaturationxTolerance__pfTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iSelectiveColor__pf))
				{
					bpv__iSelectiveColor__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ValueTolerance")), bpv__SelectivexColorxValuexTolerance__pfTTT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ScreenxFirexFunc__pfTT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mScreenFire__pf, /*out*/ bpv__iScreenFire__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ScreenxFirexxxAdvanced__pfTTGT, bpv__mScreenFire__pf, bpv__iScreenFire__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iScreenFire__pf))
				{
					bpv__iScreenFire__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("FireColor")), bpv__ScreenxFirexColor__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iScreenFire__pf))
				{
					bpv__iScreenFire__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionAmount")), bpv__ScreenxFirexDistortionxAmount__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iScreenFire__pf))
				{
					bpv__iScreenFire__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MaskPower")), bpv__ScreenxFirexMaskxContrast__pfTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iScreenFire__pf))
				{
					bpv__iScreenFire__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MaskScale")), bpv__ScreenxFirexMaskxScale__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iScreenFire__pf))
				{
					bpv__iScreenFire__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Scale")), bpv__ScreenxFirexFlamexTiling__pfTTT);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__ScreenxFirexSpeed__pfTT, 0.500000);
				if(::IsValid(bpv__iScreenFire__pf))
				{
					bpv__iScreenFire__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("YSpeedLayer1")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
				}
			}
		case 10:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__ScreenxFirexSpeed__pfTT, 0.600000);
				if(::IsValid(bpv__iScreenFire__pf))
				{
					bpv__iScreenFire__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("YSpeedLayer2")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf);
				}
			}
		case 11:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__ScreenxFirexSpeed__pfTT, 0.700000);
				if(::IsValid(bpv__iScreenFire__pf))
				{
					bpv__iScreenFire__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("YSpeedLayer3")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				}
			}
		case 12:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__HauntedxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mHaunted__pf, /*out*/ bpv__iHaunted__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__HauntedxxxAdvanced__pfTGT, bpv__mHaunted__pf, bpv__iHaunted__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iHaunted__pf))
				{
					bpv__iHaunted__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("TextureScale")), bpv__HauntedxTexturexScale__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iHaunted__pf))
				{
					bpv__iHaunted__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MaskScale")), bpv__HauntedxMaskxScale__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iHaunted__pf))
				{
					bpv__iHaunted__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MaskOpacity")), bpv__HauntedxAmount__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iHaunted__pf))
				{
					bpv__iHaunted__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Texture")), bpv__HauntedxTexture__pfT);
				}
			}
		case 8:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__GridxCellxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mGridCell__pf, /*out*/ bpv__iGridCell__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__GridxCellxxxAdvanced__pfTTGT, bpv__mGridCell__pf, bpv__iGridCell__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iGridCell__pf))
				{
					bpv__iGridCell__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Size")), bpv__GridxCellxTiling__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iGridCell__pf))
				{
					bpv__iGridCell__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("AnimationSpeed")), bpv__GridxCellxAnimationxSpeed__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iGridCell__pf))
				{
					bpv__iGridCell__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Progress")), bpv__GridxCellxTransitionxAmount__pfTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iGridCell__pf))
				{
					bpv__iGridCell__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__GridxCellxColor__pfTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iGridCell__pf))
				{
					bpv__iGridCell__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("VoidColor")), bpv__GridxCellxVoidxColor__pfTTT);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__GridxCellxAnimated__pfTT);
				if(::IsValid(bpv__iGridCell__pf))
				{
					bpv__iGridCell__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Animated")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 10:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__LensxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mLensDistortion__pf, /*out*/ bpv__iLensDistortion__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__LensxDistortionxxxAdvanced__pfTTGT, bpv__mLensDistortion__pf, bpv__iLensDistortion__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iLensDistortion__pf))
				{
					bpv__iLensDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Power")), bpv__LensxDistortionxOpticxRefinement__pfTTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iLensDistortion__pf))
				{
					bpv__iLensDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ScaleX")), bpv__LensxDistortionxScopexTexturexScalexX__pfTTTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iLensDistortion__pf))
				{
					bpv__iLensDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ScaleY")), bpv__LensxDistortionxScopexTexturexScalexY__pfTTTTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iLensDistortion__pf))
				{
					bpv__iLensDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Size")), bpv__LensxDistortionxOpticxSize__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iLensDistortion__pf))
				{
					bpv__iLensDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("X")), bpv__LensxDistortionxOpticxPositionxX__pfTTTT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iLensDistortion__pf))
				{
					bpv__iLensDistortion__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Y")), bpv__LensxDistortionxOpticxPositionxY__pfTTTT);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iLensDistortion__pf))
				{
					bpv__iLensDistortion__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Texture")), bpv__LensxDistortionxScopexTexture__pfTTT);
				}
			}
		case 11:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__ZonexFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mZone__pf, /*out*/ bpv__iZone__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__ZonexxxAdvanced__pfTGT, bpv__mZone__pf, bpv__iZone__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iZone__pf))
				{
					bpv__iZone__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("EdgeColor")), bpv__ZonexEdgexColor__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iZone__pf))
				{
					bpv__iZone__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("CoverageColor")), bpv__ZonexCoveragexColor__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iZone__pf))
				{
					bpv__iZone__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Radius")), bpv__ZonexRadius__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iZone__pf))
				{
					bpv__iZone__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("EdgeHardness")), bpv__ZonexEdgexHardness__pfTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iZone__pf))
				{
					bpv__iZone__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Center")), bpv__ZonexCenter__pfT);
				}
			}
		case 9:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__PyramidxFunc__pfT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mPyramid__pf, /*out*/ bpv__iPyramid__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__PyramidxxxAdvanced__pfTGT, bpv__mPyramid__pf, bpv__iPyramid__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iPyramid__pf))
				{
					bpv__iPyramid__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("BackgroundColor")), bpv__PyramidxBackgroundxColor__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iPyramid__pf))
				{
					bpv__iPyramid__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Width")), bpv__PyramidxWidth__pfT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iPyramid__pf))
				{
					bpv__iPyramid__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Pan")), bpv__PyramidxPan__pfT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iPyramid__pf))
				{
					bpv__iPyramid__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Tile")), bpv__PyramidxTilexAmount__pfTT);
				}
			}
		case 8:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__PyramidxMasked__pfT);
				if(::IsValid(bpv__iPyramid__pf))
				{
					bpv__iPyramid__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Masked")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 9:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__MojoxFunc__pfT(bool bpp__IsEnabled__pf)
{
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mMojo__pf, /*out*/ bpv__iMojo__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__MojoxxxAdvanced__pfTGT, bpv__mMojo__pf, bpv__iMojo__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__MojoxColor__pfT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("AnimationSpeed")), bpv__MojoxAnimationxSpeed__pfTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("DistortionAmount")), bpv__MojoxDistortionxAmount__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Intensity")), bpv__MojoxIntensity__pfT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Phase")), bpv__MojoxPhase__pfT);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Tolerance")), bpv__MojoxTolerance__pfT);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("Mask")), bpv__MojoxMask__pfT);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("DistortionMap")), bpv__MojoxDistortionxMap__pfTT);
				}
			}
		case 12:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__MojoxAnimated__pfT);
				if(::IsValid(bpv__iMojo__pf))
				{
					bpv__iMojo__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Animated")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
			}
		case 13:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__CreatexEffectxMaterialxInstance__pfTTT(UMaterial* bpp__Material__pf, /*out*/ UMaterialInstanceDynamic*& bpp__Instance__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpp__Instance__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpp__Material__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 4:
			{
				bpp__Instance__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__GradientxFogxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FName bpfv__CallFunc_Conv_StringToName_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	FColor bpfv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	FColor bpfv__CallFunc_Array_Get_Item_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue_1__pf(EForceInit::ForceInit);
	UTextureRenderTarget2D* bpfv__CallFunc_CreateRenderTarget2D_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__GradientxFogxColors__pfTT);
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_1__pf, 1);
				bpfv__CallFunc_CreateRenderTarget2D_ReturnValue__pf = UKismetRenderingLibrary::CreateRenderTarget2D(this, bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf, 1, ETextureRenderTargetFormat::RTF_RGBA16f, FLinearColor(0.000000,0.000000,0.000000,1.000000), false);
			}
		case 3:
			{
				bpv__ColorIndexRT__pf = bpfv__CallFunc_CreateRenderTarget2D_ReturnValue__pf;
			}
		case 4:
			{
				if(::IsValid(bpv__ColorIndexRT__pf))
				{
					bpv__ColorIndexRT__pf->LODGroup = TextureGroup::TEXTUREGROUP_Pixels2D;
				}
			}
		case 5:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, bpv__M_ColorIndexer__pf, FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 6:
			{
				bpv__I_ColorIndexer__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__GradientxFogxColors__pfTT);
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_1__pf, 1);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf);
				if(::IsValid(bpv__I_ColorIndexer__pf))
				{
					bpv__I_ColorIndexer__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("ColorCount")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 8:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__GradientxFogxColors__pfTT);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_1__pf, 1);
				FCustomThunkTemplates::Array_Get(bpv__GradientxFogxColors__pfTT, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue_1__pf = UKismetMathLibrary::Conv_ColorToLinearColor(bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpv__I_ColorIndexer__pf))
				{
					bpv__I_ColorIndexer__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color_1")), bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue_1__pf);
				}
			}
		case 9:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 10:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 11:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__GradientxFogxColors__pfTT);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 12:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 13:
			{
				__StateStack.Push(23);
			}
		case 14:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Array_Index_Variable__pf, 2);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Add_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Color_")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToName_ReturnValue__pf = UKismetStringLibrary::Conv_StringToName(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__GradientxFogxColors__pfTT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_ColorToLinearColor(bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__I_ColorIndexer__pf))
				{
					bpv__I_ColorIndexer__pf->UMaterialInstanceDynamic::SetVectorParameterValue(bpfv__CallFunc_Conv_StringToName_ReturnValue__pf, bpfv__CallFunc_Conv_ColorToLinearColor_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, bpfv__CallFunc_CreateRenderTarget2D_ReturnValue__pf, bpv__I_ColorIndexer__pf);
			}
		case 17:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mGradientFog__pf, /*out*/ bpv__iGradientFog__pf);
			}
		case 18:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__GradientxFogxxxAdvanced__pfTTGT, bpv__mGradientFog__pf, bpv__iGradientFog__pf);
			}
		case 19:
			{
				if(::IsValid(bpv__iGradientFog__pf))
				{
					bpv__iGradientFog__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Distance")), bpv__GradientxFogxDistance__pfTT);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__iGradientFog__pf))
				{
					bpv__iGradientFog__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sharpness")), bpv__GradientxFogxSharpness__pfTT);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__iGradientFog__pf))
				{
					bpv__iGradientFog__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("GradientMap")), bpv__ColorIndexRT__pf);
				}
			}
		case 22:
			{
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__MojoxAnimated__pfT);
				if(::IsValid(bpv__iGradientFog__pf))
				{
					bpv__iGradientFog__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Animated")), bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				}
				__CurrentState = 15;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 11;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__DitherxFunc__pfT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mDither__pf, /*out*/ bpv__iDither__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__DitherxxxAdvanced__pfTGT, bpv__mDither__pf, bpv__iDither__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iDither__pf))
				{
					bpv__iDither__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Limit")), bpv__DitherxLimit__pfT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__SpeedxLinesxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mSpeedLinesx__pfT, /*out*/ bpv__iSpeedLines__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__SpeedxLinesxxxAdvanced__pfTTGT, bpv__mSpeedLinesx__pfT, bpv__iSpeedLines__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iSpeedLines__pf))
				{
					bpv__iSpeedLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("LineIntensity")), bpv__SpeedxLinesxIntensity__pfTT);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__iSpeedLines__pf))
				{
					bpv__iSpeedLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("LineWidth")), bpv__SpeedxLinesxLinexWidth__pfTTT);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__iSpeedLines__pf))
				{
					bpv__iSpeedLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__SpeedxLinesxSpeed__pfTT);
				}
			}
		case 7:
			{
				if(::IsValid(bpv__iSpeedLines__pf))
				{
					bpv__iSpeedLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MaskRadius")), bpv__SpeedxLinesxMaskxRadius__pfTTT);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__iSpeedLines__pf))
				{
					bpv__iSpeedLines__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MaskHardness")), bpv__SpeedxLinesxMaskxHardness__pfTTT);
				}
			}
		case 9:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AChameleon_C__pf565858488::bpf__CyberxScanxFunc__pfTT(bool bpp__IsEnabled__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsEnabled__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 2:
			{
				bpf__CreatexEffectxMaterialxInstance__pfTTT(bpv__mCyberScan__pf, /*out*/ bpv__iCyberScan__pf);
			}
		case 3:
			{
				bpf__SetxAdvancedxEffectxFeatures__pfTTT(bpv__CyberxScanxxxAdvanced__pfTTGT, bpv__mCyberScan__pf, bpv__iCyberScan__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__iCyberScan__pf))
				{
					bpv__iCyberScan__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Speed")), bpv__CyberxScanxSpeed__pfTT);
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void AChameleon_C__pf565858488::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{462, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Editor_ChameleonIcon.M_Editor_ChameleonIcon 
		{463, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/Chameleon/Curves/C_DistanceToSizeLogo.C_DistanceToSizeLogo 
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
		{472, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/Chameleon/DataTables/LOOK_Presets.LOOK_Presets 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AChameleon_C__pf565858488::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{71, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{460, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PostProcessComponent 
		{461, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialBillboardComponent 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{464, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Material 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_White.T_White 
		{465, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextureRenderTarget2D 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{466, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetRenderingLibrary 
		{467, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.TextureGroup 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{468, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlendableInterface 
		{469, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{470, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PostProcessSettings 
		{471, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{668, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Chameleon/Structures/AdvancedEffectFeatures.AdvancedEffectFeatures 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Chameleon/Structures/Vector2DN.Vector2DN 
		{669, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Chameleon/Structures/Vector3DN.Vector3DN 
		{670, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Chameleon/Structures/AdvancedEffectFeaturesNoCustomDepth.AdvancedEffectFeaturesNoCustomDepth 
		{671, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Chameleon/Structures/LOOKCGStruct.LOOKCGStruct 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Chameleon/Enums/BlendModes.BlendModes 
		{672, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Chameleon/Enums/DrawingNoiseModes.DrawingNoiseModes 
		{673, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Chameleon/Enums/LOOKPresetsEnum.LOOKPresetsEnum 
		{674, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Chameleon/Enums/colorChannels.ColorChannels 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AChameleon_C__pf565858488
{
	FRegisterHelper__AChameleon_C__pf565858488()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Chameleon/Chameleon"), &AChameleon_C__pf565858488::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AChameleon_C__pf565858488 Instance;
};
FRegisterHelper__AChameleon_C__pf565858488 FRegisterHelper__AChameleon_C__pf565858488::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
