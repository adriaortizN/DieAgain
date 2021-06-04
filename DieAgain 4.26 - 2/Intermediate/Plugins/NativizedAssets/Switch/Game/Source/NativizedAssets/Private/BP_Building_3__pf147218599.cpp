#include "NativizedAssets.h"
#include "BP_Building_3__pf147218599.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Building_3_C__pf147218599::ABP_Building_3_C__pf147218599(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__SharedRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SharedRoot"));
	bpv__SharedRoot1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SharedRoot1"));
	bpv__StaticMeshComponent026__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent026"));
	bpv__StaticMeshComponent025__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent025"));
	bpv__StaticMeshComponent024__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent024"));
	bpv__StaticMeshComponent023__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent023"));
	bpv__StaticMeshComponent022__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent022"));
	bpv__StaticMeshComponent021__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent021"));
	bpv__StaticMeshComponent020__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent020"));
	bpv__StaticMeshComponent019__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent019"));
	bpv__StaticMeshComponent018__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent018"));
	bpv__StaticMeshComponent017__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent017"));
	bpv__StaticMeshComponent016__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent016"));
	bpv__StaticMeshComponent015__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent015"));
	bpv__StaticMeshComponent014__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent014"));
	bpv__StaticMeshComponent027__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent027"));
	bpv__StaticMeshComponent012__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent012"));
	bpv__StaticMeshComponent011__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent011"));
	bpv__StaticMeshComponent010__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent010"));
	bpv__StaticMeshComponent09__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent09"));
	bpv__StaticMeshComponent08__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent08"));
	bpv__StaticMeshComponent07__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent07"));
	bpv__StaticMeshComponent013__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent013"));
	bpv__StaticMeshComponent06__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent06"));
	bpv__StaticMeshComponent05__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent05"));
	bpv__StaticMeshComponent04__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent04"));
	bpv__StaticMeshComponent03__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent03"));
	bpv__StaticMeshComponent02__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent02"));
	bpv__StaticMeshComponent01__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent01"));
	bpv__StaticMeshComponent0__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
	bpv__StaticMeshComponent028__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent028"));
	bpv__StaticMeshComponent029__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent029"));
	bpv__StaticMeshComponent030__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent030"));
	bpv__StaticMeshComponent031__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent031"));
	bpv__StaticMeshComponent032__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent032"));
	bpv__StaticMeshComponent033__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent033"));
	bpv__StaticMeshComponent034__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent034"));
	bpv__StaticMeshComponent035__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent035"));
	bpv__StaticMeshComponent036__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent036"));
	bpv__StaticMeshComponent037__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent037"));
	bpv__StaticMeshComponent038__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent038"));
	bpv__StaticMeshComponent039__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent039"));
	bpv__StaticMeshComponent040__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent040"));
	bpv__StaticMeshComponent041__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent041"));
	bpv__StaticMeshComponent042__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent042"));
	bpv__StaticMeshComponent043__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent043"));
	bpv__StaticMeshComponent044__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent044"));
	bpv__StaticMeshComponent045__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent045"));
	bpv__StaticMeshComponent046__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent046"));
	bpv__StaticMeshComponent047__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent047"));
	RootComponent = bpv__SharedRoot__pf;
	bpv__SharedRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SharedRoot__pf->Mobility = EComponentMobility::Type::Static;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SharedRoot__pf), false, 0));
	bpv__SharedRoot1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SharedRoot1__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__SharedRoot1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__2 = FVector(-157.267090, -122.710449, 760.883545);
	auto& __Local__3 = (*(AccessPrivateProperty<FRotator >((bpv__SharedRoot1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__3 = FRotator(0.000000, 90.000114, 0.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__SharedRoot1__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__4 = FVector(1.040498, 1.000000, 1.000000);
	bpv__SharedRoot1__pf->Mobility = EComponentMobility::Type::Static;
	static TWeakFieldPtr<FProperty> __Local__6{};
	const FProperty* __Local__5 = __Local__6.Get();
	if (nullptr == __Local__5)
	{
		__Local__5 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bNetAddressable")));
		check(__Local__5);
		__Local__6 = __Local__5;
	}
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__SharedRoot1__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SharedRoot1__pf), false, 0));
	bpv__StaticMeshComponent026__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent026__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__7 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent026__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__7 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__9{};
	const FProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), false, 0));
	bpv__StaticMeshComponent026__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent026__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__10 = FVector(-419.969727, -266.835419, 72.377319);
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__11 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent026__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), true, 0));
	bpv__StaticMeshComponent025__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent025__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent025__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__12 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), false, 0));
	bpv__StaticMeshComponent025__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent025__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__13 = FVector(-419.969727, -139.341690, 72.377319);
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__14 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent025__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), true, 0));
	bpv__StaticMeshComponent024__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent024__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent024__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__15 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), false, 0));
	bpv__StaticMeshComponent024__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent024__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent024__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(-179.148193, -196.005569, 72.377319);
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent024__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__17 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent024__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), true, 0));
	bpv__StaticMeshComponent023__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent023__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent023__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__18 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), false, 0));
	bpv__StaticMeshComponent023__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent023__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__19 = FVector(-292.475830, -181.839615, -26.784180);
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__20 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent023__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), true, 0));
	bpv__StaticMeshComponent022__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent022__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__21 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent022__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__21 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent022__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent022__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent022__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__22 = bpv__StaticMeshComponent022__pf->StreamingTextureData[0];
	__Local__22.PackedRelativeBox = 4294901760;
	__Local__22.TextureLevelIndex = 131;
	__Local__22.TexelFactor = 574.107788f;
	auto& __Local__23 = bpv__StaticMeshComponent022__pf->StreamingTextureData[1];
	__Local__23.PackedRelativeBox = 4294901760;
	__Local__23.TextureLevelIndex = 132;
	__Local__23.TexelFactor = 574.107788f;
	auto& __Local__24 = bpv__StaticMeshComponent022__pf->StreamingTextureData[2];
	__Local__24.PackedRelativeBox = 4294901760;
	__Local__24.TextureLevelIndex = 40;
	__Local__24.TexelFactor = 574.107788f;
	auto& __Local__25 = bpv__StaticMeshComponent022__pf->StreamingTextureData[3];
	__Local__25.PackedRelativeBox = 4294901760;
	__Local__25.TextureLevelIndex = 49;
	__Local__25.TexelFactor = 574.107788f;
	auto& __Local__26 = bpv__StaticMeshComponent022__pf->StreamingTextureData[4];
	__Local__26.PackedRelativeBox = 4294901760;
	__Local__26.TextureLevelIndex = 133;
	__Local__26.TexelFactor = 574.107788f;
	auto& __Local__27 = bpv__StaticMeshComponent022__pf->StreamingTextureData[5];
	__Local__27.PackedRelativeBox = 4294901760;
	__Local__27.TextureLevelIndex = 43;
	__Local__27.TexelFactor = 574.107788f;
	auto& __Local__28 = bpv__StaticMeshComponent022__pf->StreamingTextureData[6];
	__Local__28.PackedRelativeBox = 4294901760;
	__Local__28.TextureLevelIndex = 44;
	__Local__28.TexelFactor = 574.107788f;
	auto& __Local__29 = bpv__StaticMeshComponent022__pf->StreamingTextureData[7];
	__Local__29.PackedRelativeBox = 4294901760;
	__Local__29.TextureLevelIndex = 45;
	__Local__29.TexelFactor = 574.107788f;
	auto& __Local__30 = bpv__StaticMeshComponent022__pf->StreamingTextureData[8];
	__Local__30.PackedRelativeBox = 4294901760;
	__Local__30.TextureLevelIndex = 46;
	__Local__30.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), false, 0));
	bpv__StaticMeshComponent022__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent022__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__31 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent022__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__31 = FVector(576.253174, -172.257095, -12.643311);
	bpv__StaticMeshComponent022__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), true, 0));
	bpv__StaticMeshComponent021__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent021__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__32 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent021__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__32 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent021__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent021__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent021__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__33 = bpv__StaticMeshComponent021__pf->StreamingTextureData[0];
	__Local__33.PackedRelativeBox = 4294901760;
	__Local__33.TextureLevelIndex = 131;
	__Local__33.TexelFactor = 574.107788f;
	auto& __Local__34 = bpv__StaticMeshComponent021__pf->StreamingTextureData[1];
	__Local__34.PackedRelativeBox = 4294901760;
	__Local__34.TextureLevelIndex = 132;
	__Local__34.TexelFactor = 574.107788f;
	auto& __Local__35 = bpv__StaticMeshComponent021__pf->StreamingTextureData[2];
	__Local__35.PackedRelativeBox = 4294901760;
	__Local__35.TextureLevelIndex = 40;
	__Local__35.TexelFactor = 574.107788f;
	auto& __Local__36 = bpv__StaticMeshComponent021__pf->StreamingTextureData[3];
	__Local__36.PackedRelativeBox = 4294901760;
	__Local__36.TextureLevelIndex = 49;
	__Local__36.TexelFactor = 574.107788f;
	auto& __Local__37 = bpv__StaticMeshComponent021__pf->StreamingTextureData[4];
	__Local__37.PackedRelativeBox = 4294901760;
	__Local__37.TextureLevelIndex = 133;
	__Local__37.TexelFactor = 574.107788f;
	auto& __Local__38 = bpv__StaticMeshComponent021__pf->StreamingTextureData[5];
	__Local__38.PackedRelativeBox = 4294901760;
	__Local__38.TextureLevelIndex = 43;
	__Local__38.TexelFactor = 574.107788f;
	auto& __Local__39 = bpv__StaticMeshComponent021__pf->StreamingTextureData[6];
	__Local__39.PackedRelativeBox = 4294901760;
	__Local__39.TextureLevelIndex = 44;
	__Local__39.TexelFactor = 574.107788f;
	auto& __Local__40 = bpv__StaticMeshComponent021__pf->StreamingTextureData[7];
	__Local__40.PackedRelativeBox = 4294901760;
	__Local__40.TextureLevelIndex = 45;
	__Local__40.TexelFactor = 574.107788f;
	auto& __Local__41 = bpv__StaticMeshComponent021__pf->StreamingTextureData[8];
	__Local__41.PackedRelativeBox = 4294901760;
	__Local__41.TextureLevelIndex = 46;
	__Local__41.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), false, 0));
	bpv__StaticMeshComponent021__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent021__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__42 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent021__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__42 = FVector(576.253174, 127.742905, -12.643311);
	bpv__StaticMeshComponent021__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), true, 0));
	bpv__StaticMeshComponent020__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent020__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__43 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent020__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__43 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent020__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent020__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent020__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__44 = bpv__StaticMeshComponent020__pf->StreamingTextureData[0];
	__Local__44.PackedRelativeBox = 4294901760;
	__Local__44.TextureLevelIndex = 131;
	__Local__44.TexelFactor = 574.107788f;
	auto& __Local__45 = bpv__StaticMeshComponent020__pf->StreamingTextureData[1];
	__Local__45.PackedRelativeBox = 4294901760;
	__Local__45.TextureLevelIndex = 132;
	__Local__45.TexelFactor = 574.107788f;
	auto& __Local__46 = bpv__StaticMeshComponent020__pf->StreamingTextureData[2];
	__Local__46.PackedRelativeBox = 4294901760;
	__Local__46.TextureLevelIndex = 40;
	__Local__46.TexelFactor = 574.107788f;
	auto& __Local__47 = bpv__StaticMeshComponent020__pf->StreamingTextureData[3];
	__Local__47.PackedRelativeBox = 4294901760;
	__Local__47.TextureLevelIndex = 49;
	__Local__47.TexelFactor = 574.107788f;
	auto& __Local__48 = bpv__StaticMeshComponent020__pf->StreamingTextureData[4];
	__Local__48.PackedRelativeBox = 4294901760;
	__Local__48.TextureLevelIndex = 133;
	__Local__48.TexelFactor = 574.107788f;
	auto& __Local__49 = bpv__StaticMeshComponent020__pf->StreamingTextureData[5];
	__Local__49.PackedRelativeBox = 4294901760;
	__Local__49.TextureLevelIndex = 43;
	__Local__49.TexelFactor = 574.107788f;
	auto& __Local__50 = bpv__StaticMeshComponent020__pf->StreamingTextureData[6];
	__Local__50.PackedRelativeBox = 4294901760;
	__Local__50.TextureLevelIndex = 44;
	__Local__50.TexelFactor = 574.107788f;
	auto& __Local__51 = bpv__StaticMeshComponent020__pf->StreamingTextureData[7];
	__Local__51.PackedRelativeBox = 4294901760;
	__Local__51.TextureLevelIndex = 45;
	__Local__51.TexelFactor = 574.107788f;
	auto& __Local__52 = bpv__StaticMeshComponent020__pf->StreamingTextureData[8];
	__Local__52.PackedRelativeBox = 4294901760;
	__Local__52.TextureLevelIndex = 46;
	__Local__52.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), false, 0));
	bpv__StaticMeshComponent020__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent020__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__53 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent020__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__53 = FVector(276.253174, -172.257095, -12.643311);
	bpv__StaticMeshComponent020__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), true, 0));
	bpv__StaticMeshComponent019__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent019__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__54 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent019__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__54 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent019__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent019__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent019__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__55 = bpv__StaticMeshComponent019__pf->StreamingTextureData[0];
	__Local__55.PackedRelativeBox = 4294901760;
	__Local__55.TextureLevelIndex = 131;
	__Local__55.TexelFactor = 574.107788f;
	auto& __Local__56 = bpv__StaticMeshComponent019__pf->StreamingTextureData[1];
	__Local__56.PackedRelativeBox = 4294901760;
	__Local__56.TextureLevelIndex = 132;
	__Local__56.TexelFactor = 574.107788f;
	auto& __Local__57 = bpv__StaticMeshComponent019__pf->StreamingTextureData[2];
	__Local__57.PackedRelativeBox = 4294901760;
	__Local__57.TextureLevelIndex = 40;
	__Local__57.TexelFactor = 574.107788f;
	auto& __Local__58 = bpv__StaticMeshComponent019__pf->StreamingTextureData[3];
	__Local__58.PackedRelativeBox = 4294901760;
	__Local__58.TextureLevelIndex = 49;
	__Local__58.TexelFactor = 574.107788f;
	auto& __Local__59 = bpv__StaticMeshComponent019__pf->StreamingTextureData[4];
	__Local__59.PackedRelativeBox = 4294901760;
	__Local__59.TextureLevelIndex = 133;
	__Local__59.TexelFactor = 574.107788f;
	auto& __Local__60 = bpv__StaticMeshComponent019__pf->StreamingTextureData[5];
	__Local__60.PackedRelativeBox = 4294901760;
	__Local__60.TextureLevelIndex = 43;
	__Local__60.TexelFactor = 574.107788f;
	auto& __Local__61 = bpv__StaticMeshComponent019__pf->StreamingTextureData[6];
	__Local__61.PackedRelativeBox = 4294901760;
	__Local__61.TextureLevelIndex = 44;
	__Local__61.TexelFactor = 574.107788f;
	auto& __Local__62 = bpv__StaticMeshComponent019__pf->StreamingTextureData[7];
	__Local__62.PackedRelativeBox = 4294901760;
	__Local__62.TextureLevelIndex = 45;
	__Local__62.TexelFactor = 574.107788f;
	auto& __Local__63 = bpv__StaticMeshComponent019__pf->StreamingTextureData[8];
	__Local__63.PackedRelativeBox = 4294901760;
	__Local__63.TextureLevelIndex = 46;
	__Local__63.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), false, 0));
	bpv__StaticMeshComponent019__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent019__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__64 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent019__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__64 = FVector(276.253174, 127.742905, -12.643311);
	bpv__StaticMeshComponent019__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), true, 0));
	bpv__StaticMeshComponent018__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent018__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__65 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent018__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__65 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent018__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent018__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent018__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__66 = bpv__StaticMeshComponent018__pf->StreamingTextureData[0];
	__Local__66.PackedRelativeBox = 4294901760;
	__Local__66.TextureLevelIndex = 131;
	__Local__66.TexelFactor = 574.107788f;
	auto& __Local__67 = bpv__StaticMeshComponent018__pf->StreamingTextureData[1];
	__Local__67.PackedRelativeBox = 4294901760;
	__Local__67.TextureLevelIndex = 132;
	__Local__67.TexelFactor = 574.107788f;
	auto& __Local__68 = bpv__StaticMeshComponent018__pf->StreamingTextureData[2];
	__Local__68.PackedRelativeBox = 4294901760;
	__Local__68.TextureLevelIndex = 40;
	__Local__68.TexelFactor = 574.107788f;
	auto& __Local__69 = bpv__StaticMeshComponent018__pf->StreamingTextureData[3];
	__Local__69.PackedRelativeBox = 4294901760;
	__Local__69.TextureLevelIndex = 49;
	__Local__69.TexelFactor = 574.107788f;
	auto& __Local__70 = bpv__StaticMeshComponent018__pf->StreamingTextureData[4];
	__Local__70.PackedRelativeBox = 4294901760;
	__Local__70.TextureLevelIndex = 133;
	__Local__70.TexelFactor = 574.107788f;
	auto& __Local__71 = bpv__StaticMeshComponent018__pf->StreamingTextureData[5];
	__Local__71.PackedRelativeBox = 4294901760;
	__Local__71.TextureLevelIndex = 43;
	__Local__71.TexelFactor = 574.107788f;
	auto& __Local__72 = bpv__StaticMeshComponent018__pf->StreamingTextureData[6];
	__Local__72.PackedRelativeBox = 4294901760;
	__Local__72.TextureLevelIndex = 44;
	__Local__72.TexelFactor = 574.107788f;
	auto& __Local__73 = bpv__StaticMeshComponent018__pf->StreamingTextureData[7];
	__Local__73.PackedRelativeBox = 4294901760;
	__Local__73.TextureLevelIndex = 45;
	__Local__73.TexelFactor = 574.107788f;
	auto& __Local__74 = bpv__StaticMeshComponent018__pf->StreamingTextureData[8];
	__Local__74.PackedRelativeBox = 4294901760;
	__Local__74.TextureLevelIndex = 46;
	__Local__74.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), false, 0));
	bpv__StaticMeshComponent018__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent018__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__75 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent018__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__75 = FVector(-23.746826, -172.257095, -12.643311);
	bpv__StaticMeshComponent018__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), true, 0));
	bpv__StaticMeshComponent017__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent017__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__76 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent017__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__76 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent017__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent017__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent017__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__77 = bpv__StaticMeshComponent017__pf->StreamingTextureData[0];
	__Local__77.PackedRelativeBox = 4294901760;
	__Local__77.TextureLevelIndex = 131;
	__Local__77.TexelFactor = 574.107788f;
	auto& __Local__78 = bpv__StaticMeshComponent017__pf->StreamingTextureData[1];
	__Local__78.PackedRelativeBox = 4294901760;
	__Local__78.TextureLevelIndex = 132;
	__Local__78.TexelFactor = 574.107788f;
	auto& __Local__79 = bpv__StaticMeshComponent017__pf->StreamingTextureData[2];
	__Local__79.PackedRelativeBox = 4294901760;
	__Local__79.TextureLevelIndex = 40;
	__Local__79.TexelFactor = 574.107788f;
	auto& __Local__80 = bpv__StaticMeshComponent017__pf->StreamingTextureData[3];
	__Local__80.PackedRelativeBox = 4294901760;
	__Local__80.TextureLevelIndex = 49;
	__Local__80.TexelFactor = 574.107788f;
	auto& __Local__81 = bpv__StaticMeshComponent017__pf->StreamingTextureData[4];
	__Local__81.PackedRelativeBox = 4294901760;
	__Local__81.TextureLevelIndex = 133;
	__Local__81.TexelFactor = 574.107788f;
	auto& __Local__82 = bpv__StaticMeshComponent017__pf->StreamingTextureData[5];
	__Local__82.PackedRelativeBox = 4294901760;
	__Local__82.TextureLevelIndex = 43;
	__Local__82.TexelFactor = 574.107788f;
	auto& __Local__83 = bpv__StaticMeshComponent017__pf->StreamingTextureData[6];
	__Local__83.PackedRelativeBox = 4294901760;
	__Local__83.TextureLevelIndex = 44;
	__Local__83.TexelFactor = 574.107788f;
	auto& __Local__84 = bpv__StaticMeshComponent017__pf->StreamingTextureData[7];
	__Local__84.PackedRelativeBox = 4294901760;
	__Local__84.TextureLevelIndex = 45;
	__Local__84.TexelFactor = 574.107788f;
	auto& __Local__85 = bpv__StaticMeshComponent017__pf->StreamingTextureData[8];
	__Local__85.PackedRelativeBox = 4294901760;
	__Local__85.TextureLevelIndex = 46;
	__Local__85.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), false, 0));
	bpv__StaticMeshComponent017__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent017__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__86 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent017__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__86 = FVector(-23.746826, 127.742905, -12.643311);
	bpv__StaticMeshComponent017__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), true, 0));
	bpv__StaticMeshComponent016__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent016__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__87 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent016__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__87 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent016__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent016__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent016__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__88 = bpv__StaticMeshComponent016__pf->StreamingTextureData[0];
	__Local__88.PackedRelativeBox = 4294901760;
	__Local__88.TextureLevelIndex = 131;
	__Local__88.TexelFactor = 574.107788f;
	auto& __Local__89 = bpv__StaticMeshComponent016__pf->StreamingTextureData[1];
	__Local__89.PackedRelativeBox = 4294901760;
	__Local__89.TextureLevelIndex = 132;
	__Local__89.TexelFactor = 574.107788f;
	auto& __Local__90 = bpv__StaticMeshComponent016__pf->StreamingTextureData[2];
	__Local__90.PackedRelativeBox = 4294901760;
	__Local__90.TextureLevelIndex = 40;
	__Local__90.TexelFactor = 574.107788f;
	auto& __Local__91 = bpv__StaticMeshComponent016__pf->StreamingTextureData[3];
	__Local__91.PackedRelativeBox = 4294901760;
	__Local__91.TextureLevelIndex = 49;
	__Local__91.TexelFactor = 574.107788f;
	auto& __Local__92 = bpv__StaticMeshComponent016__pf->StreamingTextureData[4];
	__Local__92.PackedRelativeBox = 4294901760;
	__Local__92.TextureLevelIndex = 133;
	__Local__92.TexelFactor = 574.107788f;
	auto& __Local__93 = bpv__StaticMeshComponent016__pf->StreamingTextureData[5];
	__Local__93.PackedRelativeBox = 4294901760;
	__Local__93.TextureLevelIndex = 43;
	__Local__93.TexelFactor = 574.107788f;
	auto& __Local__94 = bpv__StaticMeshComponent016__pf->StreamingTextureData[6];
	__Local__94.PackedRelativeBox = 4294901760;
	__Local__94.TextureLevelIndex = 44;
	__Local__94.TexelFactor = 574.107788f;
	auto& __Local__95 = bpv__StaticMeshComponent016__pf->StreamingTextureData[7];
	__Local__95.PackedRelativeBox = 4294901760;
	__Local__95.TextureLevelIndex = 45;
	__Local__95.TexelFactor = 574.107788f;
	auto& __Local__96 = bpv__StaticMeshComponent016__pf->StreamingTextureData[8];
	__Local__96.PackedRelativeBox = 4294901760;
	__Local__96.TextureLevelIndex = 46;
	__Local__96.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), false, 0));
	bpv__StaticMeshComponent016__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent016__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__97 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent016__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__97 = FVector(-323.746826, 127.742905, -12.643311);
	bpv__StaticMeshComponent016__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), true, 0));
	bpv__StaticMeshComponent015__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent015__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__98 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent015__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__98 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent015__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent015__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent015__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__99 = bpv__StaticMeshComponent015__pf->StreamingTextureData[0];
	__Local__99.PackedRelativeBox = 4294901760;
	__Local__99.TextureLevelIndex = 131;
	__Local__99.TexelFactor = 574.107788f;
	auto& __Local__100 = bpv__StaticMeshComponent015__pf->StreamingTextureData[1];
	__Local__100.PackedRelativeBox = 4294901760;
	__Local__100.TextureLevelIndex = 132;
	__Local__100.TexelFactor = 574.107788f;
	auto& __Local__101 = bpv__StaticMeshComponent015__pf->StreamingTextureData[2];
	__Local__101.PackedRelativeBox = 4294901760;
	__Local__101.TextureLevelIndex = 40;
	__Local__101.TexelFactor = 574.107788f;
	auto& __Local__102 = bpv__StaticMeshComponent015__pf->StreamingTextureData[3];
	__Local__102.PackedRelativeBox = 4294901760;
	__Local__102.TextureLevelIndex = 49;
	__Local__102.TexelFactor = 574.107788f;
	auto& __Local__103 = bpv__StaticMeshComponent015__pf->StreamingTextureData[4];
	__Local__103.PackedRelativeBox = 4294901760;
	__Local__103.TextureLevelIndex = 133;
	__Local__103.TexelFactor = 574.107788f;
	auto& __Local__104 = bpv__StaticMeshComponent015__pf->StreamingTextureData[5];
	__Local__104.PackedRelativeBox = 4294901760;
	__Local__104.TextureLevelIndex = 43;
	__Local__104.TexelFactor = 574.107788f;
	auto& __Local__105 = bpv__StaticMeshComponent015__pf->StreamingTextureData[6];
	__Local__105.PackedRelativeBox = 4294901760;
	__Local__105.TextureLevelIndex = 44;
	__Local__105.TexelFactor = 574.107788f;
	auto& __Local__106 = bpv__StaticMeshComponent015__pf->StreamingTextureData[7];
	__Local__106.PackedRelativeBox = 4294901760;
	__Local__106.TextureLevelIndex = 45;
	__Local__106.TexelFactor = 574.107788f;
	auto& __Local__107 = bpv__StaticMeshComponent015__pf->StreamingTextureData[8];
	__Local__107.PackedRelativeBox = 4294901760;
	__Local__107.TextureLevelIndex = 46;
	__Local__107.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), false, 0));
	bpv__StaticMeshComponent015__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent015__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__108 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent015__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__108 = FVector(-323.746826, 427.742920, -12.643311);
	bpv__StaticMeshComponent015__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), true, 0));
	bpv__StaticMeshComponent014__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent014__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__109 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent014__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__109 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent014__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent014__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent014__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__110 = bpv__StaticMeshComponent014__pf->StreamingTextureData[0];
	__Local__110.PackedRelativeBox = 4294901760;
	__Local__110.TextureLevelIndex = 131;
	__Local__110.TexelFactor = 574.107788f;
	auto& __Local__111 = bpv__StaticMeshComponent014__pf->StreamingTextureData[1];
	__Local__111.PackedRelativeBox = 4294901760;
	__Local__111.TextureLevelIndex = 132;
	__Local__111.TexelFactor = 574.107788f;
	auto& __Local__112 = bpv__StaticMeshComponent014__pf->StreamingTextureData[2];
	__Local__112.PackedRelativeBox = 4294901760;
	__Local__112.TextureLevelIndex = 40;
	__Local__112.TexelFactor = 574.107788f;
	auto& __Local__113 = bpv__StaticMeshComponent014__pf->StreamingTextureData[3];
	__Local__113.PackedRelativeBox = 4294901760;
	__Local__113.TextureLevelIndex = 49;
	__Local__113.TexelFactor = 574.107788f;
	auto& __Local__114 = bpv__StaticMeshComponent014__pf->StreamingTextureData[4];
	__Local__114.PackedRelativeBox = 4294901760;
	__Local__114.TextureLevelIndex = 133;
	__Local__114.TexelFactor = 574.107788f;
	auto& __Local__115 = bpv__StaticMeshComponent014__pf->StreamingTextureData[5];
	__Local__115.PackedRelativeBox = 4294901760;
	__Local__115.TextureLevelIndex = 43;
	__Local__115.TexelFactor = 574.107788f;
	auto& __Local__116 = bpv__StaticMeshComponent014__pf->StreamingTextureData[6];
	__Local__116.PackedRelativeBox = 4294901760;
	__Local__116.TextureLevelIndex = 44;
	__Local__116.TexelFactor = 574.107788f;
	auto& __Local__117 = bpv__StaticMeshComponent014__pf->StreamingTextureData[7];
	__Local__117.PackedRelativeBox = 4294901760;
	__Local__117.TextureLevelIndex = 45;
	__Local__117.TexelFactor = 574.107788f;
	auto& __Local__118 = bpv__StaticMeshComponent014__pf->StreamingTextureData[8];
	__Local__118.PackedRelativeBox = 4294901760;
	__Local__118.TextureLevelIndex = 46;
	__Local__118.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), false, 0));
	bpv__StaticMeshComponent014__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent014__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__119 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent014__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__119 = FVector(-23.746826, 427.742920, -12.643311);
	bpv__StaticMeshComponent014__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), true, 0));
	bpv__StaticMeshComponent027__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent027__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__120 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent027__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__120 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), false, 0));
	bpv__StaticMeshComponent027__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent027__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__121 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__121 = FVector(-561.629639, -196.005569, -12.618530);
	auto& __Local__122 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__122 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__123 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__123 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent027__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), true, 0));
	bpv__StaticMeshComponent012__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent012__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__124 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent012__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__124 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent012__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent012__pf->StreamingTextureData.AddUninitialized(12);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent012__pf->StreamingTextureData.GetData(), 12);
	auto& __Local__125 = bpv__StaticMeshComponent012__pf->StreamingTextureData[0];
	__Local__125.PackedRelativeBox = 4268949863;
	__Local__125.TextureLevelIndex = 158;
	__Local__125.TexelFactor = 326.126556f;
	auto& __Local__126 = bpv__StaticMeshComponent012__pf->StreamingTextureData[1];
	__Local__126.PackedRelativeBox = 4259288176;
	__Local__126.TextureLevelIndex = 157;
	__Local__126.TexelFactor = 131.592682f;
	auto& __Local__127 = bpv__StaticMeshComponent012__pf->StreamingTextureData[2];
	__Local__127.PackedRelativeBox = 4259288176;
	__Local__127.TextureLevelIndex = 144;
	__Local__127.TexelFactor = 131.592682f;
	auto& __Local__128 = bpv__StaticMeshComponent012__pf->StreamingTextureData[3];
	__Local__128.PackedRelativeBox = 4259288176;
	__Local__128.TextureLevelIndex = 145;
	__Local__128.TexelFactor = 131.592682f;
	auto& __Local__129 = bpv__StaticMeshComponent012__pf->StreamingTextureData[4];
	__Local__129.PackedRelativeBox = 3470289125;
	__Local__129.TextureLevelIndex = 149;
	__Local__129.TexelFactor = 103.089394f;
	auto& __Local__130 = bpv__StaticMeshComponent012__pf->StreamingTextureData[5];
	__Local__130.PackedRelativeBox = 3470289125;
	__Local__130.TextureLevelIndex = 150;
	__Local__130.TexelFactor = 103.089394f;
	auto& __Local__131 = bpv__StaticMeshComponent012__pf->StreamingTextureData[6];
	__Local__131.PackedRelativeBox = 3470289125;
	__Local__131.TextureLevelIndex = 151;
	__Local__131.TexelFactor = 103.089394f;
	auto& __Local__132 = bpv__StaticMeshComponent012__pf->StreamingTextureData[7];
	__Local__132.PackedRelativeBox = 4092817408;
	__Local__132.TextureLevelIndex = 146;
	__Local__132.TexelFactor = 129.975616f;
	auto& __Local__133 = bpv__StaticMeshComponent012__pf->StreamingTextureData[8];
	__Local__133.PackedRelativeBox = 4092817408;
	__Local__133.TextureLevelIndex = 147;
	__Local__133.TexelFactor = 129.975616f;
	auto& __Local__134 = bpv__StaticMeshComponent012__pf->StreamingTextureData[9];
	__Local__134.PackedRelativeBox = 4092817408;
	__Local__134.TextureLevelIndex = 148;
	__Local__134.TexelFactor = 129.975616f;
	auto& __Local__135 = bpv__StaticMeshComponent012__pf->StreamingTextureData[10];
	__Local__135.PackedRelativeBox = 4268949863;
	__Local__135.TextureLevelIndex = 159;
	__Local__135.TexelFactor = 326.126556f;
	auto& __Local__136 = bpv__StaticMeshComponent012__pf->StreamingTextureData[11];
	__Local__136.PackedRelativeBox = 4268949863;
	__Local__136.TextureLevelIndex = 160;
	__Local__136.TexelFactor = 326.126556f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), false, 0));
	bpv__StaticMeshComponent012__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent012__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__137 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent012__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__137 = FVector(-509.148193, 83.994431, -7.622681);
	bpv__StaticMeshComponent012__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), true, 0));
	bpv__StaticMeshComponent011__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent011__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__138 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent011__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__138 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent011__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent011__pf->StreamingTextureData.AddUninitialized(27);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent011__pf->StreamingTextureData.GetData(), 27);
	auto& __Local__139 = bpv__StaticMeshComponent011__pf->StreamingTextureData[0];
	__Local__139.PackedRelativeBox = 4280221927;
	__Local__139.TextureLevelIndex = 140;
	__Local__139.TexelFactor = 411.229462f;
	auto& __Local__140 = bpv__StaticMeshComponent011__pf->StreamingTextureData[1];
	__Local__140.PackedRelativeBox = 4294721536;
	__Local__140.TextureLevelIndex = 141;
	__Local__140.TexelFactor = 414.288452f;
	auto& __Local__141 = bpv__StaticMeshComponent011__pf->StreamingTextureData[2];
	__Local__141.PackedRelativeBox = 4294721536;
	__Local__141.TextureLevelIndex = 142;
	__Local__141.TexelFactor = 414.288452f;
	auto& __Local__142 = bpv__StaticMeshComponent011__pf->StreamingTextureData[3];
	__Local__142.PackedRelativeBox = 4294721536;
	__Local__142.TextureLevelIndex = 143;
	__Local__142.TexelFactor = 414.288452f;
	auto& __Local__143 = bpv__StaticMeshComponent011__pf->StreamingTextureData[4];
	__Local__143.PackedRelativeBox = 1528778984;
	__Local__143.TextureLevelIndex = 95;
	__Local__143.TexelFactor = 287.424683f;
	auto& __Local__144 = bpv__StaticMeshComponent011__pf->StreamingTextureData[5];
	__Local__144.PackedRelativeBox = 4280221927;
	__Local__144.TextureLevelIndex = 40;
	__Local__144.TexelFactor = 411.229462f;
	auto& __Local__145 = bpv__StaticMeshComponent011__pf->StreamingTextureData[6];
	__Local__145.PackedRelativeBox = 4280221927;
	__Local__145.TextureLevelIndex = 49;
	__Local__145.TexelFactor = 411.229462f;
	auto& __Local__146 = bpv__StaticMeshComponent011__pf->StreamingTextureData[7];
	__Local__146.PackedRelativeBox = 4280221927;
	__Local__146.TextureLevelIndex = 43;
	__Local__146.TexelFactor = 411.229462f;
	auto& __Local__147 = bpv__StaticMeshComponent011__pf->StreamingTextureData[8];
	__Local__147.PackedRelativeBox = 4280221927;
	__Local__147.TextureLevelIndex = 45;
	__Local__147.TexelFactor = 411.229462f;
	auto& __Local__148 = bpv__StaticMeshComponent011__pf->StreamingTextureData[9];
	__Local__148.PackedRelativeBox = 1528778984;
	__Local__148.TextureLevelIndex = 120;
	__Local__148.TexelFactor = 287.424683f;
	auto& __Local__149 = bpv__StaticMeshComponent011__pf->StreamingTextureData[10];
	__Local__149.PackedRelativeBox = 3617496665;
	__Local__149.TextureLevelIndex = 144;
	__Local__149.TexelFactor = 181.886108f;
	auto& __Local__150 = bpv__StaticMeshComponent011__pf->StreamingTextureData[11];
	__Local__150.PackedRelativeBox = 3617496665;
	__Local__150.TextureLevelIndex = 145;
	__Local__150.TexelFactor = 181.886108f;
	auto& __Local__151 = bpv__StaticMeshComponent011__pf->StreamingTextureData[12];
	__Local__151.PackedRelativeBox = 2673572467;
	__Local__151.TextureLevelIndex = 146;
	__Local__151.TexelFactor = 136.150223f;
	auto& __Local__152 = bpv__StaticMeshComponent011__pf->StreamingTextureData[13];
	__Local__152.PackedRelativeBox = 2673572467;
	__Local__152.TextureLevelIndex = 147;
	__Local__152.TexelFactor = 136.150223f;
	auto& __Local__153 = bpv__StaticMeshComponent011__pf->StreamingTextureData[14];
	__Local__153.PackedRelativeBox = 2673572467;
	__Local__153.TextureLevelIndex = 148;
	__Local__153.TexelFactor = 136.150223f;
	auto& __Local__154 = bpv__StaticMeshComponent011__pf->StreamingTextureData[15];
	__Local__154.PackedRelativeBox = 3804212827;
	__Local__154.TextureLevelIndex = 149;
	__Local__154.TexelFactor = 144.842712f;
	auto& __Local__155 = bpv__StaticMeshComponent011__pf->StreamingTextureData[16];
	__Local__155.PackedRelativeBox = 3804212827;
	__Local__155.TextureLevelIndex = 150;
	__Local__155.TexelFactor = 144.842712f;
	auto& __Local__156 = bpv__StaticMeshComponent011__pf->StreamingTextureData[17];
	__Local__156.PackedRelativeBox = 3804212827;
	__Local__156.TextureLevelIndex = 151;
	__Local__156.TexelFactor = 144.842712f;
	auto& __Local__157 = bpv__StaticMeshComponent011__pf->StreamingTextureData[18];
	__Local__157.PackedRelativeBox = 2273051223;
	__Local__157.TextureLevelIndex = 152;
	__Local__157.TexelFactor = 65.518105f;
	auto& __Local__158 = bpv__StaticMeshComponent011__pf->StreamingTextureData[19];
	__Local__158.PackedRelativeBox = 2273051223;
	__Local__158.TextureLevelIndex = 153;
	__Local__158.TexelFactor = 65.518105f;
	auto& __Local__159 = bpv__StaticMeshComponent011__pf->StreamingTextureData[20];
	__Local__159.PackedRelativeBox = 2273051223;
	__Local__159.TextureLevelIndex = 154;
	__Local__159.TexelFactor = 65.518105f;
	auto& __Local__160 = bpv__StaticMeshComponent011__pf->StreamingTextureData[21];
	__Local__160.PackedRelativeBox = 4280221927;
	__Local__160.TextureLevelIndex = 155;
	__Local__160.TexelFactor = 411.229462f;
	auto& __Local__161 = bpv__StaticMeshComponent011__pf->StreamingTextureData[22];
	__Local__161.PackedRelativeBox = 1528778984;
	__Local__161.TextureLevelIndex = 96;
	__Local__161.TexelFactor = 287.424683f;
	auto& __Local__162 = bpv__StaticMeshComponent011__pf->StreamingTextureData[23];
	__Local__162.PackedRelativeBox = 4280221927;
	__Local__162.TextureLevelIndex = 44;
	__Local__162.TexelFactor = 411.229462f;
	auto& __Local__163 = bpv__StaticMeshComponent011__pf->StreamingTextureData[24];
	__Local__163.PackedRelativeBox = 4280221927;
	__Local__163.TextureLevelIndex = 156;
	__Local__163.TexelFactor = 411.229462f;
	auto& __Local__164 = bpv__StaticMeshComponent011__pf->StreamingTextureData[25];
	__Local__164.PackedRelativeBox = 4280221927;
	__Local__164.TextureLevelIndex = 46;
	__Local__164.TexelFactor = 411.229462f;
	auto& __Local__165 = bpv__StaticMeshComponent011__pf->StreamingTextureData[26];
	__Local__165.PackedRelativeBox = 3617496665;
	__Local__165.TextureLevelIndex = 157;
	__Local__165.TexelFactor = 181.886108f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), false, 0));
	bpv__StaticMeshComponent011__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__166 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent011__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__166 = FVector(120.851807, -306.005554, -7.622681);
	bpv__StaticMeshComponent011__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), true, 0));
	bpv__StaticMeshComponent010__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent010__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__167 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent010__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__167 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent010__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent010__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent010__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__168 = bpv__StaticMeshComponent010__pf->StreamingTextureData[0];
	__Local__168.PackedRelativeBox = 4294901760;
	__Local__168.TextureLevelIndex = 137;
	__Local__168.TexelFactor = 300.084900f;
	auto& __Local__169 = bpv__StaticMeshComponent010__pf->StreamingTextureData[1];
	__Local__169.PackedRelativeBox = 4294901760;
	__Local__169.TextureLevelIndex = 138;
	__Local__169.TexelFactor = 300.084900f;
	auto& __Local__170 = bpv__StaticMeshComponent010__pf->StreamingTextureData[2];
	__Local__170.PackedRelativeBox = 4294901760;
	__Local__170.TextureLevelIndex = 40;
	__Local__170.TexelFactor = 300.084900f;
	auto& __Local__171 = bpv__StaticMeshComponent010__pf->StreamingTextureData[3];
	__Local__171.PackedRelativeBox = 4294901760;
	__Local__171.TextureLevelIndex = 49;
	__Local__171.TexelFactor = 300.084900f;
	auto& __Local__172 = bpv__StaticMeshComponent010__pf->StreamingTextureData[4];
	__Local__172.PackedRelativeBox = 4294901760;
	__Local__172.TextureLevelIndex = 139;
	__Local__172.TexelFactor = 300.084900f;
	auto& __Local__173 = bpv__StaticMeshComponent010__pf->StreamingTextureData[5];
	__Local__173.PackedRelativeBox = 4294901760;
	__Local__173.TextureLevelIndex = 43;
	__Local__173.TexelFactor = 300.084900f;
	auto& __Local__174 = bpv__StaticMeshComponent010__pf->StreamingTextureData[6];
	__Local__174.PackedRelativeBox = 4294901760;
	__Local__174.TextureLevelIndex = 44;
	__Local__174.TexelFactor = 300.084900f;
	auto& __Local__175 = bpv__StaticMeshComponent010__pf->StreamingTextureData[7];
	__Local__175.PackedRelativeBox = 4294901760;
	__Local__175.TextureLevelIndex = 45;
	__Local__175.TexelFactor = 300.084900f;
	auto& __Local__176 = bpv__StaticMeshComponent010__pf->StreamingTextureData[8];
	__Local__176.PackedRelativeBox = 4294901760;
	__Local__176.TextureLevelIndex = 46;
	__Local__176.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), false, 0));
	bpv__StaticMeshComponent010__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent010__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__177 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__177 = FVector(-5.253418, 443.011841, -2.137329);
	auto& __Local__178 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__178 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__179 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__179 = FVector(1.000000, 1.147963, 1.000000);
	bpv__StaticMeshComponent010__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), true, 0));
	bpv__StaticMeshComponent09__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent09__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__180 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent09__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__180 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent09__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent09__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent09__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__181 = bpv__StaticMeshComponent09__pf->StreamingTextureData[0];
	__Local__181.PackedRelativeBox = 4294901760;
	__Local__181.TextureLevelIndex = 137;
	__Local__181.TexelFactor = 300.084900f;
	auto& __Local__182 = bpv__StaticMeshComponent09__pf->StreamingTextureData[1];
	__Local__182.PackedRelativeBox = 4294901760;
	__Local__182.TextureLevelIndex = 138;
	__Local__182.TexelFactor = 300.084900f;
	auto& __Local__183 = bpv__StaticMeshComponent09__pf->StreamingTextureData[2];
	__Local__183.PackedRelativeBox = 4294901760;
	__Local__183.TextureLevelIndex = 40;
	__Local__183.TexelFactor = 300.084900f;
	auto& __Local__184 = bpv__StaticMeshComponent09__pf->StreamingTextureData[3];
	__Local__184.PackedRelativeBox = 4294901760;
	__Local__184.TextureLevelIndex = 49;
	__Local__184.TexelFactor = 300.084900f;
	auto& __Local__185 = bpv__StaticMeshComponent09__pf->StreamingTextureData[4];
	__Local__185.PackedRelativeBox = 4294901760;
	__Local__185.TextureLevelIndex = 139;
	__Local__185.TexelFactor = 300.084900f;
	auto& __Local__186 = bpv__StaticMeshComponent09__pf->StreamingTextureData[5];
	__Local__186.PackedRelativeBox = 4294901760;
	__Local__186.TextureLevelIndex = 43;
	__Local__186.TexelFactor = 300.084900f;
	auto& __Local__187 = bpv__StaticMeshComponent09__pf->StreamingTextureData[6];
	__Local__187.PackedRelativeBox = 4294901760;
	__Local__187.TextureLevelIndex = 44;
	__Local__187.TexelFactor = 300.084900f;
	auto& __Local__188 = bpv__StaticMeshComponent09__pf->StreamingTextureData[7];
	__Local__188.PackedRelativeBox = 4294901760;
	__Local__188.TextureLevelIndex = 45;
	__Local__188.TexelFactor = 300.084900f;
	auto& __Local__189 = bpv__StaticMeshComponent09__pf->StreamingTextureData[8];
	__Local__189.PackedRelativeBox = 4294901760;
	__Local__189.TextureLevelIndex = 46;
	__Local__189.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), false, 0));
	bpv__StaticMeshComponent09__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent09__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__190 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent09__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__190 = FVector(294.746582, 443.011841, -2.137329);
	auto& __Local__191 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent09__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__191 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent09__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), true, 0));
	bpv__StaticMeshComponent08__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent08__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__192 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent08__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__192 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent08__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent08__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent08__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__193 = bpv__StaticMeshComponent08__pf->StreamingTextureData[0];
	__Local__193.PackedRelativeBox = 4294901760;
	__Local__193.TextureLevelIndex = 137;
	__Local__193.TexelFactor = 300.084900f;
	auto& __Local__194 = bpv__StaticMeshComponent08__pf->StreamingTextureData[1];
	__Local__194.PackedRelativeBox = 4294901760;
	__Local__194.TextureLevelIndex = 138;
	__Local__194.TexelFactor = 300.084900f;
	auto& __Local__195 = bpv__StaticMeshComponent08__pf->StreamingTextureData[2];
	__Local__195.PackedRelativeBox = 4294901760;
	__Local__195.TextureLevelIndex = 40;
	__Local__195.TexelFactor = 300.084900f;
	auto& __Local__196 = bpv__StaticMeshComponent08__pf->StreamingTextureData[3];
	__Local__196.PackedRelativeBox = 4294901760;
	__Local__196.TextureLevelIndex = 49;
	__Local__196.TexelFactor = 300.084900f;
	auto& __Local__197 = bpv__StaticMeshComponent08__pf->StreamingTextureData[4];
	__Local__197.PackedRelativeBox = 4294901760;
	__Local__197.TextureLevelIndex = 139;
	__Local__197.TexelFactor = 300.084900f;
	auto& __Local__198 = bpv__StaticMeshComponent08__pf->StreamingTextureData[5];
	__Local__198.PackedRelativeBox = 4294901760;
	__Local__198.TextureLevelIndex = 43;
	__Local__198.TexelFactor = 300.084900f;
	auto& __Local__199 = bpv__StaticMeshComponent08__pf->StreamingTextureData[6];
	__Local__199.PackedRelativeBox = 4294901760;
	__Local__199.TextureLevelIndex = 44;
	__Local__199.TexelFactor = 300.084900f;
	auto& __Local__200 = bpv__StaticMeshComponent08__pf->StreamingTextureData[7];
	__Local__200.PackedRelativeBox = 4294901760;
	__Local__200.TextureLevelIndex = 45;
	__Local__200.TexelFactor = 300.084900f;
	auto& __Local__201 = bpv__StaticMeshComponent08__pf->StreamingTextureData[8];
	__Local__201.PackedRelativeBox = 4294901760;
	__Local__201.TextureLevelIndex = 46;
	__Local__201.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), false, 0));
	bpv__StaticMeshComponent08__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent08__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__202 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__202 = FVector(590.828613, -186.514343, -2.137329);
	auto& __Local__203 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__203 = FRotator(0.000000, 179.999802, 0.000000);
	auto& __Local__204 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__204 = FVector(1.000000, 1.102493, 1.000000);
	bpv__StaticMeshComponent08__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), true, 0));
	bpv__StaticMeshComponent07__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent07__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__205 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent07__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__205 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent07__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent07__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent07__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__206 = bpv__StaticMeshComponent07__pf->StreamingTextureData[0];
	__Local__206.PackedRelativeBox = 4294901760;
	__Local__206.TextureLevelIndex = 137;
	__Local__206.TexelFactor = 300.084900f;
	auto& __Local__207 = bpv__StaticMeshComponent07__pf->StreamingTextureData[1];
	__Local__207.PackedRelativeBox = 4294901760;
	__Local__207.TextureLevelIndex = 138;
	__Local__207.TexelFactor = 300.084900f;
	auto& __Local__208 = bpv__StaticMeshComponent07__pf->StreamingTextureData[2];
	__Local__208.PackedRelativeBox = 4294901760;
	__Local__208.TextureLevelIndex = 40;
	__Local__208.TexelFactor = 300.084900f;
	auto& __Local__209 = bpv__StaticMeshComponent07__pf->StreamingTextureData[3];
	__Local__209.PackedRelativeBox = 4294901760;
	__Local__209.TextureLevelIndex = 49;
	__Local__209.TexelFactor = 300.084900f;
	auto& __Local__210 = bpv__StaticMeshComponent07__pf->StreamingTextureData[4];
	__Local__210.PackedRelativeBox = 4294901760;
	__Local__210.TextureLevelIndex = 139;
	__Local__210.TexelFactor = 300.084900f;
	auto& __Local__211 = bpv__StaticMeshComponent07__pf->StreamingTextureData[5];
	__Local__211.PackedRelativeBox = 4294901760;
	__Local__211.TextureLevelIndex = 43;
	__Local__211.TexelFactor = 300.084900f;
	auto& __Local__212 = bpv__StaticMeshComponent07__pf->StreamingTextureData[6];
	__Local__212.PackedRelativeBox = 4294901760;
	__Local__212.TextureLevelIndex = 44;
	__Local__212.TexelFactor = 300.084900f;
	auto& __Local__213 = bpv__StaticMeshComponent07__pf->StreamingTextureData[7];
	__Local__213.PackedRelativeBox = 4294901760;
	__Local__213.TextureLevelIndex = 45;
	__Local__213.TexelFactor = 300.084900f;
	auto& __Local__214 = bpv__StaticMeshComponent07__pf->StreamingTextureData[8];
	__Local__214.PackedRelativeBox = 4294901760;
	__Local__214.TextureLevelIndex = 46;
	__Local__214.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), false, 0));
	bpv__StaticMeshComponent07__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent07__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__215 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__215 = FVector(-629.171387, -186.514343, -2.137329);
	auto& __Local__216 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__216 = FRotator(0.000000, 179.999802, 0.000000);
	auto& __Local__217 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__217 = FVector(1.000000, 1.102493, 1.000000);
	bpv__StaticMeshComponent07__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), true, 0));
	bpv__StaticMeshComponent013__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent013__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__218 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent013__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__218 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent013__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent013__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent013__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__219 = bpv__StaticMeshComponent013__pf->StreamingTextureData[0];
	__Local__219.PackedRelativeBox = 4294901760;
	__Local__219.TextureLevelIndex = 131;
	__Local__219.TexelFactor = 574.107788f;
	auto& __Local__220 = bpv__StaticMeshComponent013__pf->StreamingTextureData[1];
	__Local__220.PackedRelativeBox = 4294901760;
	__Local__220.TextureLevelIndex = 132;
	__Local__220.TexelFactor = 574.107788f;
	auto& __Local__221 = bpv__StaticMeshComponent013__pf->StreamingTextureData[2];
	__Local__221.PackedRelativeBox = 4294901760;
	__Local__221.TextureLevelIndex = 40;
	__Local__221.TexelFactor = 574.107788f;
	auto& __Local__222 = bpv__StaticMeshComponent013__pf->StreamingTextureData[3];
	__Local__222.PackedRelativeBox = 4294901760;
	__Local__222.TextureLevelIndex = 49;
	__Local__222.TexelFactor = 574.107788f;
	auto& __Local__223 = bpv__StaticMeshComponent013__pf->StreamingTextureData[4];
	__Local__223.PackedRelativeBox = 4294901760;
	__Local__223.TextureLevelIndex = 133;
	__Local__223.TexelFactor = 574.107788f;
	auto& __Local__224 = bpv__StaticMeshComponent013__pf->StreamingTextureData[5];
	__Local__224.PackedRelativeBox = 4294901760;
	__Local__224.TextureLevelIndex = 43;
	__Local__224.TexelFactor = 574.107788f;
	auto& __Local__225 = bpv__StaticMeshComponent013__pf->StreamingTextureData[6];
	__Local__225.PackedRelativeBox = 4294901760;
	__Local__225.TextureLevelIndex = 44;
	__Local__225.TexelFactor = 574.107788f;
	auto& __Local__226 = bpv__StaticMeshComponent013__pf->StreamingTextureData[7];
	__Local__226.PackedRelativeBox = 4294901760;
	__Local__226.TextureLevelIndex = 45;
	__Local__226.TexelFactor = 574.107788f;
	auto& __Local__227 = bpv__StaticMeshComponent013__pf->StreamingTextureData[8];
	__Local__227.PackedRelativeBox = 4294901760;
	__Local__227.TextureLevelIndex = 46;
	__Local__227.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), false, 0));
	bpv__StaticMeshComponent013__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent013__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__228 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent013__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__228 = FVector(276.253174, 427.742920, -12.643311);
	bpv__StaticMeshComponent013__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), true, 0));
	bpv__StaticMeshComponent06__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent06__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__229 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent06__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__229 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent06__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent06__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent06__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__230 = bpv__StaticMeshComponent06__pf->StreamingTextureData[0];
	__Local__230.PackedRelativeBox = 4294901760;
	__Local__230.TextureLevelIndex = 137;
	__Local__230.TexelFactor = 300.084900f;
	auto& __Local__231 = bpv__StaticMeshComponent06__pf->StreamingTextureData[1];
	__Local__231.PackedRelativeBox = 4294901760;
	__Local__231.TextureLevelIndex = 138;
	__Local__231.TexelFactor = 300.084900f;
	auto& __Local__232 = bpv__StaticMeshComponent06__pf->StreamingTextureData[2];
	__Local__232.PackedRelativeBox = 4294901760;
	__Local__232.TextureLevelIndex = 40;
	__Local__232.TexelFactor = 300.084900f;
	auto& __Local__233 = bpv__StaticMeshComponent06__pf->StreamingTextureData[3];
	__Local__233.PackedRelativeBox = 4294901760;
	__Local__233.TextureLevelIndex = 49;
	__Local__233.TexelFactor = 300.084900f;
	auto& __Local__234 = bpv__StaticMeshComponent06__pf->StreamingTextureData[4];
	__Local__234.PackedRelativeBox = 4294901760;
	__Local__234.TextureLevelIndex = 139;
	__Local__234.TexelFactor = 300.084900f;
	auto& __Local__235 = bpv__StaticMeshComponent06__pf->StreamingTextureData[5];
	__Local__235.PackedRelativeBox = 4294901760;
	__Local__235.TextureLevelIndex = 43;
	__Local__235.TexelFactor = 300.084900f;
	auto& __Local__236 = bpv__StaticMeshComponent06__pf->StreamingTextureData[6];
	__Local__236.PackedRelativeBox = 4294901760;
	__Local__236.TextureLevelIndex = 44;
	__Local__236.TexelFactor = 300.084900f;
	auto& __Local__237 = bpv__StaticMeshComponent06__pf->StreamingTextureData[7];
	__Local__237.PackedRelativeBox = 4294901760;
	__Local__237.TextureLevelIndex = 45;
	__Local__237.TexelFactor = 300.084900f;
	auto& __Local__238 = bpv__StaticMeshComponent06__pf->StreamingTextureData[8];
	__Local__238.PackedRelativeBox = 4294901760;
	__Local__238.TextureLevelIndex = 46;
	__Local__238.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), false, 0));
	bpv__StaticMeshComponent06__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent06__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__239 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent06__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__239 = FVector(-5.253418, -466.988159, -2.137329);
	auto& __Local__240 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent06__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__240 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__241 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent06__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__241 = FVector(1.000000, 1.147963, 1.000000);
	bpv__StaticMeshComponent06__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), true, 0));
	bpv__StaticMeshComponent05__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent05__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__242 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent05__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__242 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent05__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent05__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent05__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__243 = bpv__StaticMeshComponent05__pf->StreamingTextureData[0];
	__Local__243.PackedRelativeBox = 4294901760;
	__Local__243.TextureLevelIndex = 137;
	__Local__243.TexelFactor = 300.084900f;
	auto& __Local__244 = bpv__StaticMeshComponent05__pf->StreamingTextureData[1];
	__Local__244.PackedRelativeBox = 4294901760;
	__Local__244.TextureLevelIndex = 138;
	__Local__244.TexelFactor = 300.084900f;
	auto& __Local__245 = bpv__StaticMeshComponent05__pf->StreamingTextureData[2];
	__Local__245.PackedRelativeBox = 4294901760;
	__Local__245.TextureLevelIndex = 40;
	__Local__245.TexelFactor = 300.084900f;
	auto& __Local__246 = bpv__StaticMeshComponent05__pf->StreamingTextureData[3];
	__Local__246.PackedRelativeBox = 4294901760;
	__Local__246.TextureLevelIndex = 49;
	__Local__246.TexelFactor = 300.084900f;
	auto& __Local__247 = bpv__StaticMeshComponent05__pf->StreamingTextureData[4];
	__Local__247.PackedRelativeBox = 4294901760;
	__Local__247.TextureLevelIndex = 139;
	__Local__247.TexelFactor = 300.084900f;
	auto& __Local__248 = bpv__StaticMeshComponent05__pf->StreamingTextureData[5];
	__Local__248.PackedRelativeBox = 4294901760;
	__Local__248.TextureLevelIndex = 43;
	__Local__248.TexelFactor = 300.084900f;
	auto& __Local__249 = bpv__StaticMeshComponent05__pf->StreamingTextureData[6];
	__Local__249.PackedRelativeBox = 4294901760;
	__Local__249.TextureLevelIndex = 44;
	__Local__249.TexelFactor = 300.084900f;
	auto& __Local__250 = bpv__StaticMeshComponent05__pf->StreamingTextureData[7];
	__Local__250.PackedRelativeBox = 4294901760;
	__Local__250.TextureLevelIndex = 45;
	__Local__250.TexelFactor = 300.084900f;
	auto& __Local__251 = bpv__StaticMeshComponent05__pf->StreamingTextureData[8];
	__Local__251.PackedRelativeBox = 4294901760;
	__Local__251.TextureLevelIndex = 46;
	__Local__251.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), false, 0));
	bpv__StaticMeshComponent05__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent05__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__252 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent05__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__252 = FVector(294.746582, -466.988159, -2.137329);
	auto& __Local__253 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent05__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__253 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent05__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), true, 0));
	bpv__StaticMeshComponent04__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent04__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__254 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent04__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__254 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent04__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent04__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent04__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__255 = bpv__StaticMeshComponent04__pf->StreamingTextureData[0];
	__Local__255.PackedRelativeBox = 4294901760;
	__Local__255.TextureLevelIndex = 134;
	__Local__255.TexelFactor = 628.452393f;
	auto& __Local__256 = bpv__StaticMeshComponent04__pf->StreamingTextureData[1];
	__Local__256.PackedRelativeBox = 4294901760;
	__Local__256.TextureLevelIndex = 135;
	__Local__256.TexelFactor = 628.452393f;
	auto& __Local__257 = bpv__StaticMeshComponent04__pf->StreamingTextureData[2];
	__Local__257.PackedRelativeBox = 4294901760;
	__Local__257.TextureLevelIndex = 40;
	__Local__257.TexelFactor = 628.452393f;
	auto& __Local__258 = bpv__StaticMeshComponent04__pf->StreamingTextureData[3];
	__Local__258.PackedRelativeBox = 4294901760;
	__Local__258.TextureLevelIndex = 49;
	__Local__258.TexelFactor = 628.452393f;
	auto& __Local__259 = bpv__StaticMeshComponent04__pf->StreamingTextureData[4];
	__Local__259.PackedRelativeBox = 4294901760;
	__Local__259.TextureLevelIndex = 136;
	__Local__259.TexelFactor = 628.452393f;
	auto& __Local__260 = bpv__StaticMeshComponent04__pf->StreamingTextureData[5];
	__Local__260.PackedRelativeBox = 4294901760;
	__Local__260.TextureLevelIndex = 43;
	__Local__260.TexelFactor = 628.452393f;
	auto& __Local__261 = bpv__StaticMeshComponent04__pf->StreamingTextureData[6];
	__Local__261.PackedRelativeBox = 4294901760;
	__Local__261.TextureLevelIndex = 44;
	__Local__261.TexelFactor = 628.452393f;
	auto& __Local__262 = bpv__StaticMeshComponent04__pf->StreamingTextureData[7];
	__Local__262.PackedRelativeBox = 4294901760;
	__Local__262.TextureLevelIndex = 45;
	__Local__262.TexelFactor = 628.452393f;
	auto& __Local__263 = bpv__StaticMeshComponent04__pf->StreamingTextureData[8];
	__Local__263.PackedRelativeBox = 4294901760;
	__Local__263.TextureLevelIndex = 46;
	__Local__263.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), false, 0));
	bpv__StaticMeshComponent04__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent04__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__264 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent04__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__264 = FVector(590.512817, 148.075272, -2.643433);
	auto& __Local__265 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent04__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__265 = FRotator(0.000000, -90.000694, 0.000000);
	bpv__StaticMeshComponent04__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), true, 0));
	bpv__StaticMeshComponent03__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent03__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__266 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent03__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__266 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent03__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent03__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent03__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__267 = bpv__StaticMeshComponent03__pf->StreamingTextureData[0];
	__Local__267.PackedRelativeBox = 4294901760;
	__Local__267.TextureLevelIndex = 134;
	__Local__267.TexelFactor = 628.452393f;
	auto& __Local__268 = bpv__StaticMeshComponent03__pf->StreamingTextureData[1];
	__Local__268.PackedRelativeBox = 4294901760;
	__Local__268.TextureLevelIndex = 135;
	__Local__268.TexelFactor = 628.452393f;
	auto& __Local__269 = bpv__StaticMeshComponent03__pf->StreamingTextureData[2];
	__Local__269.PackedRelativeBox = 4294901760;
	__Local__269.TextureLevelIndex = 40;
	__Local__269.TexelFactor = 628.452393f;
	auto& __Local__270 = bpv__StaticMeshComponent03__pf->StreamingTextureData[3];
	__Local__270.PackedRelativeBox = 4294901760;
	__Local__270.TextureLevelIndex = 49;
	__Local__270.TexelFactor = 628.452393f;
	auto& __Local__271 = bpv__StaticMeshComponent03__pf->StreamingTextureData[4];
	__Local__271.PackedRelativeBox = 4294901760;
	__Local__271.TextureLevelIndex = 136;
	__Local__271.TexelFactor = 628.452393f;
	auto& __Local__272 = bpv__StaticMeshComponent03__pf->StreamingTextureData[5];
	__Local__272.PackedRelativeBox = 4294901760;
	__Local__272.TextureLevelIndex = 43;
	__Local__272.TexelFactor = 628.452393f;
	auto& __Local__273 = bpv__StaticMeshComponent03__pf->StreamingTextureData[6];
	__Local__273.PackedRelativeBox = 4294901760;
	__Local__273.TextureLevelIndex = 44;
	__Local__273.TexelFactor = 628.452393f;
	auto& __Local__274 = bpv__StaticMeshComponent03__pf->StreamingTextureData[7];
	__Local__274.PackedRelativeBox = 4294901760;
	__Local__274.TextureLevelIndex = 45;
	__Local__274.TexelFactor = 628.452393f;
	auto& __Local__275 = bpv__StaticMeshComponent03__pf->StreamingTextureData[8];
	__Local__275.PackedRelativeBox = 4294901760;
	__Local__275.TextureLevelIndex = 46;
	__Local__275.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), false, 0));
	bpv__StaticMeshComponent03__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent03__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__276 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent03__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__276 = FVector(-354.439453, 443.137390, -2.643433);
	auto& __Local__277 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent03__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__277 = FRotator(0.000000, -0.000519, 0.000000);
	bpv__StaticMeshComponent03__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), true, 0));
	bpv__StaticMeshComponent02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent02__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__278 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent02__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__278 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent02__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent02__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent02__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__279 = bpv__StaticMeshComponent02__pf->StreamingTextureData[0];
	__Local__279.PackedRelativeBox = 4294901760;
	__Local__279.TextureLevelIndex = 134;
	__Local__279.TexelFactor = 628.452393f;
	auto& __Local__280 = bpv__StaticMeshComponent02__pf->StreamingTextureData[1];
	__Local__280.PackedRelativeBox = 4294901760;
	__Local__280.TextureLevelIndex = 135;
	__Local__280.TexelFactor = 628.452393f;
	auto& __Local__281 = bpv__StaticMeshComponent02__pf->StreamingTextureData[2];
	__Local__281.PackedRelativeBox = 4294901760;
	__Local__281.TextureLevelIndex = 40;
	__Local__281.TexelFactor = 628.452393f;
	auto& __Local__282 = bpv__StaticMeshComponent02__pf->StreamingTextureData[3];
	__Local__282.PackedRelativeBox = 4294901760;
	__Local__282.TextureLevelIndex = 49;
	__Local__282.TexelFactor = 628.452393f;
	auto& __Local__283 = bpv__StaticMeshComponent02__pf->StreamingTextureData[4];
	__Local__283.PackedRelativeBox = 4294901760;
	__Local__283.TextureLevelIndex = 136;
	__Local__283.TexelFactor = 628.452393f;
	auto& __Local__284 = bpv__StaticMeshComponent02__pf->StreamingTextureData[5];
	__Local__284.PackedRelativeBox = 4294901760;
	__Local__284.TextureLevelIndex = 43;
	__Local__284.TexelFactor = 628.452393f;
	auto& __Local__285 = bpv__StaticMeshComponent02__pf->StreamingTextureData[6];
	__Local__285.PackedRelativeBox = 4294901760;
	__Local__285.TextureLevelIndex = 44;
	__Local__285.TexelFactor = 628.452393f;
	auto& __Local__286 = bpv__StaticMeshComponent02__pf->StreamingTextureData[7];
	__Local__286.PackedRelativeBox = 4294901760;
	__Local__286.TextureLevelIndex = 45;
	__Local__286.TexelFactor = 628.452393f;
	auto& __Local__287 = bpv__StaticMeshComponent02__pf->StreamingTextureData[8];
	__Local__287.PackedRelativeBox = 4294901760;
	__Local__287.TextureLevelIndex = 46;
	__Local__287.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), false, 0));
	bpv__StaticMeshComponent02__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent02__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__288 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent02__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__288 = FVector(-649.487061, -189.153275, -2.643433);
	auto& __Local__289 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent02__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__289 = FRotator(0.000000, 89.999565, 0.000000);
	bpv__StaticMeshComponent02__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), true, 0));
	bpv__StaticMeshComponent01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent01__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__290 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent01__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__290 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent01__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent01__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent01__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__291 = bpv__StaticMeshComponent01__pf->StreamingTextureData[0];
	__Local__291.PackedRelativeBox = 4294901760;
	__Local__291.TextureLevelIndex = 134;
	__Local__291.TexelFactor = 628.452393f;
	auto& __Local__292 = bpv__StaticMeshComponent01__pf->StreamingTextureData[1];
	__Local__292.PackedRelativeBox = 4294901760;
	__Local__292.TextureLevelIndex = 135;
	__Local__292.TexelFactor = 628.452393f;
	auto& __Local__293 = bpv__StaticMeshComponent01__pf->StreamingTextureData[2];
	__Local__293.PackedRelativeBox = 4294901760;
	__Local__293.TextureLevelIndex = 40;
	__Local__293.TexelFactor = 628.452393f;
	auto& __Local__294 = bpv__StaticMeshComponent01__pf->StreamingTextureData[3];
	__Local__294.PackedRelativeBox = 4294901760;
	__Local__294.TextureLevelIndex = 49;
	__Local__294.TexelFactor = 628.452393f;
	auto& __Local__295 = bpv__StaticMeshComponent01__pf->StreamingTextureData[4];
	__Local__295.PackedRelativeBox = 4294901760;
	__Local__295.TextureLevelIndex = 136;
	__Local__295.TexelFactor = 628.452393f;
	auto& __Local__296 = bpv__StaticMeshComponent01__pf->StreamingTextureData[5];
	__Local__296.PackedRelativeBox = 4294901760;
	__Local__296.TextureLevelIndex = 43;
	__Local__296.TexelFactor = 628.452393f;
	auto& __Local__297 = bpv__StaticMeshComponent01__pf->StreamingTextureData[6];
	__Local__297.PackedRelativeBox = 4294901760;
	__Local__297.TextureLevelIndex = 44;
	__Local__297.TexelFactor = 628.452393f;
	auto& __Local__298 = bpv__StaticMeshComponent01__pf->StreamingTextureData[7];
	__Local__298.PackedRelativeBox = 4294901760;
	__Local__298.TextureLevelIndex = 45;
	__Local__298.TexelFactor = 628.452393f;
	auto& __Local__299 = bpv__StaticMeshComponent01__pf->StreamingTextureData[8];
	__Local__299.PackedRelativeBox = 4294901760;
	__Local__299.TextureLevelIndex = 46;
	__Local__299.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), false, 0));
	bpv__StaticMeshComponent01__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent01__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__300 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__300 = FVector(295.467529, -484.211182, -2.643433);
	auto& __Local__301 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__301 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent01__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), true, 0));
	bpv__StaticMeshComponent0__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__302 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__302 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__303 = bpv__StaticMeshComponent0__pf->StreamingTextureData[0];
	__Local__303.PackedRelativeBox = 4294901760;
	__Local__303.TextureLevelIndex = 131;
	__Local__303.TexelFactor = 574.107788f;
	auto& __Local__304 = bpv__StaticMeshComponent0__pf->StreamingTextureData[1];
	__Local__304.PackedRelativeBox = 4294901760;
	__Local__304.TextureLevelIndex = 132;
	__Local__304.TexelFactor = 574.107788f;
	auto& __Local__305 = bpv__StaticMeshComponent0__pf->StreamingTextureData[2];
	__Local__305.PackedRelativeBox = 4294901760;
	__Local__305.TextureLevelIndex = 40;
	__Local__305.TexelFactor = 574.107788f;
	auto& __Local__306 = bpv__StaticMeshComponent0__pf->StreamingTextureData[3];
	__Local__306.PackedRelativeBox = 4294901760;
	__Local__306.TextureLevelIndex = 49;
	__Local__306.TexelFactor = 574.107788f;
	auto& __Local__307 = bpv__StaticMeshComponent0__pf->StreamingTextureData[4];
	__Local__307.PackedRelativeBox = 4294901760;
	__Local__307.TextureLevelIndex = 133;
	__Local__307.TexelFactor = 574.107788f;
	auto& __Local__308 = bpv__StaticMeshComponent0__pf->StreamingTextureData[5];
	__Local__308.PackedRelativeBox = 4294901760;
	__Local__308.TextureLevelIndex = 43;
	__Local__308.TexelFactor = 574.107788f;
	auto& __Local__309 = bpv__StaticMeshComponent0__pf->StreamingTextureData[6];
	__Local__309.PackedRelativeBox = 4294901760;
	__Local__309.TextureLevelIndex = 44;
	__Local__309.TexelFactor = 574.107788f;
	auto& __Local__310 = bpv__StaticMeshComponent0__pf->StreamingTextureData[7];
	__Local__310.PackedRelativeBox = 4294901760;
	__Local__310.TextureLevelIndex = 45;
	__Local__310.TexelFactor = 574.107788f;
	auto& __Local__311 = bpv__StaticMeshComponent0__pf->StreamingTextureData[8];
	__Local__311.PackedRelativeBox = 4294901760;
	__Local__311.TextureLevelIndex = 46;
	__Local__311.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), false, 0));
	bpv__StaticMeshComponent0__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__312 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__312 = FVector(576.253174, 427.742920, -12.643311);
	bpv__StaticMeshComponent0__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), true, 0));
	bpv__StaticMeshComponent028__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent028__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__313 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent028__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__313 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), false, 0));
	bpv__StaticMeshComponent028__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__314 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent028__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__314 = FVector(323.254883, 466.674561, 461.172241);
	auto& __Local__315 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent028__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__315 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent028__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), true, 0));
	bpv__StaticMeshComponent029__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent029__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__316 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent029__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__316 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), false, 0));
	bpv__StaticMeshComponent029__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__317 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent029__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__317 = FVector(322.732910, 247.289551, 440.883545);
	auto& __Local__318 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent029__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__318 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent029__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), true, 0));
	bpv__StaticMeshComponent030__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent030__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__319 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent030__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__319 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), false, 0));
	bpv__StaticMeshComponent030__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__320 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent030__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__320 = FVector(322.732910, -352.710449, 440.883545);
	auto& __Local__321 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent030__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__321 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent030__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), true, 0));
	bpv__StaticMeshComponent031__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent031__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__322 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent031__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__322 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), false, 0));
	bpv__StaticMeshComponent031__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__323 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__323 = FVector(323.254883, 466.674561, 161.172241);
	auto& __Local__324 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__324 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent031__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), true, 0));
	bpv__StaticMeshComponent032__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent032__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__325 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent032__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__325 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), false, 0));
	bpv__StaticMeshComponent032__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__326 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__326 = FVector(322.732910, 247.289551, 140.883545);
	auto& __Local__327 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__327 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent032__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), true, 0));
	bpv__StaticMeshComponent033__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent033__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__328 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent033__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__328 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent033__pf), false, 0));
	bpv__StaticMeshComponent033__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__329 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__329 = FVector(322.732910, -352.710449, 140.883545);
	auto& __Local__330 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__330 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent033__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent033__pf), true, 0));
	bpv__StaticMeshComponent034__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent034__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__331 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent034__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__331 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent034__pf), false, 0));
	bpv__StaticMeshComponent034__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__332 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__332 = FVector(323.254883, 466.674561, -138.827759);
	auto& __Local__333 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__333 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent034__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent034__pf), true, 0));
	bpv__StaticMeshComponent035__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent035__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__334 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent035__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__334 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent035__pf), false, 0));
	bpv__StaticMeshComponent035__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__335 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent035__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__335 = FVector(322.732910, 247.289551, -169.116455);
	auto& __Local__336 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent035__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__336 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent035__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent035__pf), true, 0));
	bpv__StaticMeshComponent036__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent036__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__337 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent036__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__337 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent036__pf), false, 0));
	bpv__StaticMeshComponent036__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__338 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent036__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__338 = FVector(322.732910, -352.710449, -169.116455);
	auto& __Local__339 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent036__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__339 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent036__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent036__pf), true, 0));
	bpv__StaticMeshComponent037__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent037__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__340 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent037__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__340 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent037__pf), false, 0));
	bpv__StaticMeshComponent037__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__341 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent037__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__341 = FVector(323.254883, 466.674561, -438.827759);
	auto& __Local__342 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent037__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__342 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent037__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent037__pf), true, 0));
	bpv__StaticMeshComponent038__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent038__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__343 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent038__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__343 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent038__pf), false, 0));
	bpv__StaticMeshComponent038__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__344 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent038__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__344 = FVector(322.732910, -352.710449, -479.116455);
	auto& __Local__345 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent038__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__345 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent038__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent038__pf), true, 0));
	bpv__StaticMeshComponent039__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent039__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__346 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent039__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__346 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent039__pf), false, 0));
	bpv__StaticMeshComponent039__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__347 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent039__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__347 = FVector(322.732910, 247.289551, -479.116455);
	auto& __Local__348 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent039__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__348 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent039__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent039__pf), true, 0));
	bpv__StaticMeshComponent040__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent040__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__349 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent040__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__349 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent040__pf), false, 0));
	bpv__StaticMeshComponent040__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__350 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent040__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__350 = FVector(323.254883, 466.674561, -738.827759);
	auto& __Local__351 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent040__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__351 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent040__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent040__pf), true, 0));
	bpv__StaticMeshComponent041__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent041__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__352 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent041__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__352 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent041__pf), false, 0));
	bpv__StaticMeshComponent041__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__353 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent041__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__353 = FVector(-577.267090, -2.710449, 450.883545);
	auto& __Local__354 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent041__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__354 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent041__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent041__pf), true, 0));
	bpv__StaticMeshComponent042__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent042__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__355 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent042__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__355 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent042__pf), false, 0));
	bpv__StaticMeshComponent042__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__356 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent042__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__356 = FVector(-577.267090, -592.710449, 450.883545);
	auto& __Local__357 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent042__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__357 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent042__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent042__pf), true, 0));
	bpv__StaticMeshComponent043__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent043__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__358 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent043__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__358 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent043__pf), false, 0));
	bpv__StaticMeshComponent043__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__359 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent043__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__359 = FVector(-577.267090, -592.710449, 150.883545);
	auto& __Local__360 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent043__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__360 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent043__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent043__pf), true, 0));
	bpv__StaticMeshComponent044__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent044__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__361 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent044__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__361 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent044__pf), false, 0));
	bpv__StaticMeshComponent044__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__362 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent044__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__362 = FVector(-577.267090, -2.710449, 150.883545);
	auto& __Local__363 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent044__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__363 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent044__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent044__pf), true, 0));
	bpv__StaticMeshComponent045__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent045__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__364 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent045__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__364 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent045__pf), false, 0));
	bpv__StaticMeshComponent045__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__365 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent045__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__365 = FVector(-577.267090, -2.710449, -169.116455);
	auto& __Local__366 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent045__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__366 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent045__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent045__pf), true, 0));
	bpv__StaticMeshComponent046__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent046__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__367 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent046__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__367 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent046__pf), false, 0));
	bpv__StaticMeshComponent046__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__368 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent046__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__368 = FVector(-577.267090, -2.710449, -459.116455);
	auto& __Local__369 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent046__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__369 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent046__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent046__pf), true, 0));
	bpv__StaticMeshComponent047__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent047__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__370 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent047__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__370 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_3_C__pf147218599::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent047__pf), false, 0));
	bpv__StaticMeshComponent047__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__371 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent047__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__371 = FVector(-577.267090, -592.710449, -509.116455);
	auto& __Local__372 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent047__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__372 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent047__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent047__pf), true, 0));
	auto& __Local__373 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__373 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Building_3_C__pf147218599::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SharedRoot__pf)
	{
		bpv__SharedRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SharedRoot1__pf)
	{
		bpv__SharedRoot1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent026__pf)
	{
		bpv__StaticMeshComponent026__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent025__pf)
	{
		bpv__StaticMeshComponent025__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent024__pf)
	{
		bpv__StaticMeshComponent024__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent023__pf)
	{
		bpv__StaticMeshComponent023__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent022__pf)
	{
		bpv__StaticMeshComponent022__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent021__pf)
	{
		bpv__StaticMeshComponent021__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent020__pf)
	{
		bpv__StaticMeshComponent020__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent019__pf)
	{
		bpv__StaticMeshComponent019__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent018__pf)
	{
		bpv__StaticMeshComponent018__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent017__pf)
	{
		bpv__StaticMeshComponent017__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent016__pf)
	{
		bpv__StaticMeshComponent016__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent015__pf)
	{
		bpv__StaticMeshComponent015__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent014__pf)
	{
		bpv__StaticMeshComponent014__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent027__pf)
	{
		bpv__StaticMeshComponent027__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent012__pf)
	{
		bpv__StaticMeshComponent012__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent011__pf)
	{
		bpv__StaticMeshComponent011__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent010__pf)
	{
		bpv__StaticMeshComponent010__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent09__pf)
	{
		bpv__StaticMeshComponent09__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent08__pf)
	{
		bpv__StaticMeshComponent08__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent07__pf)
	{
		bpv__StaticMeshComponent07__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent013__pf)
	{
		bpv__StaticMeshComponent013__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent06__pf)
	{
		bpv__StaticMeshComponent06__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent05__pf)
	{
		bpv__StaticMeshComponent05__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent04__pf)
	{
		bpv__StaticMeshComponent04__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent03__pf)
	{
		bpv__StaticMeshComponent03__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent02__pf)
	{
		bpv__StaticMeshComponent02__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent01__pf)
	{
		bpv__StaticMeshComponent01__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0__pf)
	{
		bpv__StaticMeshComponent0__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent028__pf)
	{
		bpv__StaticMeshComponent028__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent029__pf)
	{
		bpv__StaticMeshComponent029__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent030__pf)
	{
		bpv__StaticMeshComponent030__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent031__pf)
	{
		bpv__StaticMeshComponent031__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent032__pf)
	{
		bpv__StaticMeshComponent032__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent033__pf)
	{
		bpv__StaticMeshComponent033__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent034__pf)
	{
		bpv__StaticMeshComponent034__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent035__pf)
	{
		bpv__StaticMeshComponent035__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent036__pf)
	{
		bpv__StaticMeshComponent036__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent037__pf)
	{
		bpv__StaticMeshComponent037__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent038__pf)
	{
		bpv__StaticMeshComponent038__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent039__pf)
	{
		bpv__StaticMeshComponent039__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent040__pf)
	{
		bpv__StaticMeshComponent040__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent041__pf)
	{
		bpv__StaticMeshComponent041__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent042__pf)
	{
		bpv__StaticMeshComponent042__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent043__pf)
	{
		bpv__StaticMeshComponent043__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent044__pf)
	{
		bpv__StaticMeshComponent044__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent045__pf)
	{
		bpv__StaticMeshComponent045__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent046__pf)
	{
		bpv__StaticMeshComponent046__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent047__pf)
	{
		bpv__StaticMeshComponent047__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_3_C__pf147218599::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__374 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__374);
	static TWeakFieldPtr<FProperty> __Local__376{};
	const FProperty* __Local__375 = __Local__376.Get();
	if (nullptr == __Local__375)
	{
		__Local__375 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__375);
		__Local__376 = __Local__375;
	}
	(((FBoolProperty*)__Local__375)->SetPropertyValue_InContainer((__Local__374), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_3_C__pf147218599::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1045, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Chimney_6.SM_Chimney_6 
		{1049, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Chimney_5.SM_Chimney_5 
		{1047, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Chimney_Host.SM_Chimney_Host 
		{1050, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Slab_1_Slab_1.SM_Slab_1_Slab_1 
		{1051, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Ladder.SM_Ladder 
		{1052, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Base_Station_1.SM_Base_Station_1 
		{1053, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Antenna_Group.SM_Antenna_Group 
		{1043, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Parapet_1_1.SM_Parapet_1_1 
		{1054, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Parapet_Corner_1_Parapet_Corner_1.SM_Parapet_Corner_1_Parapet_Corner_1 
		{1055, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/FlatModules_V_1_1/SM_FlatModule_4.SM_FlatModule_4 
		{1039, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Covered_Balcony_Small.SM_Covered_Balcony_Small 
		{1056, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/FlatModules_V_1_1/SM_FlatModule_1.SM_FlatModule_1 
		{1040, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Covered_Balcony_3.SM_Covered_Balcony_3 
		{1042, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Balcony_1.SM_Balcony_1 
		{1057, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Balcony_2_1.SM_Balcony_2_1 
		{1058, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Covered_Balcony_5.SM_Covered_Balcony_5 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_3_C__pf147218599::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Building_3_C__pf147218599
{
	FRegisterHelper__ABP_Building_3_C__pf147218599()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Abandoned_City/Blueprints/BP_FlatModules_v_1_1/BP_Building_3"), &ABP_Building_3_C__pf147218599::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Building_3_C__pf147218599 Instance;
};
FRegisterHelper__ABP_Building_3_C__pf147218599 FRegisterHelper__ABP_Building_3_C__pf147218599::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
