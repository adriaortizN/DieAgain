#include "NativizedAssets.h"
#include "BP_Building_4__pf147218599.h"
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
ABP_Building_4_C__pf147218599::ABP_Building_4_C__pf147218599(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__SharedRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SharedRoot"));
	bpv__Base__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Base"));
	bpv__StaticMeshComponent0__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
	bpv__StaticMeshComponent01__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent01"));
	bpv__StaticMeshComponent02__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent02"));
	bpv__StaticMeshComponent03__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent03"));
	bpv__StaticMeshComponent04__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent04"));
	bpv__StaticMeshComponent05__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent05"));
	bpv__StaticMeshComponent06__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent06"));
	bpv__StaticMeshComponent07__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent07"));
	bpv__StaticMeshComponent08__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent08"));
	bpv__StaticMeshComponent09__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent09"));
	bpv__StaticMeshComponent010__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent010"));
	bpv__StaticMeshComponent011__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent011"));
	bpv__StaticMeshComponent012__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent012"));
	bpv__StaticMeshComponent013__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent013"));
	bpv__StaticMeshComponent014__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent014"));
	bpv__StaticMeshComponent015__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent015"));
	bpv__StaticMeshComponent016__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent016"));
	bpv__StaticMeshComponent017__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent017"));
	bpv__StaticMeshComponent018__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent018"));
	bpv__StaticMeshComponent019__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent019"));
	bpv__StaticMeshComponent020__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent020"));
	bpv__StaticMeshComponent021__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent021"));
	bpv__StaticMeshComponent022__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent022"));
	bpv__StaticMeshComponent023__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent023"));
	bpv__StaticMeshComponent024__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent024"));
	bpv__StaticMeshComponent025__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent025"));
	bpv__StaticMeshComponent026__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent026"));
	bpv__StaticMeshComponent027__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent027"));
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
	bpv__StaticMeshComponent048__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent048"));
	bpv__StaticMeshComponent049__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent049"));
	bpv__StaticMeshComponent050__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent050"));
	bpv__StaticMeshComponent051__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent051"));
	bpv__StaticMeshComponent052__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent052"));
	bpv__StaticMeshComponent053__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent053"));
	bpv__StaticMeshComponent054__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent054"));
	bpv__StaticMeshComponent055__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent055"));
	bpv__StaticMeshComponent056__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent056"));
	bpv__SharedRoot1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SharedRoot1"));
	bpv__StaticMeshComponent0141__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0141"));
	bpv__StaticMeshComponent0131__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0131"));
	bpv__StaticMeshComponent0121__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0121"));
	bpv__StaticMeshComponent0111__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0111"));
	bpv__StaticMeshComponent0101__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0101"));
	bpv__StaticMeshComponent091__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent091"));
	bpv__StaticMeshComponent081__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent081"));
	bpv__StaticMeshComponent0151__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0151"));
	bpv__StaticMeshComponent061__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent061"));
	bpv__StaticMeshComponent057__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent057"));
	bpv__StaticMeshComponent0410__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0410"));
	bpv__StaticMeshComponent071__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent071"));
	bpv__StaticMeshComponent0310__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0310"));
	bpv__StaticMeshComponent0210__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0210"));
	bpv__StaticMeshComponent0110__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0110"));
	bpv__StaticMeshComponent058__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent058"));
	bpv__SharedRoot2__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SharedRoot2"));
	bpv__StaticMeshComponent0142__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0142"));
	bpv__StaticMeshComponent0132__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0132"));
	bpv__StaticMeshComponent0122__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0122"));
	bpv__StaticMeshComponent0112__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0112"));
	bpv__StaticMeshComponent0102__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0102"));
	bpv__StaticMeshComponent092__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent092"));
	bpv__StaticMeshComponent082__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent082"));
	bpv__StaticMeshComponent0152__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0152"));
	bpv__StaticMeshComponent062__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent062"));
	bpv__StaticMeshComponent059__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent059"));
	bpv__StaticMeshComponent0411__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0411"));
	bpv__StaticMeshComponent072__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent072"));
	bpv__StaticMeshComponent0311__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0311"));
	bpv__StaticMeshComponent0211__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0211"));
	bpv__StaticMeshComponent0113__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0113"));
	bpv__StaticMeshComponent060__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent060"));
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
	bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Base__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__Base__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__2 = FVector(6638.462402, 4903.578125, -605.045593);
	static TWeakFieldPtr<FProperty> __Local__4{};
	const FProperty* __Local__3 = __Local__4.Get();
	if (nullptr == __Local__3)
	{
		__Local__3 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bNetAddressable")));
		check(__Local__3);
		__Local__4 = __Local__3;
	}
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__Base__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Base__pf), false, 0));
	bpv__StaticMeshComponent0__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__5 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__7{};
	const FProperty* __Local__6 = __Local__7.Get();
	if (nullptr == __Local__6)
	{
		__Local__6 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__6);
		__Local__7 = __Local__6;
	}
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), false, 0));
	bpv__StaticMeshComponent0__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__8 = FVector(-758.993164, -323.904785, 1030.685303);
	auto& __Local__9 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__9 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent0__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), true, 0));
	bpv__StaticMeshComponent01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent01__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__10 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent01__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__10 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), false, 0));
	bpv__StaticMeshComponent01__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__11 = FVector(-758.993164, -323.904785, 730.685303);
	auto& __Local__12 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__12 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent01__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), true, 0));
	bpv__StaticMeshComponent02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent02__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__13 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent02__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__13 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), false, 0));
	bpv__StaticMeshComponent02__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent02__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(-248.993164, 276.095215, 700.685303);
	auto& __Local__15 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent02__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__15 = FRotator(0.000000, 179.999985, 0.000000);
	bpv__StaticMeshComponent02__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), true, 0));
	bpv__StaticMeshComponent03__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent03__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__16 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent03__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__16 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), false, 0));
	bpv__StaticMeshComponent03__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent03__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(481.006836, -623.904785, 1030.685303);
	bpv__StaticMeshComponent03__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), true, 0));
	bpv__StaticMeshComponent04__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent04__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent04__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__18 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), false, 0));
	bpv__StaticMeshComponent04__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent04__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__19 = FVector(331.006836, 16.095215, 1030.685303);
	auto& __Local__20 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent04__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__20 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent04__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), true, 0));
	bpv__StaticMeshComponent05__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent05__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__21 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent05__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__21 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), false, 0));
	bpv__StaticMeshComponent05__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent05__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__22 = FVector(331.006836, 16.095215, 730.685303);
	auto& __Local__23 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent05__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__23 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent05__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), true, 0));
	bpv__StaticMeshComponent06__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent06__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__24 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent06__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__24 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), false, 0));
	bpv__StaticMeshComponent06__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent06__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(481.006836, -623.904785, 730.685303);
	bpv__StaticMeshComponent06__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), true, 0));
	bpv__StaticMeshComponent07__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent07__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__26 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent07__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__26 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), false, 0));
	bpv__StaticMeshComponent07__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__27 = FVector(201.006836, 116.095215, 850.685303);
	auto& __Local__28 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__28 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__29 = FVector(0.423238, 0.423238, 0.423238);
	bpv__StaticMeshComponent07__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), true, 0));
	bpv__StaticMeshComponent08__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent08__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__30 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent08__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__30 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), false, 0));
	bpv__StaticMeshComponent08__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__31 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__31 = FVector(-179.642334, 405.870850, 693.872803);
	auto& __Local__32 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__32 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__33 = FVector(0.302546, 0.302546, 0.302546);
	bpv__StaticMeshComponent08__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), true, 0));
	bpv__StaticMeshComponent09__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent09__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__34 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent09__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__34 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), false, 0));
	bpv__StaticMeshComponent09__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__35 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent09__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__35 = FVector(-248.993164, 276.095215, 400.685303);
	auto& __Local__36 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent09__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__36 = FRotator(0.000000, 179.999985, 0.000000);
	bpv__StaticMeshComponent09__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), true, 0));
	bpv__StaticMeshComponent010__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent010__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__37 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent010__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__37 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), false, 0));
	bpv__StaticMeshComponent010__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__38 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__38 = FVector(-758.993164, -323.904785, 430.685303);
	auto& __Local__39 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__39 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent010__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), true, 0));
	bpv__StaticMeshComponent011__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent011__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__40 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent011__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__40 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), false, 0));
	bpv__StaticMeshComponent011__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__41 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent011__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__41 = FVector(331.006836, 16.095215, 430.685303);
	auto& __Local__42 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent011__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__42 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent011__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), true, 0));
	bpv__StaticMeshComponent012__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent012__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__43 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent012__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__43 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), false, 0));
	bpv__StaticMeshComponent012__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__44 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent012__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__44 = FVector(481.006836, -623.904785, 430.685303);
	bpv__StaticMeshComponent012__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), true, 0));
	bpv__StaticMeshComponent013__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent013__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__45 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent013__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__45 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), false, 0));
	bpv__StaticMeshComponent013__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__46 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent013__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__46 = FVector(201.006836, 116.095215, 550.685303);
	auto& __Local__47 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent013__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__47 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__48 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent013__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__48 = FVector(0.423238, 0.423238, 0.423238);
	bpv__StaticMeshComponent013__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), true, 0));
	bpv__StaticMeshComponent014__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent014__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__49 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent014__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__49 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), false, 0));
	bpv__StaticMeshComponent014__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__50 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent014__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__50 = FVector(-179.642334, 405.870850, 393.872925);
	auto& __Local__51 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent014__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__51 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__52 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent014__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__52 = FVector(0.302546, 0.302546, 0.302546);
	bpv__StaticMeshComponent014__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), true, 0));
	bpv__StaticMeshComponent015__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent015__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__53 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent015__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__53 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), false, 0));
	bpv__StaticMeshComponent015__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__54 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent015__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__54 = FVector(-248.993164, 276.095215, 100.685303);
	auto& __Local__55 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent015__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__55 = FRotator(0.000000, 179.999985, 0.000000);
	bpv__StaticMeshComponent015__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), true, 0));
	bpv__StaticMeshComponent016__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent016__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__56 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent016__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__56 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), false, 0));
	bpv__StaticMeshComponent016__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__57 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent016__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__57 = FVector(-758.993164, -323.904785, 130.685303);
	auto& __Local__58 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent016__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__58 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent016__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), true, 0));
	bpv__StaticMeshComponent017__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent017__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__59 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent017__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__59 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), false, 0));
	bpv__StaticMeshComponent017__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__60 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent017__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__60 = FVector(331.006836, 16.095215, 130.685303);
	auto& __Local__61 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent017__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__61 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent017__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), true, 0));
	bpv__StaticMeshComponent018__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent018__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__62 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent018__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__62 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), false, 0));
	bpv__StaticMeshComponent018__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__63 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent018__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__63 = FVector(481.006836, -623.904785, 130.685303);
	bpv__StaticMeshComponent018__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), true, 0));
	bpv__StaticMeshComponent019__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent019__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__64 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent019__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__64 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), false, 0));
	bpv__StaticMeshComponent019__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__65 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent019__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__65 = FVector(201.006836, 116.095215, 250.685303);
	auto& __Local__66 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent019__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__66 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__67 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent019__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__67 = FVector(0.423238, 0.423238, 0.423238);
	bpv__StaticMeshComponent019__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), true, 0));
	bpv__StaticMeshComponent020__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent020__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__68 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent020__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__68 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), false, 0));
	bpv__StaticMeshComponent020__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__69 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent020__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__69 = FVector(-179.642334, 405.870850, 93.872925);
	auto& __Local__70 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent020__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__70 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__71 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent020__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__71 = FVector(0.302546, 0.302546, 0.302546);
	bpv__StaticMeshComponent020__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), true, 0));
	bpv__StaticMeshComponent021__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent021__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__72 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent021__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__72 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), false, 0));
	bpv__StaticMeshComponent021__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__73 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent021__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__73 = FVector(-248.993164, 276.095215, -199.314697);
	auto& __Local__74 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent021__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__74 = FRotator(0.000000, 179.999985, 0.000000);
	bpv__StaticMeshComponent021__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), true, 0));
	bpv__StaticMeshComponent022__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent022__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__75 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent022__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__75 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), false, 0));
	bpv__StaticMeshComponent022__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__76 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent022__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__76 = FVector(-758.993164, -323.904785, -169.314697);
	auto& __Local__77 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent022__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__77 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent022__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), true, 0));
	bpv__StaticMeshComponent023__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent023__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__78 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent023__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__78 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), false, 0));
	bpv__StaticMeshComponent023__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__79 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__79 = FVector(331.006836, 16.095215, -169.314697);
	auto& __Local__80 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__80 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent023__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), true, 0));
	bpv__StaticMeshComponent024__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent024__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__81 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent024__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__81 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), false, 0));
	bpv__StaticMeshComponent024__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__82 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent024__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__82 = FVector(481.006836, -623.904785, -169.314697);
	bpv__StaticMeshComponent024__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), true, 0));
	bpv__StaticMeshComponent025__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent025__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__83 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent025__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__83 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), false, 0));
	bpv__StaticMeshComponent025__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__84 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__84 = FVector(201.006836, 116.095215, -49.314697);
	auto& __Local__85 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__85 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__86 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__86 = FVector(0.423238, 0.423238, 0.423238);
	bpv__StaticMeshComponent025__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), true, 0));
	bpv__StaticMeshComponent026__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent026__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__87 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent026__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__87 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), false, 0));
	bpv__StaticMeshComponent026__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__88 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__88 = FVector(-179.642334, 405.870850, -206.127075);
	auto& __Local__89 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__89 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__90 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__90 = FVector(0.302546, 0.302546, 0.302546);
	bpv__StaticMeshComponent026__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), true, 0));
	bpv__StaticMeshComponent027__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent027__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__91 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent027__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__91 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), false, 0));
	bpv__StaticMeshComponent027__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__92 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__92 = FVector(-248.993164, 276.095215, -499.314697);
	auto& __Local__93 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__93 = FRotator(0.000000, 179.999985, 0.000000);
	bpv__StaticMeshComponent027__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), true, 0));
	bpv__StaticMeshComponent028__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent028__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__94 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent028__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__94 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), false, 0));
	bpv__StaticMeshComponent028__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__95 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent028__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__95 = FVector(-758.993164, -323.904785, -469.314697);
	auto& __Local__96 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent028__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__96 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent028__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), true, 0));
	bpv__StaticMeshComponent029__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent029__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__97 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent029__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__97 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), false, 0));
	bpv__StaticMeshComponent029__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__98 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent029__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__98 = FVector(331.006836, 16.095215, -469.314697);
	auto& __Local__99 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent029__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__99 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent029__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), true, 0));
	bpv__StaticMeshComponent030__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent030__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__100 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent030__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__100 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), false, 0));
	bpv__StaticMeshComponent030__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__101 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent030__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__101 = FVector(481.006836, -623.904785, -469.314697);
	bpv__StaticMeshComponent030__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), true, 0));
	bpv__StaticMeshComponent031__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent031__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__102 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent031__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__102 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), false, 0));
	bpv__StaticMeshComponent031__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__103 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__103 = FVector(201.006836, 116.095215, -349.314697);
	auto& __Local__104 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__104 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__105 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__105 = FVector(0.423238, 0.423238, 0.423238);
	bpv__StaticMeshComponent031__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), true, 0));
	bpv__StaticMeshComponent032__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent032__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__106 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent032__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__106 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), false, 0));
	bpv__StaticMeshComponent032__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__107 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__107 = FVector(-179.642334, 405.870850, -506.127075);
	auto& __Local__108 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__108 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__109 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__109 = FVector(0.302546, 0.302546, 0.302546);
	bpv__StaticMeshComponent032__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), true, 0));
	bpv__StaticMeshComponent033__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent033__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__110 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent033__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__110 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent033__pf), false, 0));
	bpv__StaticMeshComponent033__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__111 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__111 = FVector(-758.993164, -323.904785, -769.314697);
	auto& __Local__112 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__112 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent033__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent033__pf), true, 0));
	bpv__StaticMeshComponent034__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent034__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__113 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent034__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__113 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent034__pf), false, 0));
	bpv__StaticMeshComponent034__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__114 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__114 = FVector(-248.993164, 276.095215, -799.314697);
	auto& __Local__115 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__115 = FRotator(0.000000, 179.999985, 0.000000);
	bpv__StaticMeshComponent034__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent034__pf), true, 0));
	bpv__StaticMeshComponent035__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent035__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__116 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent035__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__116 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent035__pf), false, 0));
	bpv__StaticMeshComponent035__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__117 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent035__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__117 = FVector(331.006836, 16.095215, -769.314697);
	auto& __Local__118 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent035__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__118 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent035__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent035__pf), true, 0));
	bpv__StaticMeshComponent036__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent036__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__119 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent036__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__119 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent036__pf), false, 0));
	bpv__StaticMeshComponent036__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__120 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent036__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__120 = FVector(481.006836, -623.904785, -769.314697);
	bpv__StaticMeshComponent036__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent036__pf), true, 0));
	bpv__StaticMeshComponent037__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent037__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__121 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent037__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__121 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent037__pf), false, 0));
	bpv__StaticMeshComponent037__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__122 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent037__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__122 = FVector(201.006836, 116.095215, -649.314697);
	auto& __Local__123 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent037__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__123 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__124 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent037__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__124 = FVector(0.423238, 0.423238, 0.423238);
	bpv__StaticMeshComponent037__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent037__pf), true, 0));
	bpv__StaticMeshComponent038__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent038__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__125 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent038__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__125 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent038__pf), false, 0));
	bpv__StaticMeshComponent038__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__126 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent038__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__126 = FVector(-179.642334, 405.870850, -806.127075);
	auto& __Local__127 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent038__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__127 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__128 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent038__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__128 = FVector(0.302546, 0.302546, 0.302546);
	bpv__StaticMeshComponent038__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent038__pf), true, 0));
	bpv__StaticMeshComponent039__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent039__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__129 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent039__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__129 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent039__pf), false, 0));
	bpv__StaticMeshComponent039__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__130 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent039__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__130 = FVector(-758.993164, -323.904785, -1069.314697);
	auto& __Local__131 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent039__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__131 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent039__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent039__pf), true, 0));
	bpv__StaticMeshComponent040__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent040__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__132 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent040__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__132 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent040__pf), false, 0));
	bpv__StaticMeshComponent040__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__133 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent040__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__133 = FVector(331.006836, 16.095215, -1069.314697);
	auto& __Local__134 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent040__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__134 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent040__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent040__pf), true, 0));
	bpv__StaticMeshComponent041__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent041__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__135 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent041__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__135 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent041__pf), false, 0));
	bpv__StaticMeshComponent041__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__136 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent041__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__136 = FVector(-248.993164, 276.095215, -1099.314697);
	auto& __Local__137 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent041__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__137 = FRotator(0.000000, 179.999985, 0.000000);
	bpv__StaticMeshComponent041__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent041__pf), true, 0));
	bpv__StaticMeshComponent042__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent042__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__138 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent042__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__138 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent042__pf), false, 0));
	bpv__StaticMeshComponent042__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__139 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent042__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__139 = FVector(481.006836, -623.904785, -1069.314697);
	bpv__StaticMeshComponent042__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent042__pf), true, 0));
	bpv__StaticMeshComponent043__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent043__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__140 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent043__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__140 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent043__pf), false, 0));
	bpv__StaticMeshComponent043__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__141 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent043__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__141 = FVector(201.006836, 116.095215, -949.314697);
	auto& __Local__142 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent043__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__142 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__143 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent043__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__143 = FVector(0.423238, 0.423238, 0.423238);
	bpv__StaticMeshComponent043__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent043__pf), true, 0));
	bpv__StaticMeshComponent044__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent044__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__144 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent044__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__144 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent044__pf), false, 0));
	bpv__StaticMeshComponent044__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__145 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent044__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__145 = FVector(-758.993164, -323.904785, -1369.314697);
	auto& __Local__146 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent044__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__146 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent044__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent044__pf), true, 0));
	bpv__StaticMeshComponent045__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent045__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__147 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent045__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__147 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent045__pf), false, 0));
	bpv__StaticMeshComponent045__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__148 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent045__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__148 = FVector(481.006836, -623.904785, -1369.314697);
	bpv__StaticMeshComponent045__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent045__pf), true, 0));
	bpv__StaticMeshComponent046__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent046__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__149 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent046__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__149 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent046__pf), false, 0));
	bpv__StaticMeshComponent046__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__150 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent046__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__150 = FVector(-578.993164, -323.904785, 1040.685303);
	bpv__StaticMeshComponent046__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent046__pf), true, 0));
	bpv__StaticMeshComponent047__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent047__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__151 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent047__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__151 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent047__pf), false, 0));
	bpv__StaticMeshComponent047__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__152 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent047__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__152 = FVector(-578.993164, -323.904785, 740.685303);
	bpv__StaticMeshComponent047__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent047__pf), true, 0));
	bpv__StaticMeshComponent048__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent048__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__153 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent048__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__153 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent048__pf), false, 0));
	bpv__StaticMeshComponent048__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__154 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent048__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__154 = FVector(-578.993164, -323.904785, 440.685303);
	bpv__StaticMeshComponent048__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent048__pf), true, 0));
	bpv__StaticMeshComponent049__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent049__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__155 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent049__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__155 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent049__pf), false, 0));
	bpv__StaticMeshComponent049__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__156 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent049__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__156 = FVector(-578.993164, -323.904785, 140.685303);
	bpv__StaticMeshComponent049__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent049__pf), true, 0));
	bpv__StaticMeshComponent050__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent050__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__157 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent050__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__157 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent050__pf), false, 0));
	bpv__StaticMeshComponent050__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__158 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent050__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__158 = FVector(-578.993164, -323.904785, -159.314697);
	bpv__StaticMeshComponent050__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent050__pf), true, 0));
	bpv__StaticMeshComponent051__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent051__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__159 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent051__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__159 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent051__pf), false, 0));
	bpv__StaticMeshComponent051__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__160 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent051__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__160 = FVector(-578.993164, -323.904785, -459.314697);
	bpv__StaticMeshComponent051__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent051__pf), true, 0));
	bpv__StaticMeshComponent052__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent052__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__161 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent052__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__161 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent052__pf), false, 0));
	bpv__StaticMeshComponent052__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__162 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent052__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__162 = FVector(-578.993164, -323.904785, -759.314697);
	bpv__StaticMeshComponent052__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent052__pf), true, 0));
	bpv__StaticMeshComponent053__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent053__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__163 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent053__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__163 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent053__pf), false, 0));
	bpv__StaticMeshComponent053__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__164 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent053__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__164 = FVector(-578.993164, -323.904785, -1059.314697);
	bpv__StaticMeshComponent053__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent053__pf), true, 0));
	bpv__StaticMeshComponent054__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent054__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__165 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent054__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__165 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent054__pf), false, 0));
	bpv__StaticMeshComponent054__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__166 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent054__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__166 = FVector(-248.993164, 276.095215, 1000.685303);
	auto& __Local__167 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent054__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__167 = FRotator(0.000000, 179.999985, 0.000000);
	bpv__StaticMeshComponent054__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent054__pf), true, 0));
	bpv__StaticMeshComponent055__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent055__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__168 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent055__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__168 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent055__pf), false, 0));
	bpv__StaticMeshComponent055__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__169 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent055__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__169 = FVector(-179.642334, 405.870850, 1293.872803);
	auto& __Local__170 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent055__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__170 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__171 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent055__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__171 = FVector(0.302546, 0.302546, 0.302546);
	bpv__StaticMeshComponent055__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent055__pf), true, 0));
	bpv__StaticMeshComponent056__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent056__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__172 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent056__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__172 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent056__pf), false, 0));
	bpv__StaticMeshComponent056__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__173 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent056__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__173 = FVector(-179.642334, 405.870850, 993.872803);
	auto& __Local__174 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent056__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__174 = FRotator(0.000000, 20.000038, 0.000000);
	auto& __Local__175 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent056__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__175 = FVector(0.302546, 0.302546, 0.302546);
	bpv__StaticMeshComponent056__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent056__pf), true, 0));
	bpv__SharedRoot1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SharedRoot1__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__176 = (*(AccessPrivateProperty<FVector >((bpv__SharedRoot1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__176 = FVector(-297.358643, -14.162598, 1338.912842);
	bpv__SharedRoot1__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__SharedRoot1__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SharedRoot1__pf), false, 0));
	bpv__StaticMeshComponent0141__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0141__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__177 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0141__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__177 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0141__pf), false, 0));
	bpv__StaticMeshComponent0141__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0141__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__178 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0141__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__178 = FVector(-164.397705, -289.742188, -8.227539);
	auto& __Local__179 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0141__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__179 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__180 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0141__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__180 = FVector(1.000000, 0.924672, 1.037507);
	bpv__StaticMeshComponent0141__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0141__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0141__pf), true, 0));
	bpv__StaticMeshComponent0131__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0131__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__181 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0131__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__181 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0131__pf), false, 0));
	bpv__StaticMeshComponent0131__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0131__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__182 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0131__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__182 = FVector(-461.634521, -9.742188, -8.227539);
	bpv__StaticMeshComponent0131__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0131__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0131__pf), true, 0));
	bpv__StaticMeshComponent0121__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0121__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__183 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0121__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__183 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0121__pf), false, 0));
	bpv__StaticMeshComponent0121__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0121__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__184 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0121__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__184 = FVector(-141.576904, -9.742188, -28.227539);
	auto& __Local__185 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0121__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__185 = FVector(1.077290, 1.000000, 1.000000);
	bpv__StaticMeshComponent0121__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0121__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0121__pf), true, 0));
	bpv__StaticMeshComponent0111__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0111__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__186 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0111__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__186 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0111__pf), false, 0));
	bpv__StaticMeshComponent0111__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0111__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__187 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0111__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__187 = FVector(-141.634521, 10.257813, -7.610840);
	auto& __Local__188 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0111__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__188 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__189 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0111__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__189 = FVector(1.000000, 1.080923, 1.037507);
	bpv__StaticMeshComponent0111__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0111__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0111__pf), true, 0));
	bpv__StaticMeshComponent0101__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0101__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__190 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0101__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__190 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0101__pf), false, 0));
	bpv__StaticMeshComponent0101__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0101__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__191 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0101__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__191 = FVector(93.838135, -171.814453, 56.883789);
	bpv__StaticMeshComponent0101__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0101__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0101__pf), true, 0));
	bpv__StaticMeshComponent091__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent091__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__192 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent091__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__192 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent091__pf), false, 0));
	bpv__StaticMeshComponent091__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent091__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__193 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent091__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__193 = FVector(-84.351563, -166.418457, 56.883545);
	bpv__StaticMeshComponent091__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent091__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent091__pf), true, 0));
	bpv__StaticMeshComponent081__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent081__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__194 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent081__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__194 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent081__pf), false, 0));
	bpv__StaticMeshComponent081__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent081__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__195 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent081__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__195 = FVector(-0.831299, -158.277344, 56.883789);
	bpv__StaticMeshComponent081__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent081__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent081__pf), true, 0));
	bpv__StaticMeshComponent0151__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0151__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__196 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0151__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__196 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0151__pf), false, 0));
	bpv__StaticMeshComponent0151__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0151__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__197 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0151__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__197 = FVector(168.365479, -289.742188, -8.227539);
	auto& __Local__198 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0151__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__198 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__199 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0151__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__199 = FVector(1.000000, 1.107681, 1.037507);
	bpv__StaticMeshComponent0151__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0151__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0151__pf), true, 0));
	bpv__StaticMeshComponent061__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent061__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__200 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent061__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__200 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent061__pf), false, 0));
	bpv__StaticMeshComponent061__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent061__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__201 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent061__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__201 = FVector(158.423096, -9.742188, -28.227539);
	auto& __Local__202 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent061__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__202 = FVector(1.077290, 1.000000, 1.000000);
	bpv__StaticMeshComponent061__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent061__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent061__pf), true, 0));
	bpv__StaticMeshComponent057__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent057__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__203 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent057__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__203 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent057__pf), false, 0));
	bpv__StaticMeshComponent057__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent057__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__204 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent057__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__204 = FVector(-0.974609, -160.331543, -7.610840);
	bpv__StaticMeshComponent057__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent057__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent057__pf), true, 0));
	bpv__StaticMeshComponent0410__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0410__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__205 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0410__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__205 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0410__pf), false, 0));
	bpv__StaticMeshComponent0410__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0410__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__206 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0410__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__206 = FVector(158.365479, 290.942383, -7.610840);
	bpv__StaticMeshComponent0410__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0410__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0410__pf), true, 0));
	bpv__StaticMeshComponent071__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent071__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__207 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent071__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__207 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent071__pf), false, 0));
	bpv__StaticMeshComponent071__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent071__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__208 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent071__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__208 = FVector(158.365479, -9.057617, -8.227539);
	bpv__StaticMeshComponent071__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent071__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent071__pf), true, 0));
	bpv__StaticMeshComponent0310__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0310__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__209 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0310__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__209 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0310__pf), false, 0));
	bpv__StaticMeshComponent0310__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0310__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__210 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0310__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__210 = FVector(92.886230, 142.640625, -14.388916);
	bpv__StaticMeshComponent0310__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0310__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0310__pf), true, 0));
	bpv__StaticMeshComponent0210__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0210__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__211 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0210__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__211 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0210__pf), false, 0));
	bpv__StaticMeshComponent0210__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0210__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__212 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0210__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__212 = FVector(158.423096, 270.257813, -27.610840);
	auto& __Local__213 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0210__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__213 = FVector(1.077290, 1.000000, 1.000000);
	bpv__StaticMeshComponent0210__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0210__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0210__pf), true, 0));
	bpv__StaticMeshComponent0110__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0110__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__214 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0110__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__214 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0110__pf), false, 0));
	bpv__StaticMeshComponent0110__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0110__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__215 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0110__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__215 = FVector(-161.634521, 270.257813, -8.227539);
	bpv__StaticMeshComponent0110__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0110__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0110__pf), true, 0));
	bpv__StaticMeshComponent058__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent058__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__216 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent058__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__216 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent058__pf), false, 0));
	bpv__StaticMeshComponent058__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent058__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__217 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent058__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__217 = FVector(168.365479, 290.257813, -8.227539);
	auto& __Local__218 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent058__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__218 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__219 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent058__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__219 = FVector(1.000000, 1.107681, 1.037507);
	bpv__StaticMeshComponent058__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent058__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent058__pf), true, 0));
	bpv__SharedRoot2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SharedRoot2__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__220 = (*(AccessPrivateProperty<FVector >((bpv__SharedRoot2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__220 = FVector(166.708496, -165.064453, 1331.570557);
	auto& __Local__221 = (*(AccessPrivateProperty<FRotator >((bpv__SharedRoot2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__221 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__SharedRoot2__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__SharedRoot2__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SharedRoot2__pf), false, 0));
	bpv__StaticMeshComponent0142__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0142__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__222 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0142__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__222 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0142__pf), false, 0));
	bpv__StaticMeshComponent0142__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0142__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__223 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0142__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__223 = FVector(-164.397705, -289.742188, -8.227539);
	auto& __Local__224 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0142__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__224 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__225 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0142__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__225 = FVector(1.000000, 0.924672, 1.037507);
	bpv__StaticMeshComponent0142__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0142__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0142__pf), true, 0));
	bpv__StaticMeshComponent0132__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0132__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__226 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0132__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__226 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0132__pf), false, 0));
	bpv__StaticMeshComponent0132__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0132__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__227 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0132__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__227 = FVector(-461.634521, -9.742188, -8.227539);
	bpv__StaticMeshComponent0132__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0132__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0132__pf), true, 0));
	bpv__StaticMeshComponent0122__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0122__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__228 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0122__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__228 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0122__pf), false, 0));
	bpv__StaticMeshComponent0122__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0122__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__229 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0122__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__229 = FVector(-141.576904, -9.742188, -28.227539);
	auto& __Local__230 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0122__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__230 = FVector(1.077290, 1.000000, 1.000000);
	bpv__StaticMeshComponent0122__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0122__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0122__pf), true, 0));
	bpv__StaticMeshComponent0112__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0112__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__231 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0112__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__231 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0112__pf), false, 0));
	bpv__StaticMeshComponent0112__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0112__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__232 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0112__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__232 = FVector(-141.634521, 10.257813, -7.610840);
	auto& __Local__233 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0112__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__233 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__234 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0112__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__234 = FVector(1.000000, 1.080923, 1.037507);
	bpv__StaticMeshComponent0112__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0112__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0112__pf), true, 0));
	bpv__StaticMeshComponent0102__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0102__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__235 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0102__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__235 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0102__pf), false, 0));
	bpv__StaticMeshComponent0102__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0102__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__236 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0102__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__236 = FVector(93.838135, -171.814453, 56.883789);
	bpv__StaticMeshComponent0102__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0102__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0102__pf), true, 0));
	bpv__StaticMeshComponent092__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent092__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__237 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent092__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__237 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent092__pf), false, 0));
	bpv__StaticMeshComponent092__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent092__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__238 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent092__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__238 = FVector(-84.351563, -166.418457, 56.883545);
	bpv__StaticMeshComponent092__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent092__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent092__pf), true, 0));
	bpv__StaticMeshComponent082__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent082__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__239 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent082__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__239 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent082__pf), false, 0));
	bpv__StaticMeshComponent082__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent082__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__240 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent082__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__240 = FVector(-0.831299, -158.277344, 56.883789);
	bpv__StaticMeshComponent082__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent082__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent082__pf), true, 0));
	bpv__StaticMeshComponent0152__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0152__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__241 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0152__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__241 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0152__pf), false, 0));
	bpv__StaticMeshComponent0152__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0152__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__242 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0152__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__242 = FVector(168.365479, -289.742188, -8.227539);
	auto& __Local__243 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0152__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__243 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__244 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0152__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__244 = FVector(1.000000, 1.107681, 1.037507);
	bpv__StaticMeshComponent0152__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0152__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0152__pf), true, 0));
	bpv__StaticMeshComponent062__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent062__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__245 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent062__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__245 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent062__pf), false, 0));
	bpv__StaticMeshComponent062__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent062__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__246 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent062__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__246 = FVector(158.423096, -9.742188, -28.227539);
	auto& __Local__247 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent062__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__247 = FVector(1.077290, 1.000000, 1.000000);
	bpv__StaticMeshComponent062__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent062__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent062__pf), true, 0));
	bpv__StaticMeshComponent059__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent059__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__248 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent059__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__248 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent059__pf), false, 0));
	bpv__StaticMeshComponent059__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent059__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__249 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent059__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__249 = FVector(-0.974609, -160.331543, -7.610840);
	bpv__StaticMeshComponent059__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent059__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent059__pf), true, 0));
	bpv__StaticMeshComponent0411__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0411__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__250 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0411__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__250 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0411__pf), false, 0));
	bpv__StaticMeshComponent0411__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0411__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__251 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0411__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__251 = FVector(158.365479, 290.942383, -7.610840);
	bpv__StaticMeshComponent0411__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0411__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0411__pf), true, 0));
	bpv__StaticMeshComponent072__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent072__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__252 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent072__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__252 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent072__pf), false, 0));
	bpv__StaticMeshComponent072__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent072__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__253 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent072__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__253 = FVector(158.365479, -9.057617, -8.227539);
	bpv__StaticMeshComponent072__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent072__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent072__pf), true, 0));
	bpv__StaticMeshComponent0311__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0311__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__254 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0311__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__254 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0311__pf), false, 0));
	bpv__StaticMeshComponent0311__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0311__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__255 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0311__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__255 = FVector(92.886230, 142.640625, -14.388916);
	bpv__StaticMeshComponent0311__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0311__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0311__pf), true, 0));
	bpv__StaticMeshComponent0211__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0211__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__256 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0211__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__256 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0211__pf), false, 0));
	bpv__StaticMeshComponent0211__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0211__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__257 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0211__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__257 = FVector(158.423096, 270.257813, -27.610840);
	auto& __Local__258 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0211__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__258 = FVector(1.077290, 1.000000, 1.000000);
	bpv__StaticMeshComponent0211__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0211__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0211__pf), true, 0));
	bpv__StaticMeshComponent0113__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0113__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__259 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0113__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__259 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0113__pf), false, 0));
	bpv__StaticMeshComponent0113__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0113__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__260 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0113__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__260 = FVector(-161.634521, 270.257813, -8.227539);
	bpv__StaticMeshComponent0113__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0113__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0113__pf), true, 0));
	bpv__StaticMeshComponent060__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent060__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__261 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent060__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__261 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_4_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__StaticMeshComponent060__pf), false, 0));
	bpv__StaticMeshComponent060__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent060__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__262 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent060__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__262 = FVector(168.365479, 290.257813, -8.227539);
	auto& __Local__263 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent060__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__263 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__264 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent060__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__264 = FVector(1.000000, 1.107681, 1.037507);
	bpv__StaticMeshComponent060__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent060__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent060__pf), true, 0));
	auto& __Local__265 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__265 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Building_4_C__pf147218599::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SharedRoot__pf)
	{
		bpv__SharedRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Base__pf)
	{
		bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0__pf)
	{
		bpv__StaticMeshComponent0__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent01__pf)
	{
		bpv__StaticMeshComponent01__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent02__pf)
	{
		bpv__StaticMeshComponent02__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent03__pf)
	{
		bpv__StaticMeshComponent03__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent04__pf)
	{
		bpv__StaticMeshComponent04__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent05__pf)
	{
		bpv__StaticMeshComponent05__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent06__pf)
	{
		bpv__StaticMeshComponent06__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent07__pf)
	{
		bpv__StaticMeshComponent07__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent08__pf)
	{
		bpv__StaticMeshComponent08__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent09__pf)
	{
		bpv__StaticMeshComponent09__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent010__pf)
	{
		bpv__StaticMeshComponent010__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent011__pf)
	{
		bpv__StaticMeshComponent011__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent012__pf)
	{
		bpv__StaticMeshComponent012__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent013__pf)
	{
		bpv__StaticMeshComponent013__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent014__pf)
	{
		bpv__StaticMeshComponent014__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent015__pf)
	{
		bpv__StaticMeshComponent015__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent016__pf)
	{
		bpv__StaticMeshComponent016__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent017__pf)
	{
		bpv__StaticMeshComponent017__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent018__pf)
	{
		bpv__StaticMeshComponent018__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent019__pf)
	{
		bpv__StaticMeshComponent019__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent020__pf)
	{
		bpv__StaticMeshComponent020__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent021__pf)
	{
		bpv__StaticMeshComponent021__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent022__pf)
	{
		bpv__StaticMeshComponent022__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent023__pf)
	{
		bpv__StaticMeshComponent023__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent024__pf)
	{
		bpv__StaticMeshComponent024__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent025__pf)
	{
		bpv__StaticMeshComponent025__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent026__pf)
	{
		bpv__StaticMeshComponent026__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent027__pf)
	{
		bpv__StaticMeshComponent027__pf->CreationMethod = EComponentCreationMethod::Native;
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
	if(bpv__StaticMeshComponent048__pf)
	{
		bpv__StaticMeshComponent048__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent049__pf)
	{
		bpv__StaticMeshComponent049__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent050__pf)
	{
		bpv__StaticMeshComponent050__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent051__pf)
	{
		bpv__StaticMeshComponent051__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent052__pf)
	{
		bpv__StaticMeshComponent052__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent053__pf)
	{
		bpv__StaticMeshComponent053__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent054__pf)
	{
		bpv__StaticMeshComponent054__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent055__pf)
	{
		bpv__StaticMeshComponent055__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent056__pf)
	{
		bpv__StaticMeshComponent056__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SharedRoot1__pf)
	{
		bpv__SharedRoot1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0141__pf)
	{
		bpv__StaticMeshComponent0141__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0131__pf)
	{
		bpv__StaticMeshComponent0131__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0121__pf)
	{
		bpv__StaticMeshComponent0121__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0111__pf)
	{
		bpv__StaticMeshComponent0111__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0101__pf)
	{
		bpv__StaticMeshComponent0101__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent091__pf)
	{
		bpv__StaticMeshComponent091__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent081__pf)
	{
		bpv__StaticMeshComponent081__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0151__pf)
	{
		bpv__StaticMeshComponent0151__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent061__pf)
	{
		bpv__StaticMeshComponent061__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent057__pf)
	{
		bpv__StaticMeshComponent057__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0410__pf)
	{
		bpv__StaticMeshComponent0410__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent071__pf)
	{
		bpv__StaticMeshComponent071__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0310__pf)
	{
		bpv__StaticMeshComponent0310__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0210__pf)
	{
		bpv__StaticMeshComponent0210__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0110__pf)
	{
		bpv__StaticMeshComponent0110__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent058__pf)
	{
		bpv__StaticMeshComponent058__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SharedRoot2__pf)
	{
		bpv__SharedRoot2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0142__pf)
	{
		bpv__StaticMeshComponent0142__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0132__pf)
	{
		bpv__StaticMeshComponent0132__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0122__pf)
	{
		bpv__StaticMeshComponent0122__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0112__pf)
	{
		bpv__StaticMeshComponent0112__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0102__pf)
	{
		bpv__StaticMeshComponent0102__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent092__pf)
	{
		bpv__StaticMeshComponent092__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent082__pf)
	{
		bpv__StaticMeshComponent082__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0152__pf)
	{
		bpv__StaticMeshComponent0152__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent062__pf)
	{
		bpv__StaticMeshComponent062__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent059__pf)
	{
		bpv__StaticMeshComponent059__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0411__pf)
	{
		bpv__StaticMeshComponent0411__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent072__pf)
	{
		bpv__StaticMeshComponent072__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0311__pf)
	{
		bpv__StaticMeshComponent0311__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0211__pf)
	{
		bpv__StaticMeshComponent0211__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0113__pf)
	{
		bpv__StaticMeshComponent0113__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent060__pf)
	{
		bpv__StaticMeshComponent060__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_4_C__pf147218599::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__266 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__266);
	static TWeakFieldPtr<FProperty> __Local__268{};
	const FProperty* __Local__267 = __Local__268.Get();
	if (nullptr == __Local__267)
	{
		__Local__267 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__267);
		__Local__268 = __Local__267;
	}
	(((FBoolProperty*)__Local__267)->SetPropertyValue_InContainer((__Local__266), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_4_C__pf147218599::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1038, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/FlatModules_V_1_1/SM_FlatModule_9.SM_FlatModule_9 
		{1039, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Covered_Balcony_Small.SM_Covered_Balcony_Small 
		{1040, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Covered_Balcony_3.SM_Covered_Balcony_3 
		{1041, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Tv_Antenna_Tv_Antenna.SM_Tv_Antenna_Tv_Antenna 
		{1042, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Balcony_1.SM_Balcony_1 
		{1043, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Parapet_1_1.SM_Parapet_1_1 
		{1044, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Slab_Corner_2_Slab_Corner_2.SM_Slab_Corner_2_Slab_Corner_2 
		{1045, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Chimney_6.SM_Chimney_6 
		{1046, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Chimney_4.SM_Chimney_4 
		{1047, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Chimney_Host.SM_Chimney_Host 
		{1048, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Base_Station_2.SM_Base_Station_2 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_4_C__pf147218599::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__ABP_Building_4_C__pf147218599
{
	FRegisterHelper__ABP_Building_4_C__pf147218599()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Abandoned_City/Blueprints/BP_FlatModules_v_1_1/BP_Building_4"), &ABP_Building_4_C__pf147218599::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Building_4_C__pf147218599 Instance;
};
FRegisterHelper__ABP_Building_4_C__pf147218599 FRegisterHelper__ABP_Building_4_C__pf147218599::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
