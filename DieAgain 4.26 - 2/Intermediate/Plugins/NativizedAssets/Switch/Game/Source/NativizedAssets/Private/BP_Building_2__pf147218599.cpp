#include "NativizedAssets.h"
#include "BP_Building_2__pf147218599.h"
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
ABP_Building_2_C__pf147218599::ABP_Building_2_C__pf147218599(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
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
	__Local__2 = FVector(-181.465851, 340.924988, 615.836548);
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__SharedRoot1__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__3 = FVector(1.029964, 1.000000, 1.000000);
	bpv__SharedRoot1__pf->Mobility = EComponentMobility::Type::Static;
	static TWeakFieldPtr<FProperty> __Local__5{};
	const FProperty* __Local__4 = __Local__5.Get();
	if (nullptr == __Local__4)
	{
		__Local__4 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bNetAddressable")));
		check(__Local__4);
		__Local__5 = __Local__4;
	}
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__SharedRoot1__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SharedRoot1__pf), false, 0));
	bpv__StaticMeshComponent026__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent026__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent026__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__6 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__8{};
	const FProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), false, 0));
	bpv__StaticMeshComponent026__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent026__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(-419.969727, -266.835419, 72.377319);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__10 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent026__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), true, 0));
	bpv__StaticMeshComponent025__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent025__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent025__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__11 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), false, 0));
	bpv__StaticMeshComponent025__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent025__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(-419.969727, -139.341690, 72.377319);
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__13 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent025__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), true, 0));
	bpv__StaticMeshComponent024__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent024__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent024__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__14 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), false, 0));
	bpv__StaticMeshComponent024__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent024__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent024__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__15 = FVector(-179.148193, -196.005569, 72.377319);
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent024__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__16 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent024__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), true, 0));
	bpv__StaticMeshComponent023__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent023__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent023__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__17 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), false, 0));
	bpv__StaticMeshComponent023__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent023__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__18 = FVector(-292.475830, -181.839615, -26.784180);
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__19 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent023__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), true, 0));
	bpv__StaticMeshComponent022__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent022__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__20 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent022__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__20 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent022__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent022__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent022__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__21 = bpv__StaticMeshComponent022__pf->StreamingTextureData[0];
	__Local__21.PackedRelativeBox = 4294901760;
	__Local__21.TextureLevelIndex = 131;
	__Local__21.TexelFactor = 574.107788f;
	auto& __Local__22 = bpv__StaticMeshComponent022__pf->StreamingTextureData[1];
	__Local__22.PackedRelativeBox = 4294901760;
	__Local__22.TextureLevelIndex = 132;
	__Local__22.TexelFactor = 574.107788f;
	auto& __Local__23 = bpv__StaticMeshComponent022__pf->StreamingTextureData[2];
	__Local__23.PackedRelativeBox = 4294901760;
	__Local__23.TextureLevelIndex = 40;
	__Local__23.TexelFactor = 574.107788f;
	auto& __Local__24 = bpv__StaticMeshComponent022__pf->StreamingTextureData[3];
	__Local__24.PackedRelativeBox = 4294901760;
	__Local__24.TextureLevelIndex = 49;
	__Local__24.TexelFactor = 574.107788f;
	auto& __Local__25 = bpv__StaticMeshComponent022__pf->StreamingTextureData[4];
	__Local__25.PackedRelativeBox = 4294901760;
	__Local__25.TextureLevelIndex = 133;
	__Local__25.TexelFactor = 574.107788f;
	auto& __Local__26 = bpv__StaticMeshComponent022__pf->StreamingTextureData[5];
	__Local__26.PackedRelativeBox = 4294901760;
	__Local__26.TextureLevelIndex = 43;
	__Local__26.TexelFactor = 574.107788f;
	auto& __Local__27 = bpv__StaticMeshComponent022__pf->StreamingTextureData[6];
	__Local__27.PackedRelativeBox = 4294901760;
	__Local__27.TextureLevelIndex = 44;
	__Local__27.TexelFactor = 574.107788f;
	auto& __Local__28 = bpv__StaticMeshComponent022__pf->StreamingTextureData[7];
	__Local__28.PackedRelativeBox = 4294901760;
	__Local__28.TextureLevelIndex = 45;
	__Local__28.TexelFactor = 574.107788f;
	auto& __Local__29 = bpv__StaticMeshComponent022__pf->StreamingTextureData[8];
	__Local__29.PackedRelativeBox = 4294901760;
	__Local__29.TextureLevelIndex = 46;
	__Local__29.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), false, 0));
	bpv__StaticMeshComponent022__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent022__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent022__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__30 = FVector(576.253174, -172.257095, -12.643311);
	bpv__StaticMeshComponent022__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), true, 0));
	bpv__StaticMeshComponent021__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent021__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__31 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent021__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__31 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent021__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent021__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent021__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__32 = bpv__StaticMeshComponent021__pf->StreamingTextureData[0];
	__Local__32.PackedRelativeBox = 4294901760;
	__Local__32.TextureLevelIndex = 131;
	__Local__32.TexelFactor = 574.107788f;
	auto& __Local__33 = bpv__StaticMeshComponent021__pf->StreamingTextureData[1];
	__Local__33.PackedRelativeBox = 4294901760;
	__Local__33.TextureLevelIndex = 132;
	__Local__33.TexelFactor = 574.107788f;
	auto& __Local__34 = bpv__StaticMeshComponent021__pf->StreamingTextureData[2];
	__Local__34.PackedRelativeBox = 4294901760;
	__Local__34.TextureLevelIndex = 40;
	__Local__34.TexelFactor = 574.107788f;
	auto& __Local__35 = bpv__StaticMeshComponent021__pf->StreamingTextureData[3];
	__Local__35.PackedRelativeBox = 4294901760;
	__Local__35.TextureLevelIndex = 49;
	__Local__35.TexelFactor = 574.107788f;
	auto& __Local__36 = bpv__StaticMeshComponent021__pf->StreamingTextureData[4];
	__Local__36.PackedRelativeBox = 4294901760;
	__Local__36.TextureLevelIndex = 133;
	__Local__36.TexelFactor = 574.107788f;
	auto& __Local__37 = bpv__StaticMeshComponent021__pf->StreamingTextureData[5];
	__Local__37.PackedRelativeBox = 4294901760;
	__Local__37.TextureLevelIndex = 43;
	__Local__37.TexelFactor = 574.107788f;
	auto& __Local__38 = bpv__StaticMeshComponent021__pf->StreamingTextureData[6];
	__Local__38.PackedRelativeBox = 4294901760;
	__Local__38.TextureLevelIndex = 44;
	__Local__38.TexelFactor = 574.107788f;
	auto& __Local__39 = bpv__StaticMeshComponent021__pf->StreamingTextureData[7];
	__Local__39.PackedRelativeBox = 4294901760;
	__Local__39.TextureLevelIndex = 45;
	__Local__39.TexelFactor = 574.107788f;
	auto& __Local__40 = bpv__StaticMeshComponent021__pf->StreamingTextureData[8];
	__Local__40.PackedRelativeBox = 4294901760;
	__Local__40.TextureLevelIndex = 46;
	__Local__40.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), false, 0));
	bpv__StaticMeshComponent021__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent021__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__41 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent021__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__41 = FVector(576.253174, 127.742905, -12.643311);
	bpv__StaticMeshComponent021__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), true, 0));
	bpv__StaticMeshComponent020__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent020__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__42 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent020__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__42 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent020__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent020__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent020__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__43 = bpv__StaticMeshComponent020__pf->StreamingTextureData[0];
	__Local__43.PackedRelativeBox = 4294901760;
	__Local__43.TextureLevelIndex = 131;
	__Local__43.TexelFactor = 574.107788f;
	auto& __Local__44 = bpv__StaticMeshComponent020__pf->StreamingTextureData[1];
	__Local__44.PackedRelativeBox = 4294901760;
	__Local__44.TextureLevelIndex = 132;
	__Local__44.TexelFactor = 574.107788f;
	auto& __Local__45 = bpv__StaticMeshComponent020__pf->StreamingTextureData[2];
	__Local__45.PackedRelativeBox = 4294901760;
	__Local__45.TextureLevelIndex = 40;
	__Local__45.TexelFactor = 574.107788f;
	auto& __Local__46 = bpv__StaticMeshComponent020__pf->StreamingTextureData[3];
	__Local__46.PackedRelativeBox = 4294901760;
	__Local__46.TextureLevelIndex = 49;
	__Local__46.TexelFactor = 574.107788f;
	auto& __Local__47 = bpv__StaticMeshComponent020__pf->StreamingTextureData[4];
	__Local__47.PackedRelativeBox = 4294901760;
	__Local__47.TextureLevelIndex = 133;
	__Local__47.TexelFactor = 574.107788f;
	auto& __Local__48 = bpv__StaticMeshComponent020__pf->StreamingTextureData[5];
	__Local__48.PackedRelativeBox = 4294901760;
	__Local__48.TextureLevelIndex = 43;
	__Local__48.TexelFactor = 574.107788f;
	auto& __Local__49 = bpv__StaticMeshComponent020__pf->StreamingTextureData[6];
	__Local__49.PackedRelativeBox = 4294901760;
	__Local__49.TextureLevelIndex = 44;
	__Local__49.TexelFactor = 574.107788f;
	auto& __Local__50 = bpv__StaticMeshComponent020__pf->StreamingTextureData[7];
	__Local__50.PackedRelativeBox = 4294901760;
	__Local__50.TextureLevelIndex = 45;
	__Local__50.TexelFactor = 574.107788f;
	auto& __Local__51 = bpv__StaticMeshComponent020__pf->StreamingTextureData[8];
	__Local__51.PackedRelativeBox = 4294901760;
	__Local__51.TextureLevelIndex = 46;
	__Local__51.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), false, 0));
	bpv__StaticMeshComponent020__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent020__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__52 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent020__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__52 = FVector(276.253174, -172.257095, -12.643311);
	bpv__StaticMeshComponent020__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), true, 0));
	bpv__StaticMeshComponent019__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent019__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__53 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent019__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__53 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent019__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent019__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent019__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__54 = bpv__StaticMeshComponent019__pf->StreamingTextureData[0];
	__Local__54.PackedRelativeBox = 4294901760;
	__Local__54.TextureLevelIndex = 131;
	__Local__54.TexelFactor = 574.107788f;
	auto& __Local__55 = bpv__StaticMeshComponent019__pf->StreamingTextureData[1];
	__Local__55.PackedRelativeBox = 4294901760;
	__Local__55.TextureLevelIndex = 132;
	__Local__55.TexelFactor = 574.107788f;
	auto& __Local__56 = bpv__StaticMeshComponent019__pf->StreamingTextureData[2];
	__Local__56.PackedRelativeBox = 4294901760;
	__Local__56.TextureLevelIndex = 40;
	__Local__56.TexelFactor = 574.107788f;
	auto& __Local__57 = bpv__StaticMeshComponent019__pf->StreamingTextureData[3];
	__Local__57.PackedRelativeBox = 4294901760;
	__Local__57.TextureLevelIndex = 49;
	__Local__57.TexelFactor = 574.107788f;
	auto& __Local__58 = bpv__StaticMeshComponent019__pf->StreamingTextureData[4];
	__Local__58.PackedRelativeBox = 4294901760;
	__Local__58.TextureLevelIndex = 133;
	__Local__58.TexelFactor = 574.107788f;
	auto& __Local__59 = bpv__StaticMeshComponent019__pf->StreamingTextureData[5];
	__Local__59.PackedRelativeBox = 4294901760;
	__Local__59.TextureLevelIndex = 43;
	__Local__59.TexelFactor = 574.107788f;
	auto& __Local__60 = bpv__StaticMeshComponent019__pf->StreamingTextureData[6];
	__Local__60.PackedRelativeBox = 4294901760;
	__Local__60.TextureLevelIndex = 44;
	__Local__60.TexelFactor = 574.107788f;
	auto& __Local__61 = bpv__StaticMeshComponent019__pf->StreamingTextureData[7];
	__Local__61.PackedRelativeBox = 4294901760;
	__Local__61.TextureLevelIndex = 45;
	__Local__61.TexelFactor = 574.107788f;
	auto& __Local__62 = bpv__StaticMeshComponent019__pf->StreamingTextureData[8];
	__Local__62.PackedRelativeBox = 4294901760;
	__Local__62.TextureLevelIndex = 46;
	__Local__62.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), false, 0));
	bpv__StaticMeshComponent019__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent019__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__63 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent019__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__63 = FVector(276.253174, 127.742905, -12.643311);
	bpv__StaticMeshComponent019__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), true, 0));
	bpv__StaticMeshComponent018__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent018__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__64 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent018__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__64 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent018__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent018__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent018__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__65 = bpv__StaticMeshComponent018__pf->StreamingTextureData[0];
	__Local__65.PackedRelativeBox = 4294901760;
	__Local__65.TextureLevelIndex = 131;
	__Local__65.TexelFactor = 574.107788f;
	auto& __Local__66 = bpv__StaticMeshComponent018__pf->StreamingTextureData[1];
	__Local__66.PackedRelativeBox = 4294901760;
	__Local__66.TextureLevelIndex = 132;
	__Local__66.TexelFactor = 574.107788f;
	auto& __Local__67 = bpv__StaticMeshComponent018__pf->StreamingTextureData[2];
	__Local__67.PackedRelativeBox = 4294901760;
	__Local__67.TextureLevelIndex = 40;
	__Local__67.TexelFactor = 574.107788f;
	auto& __Local__68 = bpv__StaticMeshComponent018__pf->StreamingTextureData[3];
	__Local__68.PackedRelativeBox = 4294901760;
	__Local__68.TextureLevelIndex = 49;
	__Local__68.TexelFactor = 574.107788f;
	auto& __Local__69 = bpv__StaticMeshComponent018__pf->StreamingTextureData[4];
	__Local__69.PackedRelativeBox = 4294901760;
	__Local__69.TextureLevelIndex = 133;
	__Local__69.TexelFactor = 574.107788f;
	auto& __Local__70 = bpv__StaticMeshComponent018__pf->StreamingTextureData[5];
	__Local__70.PackedRelativeBox = 4294901760;
	__Local__70.TextureLevelIndex = 43;
	__Local__70.TexelFactor = 574.107788f;
	auto& __Local__71 = bpv__StaticMeshComponent018__pf->StreamingTextureData[6];
	__Local__71.PackedRelativeBox = 4294901760;
	__Local__71.TextureLevelIndex = 44;
	__Local__71.TexelFactor = 574.107788f;
	auto& __Local__72 = bpv__StaticMeshComponent018__pf->StreamingTextureData[7];
	__Local__72.PackedRelativeBox = 4294901760;
	__Local__72.TextureLevelIndex = 45;
	__Local__72.TexelFactor = 574.107788f;
	auto& __Local__73 = bpv__StaticMeshComponent018__pf->StreamingTextureData[8];
	__Local__73.PackedRelativeBox = 4294901760;
	__Local__73.TextureLevelIndex = 46;
	__Local__73.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), false, 0));
	bpv__StaticMeshComponent018__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent018__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__74 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent018__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__74 = FVector(-23.746826, -172.257095, -12.643311);
	bpv__StaticMeshComponent018__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), true, 0));
	bpv__StaticMeshComponent017__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent017__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__75 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent017__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__75 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent017__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent017__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent017__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__76 = bpv__StaticMeshComponent017__pf->StreamingTextureData[0];
	__Local__76.PackedRelativeBox = 4294901760;
	__Local__76.TextureLevelIndex = 131;
	__Local__76.TexelFactor = 574.107788f;
	auto& __Local__77 = bpv__StaticMeshComponent017__pf->StreamingTextureData[1];
	__Local__77.PackedRelativeBox = 4294901760;
	__Local__77.TextureLevelIndex = 132;
	__Local__77.TexelFactor = 574.107788f;
	auto& __Local__78 = bpv__StaticMeshComponent017__pf->StreamingTextureData[2];
	__Local__78.PackedRelativeBox = 4294901760;
	__Local__78.TextureLevelIndex = 40;
	__Local__78.TexelFactor = 574.107788f;
	auto& __Local__79 = bpv__StaticMeshComponent017__pf->StreamingTextureData[3];
	__Local__79.PackedRelativeBox = 4294901760;
	__Local__79.TextureLevelIndex = 49;
	__Local__79.TexelFactor = 574.107788f;
	auto& __Local__80 = bpv__StaticMeshComponent017__pf->StreamingTextureData[4];
	__Local__80.PackedRelativeBox = 4294901760;
	__Local__80.TextureLevelIndex = 133;
	__Local__80.TexelFactor = 574.107788f;
	auto& __Local__81 = bpv__StaticMeshComponent017__pf->StreamingTextureData[5];
	__Local__81.PackedRelativeBox = 4294901760;
	__Local__81.TextureLevelIndex = 43;
	__Local__81.TexelFactor = 574.107788f;
	auto& __Local__82 = bpv__StaticMeshComponent017__pf->StreamingTextureData[6];
	__Local__82.PackedRelativeBox = 4294901760;
	__Local__82.TextureLevelIndex = 44;
	__Local__82.TexelFactor = 574.107788f;
	auto& __Local__83 = bpv__StaticMeshComponent017__pf->StreamingTextureData[7];
	__Local__83.PackedRelativeBox = 4294901760;
	__Local__83.TextureLevelIndex = 45;
	__Local__83.TexelFactor = 574.107788f;
	auto& __Local__84 = bpv__StaticMeshComponent017__pf->StreamingTextureData[8];
	__Local__84.PackedRelativeBox = 4294901760;
	__Local__84.TextureLevelIndex = 46;
	__Local__84.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), false, 0));
	bpv__StaticMeshComponent017__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent017__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__85 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent017__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__85 = FVector(-23.746826, 127.742905, -12.643311);
	bpv__StaticMeshComponent017__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), true, 0));
	bpv__StaticMeshComponent016__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent016__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__86 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent016__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__86 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent016__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent016__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent016__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__87 = bpv__StaticMeshComponent016__pf->StreamingTextureData[0];
	__Local__87.PackedRelativeBox = 4294901760;
	__Local__87.TextureLevelIndex = 131;
	__Local__87.TexelFactor = 574.107788f;
	auto& __Local__88 = bpv__StaticMeshComponent016__pf->StreamingTextureData[1];
	__Local__88.PackedRelativeBox = 4294901760;
	__Local__88.TextureLevelIndex = 132;
	__Local__88.TexelFactor = 574.107788f;
	auto& __Local__89 = bpv__StaticMeshComponent016__pf->StreamingTextureData[2];
	__Local__89.PackedRelativeBox = 4294901760;
	__Local__89.TextureLevelIndex = 40;
	__Local__89.TexelFactor = 574.107788f;
	auto& __Local__90 = bpv__StaticMeshComponent016__pf->StreamingTextureData[3];
	__Local__90.PackedRelativeBox = 4294901760;
	__Local__90.TextureLevelIndex = 49;
	__Local__90.TexelFactor = 574.107788f;
	auto& __Local__91 = bpv__StaticMeshComponent016__pf->StreamingTextureData[4];
	__Local__91.PackedRelativeBox = 4294901760;
	__Local__91.TextureLevelIndex = 133;
	__Local__91.TexelFactor = 574.107788f;
	auto& __Local__92 = bpv__StaticMeshComponent016__pf->StreamingTextureData[5];
	__Local__92.PackedRelativeBox = 4294901760;
	__Local__92.TextureLevelIndex = 43;
	__Local__92.TexelFactor = 574.107788f;
	auto& __Local__93 = bpv__StaticMeshComponent016__pf->StreamingTextureData[6];
	__Local__93.PackedRelativeBox = 4294901760;
	__Local__93.TextureLevelIndex = 44;
	__Local__93.TexelFactor = 574.107788f;
	auto& __Local__94 = bpv__StaticMeshComponent016__pf->StreamingTextureData[7];
	__Local__94.PackedRelativeBox = 4294901760;
	__Local__94.TextureLevelIndex = 45;
	__Local__94.TexelFactor = 574.107788f;
	auto& __Local__95 = bpv__StaticMeshComponent016__pf->StreamingTextureData[8];
	__Local__95.PackedRelativeBox = 4294901760;
	__Local__95.TextureLevelIndex = 46;
	__Local__95.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), false, 0));
	bpv__StaticMeshComponent016__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent016__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__96 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent016__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__96 = FVector(-323.746826, 127.742905, -12.643311);
	bpv__StaticMeshComponent016__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), true, 0));
	bpv__StaticMeshComponent015__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent015__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__97 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent015__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__97 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent015__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent015__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent015__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__98 = bpv__StaticMeshComponent015__pf->StreamingTextureData[0];
	__Local__98.PackedRelativeBox = 4294901760;
	__Local__98.TextureLevelIndex = 131;
	__Local__98.TexelFactor = 574.107788f;
	auto& __Local__99 = bpv__StaticMeshComponent015__pf->StreamingTextureData[1];
	__Local__99.PackedRelativeBox = 4294901760;
	__Local__99.TextureLevelIndex = 132;
	__Local__99.TexelFactor = 574.107788f;
	auto& __Local__100 = bpv__StaticMeshComponent015__pf->StreamingTextureData[2];
	__Local__100.PackedRelativeBox = 4294901760;
	__Local__100.TextureLevelIndex = 40;
	__Local__100.TexelFactor = 574.107788f;
	auto& __Local__101 = bpv__StaticMeshComponent015__pf->StreamingTextureData[3];
	__Local__101.PackedRelativeBox = 4294901760;
	__Local__101.TextureLevelIndex = 49;
	__Local__101.TexelFactor = 574.107788f;
	auto& __Local__102 = bpv__StaticMeshComponent015__pf->StreamingTextureData[4];
	__Local__102.PackedRelativeBox = 4294901760;
	__Local__102.TextureLevelIndex = 133;
	__Local__102.TexelFactor = 574.107788f;
	auto& __Local__103 = bpv__StaticMeshComponent015__pf->StreamingTextureData[5];
	__Local__103.PackedRelativeBox = 4294901760;
	__Local__103.TextureLevelIndex = 43;
	__Local__103.TexelFactor = 574.107788f;
	auto& __Local__104 = bpv__StaticMeshComponent015__pf->StreamingTextureData[6];
	__Local__104.PackedRelativeBox = 4294901760;
	__Local__104.TextureLevelIndex = 44;
	__Local__104.TexelFactor = 574.107788f;
	auto& __Local__105 = bpv__StaticMeshComponent015__pf->StreamingTextureData[7];
	__Local__105.PackedRelativeBox = 4294901760;
	__Local__105.TextureLevelIndex = 45;
	__Local__105.TexelFactor = 574.107788f;
	auto& __Local__106 = bpv__StaticMeshComponent015__pf->StreamingTextureData[8];
	__Local__106.PackedRelativeBox = 4294901760;
	__Local__106.TextureLevelIndex = 46;
	__Local__106.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), false, 0));
	bpv__StaticMeshComponent015__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent015__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__107 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent015__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__107 = FVector(-323.746826, 427.742920, -12.643311);
	bpv__StaticMeshComponent015__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), true, 0));
	bpv__StaticMeshComponent014__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent014__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__108 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent014__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__108 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent014__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent014__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent014__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__109 = bpv__StaticMeshComponent014__pf->StreamingTextureData[0];
	__Local__109.PackedRelativeBox = 4294901760;
	__Local__109.TextureLevelIndex = 131;
	__Local__109.TexelFactor = 574.107788f;
	auto& __Local__110 = bpv__StaticMeshComponent014__pf->StreamingTextureData[1];
	__Local__110.PackedRelativeBox = 4294901760;
	__Local__110.TextureLevelIndex = 132;
	__Local__110.TexelFactor = 574.107788f;
	auto& __Local__111 = bpv__StaticMeshComponent014__pf->StreamingTextureData[2];
	__Local__111.PackedRelativeBox = 4294901760;
	__Local__111.TextureLevelIndex = 40;
	__Local__111.TexelFactor = 574.107788f;
	auto& __Local__112 = bpv__StaticMeshComponent014__pf->StreamingTextureData[3];
	__Local__112.PackedRelativeBox = 4294901760;
	__Local__112.TextureLevelIndex = 49;
	__Local__112.TexelFactor = 574.107788f;
	auto& __Local__113 = bpv__StaticMeshComponent014__pf->StreamingTextureData[4];
	__Local__113.PackedRelativeBox = 4294901760;
	__Local__113.TextureLevelIndex = 133;
	__Local__113.TexelFactor = 574.107788f;
	auto& __Local__114 = bpv__StaticMeshComponent014__pf->StreamingTextureData[5];
	__Local__114.PackedRelativeBox = 4294901760;
	__Local__114.TextureLevelIndex = 43;
	__Local__114.TexelFactor = 574.107788f;
	auto& __Local__115 = bpv__StaticMeshComponent014__pf->StreamingTextureData[6];
	__Local__115.PackedRelativeBox = 4294901760;
	__Local__115.TextureLevelIndex = 44;
	__Local__115.TexelFactor = 574.107788f;
	auto& __Local__116 = bpv__StaticMeshComponent014__pf->StreamingTextureData[7];
	__Local__116.PackedRelativeBox = 4294901760;
	__Local__116.TextureLevelIndex = 45;
	__Local__116.TexelFactor = 574.107788f;
	auto& __Local__117 = bpv__StaticMeshComponent014__pf->StreamingTextureData[8];
	__Local__117.PackedRelativeBox = 4294901760;
	__Local__117.TextureLevelIndex = 46;
	__Local__117.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), false, 0));
	bpv__StaticMeshComponent014__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent014__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__118 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent014__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__118 = FVector(-23.746826, 427.742920, -12.643311);
	bpv__StaticMeshComponent014__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), true, 0));
	bpv__StaticMeshComponent027__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent027__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__119 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent027__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__119 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), false, 0));
	bpv__StaticMeshComponent027__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent027__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__120 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__120 = FVector(-561.629639, -196.005569, -12.618530);
	auto& __Local__121 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__121 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__122 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__122 = FVector(1.416597, 1.416597, 1.416597);
	bpv__StaticMeshComponent027__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), true, 0));
	bpv__StaticMeshComponent012__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent012__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__123 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent012__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__123 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent012__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent012__pf->StreamingTextureData.AddUninitialized(12);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent012__pf->StreamingTextureData.GetData(), 12);
	auto& __Local__124 = bpv__StaticMeshComponent012__pf->StreamingTextureData[0];
	__Local__124.PackedRelativeBox = 4268949863;
	__Local__124.TextureLevelIndex = 158;
	__Local__124.TexelFactor = 326.126556f;
	auto& __Local__125 = bpv__StaticMeshComponent012__pf->StreamingTextureData[1];
	__Local__125.PackedRelativeBox = 4259288176;
	__Local__125.TextureLevelIndex = 157;
	__Local__125.TexelFactor = 131.592682f;
	auto& __Local__126 = bpv__StaticMeshComponent012__pf->StreamingTextureData[2];
	__Local__126.PackedRelativeBox = 4259288176;
	__Local__126.TextureLevelIndex = 144;
	__Local__126.TexelFactor = 131.592682f;
	auto& __Local__127 = bpv__StaticMeshComponent012__pf->StreamingTextureData[3];
	__Local__127.PackedRelativeBox = 4259288176;
	__Local__127.TextureLevelIndex = 145;
	__Local__127.TexelFactor = 131.592682f;
	auto& __Local__128 = bpv__StaticMeshComponent012__pf->StreamingTextureData[4];
	__Local__128.PackedRelativeBox = 3470289125;
	__Local__128.TextureLevelIndex = 149;
	__Local__128.TexelFactor = 103.089394f;
	auto& __Local__129 = bpv__StaticMeshComponent012__pf->StreamingTextureData[5];
	__Local__129.PackedRelativeBox = 3470289125;
	__Local__129.TextureLevelIndex = 150;
	__Local__129.TexelFactor = 103.089394f;
	auto& __Local__130 = bpv__StaticMeshComponent012__pf->StreamingTextureData[6];
	__Local__130.PackedRelativeBox = 3470289125;
	__Local__130.TextureLevelIndex = 151;
	__Local__130.TexelFactor = 103.089394f;
	auto& __Local__131 = bpv__StaticMeshComponent012__pf->StreamingTextureData[7];
	__Local__131.PackedRelativeBox = 4092817408;
	__Local__131.TextureLevelIndex = 146;
	__Local__131.TexelFactor = 129.975616f;
	auto& __Local__132 = bpv__StaticMeshComponent012__pf->StreamingTextureData[8];
	__Local__132.PackedRelativeBox = 4092817408;
	__Local__132.TextureLevelIndex = 147;
	__Local__132.TexelFactor = 129.975616f;
	auto& __Local__133 = bpv__StaticMeshComponent012__pf->StreamingTextureData[9];
	__Local__133.PackedRelativeBox = 4092817408;
	__Local__133.TextureLevelIndex = 148;
	__Local__133.TexelFactor = 129.975616f;
	auto& __Local__134 = bpv__StaticMeshComponent012__pf->StreamingTextureData[10];
	__Local__134.PackedRelativeBox = 4268949863;
	__Local__134.TextureLevelIndex = 159;
	__Local__134.TexelFactor = 326.126556f;
	auto& __Local__135 = bpv__StaticMeshComponent012__pf->StreamingTextureData[11];
	__Local__135.PackedRelativeBox = 4268949863;
	__Local__135.TextureLevelIndex = 160;
	__Local__135.TexelFactor = 326.126556f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), false, 0));
	bpv__StaticMeshComponent012__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent012__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__136 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent012__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__136 = FVector(-509.148193, 83.994431, -7.622681);
	bpv__StaticMeshComponent012__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), true, 0));
	bpv__StaticMeshComponent011__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent011__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__137 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent011__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__137 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent011__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent011__pf->StreamingTextureData.AddUninitialized(27);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent011__pf->StreamingTextureData.GetData(), 27);
	auto& __Local__138 = bpv__StaticMeshComponent011__pf->StreamingTextureData[0];
	__Local__138.PackedRelativeBox = 4280221927;
	__Local__138.TextureLevelIndex = 140;
	__Local__138.TexelFactor = 411.229462f;
	auto& __Local__139 = bpv__StaticMeshComponent011__pf->StreamingTextureData[1];
	__Local__139.PackedRelativeBox = 4294721536;
	__Local__139.TextureLevelIndex = 141;
	__Local__139.TexelFactor = 414.288452f;
	auto& __Local__140 = bpv__StaticMeshComponent011__pf->StreamingTextureData[2];
	__Local__140.PackedRelativeBox = 4294721536;
	__Local__140.TextureLevelIndex = 142;
	__Local__140.TexelFactor = 414.288452f;
	auto& __Local__141 = bpv__StaticMeshComponent011__pf->StreamingTextureData[3];
	__Local__141.PackedRelativeBox = 4294721536;
	__Local__141.TextureLevelIndex = 143;
	__Local__141.TexelFactor = 414.288452f;
	auto& __Local__142 = bpv__StaticMeshComponent011__pf->StreamingTextureData[4];
	__Local__142.PackedRelativeBox = 1528778984;
	__Local__142.TextureLevelIndex = 95;
	__Local__142.TexelFactor = 287.424683f;
	auto& __Local__143 = bpv__StaticMeshComponent011__pf->StreamingTextureData[5];
	__Local__143.PackedRelativeBox = 4280221927;
	__Local__143.TextureLevelIndex = 40;
	__Local__143.TexelFactor = 411.229462f;
	auto& __Local__144 = bpv__StaticMeshComponent011__pf->StreamingTextureData[6];
	__Local__144.PackedRelativeBox = 4280221927;
	__Local__144.TextureLevelIndex = 49;
	__Local__144.TexelFactor = 411.229462f;
	auto& __Local__145 = bpv__StaticMeshComponent011__pf->StreamingTextureData[7];
	__Local__145.PackedRelativeBox = 4280221927;
	__Local__145.TextureLevelIndex = 43;
	__Local__145.TexelFactor = 411.229462f;
	auto& __Local__146 = bpv__StaticMeshComponent011__pf->StreamingTextureData[8];
	__Local__146.PackedRelativeBox = 4280221927;
	__Local__146.TextureLevelIndex = 45;
	__Local__146.TexelFactor = 411.229462f;
	auto& __Local__147 = bpv__StaticMeshComponent011__pf->StreamingTextureData[9];
	__Local__147.PackedRelativeBox = 1528778984;
	__Local__147.TextureLevelIndex = 120;
	__Local__147.TexelFactor = 287.424683f;
	auto& __Local__148 = bpv__StaticMeshComponent011__pf->StreamingTextureData[10];
	__Local__148.PackedRelativeBox = 3617496665;
	__Local__148.TextureLevelIndex = 144;
	__Local__148.TexelFactor = 181.886108f;
	auto& __Local__149 = bpv__StaticMeshComponent011__pf->StreamingTextureData[11];
	__Local__149.PackedRelativeBox = 3617496665;
	__Local__149.TextureLevelIndex = 145;
	__Local__149.TexelFactor = 181.886108f;
	auto& __Local__150 = bpv__StaticMeshComponent011__pf->StreamingTextureData[12];
	__Local__150.PackedRelativeBox = 2673572467;
	__Local__150.TextureLevelIndex = 146;
	__Local__150.TexelFactor = 136.150223f;
	auto& __Local__151 = bpv__StaticMeshComponent011__pf->StreamingTextureData[13];
	__Local__151.PackedRelativeBox = 2673572467;
	__Local__151.TextureLevelIndex = 147;
	__Local__151.TexelFactor = 136.150223f;
	auto& __Local__152 = bpv__StaticMeshComponent011__pf->StreamingTextureData[14];
	__Local__152.PackedRelativeBox = 2673572467;
	__Local__152.TextureLevelIndex = 148;
	__Local__152.TexelFactor = 136.150223f;
	auto& __Local__153 = bpv__StaticMeshComponent011__pf->StreamingTextureData[15];
	__Local__153.PackedRelativeBox = 3804212827;
	__Local__153.TextureLevelIndex = 149;
	__Local__153.TexelFactor = 144.842712f;
	auto& __Local__154 = bpv__StaticMeshComponent011__pf->StreamingTextureData[16];
	__Local__154.PackedRelativeBox = 3804212827;
	__Local__154.TextureLevelIndex = 150;
	__Local__154.TexelFactor = 144.842712f;
	auto& __Local__155 = bpv__StaticMeshComponent011__pf->StreamingTextureData[17];
	__Local__155.PackedRelativeBox = 3804212827;
	__Local__155.TextureLevelIndex = 151;
	__Local__155.TexelFactor = 144.842712f;
	auto& __Local__156 = bpv__StaticMeshComponent011__pf->StreamingTextureData[18];
	__Local__156.PackedRelativeBox = 2273051223;
	__Local__156.TextureLevelIndex = 152;
	__Local__156.TexelFactor = 65.518105f;
	auto& __Local__157 = bpv__StaticMeshComponent011__pf->StreamingTextureData[19];
	__Local__157.PackedRelativeBox = 2273051223;
	__Local__157.TextureLevelIndex = 153;
	__Local__157.TexelFactor = 65.518105f;
	auto& __Local__158 = bpv__StaticMeshComponent011__pf->StreamingTextureData[20];
	__Local__158.PackedRelativeBox = 2273051223;
	__Local__158.TextureLevelIndex = 154;
	__Local__158.TexelFactor = 65.518105f;
	auto& __Local__159 = bpv__StaticMeshComponent011__pf->StreamingTextureData[21];
	__Local__159.PackedRelativeBox = 4280221927;
	__Local__159.TextureLevelIndex = 155;
	__Local__159.TexelFactor = 411.229462f;
	auto& __Local__160 = bpv__StaticMeshComponent011__pf->StreamingTextureData[22];
	__Local__160.PackedRelativeBox = 1528778984;
	__Local__160.TextureLevelIndex = 96;
	__Local__160.TexelFactor = 287.424683f;
	auto& __Local__161 = bpv__StaticMeshComponent011__pf->StreamingTextureData[23];
	__Local__161.PackedRelativeBox = 4280221927;
	__Local__161.TextureLevelIndex = 44;
	__Local__161.TexelFactor = 411.229462f;
	auto& __Local__162 = bpv__StaticMeshComponent011__pf->StreamingTextureData[24];
	__Local__162.PackedRelativeBox = 4280221927;
	__Local__162.TextureLevelIndex = 156;
	__Local__162.TexelFactor = 411.229462f;
	auto& __Local__163 = bpv__StaticMeshComponent011__pf->StreamingTextureData[25];
	__Local__163.PackedRelativeBox = 4280221927;
	__Local__163.TextureLevelIndex = 46;
	__Local__163.TexelFactor = 411.229462f;
	auto& __Local__164 = bpv__StaticMeshComponent011__pf->StreamingTextureData[26];
	__Local__164.PackedRelativeBox = 3617496665;
	__Local__164.TextureLevelIndex = 157;
	__Local__164.TexelFactor = 181.886108f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), false, 0));
	bpv__StaticMeshComponent011__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__165 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent011__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__165 = FVector(120.851807, -306.005554, -7.622681);
	bpv__StaticMeshComponent011__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), true, 0));
	bpv__StaticMeshComponent010__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent010__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__166 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent010__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__166 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent010__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent010__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent010__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__167 = bpv__StaticMeshComponent010__pf->StreamingTextureData[0];
	__Local__167.PackedRelativeBox = 4294901760;
	__Local__167.TextureLevelIndex = 137;
	__Local__167.TexelFactor = 300.084900f;
	auto& __Local__168 = bpv__StaticMeshComponent010__pf->StreamingTextureData[1];
	__Local__168.PackedRelativeBox = 4294901760;
	__Local__168.TextureLevelIndex = 138;
	__Local__168.TexelFactor = 300.084900f;
	auto& __Local__169 = bpv__StaticMeshComponent010__pf->StreamingTextureData[2];
	__Local__169.PackedRelativeBox = 4294901760;
	__Local__169.TextureLevelIndex = 40;
	__Local__169.TexelFactor = 300.084900f;
	auto& __Local__170 = bpv__StaticMeshComponent010__pf->StreamingTextureData[3];
	__Local__170.PackedRelativeBox = 4294901760;
	__Local__170.TextureLevelIndex = 49;
	__Local__170.TexelFactor = 300.084900f;
	auto& __Local__171 = bpv__StaticMeshComponent010__pf->StreamingTextureData[4];
	__Local__171.PackedRelativeBox = 4294901760;
	__Local__171.TextureLevelIndex = 139;
	__Local__171.TexelFactor = 300.084900f;
	auto& __Local__172 = bpv__StaticMeshComponent010__pf->StreamingTextureData[5];
	__Local__172.PackedRelativeBox = 4294901760;
	__Local__172.TextureLevelIndex = 43;
	__Local__172.TexelFactor = 300.084900f;
	auto& __Local__173 = bpv__StaticMeshComponent010__pf->StreamingTextureData[6];
	__Local__173.PackedRelativeBox = 4294901760;
	__Local__173.TextureLevelIndex = 44;
	__Local__173.TexelFactor = 300.084900f;
	auto& __Local__174 = bpv__StaticMeshComponent010__pf->StreamingTextureData[7];
	__Local__174.PackedRelativeBox = 4294901760;
	__Local__174.TextureLevelIndex = 45;
	__Local__174.TexelFactor = 300.084900f;
	auto& __Local__175 = bpv__StaticMeshComponent010__pf->StreamingTextureData[8];
	__Local__175.PackedRelativeBox = 4294901760;
	__Local__175.TextureLevelIndex = 46;
	__Local__175.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), false, 0));
	bpv__StaticMeshComponent010__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent010__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__176 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__176 = FVector(-5.253418, 443.011841, -2.137329);
	auto& __Local__177 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__177 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__178 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__178 = FVector(1.000000, 1.147963, 1.000000);
	bpv__StaticMeshComponent010__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), true, 0));
	bpv__StaticMeshComponent09__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent09__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__179 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent09__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__179 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent09__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent09__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent09__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__180 = bpv__StaticMeshComponent09__pf->StreamingTextureData[0];
	__Local__180.PackedRelativeBox = 4294901760;
	__Local__180.TextureLevelIndex = 137;
	__Local__180.TexelFactor = 300.084900f;
	auto& __Local__181 = bpv__StaticMeshComponent09__pf->StreamingTextureData[1];
	__Local__181.PackedRelativeBox = 4294901760;
	__Local__181.TextureLevelIndex = 138;
	__Local__181.TexelFactor = 300.084900f;
	auto& __Local__182 = bpv__StaticMeshComponent09__pf->StreamingTextureData[2];
	__Local__182.PackedRelativeBox = 4294901760;
	__Local__182.TextureLevelIndex = 40;
	__Local__182.TexelFactor = 300.084900f;
	auto& __Local__183 = bpv__StaticMeshComponent09__pf->StreamingTextureData[3];
	__Local__183.PackedRelativeBox = 4294901760;
	__Local__183.TextureLevelIndex = 49;
	__Local__183.TexelFactor = 300.084900f;
	auto& __Local__184 = bpv__StaticMeshComponent09__pf->StreamingTextureData[4];
	__Local__184.PackedRelativeBox = 4294901760;
	__Local__184.TextureLevelIndex = 139;
	__Local__184.TexelFactor = 300.084900f;
	auto& __Local__185 = bpv__StaticMeshComponent09__pf->StreamingTextureData[5];
	__Local__185.PackedRelativeBox = 4294901760;
	__Local__185.TextureLevelIndex = 43;
	__Local__185.TexelFactor = 300.084900f;
	auto& __Local__186 = bpv__StaticMeshComponent09__pf->StreamingTextureData[6];
	__Local__186.PackedRelativeBox = 4294901760;
	__Local__186.TextureLevelIndex = 44;
	__Local__186.TexelFactor = 300.084900f;
	auto& __Local__187 = bpv__StaticMeshComponent09__pf->StreamingTextureData[7];
	__Local__187.PackedRelativeBox = 4294901760;
	__Local__187.TextureLevelIndex = 45;
	__Local__187.TexelFactor = 300.084900f;
	auto& __Local__188 = bpv__StaticMeshComponent09__pf->StreamingTextureData[8];
	__Local__188.PackedRelativeBox = 4294901760;
	__Local__188.TextureLevelIndex = 46;
	__Local__188.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), false, 0));
	bpv__StaticMeshComponent09__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent09__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__189 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent09__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__189 = FVector(294.746582, 443.011841, -2.137329);
	auto& __Local__190 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent09__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__190 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent09__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), true, 0));
	bpv__StaticMeshComponent08__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent08__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__191 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent08__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__191 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent08__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent08__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent08__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__192 = bpv__StaticMeshComponent08__pf->StreamingTextureData[0];
	__Local__192.PackedRelativeBox = 4294901760;
	__Local__192.TextureLevelIndex = 137;
	__Local__192.TexelFactor = 300.084900f;
	auto& __Local__193 = bpv__StaticMeshComponent08__pf->StreamingTextureData[1];
	__Local__193.PackedRelativeBox = 4294901760;
	__Local__193.TextureLevelIndex = 138;
	__Local__193.TexelFactor = 300.084900f;
	auto& __Local__194 = bpv__StaticMeshComponent08__pf->StreamingTextureData[2];
	__Local__194.PackedRelativeBox = 4294901760;
	__Local__194.TextureLevelIndex = 40;
	__Local__194.TexelFactor = 300.084900f;
	auto& __Local__195 = bpv__StaticMeshComponent08__pf->StreamingTextureData[3];
	__Local__195.PackedRelativeBox = 4294901760;
	__Local__195.TextureLevelIndex = 49;
	__Local__195.TexelFactor = 300.084900f;
	auto& __Local__196 = bpv__StaticMeshComponent08__pf->StreamingTextureData[4];
	__Local__196.PackedRelativeBox = 4294901760;
	__Local__196.TextureLevelIndex = 139;
	__Local__196.TexelFactor = 300.084900f;
	auto& __Local__197 = bpv__StaticMeshComponent08__pf->StreamingTextureData[5];
	__Local__197.PackedRelativeBox = 4294901760;
	__Local__197.TextureLevelIndex = 43;
	__Local__197.TexelFactor = 300.084900f;
	auto& __Local__198 = bpv__StaticMeshComponent08__pf->StreamingTextureData[6];
	__Local__198.PackedRelativeBox = 4294901760;
	__Local__198.TextureLevelIndex = 44;
	__Local__198.TexelFactor = 300.084900f;
	auto& __Local__199 = bpv__StaticMeshComponent08__pf->StreamingTextureData[7];
	__Local__199.PackedRelativeBox = 4294901760;
	__Local__199.TextureLevelIndex = 45;
	__Local__199.TexelFactor = 300.084900f;
	auto& __Local__200 = bpv__StaticMeshComponent08__pf->StreamingTextureData[8];
	__Local__200.PackedRelativeBox = 4294901760;
	__Local__200.TextureLevelIndex = 46;
	__Local__200.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), false, 0));
	bpv__StaticMeshComponent08__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent08__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__201 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__201 = FVector(590.828613, -186.514343, -2.137329);
	auto& __Local__202 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__202 = FRotator(0.000000, 179.999802, 0.000000);
	auto& __Local__203 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__203 = FVector(1.000000, 1.102493, 1.000000);
	bpv__StaticMeshComponent08__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), true, 0));
	bpv__StaticMeshComponent07__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent07__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__204 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent07__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__204 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent07__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent07__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent07__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__205 = bpv__StaticMeshComponent07__pf->StreamingTextureData[0];
	__Local__205.PackedRelativeBox = 4294901760;
	__Local__205.TextureLevelIndex = 137;
	__Local__205.TexelFactor = 300.084900f;
	auto& __Local__206 = bpv__StaticMeshComponent07__pf->StreamingTextureData[1];
	__Local__206.PackedRelativeBox = 4294901760;
	__Local__206.TextureLevelIndex = 138;
	__Local__206.TexelFactor = 300.084900f;
	auto& __Local__207 = bpv__StaticMeshComponent07__pf->StreamingTextureData[2];
	__Local__207.PackedRelativeBox = 4294901760;
	__Local__207.TextureLevelIndex = 40;
	__Local__207.TexelFactor = 300.084900f;
	auto& __Local__208 = bpv__StaticMeshComponent07__pf->StreamingTextureData[3];
	__Local__208.PackedRelativeBox = 4294901760;
	__Local__208.TextureLevelIndex = 49;
	__Local__208.TexelFactor = 300.084900f;
	auto& __Local__209 = bpv__StaticMeshComponent07__pf->StreamingTextureData[4];
	__Local__209.PackedRelativeBox = 4294901760;
	__Local__209.TextureLevelIndex = 139;
	__Local__209.TexelFactor = 300.084900f;
	auto& __Local__210 = bpv__StaticMeshComponent07__pf->StreamingTextureData[5];
	__Local__210.PackedRelativeBox = 4294901760;
	__Local__210.TextureLevelIndex = 43;
	__Local__210.TexelFactor = 300.084900f;
	auto& __Local__211 = bpv__StaticMeshComponent07__pf->StreamingTextureData[6];
	__Local__211.PackedRelativeBox = 4294901760;
	__Local__211.TextureLevelIndex = 44;
	__Local__211.TexelFactor = 300.084900f;
	auto& __Local__212 = bpv__StaticMeshComponent07__pf->StreamingTextureData[7];
	__Local__212.PackedRelativeBox = 4294901760;
	__Local__212.TextureLevelIndex = 45;
	__Local__212.TexelFactor = 300.084900f;
	auto& __Local__213 = bpv__StaticMeshComponent07__pf->StreamingTextureData[8];
	__Local__213.PackedRelativeBox = 4294901760;
	__Local__213.TextureLevelIndex = 46;
	__Local__213.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), false, 0));
	bpv__StaticMeshComponent07__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent07__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__214 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__214 = FVector(-629.171387, -186.514343, -2.137329);
	auto& __Local__215 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__215 = FRotator(0.000000, 179.999802, 0.000000);
	auto& __Local__216 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__216 = FVector(1.000000, 1.102493, 1.000000);
	bpv__StaticMeshComponent07__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), true, 0));
	bpv__StaticMeshComponent013__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent013__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__217 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent013__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__217 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent013__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent013__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent013__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__218 = bpv__StaticMeshComponent013__pf->StreamingTextureData[0];
	__Local__218.PackedRelativeBox = 4294901760;
	__Local__218.TextureLevelIndex = 131;
	__Local__218.TexelFactor = 574.107788f;
	auto& __Local__219 = bpv__StaticMeshComponent013__pf->StreamingTextureData[1];
	__Local__219.PackedRelativeBox = 4294901760;
	__Local__219.TextureLevelIndex = 132;
	__Local__219.TexelFactor = 574.107788f;
	auto& __Local__220 = bpv__StaticMeshComponent013__pf->StreamingTextureData[2];
	__Local__220.PackedRelativeBox = 4294901760;
	__Local__220.TextureLevelIndex = 40;
	__Local__220.TexelFactor = 574.107788f;
	auto& __Local__221 = bpv__StaticMeshComponent013__pf->StreamingTextureData[3];
	__Local__221.PackedRelativeBox = 4294901760;
	__Local__221.TextureLevelIndex = 49;
	__Local__221.TexelFactor = 574.107788f;
	auto& __Local__222 = bpv__StaticMeshComponent013__pf->StreamingTextureData[4];
	__Local__222.PackedRelativeBox = 4294901760;
	__Local__222.TextureLevelIndex = 133;
	__Local__222.TexelFactor = 574.107788f;
	auto& __Local__223 = bpv__StaticMeshComponent013__pf->StreamingTextureData[5];
	__Local__223.PackedRelativeBox = 4294901760;
	__Local__223.TextureLevelIndex = 43;
	__Local__223.TexelFactor = 574.107788f;
	auto& __Local__224 = bpv__StaticMeshComponent013__pf->StreamingTextureData[6];
	__Local__224.PackedRelativeBox = 4294901760;
	__Local__224.TextureLevelIndex = 44;
	__Local__224.TexelFactor = 574.107788f;
	auto& __Local__225 = bpv__StaticMeshComponent013__pf->StreamingTextureData[7];
	__Local__225.PackedRelativeBox = 4294901760;
	__Local__225.TextureLevelIndex = 45;
	__Local__225.TexelFactor = 574.107788f;
	auto& __Local__226 = bpv__StaticMeshComponent013__pf->StreamingTextureData[8];
	__Local__226.PackedRelativeBox = 4294901760;
	__Local__226.TextureLevelIndex = 46;
	__Local__226.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), false, 0));
	bpv__StaticMeshComponent013__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent013__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__227 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent013__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__227 = FVector(276.253174, 427.742920, -12.643311);
	bpv__StaticMeshComponent013__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), true, 0));
	bpv__StaticMeshComponent06__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent06__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__228 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent06__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__228 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent06__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent06__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent06__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__229 = bpv__StaticMeshComponent06__pf->StreamingTextureData[0];
	__Local__229.PackedRelativeBox = 4294901760;
	__Local__229.TextureLevelIndex = 137;
	__Local__229.TexelFactor = 300.084900f;
	auto& __Local__230 = bpv__StaticMeshComponent06__pf->StreamingTextureData[1];
	__Local__230.PackedRelativeBox = 4294901760;
	__Local__230.TextureLevelIndex = 138;
	__Local__230.TexelFactor = 300.084900f;
	auto& __Local__231 = bpv__StaticMeshComponent06__pf->StreamingTextureData[2];
	__Local__231.PackedRelativeBox = 4294901760;
	__Local__231.TextureLevelIndex = 40;
	__Local__231.TexelFactor = 300.084900f;
	auto& __Local__232 = bpv__StaticMeshComponent06__pf->StreamingTextureData[3];
	__Local__232.PackedRelativeBox = 4294901760;
	__Local__232.TextureLevelIndex = 49;
	__Local__232.TexelFactor = 300.084900f;
	auto& __Local__233 = bpv__StaticMeshComponent06__pf->StreamingTextureData[4];
	__Local__233.PackedRelativeBox = 4294901760;
	__Local__233.TextureLevelIndex = 139;
	__Local__233.TexelFactor = 300.084900f;
	auto& __Local__234 = bpv__StaticMeshComponent06__pf->StreamingTextureData[5];
	__Local__234.PackedRelativeBox = 4294901760;
	__Local__234.TextureLevelIndex = 43;
	__Local__234.TexelFactor = 300.084900f;
	auto& __Local__235 = bpv__StaticMeshComponent06__pf->StreamingTextureData[6];
	__Local__235.PackedRelativeBox = 4294901760;
	__Local__235.TextureLevelIndex = 44;
	__Local__235.TexelFactor = 300.084900f;
	auto& __Local__236 = bpv__StaticMeshComponent06__pf->StreamingTextureData[7];
	__Local__236.PackedRelativeBox = 4294901760;
	__Local__236.TextureLevelIndex = 45;
	__Local__236.TexelFactor = 300.084900f;
	auto& __Local__237 = bpv__StaticMeshComponent06__pf->StreamingTextureData[8];
	__Local__237.PackedRelativeBox = 4294901760;
	__Local__237.TextureLevelIndex = 46;
	__Local__237.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), false, 0));
	bpv__StaticMeshComponent06__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent06__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__238 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent06__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__238 = FVector(-5.253418, -466.988159, -2.137329);
	auto& __Local__239 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent06__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__239 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__240 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent06__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__240 = FVector(1.000000, 1.147963, 1.000000);
	bpv__StaticMeshComponent06__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), true, 0));
	bpv__StaticMeshComponent05__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent05__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__241 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent05__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__241 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent05__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent05__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent05__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__242 = bpv__StaticMeshComponent05__pf->StreamingTextureData[0];
	__Local__242.PackedRelativeBox = 4294901760;
	__Local__242.TextureLevelIndex = 137;
	__Local__242.TexelFactor = 300.084900f;
	auto& __Local__243 = bpv__StaticMeshComponent05__pf->StreamingTextureData[1];
	__Local__243.PackedRelativeBox = 4294901760;
	__Local__243.TextureLevelIndex = 138;
	__Local__243.TexelFactor = 300.084900f;
	auto& __Local__244 = bpv__StaticMeshComponent05__pf->StreamingTextureData[2];
	__Local__244.PackedRelativeBox = 4294901760;
	__Local__244.TextureLevelIndex = 40;
	__Local__244.TexelFactor = 300.084900f;
	auto& __Local__245 = bpv__StaticMeshComponent05__pf->StreamingTextureData[3];
	__Local__245.PackedRelativeBox = 4294901760;
	__Local__245.TextureLevelIndex = 49;
	__Local__245.TexelFactor = 300.084900f;
	auto& __Local__246 = bpv__StaticMeshComponent05__pf->StreamingTextureData[4];
	__Local__246.PackedRelativeBox = 4294901760;
	__Local__246.TextureLevelIndex = 139;
	__Local__246.TexelFactor = 300.084900f;
	auto& __Local__247 = bpv__StaticMeshComponent05__pf->StreamingTextureData[5];
	__Local__247.PackedRelativeBox = 4294901760;
	__Local__247.TextureLevelIndex = 43;
	__Local__247.TexelFactor = 300.084900f;
	auto& __Local__248 = bpv__StaticMeshComponent05__pf->StreamingTextureData[6];
	__Local__248.PackedRelativeBox = 4294901760;
	__Local__248.TextureLevelIndex = 44;
	__Local__248.TexelFactor = 300.084900f;
	auto& __Local__249 = bpv__StaticMeshComponent05__pf->StreamingTextureData[7];
	__Local__249.PackedRelativeBox = 4294901760;
	__Local__249.TextureLevelIndex = 45;
	__Local__249.TexelFactor = 300.084900f;
	auto& __Local__250 = bpv__StaticMeshComponent05__pf->StreamingTextureData[8];
	__Local__250.PackedRelativeBox = 4294901760;
	__Local__250.TextureLevelIndex = 46;
	__Local__250.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), false, 0));
	bpv__StaticMeshComponent05__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent05__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__251 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent05__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__251 = FVector(294.746582, -466.988159, -2.137329);
	auto& __Local__252 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent05__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__252 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent05__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), true, 0));
	bpv__StaticMeshComponent04__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent04__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__253 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent04__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__253 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent04__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent04__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent04__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__254 = bpv__StaticMeshComponent04__pf->StreamingTextureData[0];
	__Local__254.PackedRelativeBox = 4294901760;
	__Local__254.TextureLevelIndex = 134;
	__Local__254.TexelFactor = 628.452393f;
	auto& __Local__255 = bpv__StaticMeshComponent04__pf->StreamingTextureData[1];
	__Local__255.PackedRelativeBox = 4294901760;
	__Local__255.TextureLevelIndex = 135;
	__Local__255.TexelFactor = 628.452393f;
	auto& __Local__256 = bpv__StaticMeshComponent04__pf->StreamingTextureData[2];
	__Local__256.PackedRelativeBox = 4294901760;
	__Local__256.TextureLevelIndex = 40;
	__Local__256.TexelFactor = 628.452393f;
	auto& __Local__257 = bpv__StaticMeshComponent04__pf->StreamingTextureData[3];
	__Local__257.PackedRelativeBox = 4294901760;
	__Local__257.TextureLevelIndex = 49;
	__Local__257.TexelFactor = 628.452393f;
	auto& __Local__258 = bpv__StaticMeshComponent04__pf->StreamingTextureData[4];
	__Local__258.PackedRelativeBox = 4294901760;
	__Local__258.TextureLevelIndex = 136;
	__Local__258.TexelFactor = 628.452393f;
	auto& __Local__259 = bpv__StaticMeshComponent04__pf->StreamingTextureData[5];
	__Local__259.PackedRelativeBox = 4294901760;
	__Local__259.TextureLevelIndex = 43;
	__Local__259.TexelFactor = 628.452393f;
	auto& __Local__260 = bpv__StaticMeshComponent04__pf->StreamingTextureData[6];
	__Local__260.PackedRelativeBox = 4294901760;
	__Local__260.TextureLevelIndex = 44;
	__Local__260.TexelFactor = 628.452393f;
	auto& __Local__261 = bpv__StaticMeshComponent04__pf->StreamingTextureData[7];
	__Local__261.PackedRelativeBox = 4294901760;
	__Local__261.TextureLevelIndex = 45;
	__Local__261.TexelFactor = 628.452393f;
	auto& __Local__262 = bpv__StaticMeshComponent04__pf->StreamingTextureData[8];
	__Local__262.PackedRelativeBox = 4294901760;
	__Local__262.TextureLevelIndex = 46;
	__Local__262.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), false, 0));
	bpv__StaticMeshComponent04__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent04__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__263 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent04__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__263 = FVector(590.512817, 148.075272, -2.643433);
	auto& __Local__264 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent04__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__264 = FRotator(0.000000, -90.000694, 0.000000);
	bpv__StaticMeshComponent04__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), true, 0));
	bpv__StaticMeshComponent03__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent03__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__265 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent03__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__265 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent03__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent03__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent03__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__266 = bpv__StaticMeshComponent03__pf->StreamingTextureData[0];
	__Local__266.PackedRelativeBox = 4294901760;
	__Local__266.TextureLevelIndex = 134;
	__Local__266.TexelFactor = 628.452393f;
	auto& __Local__267 = bpv__StaticMeshComponent03__pf->StreamingTextureData[1];
	__Local__267.PackedRelativeBox = 4294901760;
	__Local__267.TextureLevelIndex = 135;
	__Local__267.TexelFactor = 628.452393f;
	auto& __Local__268 = bpv__StaticMeshComponent03__pf->StreamingTextureData[2];
	__Local__268.PackedRelativeBox = 4294901760;
	__Local__268.TextureLevelIndex = 40;
	__Local__268.TexelFactor = 628.452393f;
	auto& __Local__269 = bpv__StaticMeshComponent03__pf->StreamingTextureData[3];
	__Local__269.PackedRelativeBox = 4294901760;
	__Local__269.TextureLevelIndex = 49;
	__Local__269.TexelFactor = 628.452393f;
	auto& __Local__270 = bpv__StaticMeshComponent03__pf->StreamingTextureData[4];
	__Local__270.PackedRelativeBox = 4294901760;
	__Local__270.TextureLevelIndex = 136;
	__Local__270.TexelFactor = 628.452393f;
	auto& __Local__271 = bpv__StaticMeshComponent03__pf->StreamingTextureData[5];
	__Local__271.PackedRelativeBox = 4294901760;
	__Local__271.TextureLevelIndex = 43;
	__Local__271.TexelFactor = 628.452393f;
	auto& __Local__272 = bpv__StaticMeshComponent03__pf->StreamingTextureData[6];
	__Local__272.PackedRelativeBox = 4294901760;
	__Local__272.TextureLevelIndex = 44;
	__Local__272.TexelFactor = 628.452393f;
	auto& __Local__273 = bpv__StaticMeshComponent03__pf->StreamingTextureData[7];
	__Local__273.PackedRelativeBox = 4294901760;
	__Local__273.TextureLevelIndex = 45;
	__Local__273.TexelFactor = 628.452393f;
	auto& __Local__274 = bpv__StaticMeshComponent03__pf->StreamingTextureData[8];
	__Local__274.PackedRelativeBox = 4294901760;
	__Local__274.TextureLevelIndex = 46;
	__Local__274.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), false, 0));
	bpv__StaticMeshComponent03__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent03__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__275 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent03__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__275 = FVector(-354.439453, 443.137390, -2.643433);
	auto& __Local__276 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent03__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__276 = FRotator(0.000000, -0.000519, 0.000000);
	bpv__StaticMeshComponent03__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), true, 0));
	bpv__StaticMeshComponent02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent02__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__277 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent02__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__277 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent02__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent02__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent02__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__278 = bpv__StaticMeshComponent02__pf->StreamingTextureData[0];
	__Local__278.PackedRelativeBox = 4294901760;
	__Local__278.TextureLevelIndex = 134;
	__Local__278.TexelFactor = 628.452393f;
	auto& __Local__279 = bpv__StaticMeshComponent02__pf->StreamingTextureData[1];
	__Local__279.PackedRelativeBox = 4294901760;
	__Local__279.TextureLevelIndex = 135;
	__Local__279.TexelFactor = 628.452393f;
	auto& __Local__280 = bpv__StaticMeshComponent02__pf->StreamingTextureData[2];
	__Local__280.PackedRelativeBox = 4294901760;
	__Local__280.TextureLevelIndex = 40;
	__Local__280.TexelFactor = 628.452393f;
	auto& __Local__281 = bpv__StaticMeshComponent02__pf->StreamingTextureData[3];
	__Local__281.PackedRelativeBox = 4294901760;
	__Local__281.TextureLevelIndex = 49;
	__Local__281.TexelFactor = 628.452393f;
	auto& __Local__282 = bpv__StaticMeshComponent02__pf->StreamingTextureData[4];
	__Local__282.PackedRelativeBox = 4294901760;
	__Local__282.TextureLevelIndex = 136;
	__Local__282.TexelFactor = 628.452393f;
	auto& __Local__283 = bpv__StaticMeshComponent02__pf->StreamingTextureData[5];
	__Local__283.PackedRelativeBox = 4294901760;
	__Local__283.TextureLevelIndex = 43;
	__Local__283.TexelFactor = 628.452393f;
	auto& __Local__284 = bpv__StaticMeshComponent02__pf->StreamingTextureData[6];
	__Local__284.PackedRelativeBox = 4294901760;
	__Local__284.TextureLevelIndex = 44;
	__Local__284.TexelFactor = 628.452393f;
	auto& __Local__285 = bpv__StaticMeshComponent02__pf->StreamingTextureData[7];
	__Local__285.PackedRelativeBox = 4294901760;
	__Local__285.TextureLevelIndex = 45;
	__Local__285.TexelFactor = 628.452393f;
	auto& __Local__286 = bpv__StaticMeshComponent02__pf->StreamingTextureData[8];
	__Local__286.PackedRelativeBox = 4294901760;
	__Local__286.TextureLevelIndex = 46;
	__Local__286.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), false, 0));
	bpv__StaticMeshComponent02__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent02__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__287 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent02__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__287 = FVector(-649.487061, -189.153275, -2.643433);
	auto& __Local__288 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent02__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__288 = FRotator(0.000000, 89.999565, 0.000000);
	bpv__StaticMeshComponent02__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), true, 0));
	bpv__StaticMeshComponent01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent01__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__289 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent01__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__289 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent01__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent01__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent01__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__290 = bpv__StaticMeshComponent01__pf->StreamingTextureData[0];
	__Local__290.PackedRelativeBox = 4294901760;
	__Local__290.TextureLevelIndex = 134;
	__Local__290.TexelFactor = 628.452393f;
	auto& __Local__291 = bpv__StaticMeshComponent01__pf->StreamingTextureData[1];
	__Local__291.PackedRelativeBox = 4294901760;
	__Local__291.TextureLevelIndex = 135;
	__Local__291.TexelFactor = 628.452393f;
	auto& __Local__292 = bpv__StaticMeshComponent01__pf->StreamingTextureData[2];
	__Local__292.PackedRelativeBox = 4294901760;
	__Local__292.TextureLevelIndex = 40;
	__Local__292.TexelFactor = 628.452393f;
	auto& __Local__293 = bpv__StaticMeshComponent01__pf->StreamingTextureData[3];
	__Local__293.PackedRelativeBox = 4294901760;
	__Local__293.TextureLevelIndex = 49;
	__Local__293.TexelFactor = 628.452393f;
	auto& __Local__294 = bpv__StaticMeshComponent01__pf->StreamingTextureData[4];
	__Local__294.PackedRelativeBox = 4294901760;
	__Local__294.TextureLevelIndex = 136;
	__Local__294.TexelFactor = 628.452393f;
	auto& __Local__295 = bpv__StaticMeshComponent01__pf->StreamingTextureData[5];
	__Local__295.PackedRelativeBox = 4294901760;
	__Local__295.TextureLevelIndex = 43;
	__Local__295.TexelFactor = 628.452393f;
	auto& __Local__296 = bpv__StaticMeshComponent01__pf->StreamingTextureData[6];
	__Local__296.PackedRelativeBox = 4294901760;
	__Local__296.TextureLevelIndex = 44;
	__Local__296.TexelFactor = 628.452393f;
	auto& __Local__297 = bpv__StaticMeshComponent01__pf->StreamingTextureData[7];
	__Local__297.PackedRelativeBox = 4294901760;
	__Local__297.TextureLevelIndex = 45;
	__Local__297.TexelFactor = 628.452393f;
	auto& __Local__298 = bpv__StaticMeshComponent01__pf->StreamingTextureData[8];
	__Local__298.PackedRelativeBox = 4294901760;
	__Local__298.TextureLevelIndex = 46;
	__Local__298.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), false, 0));
	bpv__StaticMeshComponent01__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent01__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__299 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__299 = FVector(295.467529, -484.211182, -2.643433);
	auto& __Local__300 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__300 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent01__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), true, 0));
	bpv__StaticMeshComponent0__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__301 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__301 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__302 = bpv__StaticMeshComponent0__pf->StreamingTextureData[0];
	__Local__302.PackedRelativeBox = 4294901760;
	__Local__302.TextureLevelIndex = 131;
	__Local__302.TexelFactor = 574.107788f;
	auto& __Local__303 = bpv__StaticMeshComponent0__pf->StreamingTextureData[1];
	__Local__303.PackedRelativeBox = 4294901760;
	__Local__303.TextureLevelIndex = 132;
	__Local__303.TexelFactor = 574.107788f;
	auto& __Local__304 = bpv__StaticMeshComponent0__pf->StreamingTextureData[2];
	__Local__304.PackedRelativeBox = 4294901760;
	__Local__304.TextureLevelIndex = 40;
	__Local__304.TexelFactor = 574.107788f;
	auto& __Local__305 = bpv__StaticMeshComponent0__pf->StreamingTextureData[3];
	__Local__305.PackedRelativeBox = 4294901760;
	__Local__305.TextureLevelIndex = 49;
	__Local__305.TexelFactor = 574.107788f;
	auto& __Local__306 = bpv__StaticMeshComponent0__pf->StreamingTextureData[4];
	__Local__306.PackedRelativeBox = 4294901760;
	__Local__306.TextureLevelIndex = 133;
	__Local__306.TexelFactor = 574.107788f;
	auto& __Local__307 = bpv__StaticMeshComponent0__pf->StreamingTextureData[5];
	__Local__307.PackedRelativeBox = 4294901760;
	__Local__307.TextureLevelIndex = 43;
	__Local__307.TexelFactor = 574.107788f;
	auto& __Local__308 = bpv__StaticMeshComponent0__pf->StreamingTextureData[6];
	__Local__308.PackedRelativeBox = 4294901760;
	__Local__308.TextureLevelIndex = 44;
	__Local__308.TexelFactor = 574.107788f;
	auto& __Local__309 = bpv__StaticMeshComponent0__pf->StreamingTextureData[7];
	__Local__309.PackedRelativeBox = 4294901760;
	__Local__309.TextureLevelIndex = 45;
	__Local__309.TexelFactor = 574.107788f;
	auto& __Local__310 = bpv__StaticMeshComponent0__pf->StreamingTextureData[8];
	__Local__310.PackedRelativeBox = 4294901760;
	__Local__310.TextureLevelIndex = 46;
	__Local__310.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), false, 0));
	bpv__StaticMeshComponent0__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__311 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__311 = FVector(576.253174, 427.742920, -12.643311);
	bpv__StaticMeshComponent0__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), true, 0));
	bpv__StaticMeshComponent028__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent028__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent028__pf->ForcedLodModel = 1;
	auto& __Local__312 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent028__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__312 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent028__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent028__pf->StreamingTextureData.AddUninitialized(104);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent028__pf->StreamingTextureData.GetData(), 104);
	auto& __Local__313 = bpv__StaticMeshComponent028__pf->StreamingTextureData[0];
	__Local__313.PackedRelativeBox = 4242407592;
	__Local__313.TextureLevelIndex = 47;
	__Local__313.TexelFactor = 503.541595f;
	auto& __Local__314 = bpv__StaticMeshComponent028__pf->StreamingTextureData[1];
	__Local__314.PackedRelativeBox = 3839758422;
	__Local__314.TextureLevelIndex = 95;
	__Local__314.TexelFactor = 266.036255f;
	auto& __Local__315 = bpv__StaticMeshComponent028__pf->StreamingTextureData[2];
	__Local__315.PackedRelativeBox = 4294837288;
	__Local__315.TextureLevelIndex = 49;
	__Local__315.TexelFactor = 485.693573f;
	auto& __Local__316 = bpv__StaticMeshComponent028__pf->StreamingTextureData[3];
	__Local__316.PackedRelativeBox = 3839758422;
	__Local__316.TextureLevelIndex = 96;
	__Local__316.TexelFactor = 266.036255f;
	auto& __Local__317 = bpv__StaticMeshComponent028__pf->StreamingTextureData[4];
	__Local__317.PackedRelativeBox = 4294836264;
	__Local__317.TextureLevelIndex = 40;
	__Local__317.TexelFactor = 485.693573f;
	auto& __Local__318 = bpv__StaticMeshComponent028__pf->StreamingTextureData[5];
	__Local__318.PackedRelativeBox = 3839755318;
	__Local__318.TextureLevelIndex = 97;
	__Local__318.TexelFactor = 294.137054f;
	auto& __Local__319 = bpv__StaticMeshComponent028__pf->StreamingTextureData[6];
	__Local__319.PackedRelativeBox = 4294836264;
	__Local__319.TextureLevelIndex = 44;
	__Local__319.TexelFactor = 485.693573f;
	auto& __Local__320 = bpv__StaticMeshComponent028__pf->StreamingTextureData[7];
	__Local__320.PackedRelativeBox = 4294837288;
	__Local__320.TextureLevelIndex = 45;
	__Local__320.TexelFactor = 485.693573f;
	auto& __Local__321 = bpv__StaticMeshComponent028__pf->StreamingTextureData[8];
	__Local__321.PackedRelativeBox = 4242407496;
	__Local__321.TextureLevelIndex = 76;
	__Local__321.TexelFactor = 377.268280f;
	auto& __Local__322 = bpv__StaticMeshComponent028__pf->StreamingTextureData[9];
	__Local__322.PackedRelativeBox = 3892188320;
	__Local__322.TextureLevelIndex = 1;
	__Local__322.TexelFactor = 360.549042f;
	auto& __Local__323 = bpv__StaticMeshComponent028__pf->StreamingTextureData[10];
	__Local__323.PackedRelativeBox = 1820210184;
	__Local__323.TextureLevelIndex = 98;
	__Local__323.TexelFactor = 159.030655f;
	auto& __Local__324 = bpv__StaticMeshComponent028__pf->StreamingTextureData[11];
	__Local__324.PackedRelativeBox = 3908699305;
	__Local__324.TextureLevelIndex = 90;
	__Local__324.TexelFactor = 289.310059f;
	auto& __Local__325 = bpv__StaticMeshComponent028__pf->StreamingTextureData[12];
	__Local__325.PackedRelativeBox = 3906602153;
	__Local__325.TextureLevelIndex = 91;
	__Local__325.TexelFactor = 365.282837f;
	auto& __Local__326 = bpv__StaticMeshComponent028__pf->StreamingTextureData[13];
	__Local__326.PackedRelativeBox = 3906602153;
	__Local__326.TextureLevelIndex = 92;
	__Local__326.TexelFactor = 365.282837f;
	auto& __Local__327 = bpv__StaticMeshComponent028__pf->StreamingTextureData[14];
	__Local__327.PackedRelativeBox = 4242407592;
	__Local__327.TextureLevelIndex = 87;
	__Local__327.TexelFactor = 503.541595f;
	auto& __Local__328 = bpv__StaticMeshComponent028__pf->StreamingTextureData[15];
	__Local__328.PackedRelativeBox = 4242407592;
	__Local__328.TextureLevelIndex = 62;
	__Local__328.TexelFactor = 503.541595f;
	auto& __Local__329 = bpv__StaticMeshComponent028__pf->StreamingTextureData[16];
	__Local__329.PackedRelativeBox = 4292739200;
	__Local__329.TextureLevelIndex = 21;
	__Local__329.TexelFactor = 582.611328f;
	auto& __Local__330 = bpv__StaticMeshComponent028__pf->StreamingTextureData[17];
	__Local__330.PackedRelativeBox = 4242461750;
	__Local__330.TextureLevelIndex = 99;
	__Local__330.TexelFactor = 247.204407f;
	auto& __Local__331 = bpv__StaticMeshComponent028__pf->StreamingTextureData[18];
	__Local__331.PackedRelativeBox = 4159589258;
	__Local__331.TextureLevelIndex = 100;
	__Local__331.TexelFactor = 389.436890f;
	auto& __Local__332 = bpv__StaticMeshComponent028__pf->StreamingTextureData[19];
	__Local__332.PackedRelativeBox = 3908699305;
	__Local__332.TextureLevelIndex = 53;
	__Local__332.TexelFactor = 289.310059f;
	auto& __Local__333 = bpv__StaticMeshComponent028__pf->StreamingTextureData[20];
	__Local__333.PackedRelativeBox = 4023273354;
	__Local__333.TextureLevelIndex = 101;
	__Local__333.TexelFactor = 309.875275f;
	auto& __Local__334 = bpv__StaticMeshComponent028__pf->StreamingTextureData[21];
	__Local__334.PackedRelativeBox = 4023273354;
	__Local__334.TextureLevelIndex = 102;
	__Local__334.TexelFactor = 309.875275f;
	auto& __Local__335 = bpv__StaticMeshComponent028__pf->StreamingTextureData[22];
	__Local__335.PackedRelativeBox = 4294836352;
	__Local__335.TextureLevelIndex = 4;
	__Local__335.TexelFactor = 582.611328f;
	auto& __Local__336 = bpv__StaticMeshComponent028__pf->StreamingTextureData[23];
	__Local__336.PackedRelativeBox = 4291822472;
	__Local__336.TextureLevelIndex = 103;
	__Local__336.TexelFactor = 489.156616f;
	auto& __Local__337 = bpv__StaticMeshComponent028__pf->StreamingTextureData[24];
	__Local__337.PackedRelativeBox = 3972435074;
	__Local__337.TextureLevelIndex = 57;
	__Local__337.TexelFactor = 255.339584f;
	auto& __Local__338 = bpv__StaticMeshComponent028__pf->StreamingTextureData[25];
	__Local__338.PackedRelativeBox = 3972435074;
	__Local__338.TextureLevelIndex = 58;
	__Local__338.TexelFactor = 255.339584f;
	auto& __Local__339 = bpv__StaticMeshComponent028__pf->StreamingTextureData[26];
	__Local__339.PackedRelativeBox = 3906816171;
	__Local__339.TextureLevelIndex = 89;
	__Local__339.TexelFactor = 276.375641f;
	auto& __Local__340 = bpv__StaticMeshComponent028__pf->StreamingTextureData[27];
	__Local__340.PackedRelativeBox = 1825051810;
	__Local__340.TextureLevelIndex = 59;
	__Local__340.TexelFactor = 158.867508f;
	auto& __Local__341 = bpv__StaticMeshComponent028__pf->StreamingTextureData[28];
	__Local__341.PackedRelativeBox = 1825051810;
	__Local__341.TextureLevelIndex = 79;
	__Local__341.TexelFactor = 158.867508f;
	auto& __Local__342 = bpv__StaticMeshComponent028__pf->StreamingTextureData[29];
	__Local__342.PackedRelativeBox = 3972435074;
	__Local__342.TextureLevelIndex = 93;
	__Local__342.TexelFactor = 255.339584f;
	auto& __Local__343 = bpv__StaticMeshComponent028__pf->StreamingTextureData[30];
	__Local__343.PackedRelativeBox = 4241096864;
	__Local__343.TextureLevelIndex = 64;
	__Local__343.TexelFactor = 488.750946f;
	auto& __Local__344 = bpv__StaticMeshComponent028__pf->StreamingTextureData[31];
	__Local__344.PackedRelativeBox = 4294836352;
	__Local__344.TextureLevelIndex = 24;
	__Local__344.TexelFactor = 582.611328f;
	auto& __Local__345 = bpv__StaticMeshComponent028__pf->StreamingTextureData[32];
	__Local__345.PackedRelativeBox = 4241096864;
	__Local__345.TextureLevelIndex = 60;
	__Local__345.TexelFactor = 488.750946f;
	auto& __Local__346 = bpv__StaticMeshComponent028__pf->StreamingTextureData[33];
	__Local__346.PackedRelativeBox = 4242407496;
	__Local__346.TextureLevelIndex = 88;
	__Local__346.TexelFactor = 377.268280f;
	auto& __Local__347 = bpv__StaticMeshComponent028__pf->StreamingTextureData[34];
	__Local__347.PackedRelativeBox = 3487314819;
	__Local__347.TextureLevelIndex = 36;
	__Local__347.TexelFactor = 241.659546f;
	auto& __Local__348 = bpv__StaticMeshComponent028__pf->StreamingTextureData[35];
	__Local__348.PackedRelativeBox = 3487314819;
	__Local__348.TextureLevelIndex = 26;
	__Local__348.TexelFactor = 241.659546f;
	auto& __Local__349 = bpv__StaticMeshComponent028__pf->StreamingTextureData[36];
	__Local__349.PackedRelativeBox = 3972435074;
	__Local__349.TextureLevelIndex = 56;
	__Local__349.TexelFactor = 255.339584f;
	auto& __Local__350 = bpv__StaticMeshComponent028__pf->StreamingTextureData[37];
	__Local__350.PackedRelativeBox = 4292739968;
	__Local__350.TextureLevelIndex = 5;
	__Local__350.TexelFactor = 489.786438f;
	auto& __Local__351 = bpv__StaticMeshComponent028__pf->StreamingTextureData[38];
	__Local__351.PackedRelativeBox = 3487445440;
	__Local__351.TextureLevelIndex = 32;
	__Local__351.TexelFactor = 163.869873f;
	auto& __Local__352 = bpv__StaticMeshComponent028__pf->StreamingTextureData[39];
	__Local__352.PackedRelativeBox = 4292739968;
	__Local__352.TextureLevelIndex = 41;
	__Local__352.TexelFactor = 489.786438f;
	auto& __Local__353 = bpv__StaticMeshComponent028__pf->StreamingTextureData[40];
	__Local__353.PackedRelativeBox = 1558057046;
	__Local__353.TextureLevelIndex = 51;
	__Local__353.TexelFactor = 457.351288f;
	auto& __Local__354 = bpv__StaticMeshComponent028__pf->StreamingTextureData[41];
	__Local__354.PackedRelativeBox = 4294836352;
	__Local__354.TextureLevelIndex = 6;
	__Local__354.TexelFactor = 582.611328f;
	auto& __Local__355 = bpv__StaticMeshComponent028__pf->StreamingTextureData[42];
	__Local__355.PackedRelativeBox = 4292739968;
	__Local__355.TextureLevelIndex = 7;
	__Local__355.TexelFactor = 489.786438f;
	auto& __Local__356 = bpv__StaticMeshComponent028__pf->StreamingTextureData[43];
	__Local__356.PackedRelativeBox = 4288568544;
	__Local__356.TextureLevelIndex = 18;
	__Local__356.TexelFactor = 102.411812f;
	auto& __Local__357 = bpv__StaticMeshComponent028__pf->StreamingTextureData[44];
	__Local__357.PackedRelativeBox = 2879324384;
	__Local__357.TextureLevelIndex = 11;
	__Local__357.TexelFactor = 163.613800f;
	auto& __Local__358 = bpv__StaticMeshComponent028__pf->StreamingTextureData[45];
	__Local__358.PackedRelativeBox = 2879324384;
	__Local__358.TextureLevelIndex = 12;
	__Local__358.TexelFactor = 163.613800f;
	auto& __Local__359 = bpv__StaticMeshComponent028__pf->StreamingTextureData[46];
	__Local__359.PackedRelativeBox = 3751747808;
	__Local__359.TextureLevelIndex = 8;
	__Local__359.TexelFactor = 218.206085f;
	auto& __Local__360 = bpv__StaticMeshComponent028__pf->StreamingTextureData[47];
	__Local__360.PackedRelativeBox = 4288634080;
	__Local__360.TextureLevelIndex = 14;
	__Local__360.TexelFactor = 160.424301f;
	auto& __Local__361 = bpv__StaticMeshComponent028__pf->StreamingTextureData[48];
	__Local__361.PackedRelativeBox = 4288634080;
	__Local__361.TextureLevelIndex = 15;
	__Local__361.TexelFactor = 160.424301f;
	auto& __Local__362 = bpv__StaticMeshComponent028__pf->StreamingTextureData[49];
	__Local__362.PackedRelativeBox = 4288568544;
	__Local__362.TextureLevelIndex = 10;
	__Local__362.TexelFactor = 102.411812f;
	auto& __Local__363 = bpv__StaticMeshComponent028__pf->StreamingTextureData[50];
	__Local__363.PackedRelativeBox = 3751747808;
	__Local__363.TextureLevelIndex = 17;
	__Local__363.TexelFactor = 218.206085f;
	auto& __Local__364 = bpv__StaticMeshComponent028__pf->StreamingTextureData[51];
	__Local__364.PackedRelativeBox = 3751747808;
	__Local__364.TextureLevelIndex = 9;
	__Local__364.TexelFactor = 218.206085f;
	auto& __Local__365 = bpv__StaticMeshComponent028__pf->StreamingTextureData[52];
	__Local__365.PackedRelativeBox = 4292739200;
	__Local__365.TextureLevelIndex = 19;
	__Local__365.TexelFactor = 481.460693f;
	auto& __Local__366 = bpv__StaticMeshComponent028__pf->StreamingTextureData[53];
	__Local__366.PackedRelativeBox = 4292739200;
	__Local__366.TextureLevelIndex = 20;
	__Local__366.TexelFactor = 481.460693f;
	auto& __Local__367 = bpv__StaticMeshComponent028__pf->StreamingTextureData[54];
	__Local__367.PackedRelativeBox = 4294836264;
	__Local__367.TextureLevelIndex = 43;
	__Local__367.TexelFactor = 485.693573f;
	auto& __Local__368 = bpv__StaticMeshComponent028__pf->StreamingTextureData[55];
	__Local__368.PackedRelativeBox = 4292739200;
	__Local__368.TextureLevelIndex = 22;
	__Local__368.TexelFactor = 481.460693f;
	auto& __Local__369 = bpv__StaticMeshComponent028__pf->StreamingTextureData[56];
	__Local__369.PackedRelativeBox = 4292739488;
	__Local__369.TextureLevelIndex = 25;
	__Local__369.TexelFactor = 501.479065f;
	auto& __Local__370 = bpv__StaticMeshComponent028__pf->StreamingTextureData[57];
	__Local__370.PackedRelativeBox = 4292739200;
	__Local__370.TextureLevelIndex = 23;
	__Local__370.TexelFactor = 582.611328f;
	auto& __Local__371 = bpv__StaticMeshComponent028__pf->StreamingTextureData[58];
	__Local__371.PackedRelativeBox = 4294837288;
	__Local__371.TextureLevelIndex = 46;
	__Local__371.TexelFactor = 485.693573f;
	auto& __Local__372 = bpv__StaticMeshComponent028__pf->StreamingTextureData[59];
	__Local__372.PackedRelativeBox = 2832684207;
	__Local__372.TextureLevelIndex = 31;
	__Local__372.TexelFactor = 390.472198f;
	auto& __Local__373 = bpv__StaticMeshComponent028__pf->StreamingTextureData[60];
	__Local__373.PackedRelativeBox = 4241426473;
	__Local__373.TextureLevelIndex = 104;
	__Local__373.TexelFactor = 310.813538f;
	auto& __Local__374 = bpv__StaticMeshComponent028__pf->StreamingTextureData[61];
	__Local__374.PackedRelativeBox = 4244045999;
	__Local__374.TextureLevelIndex = 38;
	__Local__374.TexelFactor = 582.611328f;
	auto& __Local__375 = bpv__StaticMeshComponent028__pf->StreamingTextureData[62];
	__Local__375.PackedRelativeBox = 4241426473;
	__Local__375.TextureLevelIndex = 105;
	__Local__375.TexelFactor = 310.813538f;
	auto& __Local__376 = bpv__StaticMeshComponent028__pf->StreamingTextureData[63];
	__Local__376.PackedRelativeBox = 4159589258;
	__Local__376.TextureLevelIndex = 106;
	__Local__376.TexelFactor = 389.436890f;
	auto& __Local__377 = bpv__StaticMeshComponent028__pf->StreamingTextureData[64];
	__Local__377.PackedRelativeBox = 3487445440;
	__Local__377.TextureLevelIndex = 37;
	__Local__377.TexelFactor = 163.869873f;
	auto& __Local__378 = bpv__StaticMeshComponent028__pf->StreamingTextureData[65];
	__Local__378.PackedRelativeBox = 4242407496;
	__Local__378.TextureLevelIndex = 82;
	__Local__378.TexelFactor = 377.268280f;
	auto& __Local__379 = bpv__StaticMeshComponent028__pf->StreamingTextureData[66];
	__Local__379.PackedRelativeBox = 4241426473;
	__Local__379.TextureLevelIndex = 107;
	__Local__379.TexelFactor = 310.813538f;
	auto& __Local__380 = bpv__StaticMeshComponent028__pf->StreamingTextureData[67];
	__Local__380.PackedRelativeBox = 1820210184;
	__Local__380.TextureLevelIndex = 108;
	__Local__380.TexelFactor = 159.030655f;
	auto& __Local__381 = bpv__StaticMeshComponent028__pf->StreamingTextureData[68];
	__Local__381.PackedRelativeBox = 3908699305;
	__Local__381.TextureLevelIndex = 54;
	__Local__381.TexelFactor = 289.310059f;
	auto& __Local__382 = bpv__StaticMeshComponent028__pf->StreamingTextureData[69];
	__Local__382.PackedRelativeBox = 4242407496;
	__Local__382.TextureLevelIndex = 81;
	__Local__382.TexelFactor = 377.268280f;
	auto& __Local__383 = bpv__StaticMeshComponent028__pf->StreamingTextureData[70];
	__Local__383.PackedRelativeBox = 4241492008;
	__Local__383.TextureLevelIndex = 109;
	__Local__383.TexelFactor = 485.693573f;
	auto& __Local__384 = bpv__StaticMeshComponent028__pf->StreamingTextureData[71];
	__Local__384.PackedRelativeBox = 1558057046;
	__Local__384.TextureLevelIndex = 50;
	__Local__384.TexelFactor = 457.351288f;
	auto& __Local__385 = bpv__StaticMeshComponent028__pf->StreamingTextureData[72];
	__Local__385.PackedRelativeBox = 3839755318;
	__Local__385.TextureLevelIndex = 110;
	__Local__385.TexelFactor = 294.137054f;
	auto& __Local__386 = bpv__StaticMeshComponent028__pf->StreamingTextureData[73];
	__Local__386.PackedRelativeBox = 4241492008;
	__Local__386.TextureLevelIndex = 111;
	__Local__386.TexelFactor = 485.693573f;
	auto& __Local__387 = bpv__StaticMeshComponent028__pf->StreamingTextureData[74];
	__Local__387.PackedRelativeBox = 4241492008;
	__Local__387.TextureLevelIndex = 112;
	__Local__387.TexelFactor = 485.693573f;
	auto& __Local__388 = bpv__StaticMeshComponent028__pf->StreamingTextureData[75];
	__Local__388.PackedRelativeBox = 3487445440;
	__Local__388.TextureLevelIndex = 2;
	__Local__388.TexelFactor = 163.869873f;
	auto& __Local__389 = bpv__StaticMeshComponent028__pf->StreamingTextureData[76];
	__Local__389.PackedRelativeBox = 4292739488;
	__Local__389.TextureLevelIndex = 28;
	__Local__389.TexelFactor = 501.479065f;
	auto& __Local__390 = bpv__StaticMeshComponent028__pf->StreamingTextureData[77];
	__Local__390.PackedRelativeBox = 4242407496;
	__Local__390.TextureLevelIndex = 78;
	__Local__390.TexelFactor = 377.268280f;
	auto& __Local__391 = bpv__StaticMeshComponent028__pf->StreamingTextureData[78];
	__Local__391.PackedRelativeBox = 2832684207;
	__Local__391.TextureLevelIndex = 29;
	__Local__391.TexelFactor = 390.472198f;
	auto& __Local__392 = bpv__StaticMeshComponent028__pf->StreamingTextureData[79];
	__Local__392.PackedRelativeBox = 3906816171;
	__Local__392.TextureLevelIndex = 86;
	__Local__392.TexelFactor = 276.375641f;
	auto& __Local__393 = bpv__StaticMeshComponent028__pf->StreamingTextureData[80];
	__Local__393.PackedRelativeBox = 4242407496;
	__Local__393.TextureLevelIndex = 77;
	__Local__393.TexelFactor = 377.268280f;
	auto& __Local__394 = bpv__StaticMeshComponent028__pf->StreamingTextureData[81];
	__Local__394.PackedRelativeBox = 4288568544;
	__Local__394.TextureLevelIndex = 13;
	__Local__394.TexelFactor = 102.411812f;
	auto& __Local__395 = bpv__StaticMeshComponent028__pf->StreamingTextureData[82];
	__Local__395.PackedRelativeBox = 4292739488;
	__Local__395.TextureLevelIndex = 35;
	__Local__395.TexelFactor = 501.479065f;
	auto& __Local__396 = bpv__StaticMeshComponent028__pf->StreamingTextureData[83];
	__Local__396.PackedRelativeBox = 4244045999;
	__Local__396.TextureLevelIndex = 34;
	__Local__396.TexelFactor = 582.611328f;
	auto& __Local__397 = bpv__StaticMeshComponent028__pf->StreamingTextureData[84];
	__Local__397.PackedRelativeBox = 4242461750;
	__Local__397.TextureLevelIndex = 113;
	__Local__397.TexelFactor = 247.204407f;
	auto& __Local__398 = bpv__StaticMeshComponent028__pf->StreamingTextureData[85];
	__Local__398.PackedRelativeBox = 3487314819;
	__Local__398.TextureLevelIndex = 3;
	__Local__398.TexelFactor = 241.659546f;
	auto& __Local__399 = bpv__StaticMeshComponent028__pf->StreamingTextureData[86];
	__Local__399.PackedRelativeBox = 3906816171;
	__Local__399.TextureLevelIndex = 85;
	__Local__399.TexelFactor = 276.375641f;
	auto& __Local__400 = bpv__StaticMeshComponent028__pf->StreamingTextureData[87];
	__Local__400.PackedRelativeBox = 4242461750;
	__Local__400.TextureLevelIndex = 114;
	__Local__400.TexelFactor = 247.204407f;
	auto& __Local__401 = bpv__StaticMeshComponent028__pf->StreamingTextureData[88];
	__Local__401.PackedRelativeBox = 4291822472;
	__Local__401.TextureLevelIndex = 115;
	__Local__401.TexelFactor = 489.156616f;
	auto& __Local__402 = bpv__StaticMeshComponent028__pf->StreamingTextureData[89];
	__Local__402.PackedRelativeBox = 3839755318;
	__Local__402.TextureLevelIndex = 116;
	__Local__402.TexelFactor = 294.137054f;
	auto& __Local__403 = bpv__StaticMeshComponent028__pf->StreamingTextureData[90];
	__Local__403.PackedRelativeBox = 1558057046;
	__Local__403.TextureLevelIndex = 48;
	__Local__403.TexelFactor = 457.351288f;
	auto& __Local__404 = bpv__StaticMeshComponent028__pf->StreamingTextureData[91];
	__Local__404.PackedRelativeBox = 4241096864;
	__Local__404.TextureLevelIndex = 61;
	__Local__404.TexelFactor = 488.750946f;
	auto& __Local__405 = bpv__StaticMeshComponent028__pf->StreamingTextureData[92];
	__Local__405.PackedRelativeBox = 4242407496;
	__Local__405.TextureLevelIndex = 80;
	__Local__405.TexelFactor = 377.268280f;
	auto& __Local__406 = bpv__StaticMeshComponent028__pf->StreamingTextureData[93];
	__Local__406.PackedRelativeBox = 4244045999;
	__Local__406.TextureLevelIndex = 33;
	__Local__406.TexelFactor = 582.611328f;
	auto& __Local__407 = bpv__StaticMeshComponent028__pf->StreamingTextureData[94];
	__Local__407.PackedRelativeBox = 4023273354;
	__Local__407.TextureLevelIndex = 117;
	__Local__407.TexelFactor = 309.875275f;
	auto& __Local__408 = bpv__StaticMeshComponent028__pf->StreamingTextureData[95];
	__Local__408.PackedRelativeBox = 1825051810;
	__Local__408.TextureLevelIndex = 84;
	__Local__408.TexelFactor = 158.867508f;
	auto& __Local__409 = bpv__StaticMeshComponent028__pf->StreamingTextureData[96];
	__Local__409.PackedRelativeBox = 3906602153;
	__Local__409.TextureLevelIndex = 55;
	__Local__409.TexelFactor = 365.282837f;
	auto& __Local__410 = bpv__StaticMeshComponent028__pf->StreamingTextureData[97];
	__Local__410.PackedRelativeBox = 1820210184;
	__Local__410.TextureLevelIndex = 118;
	__Local__410.TexelFactor = 159.030655f;
	auto& __Local__411 = bpv__StaticMeshComponent028__pf->StreamingTextureData[98];
	__Local__411.PackedRelativeBox = 4291822472;
	__Local__411.TextureLevelIndex = 119;
	__Local__411.TexelFactor = 489.156616f;
	auto& __Local__412 = bpv__StaticMeshComponent028__pf->StreamingTextureData[99];
	__Local__412.PackedRelativeBox = 2832684207;
	__Local__412.TextureLevelIndex = 30;
	__Local__412.TexelFactor = 390.472198f;
	auto& __Local__413 = bpv__StaticMeshComponent028__pf->StreamingTextureData[100];
	__Local__413.PackedRelativeBox = 4288634080;
	__Local__413.TextureLevelIndex = 27;
	__Local__413.TexelFactor = 160.424301f;
	auto& __Local__414 = bpv__StaticMeshComponent028__pf->StreamingTextureData[101];
	__Local__414.PackedRelativeBox = 3839758422;
	__Local__414.TextureLevelIndex = 120;
	__Local__414.TexelFactor = 266.036255f;
	auto& __Local__415 = bpv__StaticMeshComponent028__pf->StreamingTextureData[102];
	__Local__415.PackedRelativeBox = 2879324384;
	__Local__415.TextureLevelIndex = 16;
	__Local__415.TexelFactor = 163.613800f;
	auto& __Local__416 = bpv__StaticMeshComponent028__pf->StreamingTextureData[103];
	__Local__416.PackedRelativeBox = 4159589258;
	__Local__416.TextureLevelIndex = 121;
	__Local__416.TexelFactor = 389.436890f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), false, 0));
	bpv__StaticMeshComponent028__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__417 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent028__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__417 = FVector(405.652191, -128.525452, 315.836548);
	bpv__StaticMeshComponent028__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), true, 0));
	bpv__StaticMeshComponent029__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent029__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent029__pf->ForcedLodModel = 1;
	auto& __Local__418 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent029__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__418 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent029__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent029__pf->StreamingTextureData.AddUninitialized(104);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent029__pf->StreamingTextureData.GetData(), 104);
	auto& __Local__419 = bpv__StaticMeshComponent029__pf->StreamingTextureData[0];
	__Local__419.PackedRelativeBox = 4283892480;
	__Local__419.TextureLevelIndex = 47;
	__Local__419.TexelFactor = 503.541595f;
	auto& __Local__420 = bpv__StaticMeshComponent029__pf->StreamingTextureData[1];
	__Local__420.PackedRelativeBox = 3819507456;
	__Local__420.TextureLevelIndex = 95;
	__Local__420.TexelFactor = 266.036255f;
	auto& __Local__421 = bpv__StaticMeshComponent029__pf->StreamingTextureData[2];
	__Local__421.PackedRelativeBox = 4292281344;
	__Local__421.TextureLevelIndex = 49;
	__Local__421.TexelFactor = 485.693573f;
	auto& __Local__422 = bpv__StaticMeshComponent029__pf->StreamingTextureData[3];
	__Local__422.PackedRelativeBox = 3819507456;
	__Local__422.TextureLevelIndex = 96;
	__Local__422.TexelFactor = 266.036255f;
	auto& __Local__423 = bpv__StaticMeshComponent029__pf->StreamingTextureData[4];
	__Local__423.PackedRelativeBox = 4292280320;
	__Local__423.TextureLevelIndex = 40;
	__Local__423.TexelFactor = 485.693573f;
	auto& __Local__424 = bpv__StaticMeshComponent029__pf->StreamingTextureData[5];
	__Local__424.PackedRelativeBox = 3888711424;
	__Local__424.TextureLevelIndex = 97;
	__Local__424.TexelFactor = 294.137054f;
	auto& __Local__425 = bpv__StaticMeshComponent029__pf->StreamingTextureData[6];
	__Local__425.PackedRelativeBox = 4292280320;
	__Local__425.TextureLevelIndex = 44;
	__Local__425.TexelFactor = 485.693573f;
	auto& __Local__426 = bpv__StaticMeshComponent029__pf->StreamingTextureData[7];
	__Local__426.PackedRelativeBox = 4292281344;
	__Local__426.TextureLevelIndex = 45;
	__Local__426.TexelFactor = 485.693573f;
	auto& __Local__427 = bpv__StaticMeshComponent029__pf->StreamingTextureData[8];
	__Local__427.PackedRelativeBox = 4290183936;
	__Local__427.TextureLevelIndex = 76;
	__Local__427.TexelFactor = 377.268280f;
	auto& __Local__428 = bpv__StaticMeshComponent029__pf->StreamingTextureData[9];
	__Local__428.PackedRelativeBox = 3881702400;
	__Local__428.TextureLevelIndex = 1;
	__Local__428.TexelFactor = 360.549042f;
	auto& __Local__429 = bpv__StaticMeshComponent029__pf->StreamingTextureData[10];
	__Local__429.PackedRelativeBox = 1811298144;
	__Local__429.TextureLevelIndex = 98;
	__Local__429.TexelFactor = 159.030655f;
	auto& __Local__430 = bpv__StaticMeshComponent029__pf->StreamingTextureData[11];
	__Local__430.PackedRelativeBox = 3948283621;
	__Local__430.TextureLevelIndex = 90;
	__Local__430.TexelFactor = 289.310059f;
	auto& __Local__431 = bpv__StaticMeshComponent029__pf->StreamingTextureData[12];
	__Local__431.PackedRelativeBox = 3948283653;
	__Local__431.TextureLevelIndex = 91;
	__Local__431.TexelFactor = 365.282837f;
	auto& __Local__432 = bpv__StaticMeshComponent029__pf->StreamingTextureData[13];
	__Local__432.PackedRelativeBox = 3948283653;
	__Local__432.TextureLevelIndex = 92;
	__Local__432.TexelFactor = 365.282837f;
	auto& __Local__433 = bpv__StaticMeshComponent029__pf->StreamingTextureData[14];
	__Local__433.PackedRelativeBox = 4283892480;
	__Local__433.TextureLevelIndex = 87;
	__Local__433.TexelFactor = 503.541595f;
	auto& __Local__434 = bpv__StaticMeshComponent029__pf->StreamingTextureData[15];
	__Local__434.PackedRelativeBox = 4283892480;
	__Local__434.TextureLevelIndex = 62;
	__Local__434.TexelFactor = 503.541595f;
	auto& __Local__435 = bpv__StaticMeshComponent029__pf->StreamingTextureData[16];
	__Local__435.PackedRelativeBox = 4284350496;
	__Local__435.TextureLevelIndex = 21;
	__Local__435.TexelFactor = 582.611328f;
	auto& __Local__436 = bpv__StaticMeshComponent029__pf->StreamingTextureData[17];
	__Local__436.PackedRelativeBox = 4291417856;
	__Local__436.TextureLevelIndex = 99;
	__Local__436.TexelFactor = 247.204407f;
	auto& __Local__437 = bpv__StaticMeshComponent029__pf->StreamingTextureData[18];
	__Local__437.PackedRelativeBox = 4032120849;
	__Local__437.TextureLevelIndex = 100;
	__Local__437.TexelFactor = 389.436890f;
	auto& __Local__438 = bpv__StaticMeshComponent029__pf->StreamingTextureData[19];
	__Local__438.PackedRelativeBox = 3948283621;
	__Local__438.TextureLevelIndex = 53;
	__Local__438.TexelFactor = 289.310059f;
	auto& __Local__439 = bpv__StaticMeshComponent029__pf->StreamingTextureData[20];
	__Local__439.PackedRelativeBox = 3965012017;
	__Local__439.TextureLevelIndex = 101;
	__Local__439.TexelFactor = 309.875275f;
	auto& __Local__440 = bpv__StaticMeshComponent029__pf->StreamingTextureData[21];
	__Local__440.PackedRelativeBox = 3965012017;
	__Local__440.TextureLevelIndex = 102;
	__Local__440.TexelFactor = 309.875275f;
	auto& __Local__441 = bpv__StaticMeshComponent029__pf->StreamingTextureData[22];
	__Local__441.PackedRelativeBox = 4284350496;
	__Local__441.TextureLevelIndex = 4;
	__Local__441.TexelFactor = 582.611328f;
	auto& __Local__442 = bpv__StaticMeshComponent029__pf->StreamingTextureData[23];
	__Local__442.PackedRelativeBox = 4235657263;
	__Local__442.TextureLevelIndex = 103;
	__Local__442.TexelFactor = 489.156616f;
	auto& __Local__443 = bpv__StaticMeshComponent029__pf->StreamingTextureData[24];
	__Local__443.PackedRelativeBox = 4085092121;
	__Local__443.TextureLevelIndex = 57;
	__Local__443.TexelFactor = 255.339584f;
	auto& __Local__444 = bpv__StaticMeshComponent029__pf->StreamingTextureData[25];
	__Local__444.PackedRelativeBox = 4085092121;
	__Local__444.TextureLevelIndex = 58;
	__Local__444.TexelFactor = 255.339584f;
	auto& __Local__445 = bpv__StaticMeshComponent029__pf->StreamingTextureData[26];
	__Local__445.PackedRelativeBox = 3948169986;
	__Local__445.TextureLevelIndex = 89;
	__Local__445.TexelFactor = 276.375641f;
	auto& __Local__446 = bpv__StaticMeshComponent029__pf->StreamingTextureData[27];
	__Local__446.PackedRelativeBox = 1801262872;
	__Local__446.TextureLevelIndex = 59;
	__Local__446.TexelFactor = 158.867508f;
	auto& __Local__447 = bpv__StaticMeshComponent029__pf->StreamingTextureData[28];
	__Local__447.PackedRelativeBox = 1801262872;
	__Local__447.TextureLevelIndex = 79;
	__Local__447.TexelFactor = 158.867508f;
	auto& __Local__448 = bpv__StaticMeshComponent029__pf->StreamingTextureData[29];
	__Local__448.PackedRelativeBox = 4085092121;
	__Local__448.TextureLevelIndex = 93;
	__Local__448.TexelFactor = 255.339584f;
	auto& __Local__449 = bpv__StaticMeshComponent029__pf->StreamingTextureData[30];
	__Local__449.PackedRelativeBox = 4284351254;
	__Local__449.TextureLevelIndex = 64;
	__Local__449.TexelFactor = 488.750946f;
	auto& __Local__450 = bpv__StaticMeshComponent029__pf->StreamingTextureData[31];
	__Local__450.PackedRelativeBox = 4284350496;
	__Local__450.TextureLevelIndex = 24;
	__Local__450.TexelFactor = 582.611328f;
	auto& __Local__451 = bpv__StaticMeshComponent029__pf->StreamingTextureData[32];
	__Local__451.PackedRelativeBox = 4284351254;
	__Local__451.TextureLevelIndex = 60;
	__Local__451.TexelFactor = 488.750946f;
	auto& __Local__452 = bpv__StaticMeshComponent029__pf->StreamingTextureData[33];
	__Local__452.PackedRelativeBox = 4290183936;
	__Local__452.TextureLevelIndex = 88;
	__Local__452.TexelFactor = 377.268280f;
	auto& __Local__453 = bpv__StaticMeshComponent029__pf->StreamingTextureData[34];
	__Local__453.PackedRelativeBox = 3497734178;
	__Local__453.TextureLevelIndex = 36;
	__Local__453.TexelFactor = 241.659546f;
	auto& __Local__454 = bpv__StaticMeshComponent029__pf->StreamingTextureData[35];
	__Local__454.PackedRelativeBox = 3497734178;
	__Local__454.TextureLevelIndex = 26;
	__Local__454.TexelFactor = 241.659546f;
	auto& __Local__455 = bpv__StaticMeshComponent029__pf->StreamingTextureData[36];
	__Local__455.PackedRelativeBox = 4085092121;
	__Local__455.TextureLevelIndex = 56;
	__Local__455.TexelFactor = 255.339584f;
	auto& __Local__456 = bpv__StaticMeshComponent029__pf->StreamingTextureData[37];
	__Local__456.PackedRelativeBox = 4236116000;
	__Local__456.TextureLevelIndex = 5;
	__Local__456.TexelFactor = 489.786438f;
	auto& __Local__457 = bpv__StaticMeshComponent029__pf->StreamingTextureData[38];
	__Local__457.PackedRelativeBox = 3525193728;
	__Local__457.TextureLevelIndex = 32;
	__Local__457.TexelFactor = 163.869873f;
	auto& __Local__458 = bpv__StaticMeshComponent029__pf->StreamingTextureData[39];
	__Local__458.PackedRelativeBox = 4236116000;
	__Local__458.TextureLevelIndex = 41;
	__Local__458.TexelFactor = 489.786438f;
	auto& __Local__459 = bpv__StaticMeshComponent029__pf->StreamingTextureData[40];
	__Local__459.PackedRelativeBox = 1672023808;
	__Local__459.TextureLevelIndex = 51;
	__Local__459.TexelFactor = 457.351288f;
	auto& __Local__460 = bpv__StaticMeshComponent029__pf->StreamingTextureData[41];
	__Local__460.PackedRelativeBox = 4284350496;
	__Local__460.TextureLevelIndex = 6;
	__Local__460.TexelFactor = 582.611328f;
	auto& __Local__461 = bpv__StaticMeshComponent029__pf->StreamingTextureData[42];
	__Local__461.PackedRelativeBox = 4236116000;
	__Local__461.TextureLevelIndex = 7;
	__Local__461.TexelFactor = 489.786438f;
	auto& __Local__462 = bpv__StaticMeshComponent029__pf->StreamingTextureData[43];
	__Local__462.PackedRelativeBox = 4280180800;
	__Local__462.TextureLevelIndex = 18;
	__Local__462.TexelFactor = 102.411812f;
	auto& __Local__463 = bpv__StaticMeshComponent029__pf->StreamingTextureData[44];
	__Local__463.PackedRelativeBox = 2938044480;
	__Local__463.TextureLevelIndex = 11;
	__Local__463.TexelFactor = 163.613800f;
	auto& __Local__464 = bpv__StaticMeshComponent029__pf->StreamingTextureData[45];
	__Local__464.PackedRelativeBox = 2938044480;
	__Local__464.TextureLevelIndex = 12;
	__Local__464.TexelFactor = 163.613800f;
	auto& __Local__465 = bpv__StaticMeshComponent029__pf->StreamingTextureData[46];
	__Local__465.PackedRelativeBox = 3676251200;
	__Local__465.TextureLevelIndex = 8;
	__Local__465.TexelFactor = 218.206085f;
	auto& __Local__466 = bpv__StaticMeshComponent029__pf->StreamingTextureData[47];
	__Local__466.PackedRelativeBox = 4280246336;
	__Local__466.TextureLevelIndex = 14;
	__Local__466.TexelFactor = 160.424301f;
	auto& __Local__467 = bpv__StaticMeshComponent029__pf->StreamingTextureData[48];
	__Local__467.PackedRelativeBox = 4280246336;
	__Local__467.TextureLevelIndex = 15;
	__Local__467.TexelFactor = 160.424301f;
	auto& __Local__468 = bpv__StaticMeshComponent029__pf->StreamingTextureData[49];
	__Local__468.PackedRelativeBox = 4280180800;
	__Local__468.TextureLevelIndex = 10;
	__Local__468.TexelFactor = 102.411812f;
	auto& __Local__469 = bpv__StaticMeshComponent029__pf->StreamingTextureData[50];
	__Local__469.PackedRelativeBox = 3676251200;
	__Local__469.TextureLevelIndex = 17;
	__Local__469.TexelFactor = 218.206085f;
	auto& __Local__470 = bpv__StaticMeshComponent029__pf->StreamingTextureData[51];
	__Local__470.PackedRelativeBox = 3676251200;
	__Local__470.TextureLevelIndex = 9;
	__Local__470.TexelFactor = 218.206085f;
	auto& __Local__471 = bpv__StaticMeshComponent029__pf->StreamingTextureData[52];
	__Local__471.PackedRelativeBox = 4284350496;
	__Local__471.TextureLevelIndex = 19;
	__Local__471.TexelFactor = 481.460693f;
	auto& __Local__472 = bpv__StaticMeshComponent029__pf->StreamingTextureData[53];
	__Local__472.PackedRelativeBox = 4284350496;
	__Local__472.TextureLevelIndex = 20;
	__Local__472.TexelFactor = 481.460693f;
	auto& __Local__473 = bpv__StaticMeshComponent029__pf->StreamingTextureData[54];
	__Local__473.PackedRelativeBox = 4292280320;
	__Local__473.TextureLevelIndex = 43;
	__Local__473.TexelFactor = 485.693573f;
	auto& __Local__474 = bpv__StaticMeshComponent029__pf->StreamingTextureData[55];
	__Local__474.PackedRelativeBox = 4284350496;
	__Local__474.TextureLevelIndex = 22;
	__Local__474.TexelFactor = 481.460693f;
	auto& __Local__475 = bpv__StaticMeshComponent029__pf->StreamingTextureData[56];
	__Local__475.PackedRelativeBox = 4267573280;
	__Local__475.TextureLevelIndex = 25;
	__Local__475.TexelFactor = 501.479065f;
	auto& __Local__476 = bpv__StaticMeshComponent029__pf->StreamingTextureData[57];
	__Local__476.PackedRelativeBox = 4284350496;
	__Local__476.TextureLevelIndex = 23;
	__Local__476.TexelFactor = 582.611328f;
	auto& __Local__477 = bpv__StaticMeshComponent029__pf->StreamingTextureData[58];
	__Local__477.PackedRelativeBox = 4292281344;
	__Local__477.TextureLevelIndex = 46;
	__Local__477.TexelFactor = 485.693573f;
	auto& __Local__478 = bpv__StaticMeshComponent029__pf->StreamingTextureData[59];
	__Local__478.PackedRelativeBox = 2807061256;
	__Local__478.TextureLevelIndex = 31;
	__Local__478.TexelFactor = 390.472198f;
	auto& __Local__479 = bpv__StaticMeshComponent029__pf->StreamingTextureData[60];
	__Local__479.PackedRelativeBox = 4292216592;
	__Local__479.TextureLevelIndex = 104;
	__Local__479.TexelFactor = 310.813538f;
	auto& __Local__480 = bpv__StaticMeshComponent029__pf->StreamingTextureData[61];
	__Local__480.PackedRelativeBox = 4283433704;
	__Local__480.TextureLevelIndex = 38;
	__Local__480.TexelFactor = 582.611328f;
	auto& __Local__481 = bpv__StaticMeshComponent029__pf->StreamingTextureData[62];
	__Local__481.PackedRelativeBox = 4292216592;
	__Local__481.TextureLevelIndex = 105;
	__Local__481.TexelFactor = 310.813538f;
	auto& __Local__482 = bpv__StaticMeshComponent029__pf->StreamingTextureData[63];
	__Local__482.PackedRelativeBox = 4032120849;
	__Local__482.TextureLevelIndex = 106;
	__Local__482.TexelFactor = 389.436890f;
	auto& __Local__483 = bpv__StaticMeshComponent029__pf->StreamingTextureData[64];
	__Local__483.PackedRelativeBox = 3525193728;
	__Local__483.TextureLevelIndex = 37;
	__Local__483.TexelFactor = 163.869873f;
	auto& __Local__484 = bpv__StaticMeshComponent029__pf->StreamingTextureData[65];
	__Local__484.PackedRelativeBox = 4290183936;
	__Local__484.TextureLevelIndex = 82;
	__Local__484.TexelFactor = 377.268280f;
	auto& __Local__485 = bpv__StaticMeshComponent029__pf->StreamingTextureData[66];
	__Local__485.PackedRelativeBox = 4292216592;
	__Local__485.TextureLevelIndex = 107;
	__Local__485.TexelFactor = 310.813538f;
	auto& __Local__486 = bpv__StaticMeshComponent029__pf->StreamingTextureData[67];
	__Local__486.PackedRelativeBox = 1811298144;
	__Local__486.TextureLevelIndex = 108;
	__Local__486.TexelFactor = 159.030655f;
	auto& __Local__487 = bpv__StaticMeshComponent029__pf->StreamingTextureData[68];
	__Local__487.PackedRelativeBox = 3948283621;
	__Local__487.TextureLevelIndex = 54;
	__Local__487.TexelFactor = 289.310059f;
	auto& __Local__488 = bpv__StaticMeshComponent029__pf->StreamingTextureData[69];
	__Local__488.PackedRelativeBox = 4290183936;
	__Local__488.TextureLevelIndex = 81;
	__Local__488.TexelFactor = 377.268280f;
	auto& __Local__489 = bpv__StaticMeshComponent029__pf->StreamingTextureData[70];
	__Local__489.PackedRelativeBox = 4292282127;
	__Local__489.TextureLevelIndex = 109;
	__Local__489.TexelFactor = 485.693573f;
	auto& __Local__490 = bpv__StaticMeshComponent029__pf->StreamingTextureData[71];
	__Local__490.PackedRelativeBox = 1672023808;
	__Local__490.TextureLevelIndex = 50;
	__Local__490.TexelFactor = 457.351288f;
	auto& __Local__491 = bpv__StaticMeshComponent029__pf->StreamingTextureData[72];
	__Local__491.PackedRelativeBox = 3888711424;
	__Local__491.TextureLevelIndex = 110;
	__Local__491.TexelFactor = 294.137054f;
	auto& __Local__492 = bpv__StaticMeshComponent029__pf->StreamingTextureData[73];
	__Local__492.PackedRelativeBox = 4292282127;
	__Local__492.TextureLevelIndex = 111;
	__Local__492.TexelFactor = 485.693573f;
	auto& __Local__493 = bpv__StaticMeshComponent029__pf->StreamingTextureData[74];
	__Local__493.PackedRelativeBox = 4292282127;
	__Local__493.TextureLevelIndex = 112;
	__Local__493.TexelFactor = 485.693573f;
	auto& __Local__494 = bpv__StaticMeshComponent029__pf->StreamingTextureData[75];
	__Local__494.PackedRelativeBox = 3525193728;
	__Local__494.TextureLevelIndex = 2;
	__Local__494.TexelFactor = 163.869873f;
	auto& __Local__495 = bpv__StaticMeshComponent029__pf->StreamingTextureData[76];
	__Local__495.PackedRelativeBox = 4267573280;
	__Local__495.TextureLevelIndex = 28;
	__Local__495.TexelFactor = 501.479065f;
	auto& __Local__496 = bpv__StaticMeshComponent029__pf->StreamingTextureData[77];
	__Local__496.PackedRelativeBox = 4290183936;
	__Local__496.TextureLevelIndex = 78;
	__Local__496.TexelFactor = 377.268280f;
	auto& __Local__497 = bpv__StaticMeshComponent029__pf->StreamingTextureData[78];
	__Local__497.PackedRelativeBox = 2807061256;
	__Local__497.TextureLevelIndex = 29;
	__Local__497.TexelFactor = 390.472198f;
	auto& __Local__498 = bpv__StaticMeshComponent029__pf->StreamingTextureData[79];
	__Local__498.PackedRelativeBox = 3948169986;
	__Local__498.TextureLevelIndex = 86;
	__Local__498.TexelFactor = 276.375641f;
	auto& __Local__499 = bpv__StaticMeshComponent029__pf->StreamingTextureData[80];
	__Local__499.PackedRelativeBox = 4290183936;
	__Local__499.TextureLevelIndex = 77;
	__Local__499.TexelFactor = 377.268280f;
	auto& __Local__500 = bpv__StaticMeshComponent029__pf->StreamingTextureData[81];
	__Local__500.PackedRelativeBox = 4280180800;
	__Local__500.TextureLevelIndex = 13;
	__Local__500.TexelFactor = 102.411812f;
	auto& __Local__501 = bpv__StaticMeshComponent029__pf->StreamingTextureData[82];
	__Local__501.PackedRelativeBox = 4267573280;
	__Local__501.TextureLevelIndex = 35;
	__Local__501.TexelFactor = 501.479065f;
	auto& __Local__502 = bpv__StaticMeshComponent029__pf->StreamingTextureData[83];
	__Local__502.PackedRelativeBox = 4283433704;
	__Local__502.TextureLevelIndex = 34;
	__Local__502.TexelFactor = 582.611328f;
	auto& __Local__503 = bpv__StaticMeshComponent029__pf->StreamingTextureData[84];
	__Local__503.PackedRelativeBox = 4291417856;
	__Local__503.TextureLevelIndex = 113;
	__Local__503.TexelFactor = 247.204407f;
	auto& __Local__504 = bpv__StaticMeshComponent029__pf->StreamingTextureData[85];
	__Local__504.PackedRelativeBox = 3497734178;
	__Local__504.TextureLevelIndex = 3;
	__Local__504.TexelFactor = 241.659546f;
	auto& __Local__505 = bpv__StaticMeshComponent029__pf->StreamingTextureData[86];
	__Local__505.PackedRelativeBox = 3948169986;
	__Local__505.TextureLevelIndex = 85;
	__Local__505.TexelFactor = 276.375641f;
	auto& __Local__506 = bpv__StaticMeshComponent029__pf->StreamingTextureData[87];
	__Local__506.PackedRelativeBox = 4291417856;
	__Local__506.TextureLevelIndex = 114;
	__Local__506.TexelFactor = 247.204407f;
	auto& __Local__507 = bpv__StaticMeshComponent029__pf->StreamingTextureData[88];
	__Local__507.PackedRelativeBox = 4235657263;
	__Local__507.TextureLevelIndex = 115;
	__Local__507.TexelFactor = 489.156616f;
	auto& __Local__508 = bpv__StaticMeshComponent029__pf->StreamingTextureData[89];
	__Local__508.PackedRelativeBox = 3888711424;
	__Local__508.TextureLevelIndex = 116;
	__Local__508.TexelFactor = 294.137054f;
	auto& __Local__509 = bpv__StaticMeshComponent029__pf->StreamingTextureData[90];
	__Local__509.PackedRelativeBox = 1672023808;
	__Local__509.TextureLevelIndex = 48;
	__Local__509.TexelFactor = 457.351288f;
	auto& __Local__510 = bpv__StaticMeshComponent029__pf->StreamingTextureData[91];
	__Local__510.PackedRelativeBox = 4284351254;
	__Local__510.TextureLevelIndex = 61;
	__Local__510.TexelFactor = 488.750946f;
	auto& __Local__511 = bpv__StaticMeshComponent029__pf->StreamingTextureData[92];
	__Local__511.PackedRelativeBox = 4290183936;
	__Local__511.TextureLevelIndex = 80;
	__Local__511.TexelFactor = 377.268280f;
	auto& __Local__512 = bpv__StaticMeshComponent029__pf->StreamingTextureData[93];
	__Local__512.PackedRelativeBox = 4283433704;
	__Local__512.TextureLevelIndex = 33;
	__Local__512.TexelFactor = 582.611328f;
	auto& __Local__513 = bpv__StaticMeshComponent029__pf->StreamingTextureData[94];
	__Local__513.PackedRelativeBox = 3965012017;
	__Local__513.TextureLevelIndex = 117;
	__Local__513.TexelFactor = 309.875275f;
	auto& __Local__514 = bpv__StaticMeshComponent029__pf->StreamingTextureData[95];
	__Local__514.PackedRelativeBox = 1801262872;
	__Local__514.TextureLevelIndex = 84;
	__Local__514.TexelFactor = 158.867508f;
	auto& __Local__515 = bpv__StaticMeshComponent029__pf->StreamingTextureData[96];
	__Local__515.PackedRelativeBox = 3948283653;
	__Local__515.TextureLevelIndex = 55;
	__Local__515.TexelFactor = 365.282837f;
	auto& __Local__516 = bpv__StaticMeshComponent029__pf->StreamingTextureData[97];
	__Local__516.PackedRelativeBox = 1811298144;
	__Local__516.TextureLevelIndex = 118;
	__Local__516.TexelFactor = 159.030655f;
	auto& __Local__517 = bpv__StaticMeshComponent029__pf->StreamingTextureData[98];
	__Local__517.PackedRelativeBox = 4235657263;
	__Local__517.TextureLevelIndex = 119;
	__Local__517.TexelFactor = 489.156616f;
	auto& __Local__518 = bpv__StaticMeshComponent029__pf->StreamingTextureData[99];
	__Local__518.PackedRelativeBox = 2807061256;
	__Local__518.TextureLevelIndex = 30;
	__Local__518.TexelFactor = 390.472198f;
	auto& __Local__519 = bpv__StaticMeshComponent029__pf->StreamingTextureData[100];
	__Local__519.PackedRelativeBox = 4280246336;
	__Local__519.TextureLevelIndex = 27;
	__Local__519.TexelFactor = 160.424301f;
	auto& __Local__520 = bpv__StaticMeshComponent029__pf->StreamingTextureData[101];
	__Local__520.PackedRelativeBox = 3819507456;
	__Local__520.TextureLevelIndex = 120;
	__Local__520.TexelFactor = 266.036255f;
	auto& __Local__521 = bpv__StaticMeshComponent029__pf->StreamingTextureData[102];
	__Local__521.PackedRelativeBox = 2938044480;
	__Local__521.TextureLevelIndex = 16;
	__Local__521.TexelFactor = 163.613800f;
	auto& __Local__522 = bpv__StaticMeshComponent029__pf->StreamingTextureData[103];
	__Local__522.PackedRelativeBox = 4032120849;
	__Local__522.TextureLevelIndex = 121;
	__Local__522.TexelFactor = 389.436890f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), false, 0));
	bpv__StaticMeshComponent029__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__523 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent029__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__523 = FVector(-834.347778, 771.474548, 15.836548);
	auto& __Local__524 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent029__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__524 = FRotator(0.000000, -179.999878, 0.000000);
	bpv__StaticMeshComponent029__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), true, 0));
	bpv__StaticMeshComponent030__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent030__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent030__pf->ForcedLodModel = 1;
	auto& __Local__525 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent030__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__525 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent030__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent030__pf->StreamingTextureData.AddUninitialized(92);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent030__pf->StreamingTextureData.GetData(), 92);
	auto& __Local__526 = bpv__StaticMeshComponent030__pf->StreamingTextureData[0];
	__Local__526.PackedRelativeBox = 4246604968;
	__Local__526.TextureLevelIndex = 47;
	__Local__526.TexelFactor = 503.541595f;
	auto& __Local__527 = bpv__StaticMeshComponent030__pf->StreamingTextureData[1];
	__Local__527.PackedRelativeBox = 1895696438;
	__Local__527.TextureLevelIndex = 48;
	__Local__527.TexelFactor = 485.939728f;
	auto& __Local__528 = bpv__StaticMeshComponent030__pf->StreamingTextureData[2];
	__Local__528.PackedRelativeBox = 3911057448;
	__Local__528.TextureLevelIndex = 49;
	__Local__528.TexelFactor = 657.350708f;
	auto& __Local__529 = bpv__StaticMeshComponent030__pf->StreamingTextureData[3];
	__Local__529.PackedRelativeBox = 1895696438;
	__Local__529.TextureLevelIndex = 50;
	__Local__529.TexelFactor = 485.939728f;
	auto& __Local__530 = bpv__StaticMeshComponent030__pf->StreamingTextureData[4];
	__Local__530.PackedRelativeBox = 3911057448;
	__Local__530.TextureLevelIndex = 46;
	__Local__530.TexelFactor = 657.350708f;
	auto& __Local__531 = bpv__StaticMeshComponent030__pf->StreamingTextureData[5];
	__Local__531.PackedRelativeBox = 1895696438;
	__Local__531.TextureLevelIndex = 51;
	__Local__531.TexelFactor = 485.939728f;
	auto& __Local__532 = bpv__StaticMeshComponent030__pf->StreamingTextureData[6];
	__Local__532.PackedRelativeBox = 3906819256;
	__Local__532.TextureLevelIndex = 52;
	__Local__532.TexelFactor = 246.642609f;
	auto& __Local__533 = bpv__StaticMeshComponent030__pf->StreamingTextureData[7];
	__Local__533.PackedRelativeBox = 3910799529;
	__Local__533.TextureLevelIndex = 53;
	__Local__533.TexelFactor = 289.310059f;
	auto& __Local__534 = bpv__StaticMeshComponent030__pf->StreamingTextureData[8];
	__Local__534.PackedRelativeBox = 3910799529;
	__Local__534.TextureLevelIndex = 54;
	__Local__534.TexelFactor = 289.310059f;
	auto& __Local__535 = bpv__StaticMeshComponent030__pf->StreamingTextureData[9];
	__Local__535.PackedRelativeBox = 3892190240;
	__Local__535.TextureLevelIndex = 1;
	__Local__535.TexelFactor = 360.549042f;
	auto& __Local__536 = bpv__StaticMeshComponent030__pf->StreamingTextureData[10];
	__Local__536.PackedRelativeBox = 3910799529;
	__Local__536.TextureLevelIndex = 55;
	__Local__536.TexelFactor = 365.282837f;
	auto& __Local__537 = bpv__StaticMeshComponent030__pf->StreamingTextureData[11];
	__Local__537.PackedRelativeBox = 3972437122;
	__Local__537.TextureLevelIndex = 56;
	__Local__537.TexelFactor = 255.339584f;
	auto& __Local__538 = bpv__StaticMeshComponent030__pf->StreamingTextureData[12];
	__Local__538.PackedRelativeBox = 3972437122;
	__Local__538.TextureLevelIndex = 57;
	__Local__538.TexelFactor = 255.339584f;
	auto& __Local__539 = bpv__StaticMeshComponent030__pf->StreamingTextureData[13];
	__Local__539.PackedRelativeBox = 3972437122;
	__Local__539.TextureLevelIndex = 58;
	__Local__539.TexelFactor = 255.339584f;
	auto& __Local__540 = bpv__StaticMeshComponent030__pf->StreamingTextureData[14];
	__Local__540.PackedRelativeBox = 4246601736;
	__Local__540.TextureLevelIndex = 40;
	__Local__540.TexelFactor = 657.350708f;
	auto& __Local__541 = bpv__StaticMeshComponent030__pf->StreamingTextureData[15];
	__Local__541.PackedRelativeBox = 1896358050;
	__Local__541.TextureLevelIndex = 59;
	__Local__541.TexelFactor = 158.867508f;
	auto& __Local__542 = bpv__StaticMeshComponent030__pf->StreamingTextureData[16];
	__Local__542.PackedRelativeBox = 4294839424;
	__Local__542.TextureLevelIndex = 24;
	__Local__542.TexelFactor = 582.611328f;
	auto& __Local__543 = bpv__StaticMeshComponent030__pf->StreamingTextureData[17];
	__Local__543.PackedRelativeBox = 4245294240;
	__Local__543.TextureLevelIndex = 60;
	__Local__543.TexelFactor = 488.750946f;
	auto& __Local__544 = bpv__StaticMeshComponent030__pf->StreamingTextureData[18];
	__Local__544.PackedRelativeBox = 3489545696;
	__Local__544.TextureLevelIndex = 32;
	__Local__544.TexelFactor = 163.869873f;
	auto& __Local__545 = bpv__StaticMeshComponent030__pf->StreamingTextureData[19];
	__Local__545.PackedRelativeBox = 4294839424;
	__Local__545.TextureLevelIndex = 21;
	__Local__545.TexelFactor = 582.611328f;
	auto& __Local__546 = bpv__StaticMeshComponent030__pf->StreamingTextureData[20];
	__Local__546.PackedRelativeBox = 3489415107;
	__Local__546.TextureLevelIndex = 3;
	__Local__546.TexelFactor = 241.659546f;
	auto& __Local__547 = bpv__StaticMeshComponent030__pf->StreamingTextureData[21];
	__Local__547.PackedRelativeBox = 4294839424;
	__Local__547.TextureLevelIndex = 6;
	__Local__547.TexelFactor = 582.611328f;
	auto& __Local__548 = bpv__StaticMeshComponent030__pf->StreamingTextureData[22];
	__Local__548.PackedRelativeBox = 4294840256;
	__Local__548.TextureLevelIndex = 7;
	__Local__548.TexelFactor = 489.786438f;
	auto& __Local__549 = bpv__StaticMeshComponent030__pf->StreamingTextureData[23];
	__Local__549.PackedRelativeBox = 4292764896;
	__Local__549.TextureLevelIndex = 10;
	__Local__549.TexelFactor = 102.411812f;
	auto& __Local__550 = bpv__StaticMeshComponent030__pf->StreamingTextureData[24];
	__Local__550.PackedRelativeBox = 4292764896;
	__Local__550.TextureLevelIndex = 18;
	__Local__550.TexelFactor = 102.411812f;
	auto& __Local__551 = bpv__StaticMeshComponent030__pf->StreamingTextureData[25];
	__Local__551.PackedRelativeBox = 3017738464;
	__Local__551.TextureLevelIndex = 16;
	__Local__551.TexelFactor = 163.613800f;
	auto& __Local__552 = bpv__StaticMeshComponent030__pf->StreamingTextureData[26];
	__Local__552.PackedRelativeBox = 3755946208;
	__Local__552.TextureLevelIndex = 17;
	__Local__552.TexelFactor = 218.206146f;
	auto& __Local__553 = bpv__StaticMeshComponent030__pf->StreamingTextureData[27];
	__Local__553.PackedRelativeBox = 3755946208;
	__Local__553.TextureLevelIndex = 9;
	__Local__553.TexelFactor = 218.206146f;
	auto& __Local__554 = bpv__StaticMeshComponent030__pf->StreamingTextureData[28];
	__Local__554.PackedRelativeBox = 4292830432;
	__Local__554.TextureLevelIndex = 27;
	__Local__554.TexelFactor = 160.424332f;
	auto& __Local__555 = bpv__StaticMeshComponent030__pf->StreamingTextureData[29];
	__Local__555.PackedRelativeBox = 4292764896;
	__Local__555.TextureLevelIndex = 13;
	__Local__555.TexelFactor = 102.411812f;
	auto& __Local__556 = bpv__StaticMeshComponent030__pf->StreamingTextureData[30];
	__Local__556.PackedRelativeBox = 3017738464;
	__Local__556.TextureLevelIndex = 12;
	__Local__556.TexelFactor = 163.613800f;
	auto& __Local__557 = bpv__StaticMeshComponent030__pf->StreamingTextureData[31];
	__Local__557.PackedRelativeBox = 3755946208;
	__Local__557.TextureLevelIndex = 8;
	__Local__557.TexelFactor = 218.206146f;
	auto& __Local__558 = bpv__StaticMeshComponent030__pf->StreamingTextureData[32];
	__Local__558.PackedRelativeBox = 4294839424;
	__Local__558.TextureLevelIndex = 4;
	__Local__558.TexelFactor = 582.611328f;
	auto& __Local__559 = bpv__StaticMeshComponent030__pf->StreamingTextureData[33];
	__Local__559.PackedRelativeBox = 3489545696;
	__Local__559.TextureLevelIndex = 2;
	__Local__559.TexelFactor = 163.869873f;
	auto& __Local__560 = bpv__StaticMeshComponent030__pf->StreamingTextureData[34];
	__Local__560.PackedRelativeBox = 3489545696;
	__Local__560.TextureLevelIndex = 37;
	__Local__560.TexelFactor = 163.869873f;
	auto& __Local__561 = bpv__StaticMeshComponent030__pf->StreamingTextureData[35];
	__Local__561.PackedRelativeBox = 3489415107;
	__Local__561.TextureLevelIndex = 36;
	__Local__561.TexelFactor = 241.659546f;
	auto& __Local__562 = bpv__StaticMeshComponent030__pf->StreamingTextureData[36];
	__Local__562.PackedRelativeBox = 4292830432;
	__Local__562.TextureLevelIndex = 15;
	__Local__562.TexelFactor = 160.424332f;
	auto& __Local__563 = bpv__StaticMeshComponent030__pf->StreamingTextureData[37];
	__Local__563.PackedRelativeBox = 4294839744;
	__Local__563.TextureLevelIndex = 35;
	__Local__563.TexelFactor = 501.411438f;
	auto& __Local__564 = bpv__StaticMeshComponent030__pf->StreamingTextureData[38];
	__Local__564.PackedRelativeBox = 4294840256;
	__Local__564.TextureLevelIndex = 41;
	__Local__564.TexelFactor = 489.786438f;
	auto& __Local__565 = bpv__StaticMeshComponent030__pf->StreamingTextureData[39];
	__Local__565.PackedRelativeBox = 4294839424;
	__Local__565.TextureLevelIndex = 19;
	__Local__565.TexelFactor = 481.460693f;
	auto& __Local__566 = bpv__StaticMeshComponent030__pf->StreamingTextureData[40];
	__Local__566.PackedRelativeBox = 4294839744;
	__Local__566.TextureLevelIndex = 25;
	__Local__566.TexelFactor = 501.411438f;
	auto& __Local__567 = bpv__StaticMeshComponent030__pf->StreamingTextureData[41];
	__Local__567.PackedRelativeBox = 4294839424;
	__Local__567.TextureLevelIndex = 23;
	__Local__567.TexelFactor = 582.611328f;
	auto& __Local__568 = bpv__StaticMeshComponent030__pf->StreamingTextureData[42];
	__Local__568.PackedRelativeBox = 4245294240;
	__Local__568.TextureLevelIndex = 61;
	__Local__568.TexelFactor = 488.750946f;
	auto& __Local__569 = bpv__StaticMeshComponent030__pf->StreamingTextureData[43];
	__Local__569.PackedRelativeBox = 2836881583;
	__Local__569.TextureLevelIndex = 30;
	__Local__569.TexelFactor = 390.472198f;
	auto& __Local__570 = bpv__StaticMeshComponent030__pf->StreamingTextureData[44];
	__Local__570.PackedRelativeBox = 2836881583;
	__Local__570.TextureLevelIndex = 31;
	__Local__570.TexelFactor = 390.472198f;
	auto& __Local__571 = bpv__StaticMeshComponent030__pf->StreamingTextureData[45];
	__Local__571.PackedRelativeBox = 4294839424;
	__Local__571.TextureLevelIndex = 22;
	__Local__571.TexelFactor = 481.460693f;
	auto& __Local__572 = bpv__StaticMeshComponent030__pf->StreamingTextureData[46];
	__Local__572.PackedRelativeBox = 4246146223;
	__Local__572.TextureLevelIndex = 33;
	__Local__572.TexelFactor = 582.611328f;
	auto& __Local__573 = bpv__StaticMeshComponent030__pf->StreamingTextureData[47];
	__Local__573.PackedRelativeBox = 4246146223;
	__Local__573.TextureLevelIndex = 34;
	__Local__573.TexelFactor = 582.611328f;
	auto& __Local__574 = bpv__StaticMeshComponent030__pf->StreamingTextureData[48];
	__Local__574.PackedRelativeBox = 4246604968;
	__Local__574.TextureLevelIndex = 62;
	__Local__574.TexelFactor = 503.541595f;
	auto& __Local__575 = bpv__StaticMeshComponent030__pf->StreamingTextureData[49];
	__Local__575.PackedRelativeBox = 4294840256;
	__Local__575.TextureLevelIndex = 5;
	__Local__575.TexelFactor = 489.786438f;
	auto& __Local__576 = bpv__StaticMeshComponent030__pf->StreamingTextureData[50];
	__Local__576.PackedRelativeBox = 4246146223;
	__Local__576.TextureLevelIndex = 38;
	__Local__576.TexelFactor = 582.611328f;
	auto& __Local__577 = bpv__StaticMeshComponent030__pf->StreamingTextureData[51];
	__Local__577.PackedRelativeBox = 351273000;
	__Local__577.TextureLevelIndex = 63;
	__Local__577.TexelFactor = 657.350708f;
	auto& __Local__578 = bpv__StaticMeshComponent030__pf->StreamingTextureData[52];
	__Local__578.PackedRelativeBox = 4245294240;
	__Local__578.TextureLevelIndex = 64;
	__Local__578.TexelFactor = 488.750946f;
	auto& __Local__579 = bpv__StaticMeshComponent030__pf->StreamingTextureData[53];
	__Local__579.PackedRelativeBox = 3911057448;
	__Local__579.TextureLevelIndex = 45;
	__Local__579.TexelFactor = 657.350708f;
	auto& __Local__580 = bpv__StaticMeshComponent030__pf->StreamingTextureData[54];
	__Local__580.PackedRelativeBox = 351273000;
	__Local__580.TextureLevelIndex = 65;
	__Local__580.TexelFactor = 657.350708f;
	auto& __Local__581 = bpv__StaticMeshComponent030__pf->StreamingTextureData[55];
	__Local__581.PackedRelativeBox = 3906819256;
	__Local__581.TextureLevelIndex = 66;
	__Local__581.TexelFactor = 246.642609f;
	auto& __Local__582 = bpv__StaticMeshComponent030__pf->StreamingTextureData[56];
	__Local__582.PackedRelativeBox = 351273000;
	__Local__582.TextureLevelIndex = 67;
	__Local__582.TexelFactor = 657.350708f;
	auto& __Local__583 = bpv__StaticMeshComponent030__pf->StreamingTextureData[57];
	__Local__583.PackedRelativeBox = 3017738464;
	__Local__583.TextureLevelIndex = 11;
	__Local__583.TexelFactor = 163.613800f;
	auto& __Local__584 = bpv__StaticMeshComponent030__pf->StreamingTextureData[58];
	__Local__584.PackedRelativeBox = 3832567848;
	__Local__584.TextureLevelIndex = 68;
	__Local__584.TexelFactor = 384.868347f;
	auto& __Local__585 = bpv__StaticMeshComponent030__pf->StreamingTextureData[59];
	__Local__585.PackedRelativeBox = 3832567848;
	__Local__585.TextureLevelIndex = 69;
	__Local__585.TexelFactor = 384.868347f;
	auto& __Local__586 = bpv__StaticMeshComponent030__pf->StreamingTextureData[60];
	__Local__586.PackedRelativeBox = 3908045864;
	__Local__586.TextureLevelIndex = 70;
	__Local__586.TexelFactor = 321.706329f;
	auto& __Local__587 = bpv__StaticMeshComponent030__pf->StreamingTextureData[61];
	__Local__587.PackedRelativeBox = 2836881583;
	__Local__587.TextureLevelIndex = 29;
	__Local__587.TexelFactor = 390.472198f;
	auto& __Local__588 = bpv__StaticMeshComponent030__pf->StreamingTextureData[62];
	__Local__588.PackedRelativeBox = 4246601736;
	__Local__588.TextureLevelIndex = 44;
	__Local__588.TexelFactor = 657.350708f;
	auto& __Local__589 = bpv__StaticMeshComponent030__pf->StreamingTextureData[63];
	__Local__589.PackedRelativeBox = 3908045864;
	__Local__589.TextureLevelIndex = 71;
	__Local__589.TexelFactor = 321.706329f;
	auto& __Local__590 = bpv__StaticMeshComponent030__pf->StreamingTextureData[64];
	__Local__590.PackedRelativeBox = 3908045864;
	__Local__590.TextureLevelIndex = 72;
	__Local__590.TexelFactor = 321.706329f;
	auto& __Local__591 = bpv__StaticMeshComponent030__pf->StreamingTextureData[65];
	__Local__591.PackedRelativeBox = 1617965066;
	__Local__591.TextureLevelIndex = 73;
	__Local__591.TexelFactor = 155.628082f;
	auto& __Local__592 = bpv__StaticMeshComponent030__pf->StreamingTextureData[66];
	__Local__592.PackedRelativeBox = 1617965066;
	__Local__592.TextureLevelIndex = 74;
	__Local__592.TexelFactor = 155.628082f;
	auto& __Local__593 = bpv__StaticMeshComponent030__pf->StreamingTextureData[67];
	__Local__593.PackedRelativeBox = 1617965066;
	__Local__593.TextureLevelIndex = 75;
	__Local__593.TexelFactor = 155.628082f;
	auto& __Local__594 = bpv__StaticMeshComponent030__pf->StreamingTextureData[68];
	__Local__594.PackedRelativeBox = 4243590152;
	__Local__594.TextureLevelIndex = 76;
	__Local__594.TexelFactor = 508.946930f;
	auto& __Local__595 = bpv__StaticMeshComponent030__pf->StreamingTextureData[69];
	__Local__595.PackedRelativeBox = 4243590152;
	__Local__595.TextureLevelIndex = 77;
	__Local__595.TexelFactor = 254.473465f;
	auto& __Local__596 = bpv__StaticMeshComponent030__pf->StreamingTextureData[70];
	__Local__596.PackedRelativeBox = 4243590152;
	__Local__596.TextureLevelIndex = 78;
	__Local__596.TexelFactor = 508.946930f;
	auto& __Local__597 = bpv__StaticMeshComponent030__pf->StreamingTextureData[71];
	__Local__597.PackedRelativeBox = 1896358050;
	__Local__597.TextureLevelIndex = 79;
	__Local__597.TexelFactor = 158.867508f;
	auto& __Local__598 = bpv__StaticMeshComponent030__pf->StreamingTextureData[72];
	__Local__598.PackedRelativeBox = 4243590152;
	__Local__598.TextureLevelIndex = 80;
	__Local__598.TexelFactor = 254.473465f;
	auto& __Local__599 = bpv__StaticMeshComponent030__pf->StreamingTextureData[73];
	__Local__599.PackedRelativeBox = 4243590152;
	__Local__599.TextureLevelIndex = 81;
	__Local__599.TexelFactor = 508.946930f;
	auto& __Local__600 = bpv__StaticMeshComponent030__pf->StreamingTextureData[74];
	__Local__600.PackedRelativeBox = 4243590152;
	__Local__600.TextureLevelIndex = 82;
	__Local__600.TexelFactor = 508.946930f;
	auto& __Local__601 = bpv__StaticMeshComponent030__pf->StreamingTextureData[75];
	__Local__601.PackedRelativeBox = 4246601736;
	__Local__601.TextureLevelIndex = 43;
	__Local__601.TexelFactor = 657.350708f;
	auto& __Local__602 = bpv__StaticMeshComponent030__pf->StreamingTextureData[76];
	__Local__602.PackedRelativeBox = 3906819256;
	__Local__602.TextureLevelIndex = 83;
	__Local__602.TexelFactor = 246.642609f;
	auto& __Local__603 = bpv__StaticMeshComponent030__pf->StreamingTextureData[77];
	__Local__603.PackedRelativeBox = 1896358050;
	__Local__603.TextureLevelIndex = 84;
	__Local__603.TexelFactor = 158.867508f;
	auto& __Local__604 = bpv__StaticMeshComponent030__pf->StreamingTextureData[78];
	__Local__604.PackedRelativeBox = 3910161579;
	__Local__604.TextureLevelIndex = 85;
	__Local__604.TexelFactor = 276.375641f;
	auto& __Local__605 = bpv__StaticMeshComponent030__pf->StreamingTextureData[79];
	__Local__605.PackedRelativeBox = 3910161579;
	__Local__605.TextureLevelIndex = 86;
	__Local__605.TexelFactor = 276.375641f;
	auto& __Local__606 = bpv__StaticMeshComponent030__pf->StreamingTextureData[80];
	__Local__606.PackedRelativeBox = 4246604968;
	__Local__606.TextureLevelIndex = 87;
	__Local__606.TexelFactor = 503.541595f;
	auto& __Local__607 = bpv__StaticMeshComponent030__pf->StreamingTextureData[81];
	__Local__607.PackedRelativeBox = 4243590152;
	__Local__607.TextureLevelIndex = 88;
	__Local__607.TexelFactor = 254.473465f;
	auto& __Local__608 = bpv__StaticMeshComponent030__pf->StreamingTextureData[82];
	__Local__608.PackedRelativeBox = 3910161579;
	__Local__608.TextureLevelIndex = 89;
	__Local__608.TexelFactor = 276.375641f;
	auto& __Local__609 = bpv__StaticMeshComponent030__pf->StreamingTextureData[83];
	__Local__609.PackedRelativeBox = 3910799529;
	__Local__609.TextureLevelIndex = 90;
	__Local__609.TexelFactor = 289.310059f;
	auto& __Local__610 = bpv__StaticMeshComponent030__pf->StreamingTextureData[84];
	__Local__610.PackedRelativeBox = 3910799529;
	__Local__610.TextureLevelIndex = 91;
	__Local__610.TexelFactor = 365.282837f;
	auto& __Local__611 = bpv__StaticMeshComponent030__pf->StreamingTextureData[85];
	__Local__611.PackedRelativeBox = 3910799529;
	__Local__611.TextureLevelIndex = 92;
	__Local__611.TexelFactor = 365.282837f;
	auto& __Local__612 = bpv__StaticMeshComponent030__pf->StreamingTextureData[86];
	__Local__612.PackedRelativeBox = 3972437122;
	__Local__612.TextureLevelIndex = 93;
	__Local__612.TexelFactor = 255.339584f;
	auto& __Local__613 = bpv__StaticMeshComponent030__pf->StreamingTextureData[87];
	__Local__613.PackedRelativeBox = 4294839424;
	__Local__613.TextureLevelIndex = 20;
	__Local__613.TexelFactor = 481.460693f;
	auto& __Local__614 = bpv__StaticMeshComponent030__pf->StreamingTextureData[88];
	__Local__614.PackedRelativeBox = 4292830432;
	__Local__614.TextureLevelIndex = 14;
	__Local__614.TexelFactor = 160.424332f;
	auto& __Local__615 = bpv__StaticMeshComponent030__pf->StreamingTextureData[89];
	__Local__615.PackedRelativeBox = 3832567848;
	__Local__615.TextureLevelIndex = 94;
	__Local__615.TexelFactor = 384.868347f;
	auto& __Local__616 = bpv__StaticMeshComponent030__pf->StreamingTextureData[90];
	__Local__616.PackedRelativeBox = 3489415107;
	__Local__616.TextureLevelIndex = 26;
	__Local__616.TexelFactor = 241.659546f;
	auto& __Local__617 = bpv__StaticMeshComponent030__pf->StreamingTextureData[91];
	__Local__617.PackedRelativeBox = 4294839744;
	__Local__617.TextureLevelIndex = 28;
	__Local__617.TexelFactor = 501.411438f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), false, 0));
	bpv__StaticMeshComponent030__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__618 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent030__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__618 = FVector(405.652191, -128.525452, -284.163483);
	bpv__StaticMeshComponent030__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), true, 0));
	bpv__StaticMeshComponent031__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent031__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent031__pf->ForcedLodModel = 1;
	auto& __Local__619 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent031__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__619 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent031__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent031__pf->StreamingTextureData.AddUninitialized(47);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent031__pf->StreamingTextureData.GetData(), 47);
	auto& __Local__620 = bpv__StaticMeshComponent031__pf->StreamingTextureData[0];
	__Local__620.PackedRelativeBox = 4238999553;
	__Local__620.TexelFactor = 738.073303f;
	auto& __Local__621 = bpv__StaticMeshComponent031__pf->StreamingTextureData[1];
	__Local__621.PackedRelativeBox = 4294836225;
	__Local__621.TextureLevelIndex = 1;
	__Local__621.TexelFactor = 738.073303f;
	auto& __Local__622 = bpv__StaticMeshComponent031__pf->StreamingTextureData[2];
	__Local__622.PackedRelativeBox = 3489542593;
	__Local__622.TextureLevelIndex = 2;
	__Local__622.TexelFactor = 163.869843f;
	auto& __Local__623 = bpv__StaticMeshComponent031__pf->StreamingTextureData[3];
	__Local__623.PackedRelativeBox = 3489411012;
	__Local__623.TextureLevelIndex = 3;
	__Local__623.TexelFactor = 241.659286f;
	auto& __Local__624 = bpv__StaticMeshComponent031__pf->StreamingTextureData[4];
	__Local__624.PackedRelativeBox = 4294836321;
	__Local__624.TextureLevelIndex = 4;
	__Local__624.TexelFactor = 582.612000f;
	auto& __Local__625 = bpv__StaticMeshComponent031__pf->StreamingTextureData[5];
	__Local__625.PackedRelativeBox = 4294837185;
	__Local__625.TextureLevelIndex = 5;
	__Local__625.TexelFactor = 489.897430f;
	auto& __Local__626 = bpv__StaticMeshComponent031__pf->StreamingTextureData[6];
	__Local__626.PackedRelativeBox = 4294836321;
	__Local__626.TextureLevelIndex = 6;
	__Local__626.TexelFactor = 582.612000f;
	auto& __Local__627 = bpv__StaticMeshComponent031__pf->StreamingTextureData[7];
	__Local__627.PackedRelativeBox = 4294837185;
	__Local__627.TextureLevelIndex = 7;
	__Local__627.TexelFactor = 489.897430f;
	auto& __Local__628 = bpv__StaticMeshComponent031__pf->StreamingTextureData[8];
	__Local__628.PackedRelativeBox = 3755942048;
	__Local__628.TextureLevelIndex = 8;
	__Local__628.TexelFactor = 218.202408f;
	auto& __Local__629 = bpv__StaticMeshComponent031__pf->StreamingTextureData[9];
	__Local__629.PackedRelativeBox = 3755942048;
	__Local__629.TextureLevelIndex = 9;
	__Local__629.TexelFactor = 218.202408f;
	auto& __Local__630 = bpv__StaticMeshComponent031__pf->StreamingTextureData[10];
	__Local__630.PackedRelativeBox = 4292763809;
	__Local__630.TextureLevelIndex = 10;
	__Local__630.TexelFactor = 102.410690f;
	auto& __Local__631 = bpv__StaticMeshComponent031__pf->StreamingTextureData[11];
	__Local__631.PackedRelativeBox = 2950627488;
	__Local__631.TextureLevelIndex = 11;
	__Local__631.TexelFactor = 163.613815f;
	auto& __Local__632 = bpv__StaticMeshComponent031__pf->StreamingTextureData[12];
	__Local__632.PackedRelativeBox = 2950627488;
	__Local__632.TextureLevelIndex = 12;
	__Local__632.TexelFactor = 163.613815f;
	auto& __Local__633 = bpv__StaticMeshComponent031__pf->StreamingTextureData[13];
	__Local__633.PackedRelativeBox = 4292763809;
	__Local__633.TextureLevelIndex = 13;
	__Local__633.TexelFactor = 102.410690f;
	auto& __Local__634 = bpv__StaticMeshComponent031__pf->StreamingTextureData[14];
	__Local__634.PackedRelativeBox = 4292829344;
	__Local__634.TextureLevelIndex = 14;
	__Local__634.TexelFactor = 160.438461f;
	auto& __Local__635 = bpv__StaticMeshComponent031__pf->StreamingTextureData[15];
	__Local__635.PackedRelativeBox = 4292829344;
	__Local__635.TextureLevelIndex = 15;
	__Local__635.TexelFactor = 160.438461f;
	auto& __Local__636 = bpv__StaticMeshComponent031__pf->StreamingTextureData[16];
	__Local__636.PackedRelativeBox = 2950627488;
	__Local__636.TextureLevelIndex = 16;
	__Local__636.TexelFactor = 163.613815f;
	auto& __Local__637 = bpv__StaticMeshComponent031__pf->StreamingTextureData[17];
	__Local__637.PackedRelativeBox = 3755942048;
	__Local__637.TextureLevelIndex = 17;
	__Local__637.TexelFactor = 218.202408f;
	auto& __Local__638 = bpv__StaticMeshComponent031__pf->StreamingTextureData[18];
	__Local__638.PackedRelativeBox = 4292763809;
	__Local__638.TextureLevelIndex = 18;
	__Local__638.TexelFactor = 102.410690f;
	auto& __Local__639 = bpv__StaticMeshComponent031__pf->StreamingTextureData[19];
	__Local__639.PackedRelativeBox = 4294836321;
	__Local__639.TextureLevelIndex = 19;
	__Local__639.TexelFactor = 481.460693f;
	auto& __Local__640 = bpv__StaticMeshComponent031__pf->StreamingTextureData[20];
	__Local__640.PackedRelativeBox = 4294836321;
	__Local__640.TextureLevelIndex = 20;
	__Local__640.TexelFactor = 481.460693f;
	auto& __Local__641 = bpv__StaticMeshComponent031__pf->StreamingTextureData[21];
	__Local__641.PackedRelativeBox = 4294836321;
	__Local__641.TextureLevelIndex = 21;
	__Local__641.TexelFactor = 582.612000f;
	auto& __Local__642 = bpv__StaticMeshComponent031__pf->StreamingTextureData[22];
	__Local__642.PackedRelativeBox = 4294836321;
	__Local__642.TextureLevelIndex = 22;
	__Local__642.TexelFactor = 481.460693f;
	auto& __Local__643 = bpv__StaticMeshComponent031__pf->StreamingTextureData[23];
	__Local__643.PackedRelativeBox = 4294836321;
	__Local__643.TextureLevelIndex = 23;
	__Local__643.TexelFactor = 582.612000f;
	auto& __Local__644 = bpv__StaticMeshComponent031__pf->StreamingTextureData[24];
	__Local__644.PackedRelativeBox = 4294836225;
	__Local__644.TextureLevelIndex = 24;
	__Local__644.TexelFactor = 738.073303f;
	auto& __Local__645 = bpv__StaticMeshComponent031__pf->StreamingTextureData[25];
	__Local__645.PackedRelativeBox = 4294836609;
	__Local__645.TextureLevelIndex = 25;
	__Local__645.TexelFactor = 501.276855f;
	auto& __Local__646 = bpv__StaticMeshComponent031__pf->StreamingTextureData[26];
	__Local__646.PackedRelativeBox = 3489411012;
	__Local__646.TextureLevelIndex = 26;
	__Local__646.TexelFactor = 241.659286f;
	auto& __Local__647 = bpv__StaticMeshComponent031__pf->StreamingTextureData[27];
	__Local__647.PackedRelativeBox = 4292829344;
	__Local__647.TextureLevelIndex = 27;
	__Local__647.TexelFactor = 160.438461f;
	auto& __Local__648 = bpv__StaticMeshComponent031__pf->StreamingTextureData[28];
	__Local__648.PackedRelativeBox = 4294836609;
	__Local__648.TextureLevelIndex = 28;
	__Local__648.TexelFactor = 501.276855f;
	auto& __Local__649 = bpv__StaticMeshComponent031__pf->StreamingTextureData[29];
	__Local__649.PackedRelativeBox = 2763936879;
	__Local__649.TextureLevelIndex = 29;
	__Local__649.TexelFactor = 390.483978f;
	auto& __Local__650 = bpv__StaticMeshComponent031__pf->StreamingTextureData[30];
	__Local__650.PackedRelativeBox = 2763936879;
	__Local__650.TextureLevelIndex = 30;
	__Local__650.TexelFactor = 390.483978f;
	auto& __Local__651 = bpv__StaticMeshComponent031__pf->StreamingTextureData[31];
	__Local__651.PackedRelativeBox = 2763936879;
	__Local__651.TextureLevelIndex = 31;
	__Local__651.TexelFactor = 390.483978f;
	auto& __Local__652 = bpv__StaticMeshComponent031__pf->StreamingTextureData[32];
	__Local__652.PackedRelativeBox = 3489542593;
	__Local__652.TextureLevelIndex = 32;
	__Local__652.TexelFactor = 163.869843f;
	auto& __Local__653 = bpv__StaticMeshComponent031__pf->StreamingTextureData[33];
	__Local__653.PackedRelativeBox = 4240310383;
	__Local__653.TextureLevelIndex = 33;
	__Local__653.TexelFactor = 582.612000f;
	auto& __Local__654 = bpv__StaticMeshComponent031__pf->StreamingTextureData[34];
	__Local__654.PackedRelativeBox = 4240310383;
	__Local__654.TextureLevelIndex = 34;
	__Local__654.TexelFactor = 582.612000f;
	auto& __Local__655 = bpv__StaticMeshComponent031__pf->StreamingTextureData[35];
	__Local__655.PackedRelativeBox = 4294836609;
	__Local__655.TextureLevelIndex = 35;
	__Local__655.TexelFactor = 501.276855f;
	auto& __Local__656 = bpv__StaticMeshComponent031__pf->StreamingTextureData[36];
	__Local__656.PackedRelativeBox = 3489411012;
	__Local__656.TextureLevelIndex = 36;
	__Local__656.TexelFactor = 241.659286f;
	auto& __Local__657 = bpv__StaticMeshComponent031__pf->StreamingTextureData[37];
	__Local__657.PackedRelativeBox = 3489542593;
	__Local__657.TextureLevelIndex = 37;
	__Local__657.TexelFactor = 163.869843f;
	auto& __Local__658 = bpv__StaticMeshComponent031__pf->StreamingTextureData[38];
	__Local__658.PackedRelativeBox = 4240310383;
	__Local__658.TextureLevelIndex = 38;
	__Local__658.TexelFactor = 582.612000f;
	auto& __Local__659 = bpv__StaticMeshComponent031__pf->StreamingTextureData[39];
	__Local__659.PackedRelativeBox = 4238999553;
	__Local__659.TextureLevelIndex = 39;
	__Local__659.TexelFactor = 738.073303f;
	auto& __Local__660 = bpv__StaticMeshComponent031__pf->StreamingTextureData[40];
	__Local__660.PackedRelativeBox = 4238999553;
	__Local__660.TextureLevelIndex = 40;
	__Local__660.TexelFactor = 738.073303f;
	auto& __Local__661 = bpv__StaticMeshComponent031__pf->StreamingTextureData[41];
	__Local__661.PackedRelativeBox = 4294837185;
	__Local__661.TextureLevelIndex = 41;
	__Local__661.TexelFactor = 489.897430f;
	auto& __Local__662 = bpv__StaticMeshComponent031__pf->StreamingTextureData[42];
	__Local__662.PackedRelativeBox = 4238999553;
	__Local__662.TextureLevelIndex = 42;
	__Local__662.TexelFactor = 738.073303f;
	auto& __Local__663 = bpv__StaticMeshComponent031__pf->StreamingTextureData[43];
	__Local__663.PackedRelativeBox = 4238999553;
	__Local__663.TextureLevelIndex = 43;
	__Local__663.TexelFactor = 738.073303f;
	auto& __Local__664 = bpv__StaticMeshComponent031__pf->StreamingTextureData[44];
	__Local__664.PackedRelativeBox = 4238999553;
	__Local__664.TextureLevelIndex = 44;
	__Local__664.TexelFactor = 738.073303f;
	auto& __Local__665 = bpv__StaticMeshComponent031__pf->StreamingTextureData[45];
	__Local__665.PackedRelativeBox = 4238999553;
	__Local__665.TextureLevelIndex = 45;
	__Local__665.TexelFactor = 738.073303f;
	auto& __Local__666 = bpv__StaticMeshComponent031__pf->StreamingTextureData[46];
	__Local__666.PackedRelativeBox = 4238999553;
	__Local__666.TextureLevelIndex = 46;
	__Local__666.TexelFactor = 738.073303f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), false, 0));
	bpv__StaticMeshComponent031__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__667 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__667 = FVector(405.652191, -128.525452, -584.163452);
	bpv__StaticMeshComponent031__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), true, 0));
	bpv__StaticMeshComponent032__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent032__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__668 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent032__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__668 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent032__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent032__pf->StreamingTextureData.AddUninitialized(4);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent032__pf->StreamingTextureData.GetData(), 4);
	auto& __Local__669 = bpv__StaticMeshComponent032__pf->StreamingTextureData[0];
	__Local__669.PackedRelativeBox = 4294901760;
	__Local__669.TextureLevelIndex = 58;
	__Local__669.TexelFactor = 326.354523f;
	auto& __Local__670 = bpv__StaticMeshComponent032__pf->StreamingTextureData[1];
	__Local__670.PackedRelativeBox = 4294901760;
	__Local__670.TextureLevelIndex = 56;
	__Local__670.TexelFactor = 326.354523f;
	auto& __Local__671 = bpv__StaticMeshComponent032__pf->StreamingTextureData[2];
	__Local__671.PackedRelativeBox = 4294901760;
	__Local__671.TextureLevelIndex = 93;
	__Local__671.TexelFactor = 326.354523f;
	auto& __Local__672 = bpv__StaticMeshComponent032__pf->StreamingTextureData[3];
	__Local__672.PackedRelativeBox = 4294901760;
	__Local__672.TextureLevelIndex = 57;
	__Local__672.TexelFactor = 326.354523f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), false, 0));
	bpv__StaticMeshComponent032__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__673 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__673 = FVector(-447.047638, -242.274414, -273.060913);
	auto& __Local__674 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__674 = FRotator(0.000000, 179.999786, 0.000000);
	auto& __Local__675 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__675 = FVector(0.669515, 0.669515, 0.669515);
	bpv__StaticMeshComponent032__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), true, 0));
	bpv__StaticMeshComponent033__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent033__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__676 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent033__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__676 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent033__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent033__pf->StreamingTextureData.AddUninitialized(3);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent033__pf->StreamingTextureData.GetData(), 3);
	auto& __Local__677 = bpv__StaticMeshComponent033__pf->StreamingTextureData[0];
	__Local__677.PackedRelativeBox = 4284285090;
	__Local__677.TextureLevelIndex = 143;
	__Local__677.TexelFactor = 535.218933f;
	auto& __Local__678 = bpv__StaticMeshComponent033__pf->StreamingTextureData[1];
	__Local__678.PackedRelativeBox = 4284285090;
	__Local__678.TextureLevelIndex = 141;
	__Local__678.TexelFactor = 535.218933f;
	auto& __Local__679 = bpv__StaticMeshComponent033__pf->StreamingTextureData[2];
	__Local__679.PackedRelativeBox = 4284285090;
	__Local__679.TextureLevelIndex = 142;
	__Local__679.TexelFactor = 535.218933f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent033__pf), false, 0));
	bpv__StaticMeshComponent033__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__680 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__680 = FVector(122.952362, -242.274414, 396.939087);
	auto& __Local__681 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__681 = FRotator(0.000000, 159.999771, 0.000000);
	auto& __Local__682 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__682 = FVector(0.568414, 0.568414, 0.568414);
	bpv__StaticMeshComponent033__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent033__pf), true, 0));
	bpv__StaticMeshComponent034__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent034__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__683 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent034__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__683 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_2_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent034__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent034__pf->StreamingTextureData.AddUninitialized(3);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent034__pf->StreamingTextureData.GetData(), 3);
	auto& __Local__684 = bpv__StaticMeshComponent034__pf->StreamingTextureData[0];
	__Local__684.PackedRelativeBox = 4284285090;
	__Local__684.TextureLevelIndex = 143;
	__Local__684.TexelFactor = 535.218933f;
	auto& __Local__685 = bpv__StaticMeshComponent034__pf->StreamingTextureData[1];
	__Local__685.PackedRelativeBox = 4284285090;
	__Local__685.TextureLevelIndex = 141;
	__Local__685.TexelFactor = 535.218933f;
	auto& __Local__686 = bpv__StaticMeshComponent034__pf->StreamingTextureData[2];
	__Local__686.PackedRelativeBox = 4284285090;
	__Local__686.TextureLevelIndex = 142;
	__Local__686.TexelFactor = 535.218933f;
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__StaticMeshComponent034__pf), false, 0));
	bpv__StaticMeshComponent034__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__687 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__687 = FVector(122.952362, -242.274414, -203.060913);
	auto& __Local__688 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__688 = FRotator(0.000000, 159.999771, 0.000000);
	auto& __Local__689 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__689 = FVector(0.364795, 0.364795, 0.364795);
	bpv__StaticMeshComponent034__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent034__pf), true, 0));
	auto& __Local__690 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__690 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Building_2_C__pf147218599::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_2_C__pf147218599::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__691 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__691);
	static TWeakFieldPtr<FProperty> __Local__693{};
	const FProperty* __Local__692 = __Local__693.Get();
	if (nullptr == __Local__692)
	{
		__Local__692 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__692);
		__Local__693 = __Local__692;
	}
	(((FBoolProperty*)__Local__692)->SetPropertyValue_InContainer((__Local__691), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_2_C__pf147218599::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
		{1059, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/FlatModules_V_1_1/SM_FlatModule_3.SM_FlatModule_3 
		{1060, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/FlatModules_V_1_1/SM_FlatModule_2.SM_FlatModule_2 
		{1056, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/FlatModules_V_1_1/SM_FlatModule_1.SM_FlatModule_1 
		{1061, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Street/SM_Air_Conditioner.SM_Air_Conditioner 
		{1041, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Tv_Antenna_Tv_Antenna.SM_Tv_Antenna_Tv_Antenna 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_2_C__pf147218599::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__ABP_Building_2_C__pf147218599
{
	FRegisterHelper__ABP_Building_2_C__pf147218599()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Abandoned_City/Blueprints/BP_FlatModules_v_1_1/BP_Building_2"), &ABP_Building_2_C__pf147218599::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Building_2_C__pf147218599 Instance;
};
FRegisterHelper__ABP_Building_2_C__pf147218599 FRegisterHelper__ABP_Building_2_C__pf147218599::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
