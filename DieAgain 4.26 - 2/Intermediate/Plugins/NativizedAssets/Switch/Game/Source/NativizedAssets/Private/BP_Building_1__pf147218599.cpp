#include "NativizedAssets.h"
#include "BP_Building_1__pf147218599.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Building_1_C__pf147218599::ABP_Building_1_C__pf147218599(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__SharedRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SharedRoot"));
	bpv__Base__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Base"));
	bpv__SharedRoot1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SharedRoot1"));
	bpv__StaticMeshComponent031__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent031"));
	bpv__StaticMeshComponent030__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent030"));
	bpv__StaticMeshComponent029__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent029"));
	bpv__StaticMeshComponent028__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent028"));
	bpv__StaticMeshComponent027__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent027"));
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
	bpv__StaticMeshComponent032__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent032"));
	bpv__StaticMeshComponent014__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent014"));
	bpv__StaticMeshComponent013__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent013"));
	bpv__StaticMeshComponent012__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent012"));
	bpv__StaticMeshComponent011__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent011"));
	bpv__StaticMeshComponent010__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent010"));
	bpv__StaticMeshComponent09__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent09"));
	bpv__StaticMeshComponent08__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent08"));
	bpv__StaticMeshComponent015__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent015"));
	bpv__StaticMeshComponent06__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent06"));
	bpv__StaticMeshComponent05__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent05"));
	bpv__StaticMeshComponent04__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent04"));
	bpv__StaticMeshComponent07__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent07"));
	bpv__StaticMeshComponent03__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent03"));
	bpv__StaticMeshComponent02__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent02"));
	bpv__StaticMeshComponent01__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent01"));
	bpv__StaticMeshComponent0__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
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
	bpv__StaticMeshComponent057__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent057"));
	bpv__StaticMeshComponent058__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent058"));
	bpv__StaticMeshComponent059__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent059"));
	bpv__StaticMeshComponent060__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent060"));
	bpv__StaticMeshComponent061__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent061"));
	bpv__SharedRoot2__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SharedRoot2"));
	bpv__StaticMeshComponent0201__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0201"));
	bpv__StaticMeshComponent0191__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0191"));
	bpv__StaticMeshComponent0181__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0181"));
	bpv__StaticMeshComponent0171__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0171"));
	bpv__StaticMeshComponent0161__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0161"));
	bpv__StaticMeshComponent0151__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0151"));
	bpv__StaticMeshComponent0141__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0141"));
	bpv__StaticMeshComponent0131__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0131"));
	bpv__StaticMeshComponent0121__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0121"));
	bpv__StaticMeshComponent0111__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0111"));
	bpv__StaticMeshComponent0211__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0211"));
	bpv__StaticMeshComponent091__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent091"));
	bpv__StaticMeshComponent081__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent081"));
	bpv__StaticMeshComponent071__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent071"));
	bpv__StaticMeshComponent062__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent062"));
	bpv__StaticMeshComponent0510__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0510"));
	bpv__StaticMeshComponent0101__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0101"));
	bpv__StaticMeshComponent0410__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0410"));
	bpv__StaticMeshComponent0310__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0310"));
	bpv__StaticMeshComponent0210__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0210"));
	bpv__StaticMeshComponent0110__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0110"));
	bpv__StaticMeshComponent063__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent063"));
	bpv__StaticMeshComponent064__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent064"));
	bpv__StaticMeshComponent065__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent065"));
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
	__Local__2 = FVector(-1477.900024, 1061.427002, -724.682739);
	bpv__Base__pf->Mobility = EComponentMobility::Type::Static;
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
	bpv__SharedRoot1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SharedRoot1__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__SharedRoot1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(158.810547, -445.706543, 782.407837);
	auto& __Local__6 = (*(AccessPrivateProperty<FRotator >((bpv__SharedRoot1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__6 = FRotator(0.000000, -179.999954, 0.000000);
	bpv__SharedRoot1__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__SharedRoot1__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SharedRoot1__pf), false, 0));
	bpv__StaticMeshComponent031__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent031__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__7 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent031__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__7 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__9{};
	const FProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), false, 0));
	bpv__StaticMeshComponent031__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent031__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__10 = FVector(291.952911, -513.774170, -7.373016);
	auto& __Local__11 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__11 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent031__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__12 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent031__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent031__pf), true, 0));
	bpv__StaticMeshComponent030__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent030__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__13 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent030__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__13 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), false, 0));
	bpv__StaticMeshComponent030__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent030__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent030__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(-306.513794, -243.512451, -17.037842);
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent030__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__15 = FVector(1.100487, 0.933314, 1.000000);
	bpv__StaticMeshComponent030__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent030__pf), true, 0));
	bpv__StaticMeshComponent029__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent029__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__16 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent029__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__16 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), false, 0));
	bpv__StaticMeshComponent029__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent029__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent029__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(-644.124268, -233.774170, -8.325195);
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent029__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__18 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent029__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent029__pf), true, 0));
	bpv__StaticMeshComponent028__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent028__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent028__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__19 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), false, 0));
	bpv__StaticMeshComponent028__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent028__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent028__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__20 = FVector(293.486267, -243.512451, -17.037842);
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent028__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__21 = FVector(1.000000, 0.949395, 1.000000);
	bpv__StaticMeshComponent028__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent028__pf), true, 0));
	bpv__StaticMeshComponent027__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent027__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__22 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent027__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__22 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), false, 0));
	bpv__StaticMeshComponent027__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent027__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__23 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__23 = FVector(-320.906738, -233.774170, -8.325195);
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent027__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__24 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent027__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent027__pf), true, 0));
	bpv__StaticMeshComponent026__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent026__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__25 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent026__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__25 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), false, 0));
	bpv__StaticMeshComponent026__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent026__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__26 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__26 = FVector(-31.264648, -233.774170, -7.850830);
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent026__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__27 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent026__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent026__pf), true, 0));
	bpv__StaticMeshComponent025__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent025__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__28 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent025__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__28 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), false, 0));
	bpv__StaticMeshComponent025__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent025__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__29 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__29 = FVector(291.952911, -233.774170, -7.850830);
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent025__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__30 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent025__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent025__pf), true, 0));
	bpv__StaticMeshComponent024__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent024__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__31 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent024__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__31 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), false, 0));
	bpv__StaticMeshComponent024__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent024__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__32 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent024__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__32 = FVector(-16.532593, -229.730225, -10.006104);
	auto& __Local__33 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent024__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__33 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent024__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__34 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent024__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent024__pf), true, 0));
	bpv__StaticMeshComponent023__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent023__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__35 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent023__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__35 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), false, 0));
	bpv__StaticMeshComponent023__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent023__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__36 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__36 = FVector(604.795105, -229.730225, -10.006104);
	auto& __Local__37 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__37 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent023__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__38 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent023__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent023__pf), true, 0));
	bpv__StaticMeshComponent022__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent022__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__39 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent022__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__39 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), false, 0));
	bpv__StaticMeshComponent022__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent022__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__40 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent022__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__40 = FVector(-434.028320, -144.450195, 2.962097);
	bpv__StaticMeshComponent022__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent022__pf), true, 0));
	bpv__StaticMeshComponent021__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent021__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__41 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent021__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__41 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), false, 0));
	bpv__StaticMeshComponent021__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent021__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__42 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent021__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__42 = FVector(154.900269, -144.450195, 2.962097);
	bpv__StaticMeshComponent021__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent021__pf), true, 0));
	bpv__StaticMeshComponent020__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent020__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__43 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent020__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__43 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), false, 0));
	bpv__StaticMeshComponent020__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent020__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__44 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent020__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__44 = FVector(-455.452881, -45.689941, 68.073425);
	auto& __Local__45 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent020__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__45 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent020__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__46 = FVector(1.274910, 1.274910, 1.274910);
	bpv__StaticMeshComponent020__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent020__pf), true, 0));
	bpv__StaticMeshComponent019__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent019__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__47 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent019__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__47 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), false, 0));
	bpv__StaticMeshComponent019__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent019__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__48 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent019__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__48 = FVector(-306.513794, 56.487549, -17.037842);
	auto& __Local__49 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent019__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__49 = FVector(1.100487, 1.000000, 1.000000);
	bpv__StaticMeshComponent019__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent019__pf), true, 0));
	bpv__StaticMeshComponent018__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent018__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__50 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent018__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__50 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), false, 0));
	bpv__StaticMeshComponent018__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent018__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__51 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent018__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__51 = FVector(-6.513794, 56.487549, -17.037842);
	bpv__StaticMeshComponent018__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent018__pf), true, 0));
	bpv__StaticMeshComponent017__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent017__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__52 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent017__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__52 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), false, 0));
	bpv__StaticMeshComponent017__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent017__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__53 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent017__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__53 = FVector(133.475708, -45.689941, 68.073425);
	auto& __Local__54 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent017__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__54 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__55 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent017__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__55 = FVector(1.274910, 1.274910, 1.274910);
	bpv__StaticMeshComponent017__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent017__pf), true, 0));
	bpv__StaticMeshComponent016__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent016__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__56 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent016__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__56 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), false, 0));
	bpv__StaticMeshComponent016__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent016__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__57 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent016__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__57 = FVector(293.486267, 56.487549, -17.037842);
	bpv__StaticMeshComponent016__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent016__pf), true, 0));
	bpv__StaticMeshComponent032__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent032__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__58 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent032__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__58 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), false, 0));
	bpv__StaticMeshComponent032__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent032__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__59 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__59 = FVector(-320.906738, -513.774170, -7.036011);
	auto& __Local__60 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__60 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__61 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent032__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__61 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent032__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent032__pf), true, 0));
	bpv__StaticMeshComponent014__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent014__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__62 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent014__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__62 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), false, 0));
	bpv__StaticMeshComponent014__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent014__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__63 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent014__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__63 = FVector(593.486206, 56.487549, -17.037842);
	auto& __Local__64 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent014__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__64 = FVector(1.000000, 0.959688, 1.000000);
	bpv__StaticMeshComponent014__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent014__pf), true, 0));
	bpv__StaticMeshComponent013__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent013__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__65 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent013__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__65 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), false, 0));
	bpv__StaticMeshComponent013__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent013__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__66 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent013__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__66 = FVector(580.143372, 66.225830, -8.325195);
	auto& __Local__67 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent013__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__67 = FVector(1.121874, 0.675768, 1.000000);
	bpv__StaticMeshComponent013__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent013__pf), true, 0));
	bpv__StaticMeshComponent012__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent012__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__68 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent012__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__68 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), false, 0));
	bpv__StaticMeshComponent012__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent012__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__69 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent012__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__69 = FVector(-455.452881, 91.744141, 68.073425);
	auto& __Local__70 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent012__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__70 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__71 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent012__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__71 = FVector(1.274910, 1.274910, 1.274910);
	bpv__StaticMeshComponent012__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent012__pf), true, 0));
	bpv__StaticMeshComponent011__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent011__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__72 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent011__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__72 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), false, 0));
	bpv__StaticMeshComponent011__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent011__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__73 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent011__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__73 = FVector(133.475708, 91.744141, 68.073425);
	auto& __Local__74 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent011__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__74 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__75 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent011__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__75 = FVector(1.274910, 1.274910, 1.274910);
	bpv__StaticMeshComponent011__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent011__pf), true, 0));
	bpv__StaticMeshComponent010__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent010__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__76 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent010__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__76 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), false, 0));
	bpv__StaticMeshComponent010__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent010__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__77 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__77 = FVector(-462.909668, 37.578857, 2.962158);
	auto& __Local__78 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent010__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__78 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent010__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent010__pf), true, 0));
	bpv__StaticMeshComponent09__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent09__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__79 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent09__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__79 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), false, 0));
	bpv__StaticMeshComponent09__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent09__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__80 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent09__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__80 = FVector(126.018921, 37.578857, 2.962158);
	auto& __Local__81 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent09__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__81 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent09__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent09__pf), true, 0));
	bpv__StaticMeshComponent08__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent08__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__82 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent08__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__82 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), false, 0));
	bpv__StaticMeshComponent08__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent08__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__83 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__83 = FVector(-306.513794, 356.487305, -17.037842);
	auto& __Local__84 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent08__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__84 = FVector(1.100487, 1.000000, 1.000000);
	bpv__StaticMeshComponent08__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent08__pf), true, 0));
	bpv__StaticMeshComponent015__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent015__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__85 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent015__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__85 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), false, 0));
	bpv__StaticMeshComponent015__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent015__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__86 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent015__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__86 = FVector(-644.124268, 66.225830, -8.325195);
	auto& __Local__87 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent015__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__87 = FVector(1.000000, 0.675768, 1.000000);
	bpv__StaticMeshComponent015__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent015__pf), true, 0));
	bpv__StaticMeshComponent06__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent06__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__88 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent06__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__88 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), false, 0));
	bpv__StaticMeshComponent06__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent06__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__89 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent06__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__89 = FVector(293.486267, 356.487305, -17.037842);
	bpv__StaticMeshComponent06__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent06__pf), true, 0));
	bpv__StaticMeshComponent05__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent05__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__90 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent05__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__90 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), false, 0));
	bpv__StaticMeshComponent05__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent05__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__91 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent05__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__91 = FVector(593.486206, 356.487305, -17.037842);
	bpv__StaticMeshComponent05__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent05__pf), true, 0));
	bpv__StaticMeshComponent04__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent04__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__92 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent04__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__92 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), false, 0));
	bpv__StaticMeshComponent04__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent04__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__93 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent04__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__93 = FVector(-343.830078, 366.225830, -8.325073);
	bpv__StaticMeshComponent04__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent04__pf), true, 0));
	bpv__StaticMeshComponent07__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent07__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__94 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent07__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__94 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), false, 0));
	bpv__StaticMeshComponent07__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent07__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__95 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent07__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__95 = FVector(-6.513794, 356.487305, -17.037842);
	bpv__StaticMeshComponent07__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent07__pf), true, 0));
	bpv__StaticMeshComponent03__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent03__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__96 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent03__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__96 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), false, 0));
	bpv__StaticMeshComponent03__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent03__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__97 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent03__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__97 = FVector(-343.830078, 346.225830, -8.325073);
	auto& __Local__98 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent03__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__98 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent03__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent03__pf), true, 0));
	bpv__StaticMeshComponent02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent02__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__99 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent02__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__99 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), false, 0));
	bpv__StaticMeshComponent02__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent02__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__100 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent02__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__100 = FVector(-43.830078, 346.225830, -8.325073);
	auto& __Local__101 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent02__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__101 = FRotator(0.000000, 90.000114, 0.000000);
	bpv__StaticMeshComponent02__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent02__pf), true, 0));
	bpv__StaticMeshComponent01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent01__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__102 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent01__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__102 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), false, 0));
	bpv__StaticMeshComponent01__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent01__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__103 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__103 = FVector(601.857056, 66.780762, -8.325073);
	auto& __Local__104 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__104 = FRotator(0.000000, -90.000099, 0.000000);
	auto& __Local__105 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent01__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__105 = FVector(1.000000, 1.151553, 1.000000);
	bpv__StaticMeshComponent01__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent01__pf), true, 0));
	bpv__StaticMeshComponent0__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0__pf->AttachToComponent(bpv__SharedRoot1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__106 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__106 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), false, 0));
	bpv__StaticMeshComponent0__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__107 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__107 = FVector(463.765564, 120.956787, 2.962097);
	bpv__StaticMeshComponent0__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0__pf), true, 0));
	bpv__StaticMeshComponent033__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent033__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent033__pf->ForcedLodModel = 1;
	auto& __Local__108 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent033__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__108 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent033__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Reserve(21);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent033__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent033__pf), false, 0));
	bpv__StaticMeshComponent033__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__109 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__109 = FVector(-440.282837, -211.931152, 474.082642);
	auto& __Local__110 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent033__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__110 = FRotator(0.000000, -179.999954, 0.000000);
	bpv__StaticMeshComponent033__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent033__pf), true, 0));
	bpv__StaticMeshComponent034__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent034__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__111 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent034__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__111 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent034__pf), false, 0));
	bpv__StaticMeshComponent034__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__112 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__112 = FVector(-117.900024, 81.427002, 709.665405);
	auto& __Local__113 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__113 = FRotator(-8.092005, -90.000000, 0.000049);
	auto& __Local__114 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent034__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__114 = FVector(-0.260085, 1.000000, 1.000000);
	bpv__StaticMeshComponent034__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent034__pf), true, 0));
	bpv__StaticMeshComponent035__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent035__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__115 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent035__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__115 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent035__pf), false, 0));
	bpv__StaticMeshComponent035__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__116 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent035__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__116 = FVector(62.099976, 91.427002, 689.665405);
	auto& __Local__117 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent035__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__117 = FVector(0.676118, 0.676118, 0.676118);
	bpv__StaticMeshComponent035__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent035__pf), true, 0));
	bpv__StaticMeshComponent036__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent036__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__118 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent036__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__118 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent036__pf), false, 0));
	bpv__StaticMeshComponent036__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__119 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent036__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__119 = FVector(614.600708, 80.299072, 509.319580);
	auto& __Local__120 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent036__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__120 = FRotator(0.000000, 179.999756, 0.000000);
	auto& __Local__121 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent036__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__121 = FVector(1.021476, 0.887187, 0.887187);
	bpv__StaticMeshComponent036__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent036__pf), true, 0));
	bpv__StaticMeshComponent037__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent037__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__122 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent037__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__122 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent037__pf), false, 0));
	bpv__StaticMeshComponent037__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__123 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent037__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__123 = FVector(-7.900024, 91.427002, 589.665405);
	auto& __Local__124 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent037__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__124 = FRotator(0.000000, 9.866719, 0.000000);
	auto& __Local__125 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent037__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__125 = FVector(0.429583, 0.429583, 0.429583);
	bpv__StaticMeshComponent037__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent037__pf), true, 0));
	bpv__StaticMeshComponent038__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent038__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__126 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent038__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__126 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent038__pf), false, 0));
	bpv__StaticMeshComponent038__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__127 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent038__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__127 = FVector(-254.080078, -205.763672, 728.213745);
	auto& __Local__128 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent038__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__128 = FVector(0.676118, 0.676118, 0.676118);
	bpv__StaticMeshComponent038__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent038__pf), true, 0));
	bpv__StaticMeshComponent039__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent039__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__129 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent039__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__129 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent039__pf), false, 0));
	bpv__StaticMeshComponent039__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__130 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent039__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__130 = FVector(-324.080078, -205.763672, 628.213745);
	auto& __Local__131 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent039__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__131 = FRotator(0.000000, 9.866719, 0.000000);
	auto& __Local__132 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent039__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__132 = FVector(0.429583, 0.429583, 0.429583);
	bpv__StaticMeshComponent039__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent039__pf), true, 0));
	bpv__StaticMeshComponent040__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent040__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__133 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent040__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__133 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent040__pf), false, 0));
	bpv__StaticMeshComponent040__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__134 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent040__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__134 = FVector(-434.080078, -228.384766, 748.213745);
	auto& __Local__135 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent040__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__135 = FRotator(-8.092005, -90.000000, 0.000049);
	auto& __Local__136 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent040__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__136 = FVector(-0.260085, 1.000000, 1.000000);
	bpv__StaticMeshComponent040__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent040__pf), true, 0));
	bpv__StaticMeshComponent041__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent041__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__137 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent041__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__137 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent041__pf), false, 0));
	bpv__StaticMeshComponent041__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__138 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent041__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__138 = FVector(20.296570, 43.356445, 170.938599);
	auto& __Local__139 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent041__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__139 = FRotator(0.000000, 179.999756, 0.000000);
	auto& __Local__140 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent041__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__140 = FVector(0.926792, 0.887187, 0.887187);
	bpv__StaticMeshComponent041__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent041__pf), true, 0));
	bpv__StaticMeshComponent042__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent042__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__141 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent042__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__141 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent042__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Reserve(21);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent042__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent042__pf), false, 0));
	bpv__StaticMeshComponent042__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__142 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent042__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__142 = FVector(-440.282837, -211.931152, 174.082642);
	auto& __Local__143 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent042__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__143 = FRotator(0.000000, -179.999954, 0.000000);
	bpv__StaticMeshComponent042__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent042__pf), true, 0));
	bpv__StaticMeshComponent043__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent043__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__144 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent043__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__144 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent043__pf), false, 0));
	bpv__StaticMeshComponent043__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__145 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent043__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__145 = FVector(588.289978, 91.427002, 376.567017);
	auto& __Local__146 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent043__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__146 = FVector(0.676118, 0.676118, 0.676118);
	bpv__StaticMeshComponent043__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent043__pf), true, 0));
	bpv__StaticMeshComponent044__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent044__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__147 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent044__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__147 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent044__pf), false, 0));
	bpv__StaticMeshComponent044__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__148 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent044__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__148 = FVector(684.788086, 81.427002, 276.567017);
	auto& __Local__149 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent044__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__149 = FRotator(0.000000, 0.000000, 41.860294);
	auto& __Local__150 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent044__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__150 = FVector(0.269771, 0.269771, 0.269771);
	bpv__StaticMeshComponent044__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent044__pf), true, 0));
	bpv__StaticMeshComponent045__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent045__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__151 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent045__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__151 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent045__pf), false, 0));
	bpv__StaticMeshComponent045__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__152 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent045__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__152 = FVector(518.289978, 91.427002, 276.567017);
	auto& __Local__153 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent045__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__153 = FRotator(0.000000, 9.866719, 0.000000);
	auto& __Local__154 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent045__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__154 = FVector(0.429583, 0.429583, 0.429583);
	bpv__StaticMeshComponent045__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent045__pf), true, 0));
	bpv__StaticMeshComponent046__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent046__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent046__pf->ForcedLodModel = 1;
	auto& __Local__155 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent046__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__155 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent046__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Reserve(21);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent046__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent046__pf), false, 0));
	bpv__StaticMeshComponent046__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__156 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent046__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__156 = FVector(-440.282837, -211.931152, -125.917358);
	auto& __Local__157 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent046__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__157 = FRotator(0.000000, -179.999954, 0.000000);
	bpv__StaticMeshComponent046__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent046__pf), true, 0));
	bpv__StaticMeshComponent047__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent047__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__158 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent047__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__158 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent047__pf), false, 0));
	bpv__StaticMeshComponent047__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__159 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent047__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__159 = FVector(62.099976, 91.427002, 75.317261);
	auto& __Local__160 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent047__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__160 = FVector(0.676118, 0.676118, 0.676118);
	bpv__StaticMeshComponent047__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent047__pf), true, 0));
	bpv__StaticMeshComponent048__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent048__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__161 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent048__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__161 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent048__pf), false, 0));
	bpv__StaticMeshComponent048__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__162 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent048__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__162 = FVector(158.598083, 81.427002, -24.682739);
	auto& __Local__163 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent048__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__163 = FRotator(0.000000, 0.000000, 41.860294);
	auto& __Local__164 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent048__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__164 = FVector(0.269771, 0.269771, 0.269771);
	bpv__StaticMeshComponent048__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent048__pf), true, 0));
	bpv__StaticMeshComponent049__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent049__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__165 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent049__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__165 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent049__pf), false, 0));
	bpv__StaticMeshComponent049__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__166 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent049__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__166 = FVector(-117.900024, 81.427002, 95.317261);
	auto& __Local__167 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent049__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__167 = FRotator(-8.092005, -90.000000, 0.000049);
	auto& __Local__168 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent049__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__168 = FVector(-0.260085, 1.000000, 1.000000);
	bpv__StaticMeshComponent049__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent049__pf), true, 0));
	bpv__StaticMeshComponent050__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent050__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__169 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent050__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__169 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent050__pf), false, 0));
	bpv__StaticMeshComponent050__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__170 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent050__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__170 = FVector(-292.483765, -211.930908, -114.645874);
	bpv__StaticMeshComponent050__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent050__pf), true, 0));
	bpv__StaticMeshComponent051__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent051__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__171 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent051__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__171 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent051__pf), false, 0));
	bpv__StaticMeshComponent051__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__172 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent051__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__172 = FVector(-7.900024, 91.427002, -24.682739);
	auto& __Local__173 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent051__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__173 = FRotator(0.000000, 9.866719, 0.000000);
	auto& __Local__174 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent051__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__174 = FVector(0.429583, 0.429583, 0.429583);
	bpv__StaticMeshComponent051__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent051__pf), true, 0));
	bpv__StaticMeshComponent052__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent052__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__175 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent052__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__175 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent052__pf), false, 0));
	bpv__StaticMeshComponent052__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__176 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent052__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__176 = FVector(518.289978, 91.427002, -33.206299);
	auto& __Local__177 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent052__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__177 = FRotator(0.000000, 9.866719, 0.000000);
	auto& __Local__178 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent052__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__178 = FVector(0.429583, 0.429583, 0.429583);
	bpv__StaticMeshComponent052__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent052__pf), true, 0));
	bpv__StaticMeshComponent053__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent053__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__179 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent053__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__179 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent053__pf), false, 0));
	bpv__StaticMeshComponent053__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__180 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent053__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__180 = FVector(736.379089, 91.427002, -33.206299);
	auto& __Local__181 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent053__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__181 = FRotator(0.000000, 9.866719, 0.000000);
	auto& __Local__182 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent053__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__182 = FVector(0.658614, 0.658614, 0.658614);
	bpv__StaticMeshComponent053__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent053__pf), true, 0));
	bpv__StaticMeshComponent054__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent054__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__183 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent054__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__183 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent054__pf), false, 0));
	bpv__StaticMeshComponent054__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__184 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent054__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__184 = FVector(162.099976, 91.427002, -134.682739);
	auto& __Local__185 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent054__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__185 = FRotator(0.000000, -100.000160, 0.000000);
	auto& __Local__186 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent054__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__186 = FVector(0.674344, 0.674344, 0.674344);
	bpv__StaticMeshComponent054__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent054__pf), true, 0));
	bpv__StaticMeshComponent055__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent055__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__187 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent055__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__187 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent055__pf), false, 0));
	bpv__StaticMeshComponent055__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__188 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent055__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__188 = FVector(639.587891, 87.203735, -415.215576);
	auto& __Local__189 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent055__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__189 = FRotator(0.000000, 179.999756, 0.000000);
	auto& __Local__190 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent055__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__190 = FVector(1.018427, 0.887187, 0.887187);
	bpv__StaticMeshComponent055__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent055__pf), true, 0));
	bpv__StaticMeshComponent056__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent056__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__191 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent056__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__191 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent056__pf), false, 0));
	bpv__StaticMeshComponent056__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__192 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent056__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__192 = FVector(-4.547974, 86.077393, -379.213806);
	auto& __Local__193 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent056__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__193 = FRotator(0.000000, 179.999786, 0.000000);
	bpv__StaticMeshComponent056__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent056__pf), true, 0));
	bpv__StaticMeshComponent057__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent057__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__194 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent057__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__194 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent057__pf), false, 0));
	bpv__StaticMeshComponent057__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__195 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent057__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__195 = FVector(-154.971802, -207.443604, -419.597168);
	bpv__StaticMeshComponent057__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent057__pf), true, 0));
	bpv__StaticMeshComponent058__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent058__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent058__pf->ForcedLodModel = 1;
	auto& __Local__196 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent058__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__196 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent058__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Reserve(21);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent058__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent058__pf), false, 0));
	bpv__StaticMeshComponent058__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__197 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent058__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__197 = FVector(-440.282837, -211.931152, -725.917297);
	auto& __Local__198 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent058__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__198 = FRotator(0.000000, -179.999954, 0.000000);
	bpv__StaticMeshComponent058__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent058__pf), true, 0));
	bpv__StaticMeshComponent059__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent059__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__199 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent059__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__199 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent059__pf), false, 0));
	bpv__StaticMeshComponent059__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__200 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent059__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__200 = FVector(-4.547974, 86.077393, -654.214539);
	auto& __Local__201 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent059__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__201 = FRotator(0.000000, 179.999786, 0.000000);
	bpv__StaticMeshComponent059__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent059__pf), true, 0));
	bpv__StaticMeshComponent060__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent060__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__202 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent060__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__202 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent060__pf), false, 0));
	bpv__StaticMeshComponent060__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__203 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent060__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__203 = FVector(111.776733, 86.077515, -654.214539);
	auto& __Local__204 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent060__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__204 = FRotator(0.000000, 179.999786, 0.000000);
	bpv__StaticMeshComponent060__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent060__pf), true, 0));
	bpv__StaticMeshComponent061__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent061__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__205 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent061__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__205 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent061__pf), false, 0));
	bpv__StaticMeshComponent061__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__206 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent061__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__206 = FVector(521.881958, 86.082642, -654.214539);
	auto& __Local__207 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent061__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__207 = FRotator(0.000000, 179.999786, 0.000000);
	bpv__StaticMeshComponent061__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent061__pf), true, 0));
	bpv__SharedRoot2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SharedRoot2__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__208 = (*(AccessPrivateProperty<FVector >((bpv__SharedRoot2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__208 = FVector(282.099976, -288.572998, -734.682739);
	bpv__SharedRoot2__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__SharedRoot2__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SharedRoot2__pf), false, 0));
	bpv__StaticMeshComponent0201__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0201__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__209 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0201__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__209 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0201__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0201__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0201__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__210 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[0];
	__Local__210.PackedRelativeBox = 4294901760;
	__Local__210.TextureLevelIndex = 131;
	__Local__210.TexelFactor = 574.107788f;
	auto& __Local__211 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[1];
	__Local__211.PackedRelativeBox = 4294901760;
	__Local__211.TextureLevelIndex = 132;
	__Local__211.TexelFactor = 574.107788f;
	auto& __Local__212 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[2];
	__Local__212.PackedRelativeBox = 4294901760;
	__Local__212.TextureLevelIndex = 40;
	__Local__212.TexelFactor = 574.107788f;
	auto& __Local__213 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[3];
	__Local__213.PackedRelativeBox = 4294901760;
	__Local__213.TextureLevelIndex = 49;
	__Local__213.TexelFactor = 574.107788f;
	auto& __Local__214 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[4];
	__Local__214.PackedRelativeBox = 4294901760;
	__Local__214.TextureLevelIndex = 133;
	__Local__214.TexelFactor = 574.107788f;
	auto& __Local__215 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[5];
	__Local__215.PackedRelativeBox = 4294901760;
	__Local__215.TextureLevelIndex = 43;
	__Local__215.TexelFactor = 574.107788f;
	auto& __Local__216 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[6];
	__Local__216.PackedRelativeBox = 4294901760;
	__Local__216.TextureLevelIndex = 44;
	__Local__216.TexelFactor = 574.107788f;
	auto& __Local__217 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[7];
	__Local__217.PackedRelativeBox = 4294901760;
	__Local__217.TextureLevelIndex = 45;
	__Local__217.TexelFactor = 574.107788f;
	auto& __Local__218 = bpv__StaticMeshComponent0201__pf->StreamingTextureData[8];
	__Local__218.PackedRelativeBox = 4294901760;
	__Local__218.TextureLevelIndex = 46;
	__Local__218.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0201__pf), false, 0));
	bpv__StaticMeshComponent0201__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0201__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__219 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0201__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__219 = FVector(488.174255, 380.934601, -4.683105);
	bpv__StaticMeshComponent0201__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0201__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0201__pf), true, 0));
	bpv__StaticMeshComponent0191__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0191__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__220 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0191__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__220 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0191__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0191__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0191__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__221 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[0];
	__Local__221.PackedRelativeBox = 4294901760;
	__Local__221.TextureLevelIndex = 134;
	__Local__221.TexelFactor = 628.452393f;
	auto& __Local__222 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[1];
	__Local__222.PackedRelativeBox = 4294901760;
	__Local__222.TextureLevelIndex = 135;
	__Local__222.TexelFactor = 628.452393f;
	auto& __Local__223 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[2];
	__Local__223.PackedRelativeBox = 4294901760;
	__Local__223.TextureLevelIndex = 40;
	__Local__223.TexelFactor = 628.452393f;
	auto& __Local__224 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[3];
	__Local__224.PackedRelativeBox = 4294901760;
	__Local__224.TextureLevelIndex = 49;
	__Local__224.TexelFactor = 628.452393f;
	auto& __Local__225 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[4];
	__Local__225.PackedRelativeBox = 4294901760;
	__Local__225.TextureLevelIndex = 136;
	__Local__225.TexelFactor = 628.452393f;
	auto& __Local__226 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[5];
	__Local__226.PackedRelativeBox = 4294901760;
	__Local__226.TextureLevelIndex = 43;
	__Local__226.TexelFactor = 628.452393f;
	auto& __Local__227 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[6];
	__Local__227.PackedRelativeBox = 4294901760;
	__Local__227.TextureLevelIndex = 44;
	__Local__227.TexelFactor = 628.452393f;
	auto& __Local__228 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[7];
	__Local__228.PackedRelativeBox = 4294901760;
	__Local__228.TextureLevelIndex = 45;
	__Local__228.TexelFactor = 628.452393f;
	auto& __Local__229 = bpv__StaticMeshComponent0191__pf->StreamingTextureData[8];
	__Local__229.PackedRelativeBox = 4294901760;
	__Local__229.TextureLevelIndex = 46;
	__Local__229.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0191__pf), false, 0));
	bpv__StaticMeshComponent0191__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0191__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__230 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0191__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__230 = FVector(502.433960, 101.266968, 5.316772);
	auto& __Local__231 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0191__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__231 = FRotator(0.000000, -90.000694, 0.000000);
	bpv__StaticMeshComponent0191__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0191__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0191__pf), true, 0));
	bpv__StaticMeshComponent0181__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0181__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__232 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0181__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__232 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0181__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0181__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0181__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__233 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[0];
	__Local__233.PackedRelativeBox = 4294901760;
	__Local__233.TextureLevelIndex = 131;
	__Local__233.TexelFactor = 574.107788f;
	auto& __Local__234 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[1];
	__Local__234.PackedRelativeBox = 4294901760;
	__Local__234.TextureLevelIndex = 132;
	__Local__234.TexelFactor = 574.107788f;
	auto& __Local__235 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[2];
	__Local__235.PackedRelativeBox = 4294901760;
	__Local__235.TextureLevelIndex = 40;
	__Local__235.TexelFactor = 574.107788f;
	auto& __Local__236 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[3];
	__Local__236.PackedRelativeBox = 4294901760;
	__Local__236.TextureLevelIndex = 49;
	__Local__236.TexelFactor = 574.107788f;
	auto& __Local__237 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[4];
	__Local__237.PackedRelativeBox = 4294901760;
	__Local__237.TextureLevelIndex = 133;
	__Local__237.TexelFactor = 574.107788f;
	auto& __Local__238 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[5];
	__Local__238.PackedRelativeBox = 4294901760;
	__Local__238.TextureLevelIndex = 43;
	__Local__238.TexelFactor = 574.107788f;
	auto& __Local__239 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[6];
	__Local__239.PackedRelativeBox = 4294901760;
	__Local__239.TextureLevelIndex = 44;
	__Local__239.TexelFactor = 574.107788f;
	auto& __Local__240 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[7];
	__Local__240.PackedRelativeBox = 4294901760;
	__Local__240.TextureLevelIndex = 45;
	__Local__240.TexelFactor = 574.107788f;
	auto& __Local__241 = bpv__StaticMeshComponent0181__pf->StreamingTextureData[8];
	__Local__241.PackedRelativeBox = 4294901760;
	__Local__241.TextureLevelIndex = 46;
	__Local__241.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0181__pf), false, 0));
	bpv__StaticMeshComponent0181__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0181__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__242 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0181__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__242 = FVector(188.174255, 380.934601, -4.683105);
	bpv__StaticMeshComponent0181__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0181__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0181__pf), true, 0));
	bpv__StaticMeshComponent0171__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0171__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__243 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0171__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__243 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0171__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0171__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0171__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__244 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[0];
	__Local__244.PackedRelativeBox = 4294901760;
	__Local__244.TextureLevelIndex = 131;
	__Local__244.TexelFactor = 574.107788f;
	auto& __Local__245 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[1];
	__Local__245.PackedRelativeBox = 4294901760;
	__Local__245.TextureLevelIndex = 132;
	__Local__245.TexelFactor = 574.107788f;
	auto& __Local__246 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[2];
	__Local__246.PackedRelativeBox = 4294901760;
	__Local__246.TextureLevelIndex = 40;
	__Local__246.TexelFactor = 574.107788f;
	auto& __Local__247 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[3];
	__Local__247.PackedRelativeBox = 4294901760;
	__Local__247.TextureLevelIndex = 49;
	__Local__247.TexelFactor = 574.107788f;
	auto& __Local__248 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[4];
	__Local__248.PackedRelativeBox = 4294901760;
	__Local__248.TextureLevelIndex = 133;
	__Local__248.TexelFactor = 574.107788f;
	auto& __Local__249 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[5];
	__Local__249.PackedRelativeBox = 4294901760;
	__Local__249.TextureLevelIndex = 43;
	__Local__249.TexelFactor = 574.107788f;
	auto& __Local__250 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[6];
	__Local__250.PackedRelativeBox = 4294901760;
	__Local__250.TextureLevelIndex = 44;
	__Local__250.TexelFactor = 574.107788f;
	auto& __Local__251 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[7];
	__Local__251.PackedRelativeBox = 4294901760;
	__Local__251.TextureLevelIndex = 45;
	__Local__251.TexelFactor = 574.107788f;
	auto& __Local__252 = bpv__StaticMeshComponent0171__pf->StreamingTextureData[8];
	__Local__252.PackedRelativeBox = 4294901760;
	__Local__252.TextureLevelIndex = 46;
	__Local__252.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0171__pf), false, 0));
	bpv__StaticMeshComponent0171__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0171__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__253 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0171__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__253 = FVector(-411.825745, 380.934601, -4.683105);
	bpv__StaticMeshComponent0171__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0171__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0171__pf), true, 0));
	bpv__StaticMeshComponent0161__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0161__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__254 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0161__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__254 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0161__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0161__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0161__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__255 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[0];
	__Local__255.PackedRelativeBox = 4294901760;
	__Local__255.TextureLevelIndex = 137;
	__Local__255.TexelFactor = 300.084900f;
	auto& __Local__256 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[1];
	__Local__256.PackedRelativeBox = 4294901760;
	__Local__256.TextureLevelIndex = 138;
	__Local__256.TexelFactor = 300.084900f;
	auto& __Local__257 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[2];
	__Local__257.PackedRelativeBox = 4294901760;
	__Local__257.TextureLevelIndex = 40;
	__Local__257.TexelFactor = 300.084900f;
	auto& __Local__258 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[3];
	__Local__258.PackedRelativeBox = 4294901760;
	__Local__258.TextureLevelIndex = 49;
	__Local__258.TexelFactor = 300.084900f;
	auto& __Local__259 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[4];
	__Local__259.PackedRelativeBox = 4294901760;
	__Local__259.TextureLevelIndex = 139;
	__Local__259.TexelFactor = 300.084900f;
	auto& __Local__260 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[5];
	__Local__260.PackedRelativeBox = 4294901760;
	__Local__260.TextureLevelIndex = 43;
	__Local__260.TexelFactor = 300.084900f;
	auto& __Local__261 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[6];
	__Local__261.PackedRelativeBox = 4294901760;
	__Local__261.TextureLevelIndex = 44;
	__Local__261.TexelFactor = 300.084900f;
	auto& __Local__262 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[7];
	__Local__262.PackedRelativeBox = 4294901760;
	__Local__262.TextureLevelIndex = 45;
	__Local__262.TexelFactor = 300.084900f;
	auto& __Local__263 = bpv__StaticMeshComponent0161__pf->StreamingTextureData[8];
	__Local__263.PackedRelativeBox = 4294901760;
	__Local__263.TextureLevelIndex = 46;
	__Local__263.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0161__pf), false, 0));
	bpv__StaticMeshComponent0161__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0161__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__264 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0161__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__264 = FVector(-93.332214, 396.203522, 5.822876);
	auto& __Local__265 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0161__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__265 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__266 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0161__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__266 = FVector(1.000000, 1.147963, 1.000000);
	bpv__StaticMeshComponent0161__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0161__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0161__pf), true, 0));
	bpv__StaticMeshComponent0151__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0151__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__267 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0151__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__267 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0151__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0151__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0151__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__268 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[0];
	__Local__268.PackedRelativeBox = 4294901760;
	__Local__268.TextureLevelIndex = 131;
	__Local__268.TexelFactor = 574.107788f;
	auto& __Local__269 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[1];
	__Local__269.PackedRelativeBox = 4294901760;
	__Local__269.TextureLevelIndex = 132;
	__Local__269.TexelFactor = 574.107788f;
	auto& __Local__270 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[2];
	__Local__270.PackedRelativeBox = 4294901760;
	__Local__270.TextureLevelIndex = 40;
	__Local__270.TexelFactor = 574.107788f;
	auto& __Local__271 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[3];
	__Local__271.PackedRelativeBox = 4294901760;
	__Local__271.TextureLevelIndex = 49;
	__Local__271.TexelFactor = 574.107788f;
	auto& __Local__272 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[4];
	__Local__272.PackedRelativeBox = 4294901760;
	__Local__272.TextureLevelIndex = 133;
	__Local__272.TexelFactor = 574.107788f;
	auto& __Local__273 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[5];
	__Local__273.PackedRelativeBox = 4294901760;
	__Local__273.TextureLevelIndex = 43;
	__Local__273.TexelFactor = 574.107788f;
	auto& __Local__274 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[6];
	__Local__274.PackedRelativeBox = 4294901760;
	__Local__274.TextureLevelIndex = 44;
	__Local__274.TexelFactor = 574.107788f;
	auto& __Local__275 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[7];
	__Local__275.PackedRelativeBox = 4294901760;
	__Local__275.TextureLevelIndex = 45;
	__Local__275.TexelFactor = 574.107788f;
	auto& __Local__276 = bpv__StaticMeshComponent0151__pf->StreamingTextureData[8];
	__Local__276.PackedRelativeBox = 4294901760;
	__Local__276.TextureLevelIndex = 46;
	__Local__276.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0151__pf), false, 0));
	bpv__StaticMeshComponent0151__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0151__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__277 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0151__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__277 = FVector(-111.825745, 380.934601, -4.683105);
	bpv__StaticMeshComponent0151__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0151__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0151__pf), true, 0));
	bpv__StaticMeshComponent0141__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0141__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__278 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0141__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__278 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0141__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0141__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0141__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__279 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[0];
	__Local__279.PackedRelativeBox = 4294901760;
	__Local__279.TextureLevelIndex = 134;
	__Local__279.TexelFactor = 628.452393f;
	auto& __Local__280 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[1];
	__Local__280.PackedRelativeBox = 4294901760;
	__Local__280.TextureLevelIndex = 135;
	__Local__280.TexelFactor = 628.452393f;
	auto& __Local__281 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[2];
	__Local__281.PackedRelativeBox = 4294901760;
	__Local__281.TextureLevelIndex = 40;
	__Local__281.TexelFactor = 628.452393f;
	auto& __Local__282 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[3];
	__Local__282.PackedRelativeBox = 4294901760;
	__Local__282.TextureLevelIndex = 49;
	__Local__282.TexelFactor = 628.452393f;
	auto& __Local__283 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[4];
	__Local__283.PackedRelativeBox = 4294901760;
	__Local__283.TextureLevelIndex = 136;
	__Local__283.TexelFactor = 628.452393f;
	auto& __Local__284 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[5];
	__Local__284.PackedRelativeBox = 4294901760;
	__Local__284.TextureLevelIndex = 43;
	__Local__284.TexelFactor = 628.452393f;
	auto& __Local__285 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[6];
	__Local__285.PackedRelativeBox = 4294901760;
	__Local__285.TextureLevelIndex = 44;
	__Local__285.TexelFactor = 628.452393f;
	auto& __Local__286 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[7];
	__Local__286.PackedRelativeBox = 4294901760;
	__Local__286.TextureLevelIndex = 45;
	__Local__286.TexelFactor = 628.452393f;
	auto& __Local__287 = bpv__StaticMeshComponent0141__pf->StreamingTextureData[8];
	__Local__287.PackedRelativeBox = 4294901760;
	__Local__287.TextureLevelIndex = 46;
	__Local__287.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0141__pf), false, 0));
	bpv__StaticMeshComponent0141__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0141__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__288 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0141__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__288 = FVector(-442.518311, 396.329071, 5.316772);
	auto& __Local__289 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0141__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__289 = FRotator(0.000000, -0.000519, 0.000000);
	bpv__StaticMeshComponent0141__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0141__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0141__pf), true, 0));
	bpv__StaticMeshComponent0131__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0131__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__290 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0131__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__290 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0131__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0131__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0131__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__291 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[0];
	__Local__291.PackedRelativeBox = 4294901760;
	__Local__291.TextureLevelIndex = 131;
	__Local__291.TexelFactor = 574.107788f;
	auto& __Local__292 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[1];
	__Local__292.PackedRelativeBox = 4294901760;
	__Local__292.TextureLevelIndex = 132;
	__Local__292.TexelFactor = 574.107788f;
	auto& __Local__293 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[2];
	__Local__293.PackedRelativeBox = 4294901760;
	__Local__293.TextureLevelIndex = 40;
	__Local__293.TexelFactor = 574.107788f;
	auto& __Local__294 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[3];
	__Local__294.PackedRelativeBox = 4294901760;
	__Local__294.TextureLevelIndex = 49;
	__Local__294.TexelFactor = 574.107788f;
	auto& __Local__295 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[4];
	__Local__295.PackedRelativeBox = 4294901760;
	__Local__295.TextureLevelIndex = 133;
	__Local__295.TexelFactor = 574.107788f;
	auto& __Local__296 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[5];
	__Local__296.PackedRelativeBox = 4294901760;
	__Local__296.TextureLevelIndex = 43;
	__Local__296.TexelFactor = 574.107788f;
	auto& __Local__297 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[6];
	__Local__297.PackedRelativeBox = 4294901760;
	__Local__297.TextureLevelIndex = 44;
	__Local__297.TexelFactor = 574.107788f;
	auto& __Local__298 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[7];
	__Local__298.PackedRelativeBox = 4294901760;
	__Local__298.TextureLevelIndex = 45;
	__Local__298.TexelFactor = 574.107788f;
	auto& __Local__299 = bpv__StaticMeshComponent0131__pf->StreamingTextureData[8];
	__Local__299.PackedRelativeBox = 4294901760;
	__Local__299.TextureLevelIndex = 46;
	__Local__299.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0131__pf), false, 0));
	bpv__StaticMeshComponent0131__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0131__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__300 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0131__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__300 = FVector(-411.825745, 80.934601, -4.683105);
	bpv__StaticMeshComponent0131__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0131__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0131__pf), true, 0));
	bpv__StaticMeshComponent0121__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0121__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__301 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0121__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__301 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0121__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0121__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0121__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__302 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[0];
	__Local__302.PackedRelativeBox = 4294901760;
	__Local__302.TextureLevelIndex = 131;
	__Local__302.TexelFactor = 574.107788f;
	auto& __Local__303 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[1];
	__Local__303.PackedRelativeBox = 4294901760;
	__Local__303.TextureLevelIndex = 132;
	__Local__303.TexelFactor = 574.107788f;
	auto& __Local__304 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[2];
	__Local__304.PackedRelativeBox = 4294901760;
	__Local__304.TextureLevelIndex = 40;
	__Local__304.TexelFactor = 574.107788f;
	auto& __Local__305 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[3];
	__Local__305.PackedRelativeBox = 4294901760;
	__Local__305.TextureLevelIndex = 49;
	__Local__305.TexelFactor = 574.107788f;
	auto& __Local__306 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[4];
	__Local__306.PackedRelativeBox = 4294901760;
	__Local__306.TextureLevelIndex = 133;
	__Local__306.TexelFactor = 574.107788f;
	auto& __Local__307 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[5];
	__Local__307.PackedRelativeBox = 4294901760;
	__Local__307.TextureLevelIndex = 43;
	__Local__307.TexelFactor = 574.107788f;
	auto& __Local__308 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[6];
	__Local__308.PackedRelativeBox = 4294901760;
	__Local__308.TextureLevelIndex = 44;
	__Local__308.TexelFactor = 574.107788f;
	auto& __Local__309 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[7];
	__Local__309.PackedRelativeBox = 4294901760;
	__Local__309.TextureLevelIndex = 45;
	__Local__309.TexelFactor = 574.107788f;
	auto& __Local__310 = bpv__StaticMeshComponent0121__pf->StreamingTextureData[8];
	__Local__310.PackedRelativeBox = 4294901760;
	__Local__310.TextureLevelIndex = 46;
	__Local__310.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0121__pf), false, 0));
	bpv__StaticMeshComponent0121__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0121__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__311 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0121__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__311 = FVector(-111.825745, 80.934601, -4.683105);
	bpv__StaticMeshComponent0121__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0121__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0121__pf), true, 0));
	bpv__StaticMeshComponent0111__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0111__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__312 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0111__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__312 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0111__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0111__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0111__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__313 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[0];
	__Local__313.PackedRelativeBox = 4294901760;
	__Local__313.TextureLevelIndex = 131;
	__Local__313.TexelFactor = 574.107788f;
	auto& __Local__314 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[1];
	__Local__314.PackedRelativeBox = 4294901760;
	__Local__314.TextureLevelIndex = 132;
	__Local__314.TexelFactor = 574.107788f;
	auto& __Local__315 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[2];
	__Local__315.PackedRelativeBox = 4294901760;
	__Local__315.TextureLevelIndex = 40;
	__Local__315.TexelFactor = 574.107788f;
	auto& __Local__316 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[3];
	__Local__316.PackedRelativeBox = 4294901760;
	__Local__316.TextureLevelIndex = 49;
	__Local__316.TexelFactor = 574.107788f;
	auto& __Local__317 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[4];
	__Local__317.PackedRelativeBox = 4294901760;
	__Local__317.TextureLevelIndex = 133;
	__Local__317.TexelFactor = 574.107788f;
	auto& __Local__318 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[5];
	__Local__318.PackedRelativeBox = 4294901760;
	__Local__318.TextureLevelIndex = 43;
	__Local__318.TexelFactor = 574.107788f;
	auto& __Local__319 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[6];
	__Local__319.PackedRelativeBox = 4294901760;
	__Local__319.TextureLevelIndex = 44;
	__Local__319.TexelFactor = 574.107788f;
	auto& __Local__320 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[7];
	__Local__320.PackedRelativeBox = 4294901760;
	__Local__320.TextureLevelIndex = 45;
	__Local__320.TexelFactor = 574.107788f;
	auto& __Local__321 = bpv__StaticMeshComponent0111__pf->StreamingTextureData[8];
	__Local__321.PackedRelativeBox = 4294901760;
	__Local__321.TextureLevelIndex = 46;
	__Local__321.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0111__pf), false, 0));
	bpv__StaticMeshComponent0111__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0111__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__322 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0111__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__322 = FVector(188.174255, 80.934601, -4.683105);
	bpv__StaticMeshComponent0111__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0111__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0111__pf), true, 0));
	bpv__StaticMeshComponent0211__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0211__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__323 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0211__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__323 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0211__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0211__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0211__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__324 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[0];
	__Local__324.PackedRelativeBox = 4294901760;
	__Local__324.TextureLevelIndex = 137;
	__Local__324.TexelFactor = 300.084900f;
	auto& __Local__325 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[1];
	__Local__325.PackedRelativeBox = 4294901760;
	__Local__325.TextureLevelIndex = 138;
	__Local__325.TexelFactor = 300.084900f;
	auto& __Local__326 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[2];
	__Local__326.PackedRelativeBox = 4294901760;
	__Local__326.TextureLevelIndex = 40;
	__Local__326.TexelFactor = 300.084900f;
	auto& __Local__327 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[3];
	__Local__327.PackedRelativeBox = 4294901760;
	__Local__327.TextureLevelIndex = 49;
	__Local__327.TexelFactor = 300.084900f;
	auto& __Local__328 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[4];
	__Local__328.PackedRelativeBox = 4294901760;
	__Local__328.TextureLevelIndex = 139;
	__Local__328.TexelFactor = 300.084900f;
	auto& __Local__329 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[5];
	__Local__329.PackedRelativeBox = 4294901760;
	__Local__329.TextureLevelIndex = 43;
	__Local__329.TexelFactor = 300.084900f;
	auto& __Local__330 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[6];
	__Local__330.PackedRelativeBox = 4294901760;
	__Local__330.TextureLevelIndex = 44;
	__Local__330.TexelFactor = 300.084900f;
	auto& __Local__331 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[7];
	__Local__331.PackedRelativeBox = 4294901760;
	__Local__331.TextureLevelIndex = 45;
	__Local__331.TexelFactor = 300.084900f;
	auto& __Local__332 = bpv__StaticMeshComponent0211__pf->StreamingTextureData[8];
	__Local__332.PackedRelativeBox = 4294901760;
	__Local__332.TextureLevelIndex = 46;
	__Local__332.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0211__pf), false, 0));
	bpv__StaticMeshComponent0211__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0211__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__333 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0211__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__333 = FVector(206.667786, 396.203522, 5.822876);
	auto& __Local__334 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0211__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__334 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent0211__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0211__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0211__pf), true, 0));
	bpv__StaticMeshComponent091__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent091__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__335 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent091__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__335 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent091__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent091__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent091__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__336 = bpv__StaticMeshComponent091__pf->StreamingTextureData[0];
	__Local__336.PackedRelativeBox = 4294901760;
	__Local__336.TextureLevelIndex = 137;
	__Local__336.TexelFactor = 300.084900f;
	auto& __Local__337 = bpv__StaticMeshComponent091__pf->StreamingTextureData[1];
	__Local__337.PackedRelativeBox = 4294901760;
	__Local__337.TextureLevelIndex = 138;
	__Local__337.TexelFactor = 300.084900f;
	auto& __Local__338 = bpv__StaticMeshComponent091__pf->StreamingTextureData[2];
	__Local__338.PackedRelativeBox = 4294901760;
	__Local__338.TextureLevelIndex = 40;
	__Local__338.TexelFactor = 300.084900f;
	auto& __Local__339 = bpv__StaticMeshComponent091__pf->StreamingTextureData[3];
	__Local__339.PackedRelativeBox = 4294901760;
	__Local__339.TextureLevelIndex = 49;
	__Local__339.TexelFactor = 300.084900f;
	auto& __Local__340 = bpv__StaticMeshComponent091__pf->StreamingTextureData[4];
	__Local__340.PackedRelativeBox = 4294901760;
	__Local__340.TextureLevelIndex = 139;
	__Local__340.TexelFactor = 300.084900f;
	auto& __Local__341 = bpv__StaticMeshComponent091__pf->StreamingTextureData[5];
	__Local__341.PackedRelativeBox = 4294901760;
	__Local__341.TextureLevelIndex = 43;
	__Local__341.TexelFactor = 300.084900f;
	auto& __Local__342 = bpv__StaticMeshComponent091__pf->StreamingTextureData[6];
	__Local__342.PackedRelativeBox = 4294901760;
	__Local__342.TextureLevelIndex = 44;
	__Local__342.TexelFactor = 300.084900f;
	auto& __Local__343 = bpv__StaticMeshComponent091__pf->StreamingTextureData[7];
	__Local__343.PackedRelativeBox = 4294901760;
	__Local__343.TextureLevelIndex = 45;
	__Local__343.TexelFactor = 300.084900f;
	auto& __Local__344 = bpv__StaticMeshComponent091__pf->StreamingTextureData[8];
	__Local__344.PackedRelativeBox = 4294901760;
	__Local__344.TextureLevelIndex = 46;
	__Local__344.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent091__pf), false, 0));
	bpv__StaticMeshComponent091__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent091__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__345 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent091__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__345 = FVector(502.749756, -233.322647, 5.822876);
	auto& __Local__346 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent091__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__346 = FRotator(0.000000, 179.999802, 0.000000);
	auto& __Local__347 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent091__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__347 = FVector(1.000000, 1.102493, 1.000000);
	bpv__StaticMeshComponent091__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent091__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent091__pf), true, 0));
	bpv__StaticMeshComponent081__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent081__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__348 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent081__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__348 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent081__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent081__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent081__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__349 = bpv__StaticMeshComponent081__pf->StreamingTextureData[0];
	__Local__349.PackedRelativeBox = 4294901760;
	__Local__349.TextureLevelIndex = 134;
	__Local__349.TexelFactor = 628.452393f;
	auto& __Local__350 = bpv__StaticMeshComponent081__pf->StreamingTextureData[1];
	__Local__350.PackedRelativeBox = 4294901760;
	__Local__350.TextureLevelIndex = 135;
	__Local__350.TexelFactor = 628.452393f;
	auto& __Local__351 = bpv__StaticMeshComponent081__pf->StreamingTextureData[2];
	__Local__351.PackedRelativeBox = 4294901760;
	__Local__351.TextureLevelIndex = 40;
	__Local__351.TexelFactor = 628.452393f;
	auto& __Local__352 = bpv__StaticMeshComponent081__pf->StreamingTextureData[3];
	__Local__352.PackedRelativeBox = 4294901760;
	__Local__352.TextureLevelIndex = 49;
	__Local__352.TexelFactor = 628.452393f;
	auto& __Local__353 = bpv__StaticMeshComponent081__pf->StreamingTextureData[4];
	__Local__353.PackedRelativeBox = 4294901760;
	__Local__353.TextureLevelIndex = 136;
	__Local__353.TexelFactor = 628.452393f;
	auto& __Local__354 = bpv__StaticMeshComponent081__pf->StreamingTextureData[5];
	__Local__354.PackedRelativeBox = 4294901760;
	__Local__354.TextureLevelIndex = 43;
	__Local__354.TexelFactor = 628.452393f;
	auto& __Local__355 = bpv__StaticMeshComponent081__pf->StreamingTextureData[6];
	__Local__355.PackedRelativeBox = 4294901760;
	__Local__355.TextureLevelIndex = 44;
	__Local__355.TexelFactor = 628.452393f;
	auto& __Local__356 = bpv__StaticMeshComponent081__pf->StreamingTextureData[7];
	__Local__356.PackedRelativeBox = 4294901760;
	__Local__356.TextureLevelIndex = 45;
	__Local__356.TexelFactor = 628.452393f;
	auto& __Local__357 = bpv__StaticMeshComponent081__pf->StreamingTextureData[8];
	__Local__357.PackedRelativeBox = 4294901760;
	__Local__357.TextureLevelIndex = 46;
	__Local__357.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent081__pf), false, 0));
	bpv__StaticMeshComponent081__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent081__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__358 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent081__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__358 = FVector(207.388641, -531.019470, 5.316772);
	auto& __Local__359 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent081__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__359 = FRotator(0.000000, 179.999802, 0.000000);
	bpv__StaticMeshComponent081__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent081__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent081__pf), true, 0));
	bpv__StaticMeshComponent071__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent071__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__360 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent071__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__360 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent071__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent071__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent071__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__361 = bpv__StaticMeshComponent071__pf->StreamingTextureData[0];
	__Local__361.PackedRelativeBox = 4294901760;
	__Local__361.TextureLevelIndex = 131;
	__Local__361.TexelFactor = 574.107788f;
	auto& __Local__362 = bpv__StaticMeshComponent071__pf->StreamingTextureData[1];
	__Local__362.PackedRelativeBox = 4294901760;
	__Local__362.TextureLevelIndex = 132;
	__Local__362.TexelFactor = 574.107788f;
	auto& __Local__363 = bpv__StaticMeshComponent071__pf->StreamingTextureData[2];
	__Local__363.PackedRelativeBox = 4294901760;
	__Local__363.TextureLevelIndex = 40;
	__Local__363.TexelFactor = 574.107788f;
	auto& __Local__364 = bpv__StaticMeshComponent071__pf->StreamingTextureData[3];
	__Local__364.PackedRelativeBox = 4294901760;
	__Local__364.TextureLevelIndex = 49;
	__Local__364.TexelFactor = 574.107788f;
	auto& __Local__365 = bpv__StaticMeshComponent071__pf->StreamingTextureData[4];
	__Local__365.PackedRelativeBox = 4294901760;
	__Local__365.TextureLevelIndex = 133;
	__Local__365.TexelFactor = 574.107788f;
	auto& __Local__366 = bpv__StaticMeshComponent071__pf->StreamingTextureData[5];
	__Local__366.PackedRelativeBox = 4294901760;
	__Local__366.TextureLevelIndex = 43;
	__Local__366.TexelFactor = 574.107788f;
	auto& __Local__367 = bpv__StaticMeshComponent071__pf->StreamingTextureData[6];
	__Local__367.PackedRelativeBox = 4294901760;
	__Local__367.TextureLevelIndex = 44;
	__Local__367.TexelFactor = 574.107788f;
	auto& __Local__368 = bpv__StaticMeshComponent071__pf->StreamingTextureData[7];
	__Local__368.PackedRelativeBox = 4294901760;
	__Local__368.TextureLevelIndex = 45;
	__Local__368.TexelFactor = 574.107788f;
	auto& __Local__369 = bpv__StaticMeshComponent071__pf->StreamingTextureData[8];
	__Local__369.PackedRelativeBox = 4294901760;
	__Local__369.TextureLevelIndex = 46;
	__Local__369.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent071__pf), false, 0));
	bpv__StaticMeshComponent071__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent071__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__370 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent071__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__370 = FVector(488.174255, -219.065399, -4.683105);
	bpv__StaticMeshComponent071__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent071__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent071__pf), true, 0));
	bpv__StaticMeshComponent062__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent062__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__371 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent062__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__371 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent062__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent062__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent062__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__372 = bpv__StaticMeshComponent062__pf->StreamingTextureData[0];
	__Local__372.PackedRelativeBox = 4294901760;
	__Local__372.TextureLevelIndex = 131;
	__Local__372.TexelFactor = 574.107788f;
	auto& __Local__373 = bpv__StaticMeshComponent062__pf->StreamingTextureData[1];
	__Local__373.PackedRelativeBox = 4294901760;
	__Local__373.TextureLevelIndex = 132;
	__Local__373.TexelFactor = 574.107788f;
	auto& __Local__374 = bpv__StaticMeshComponent062__pf->StreamingTextureData[2];
	__Local__374.PackedRelativeBox = 4294901760;
	__Local__374.TextureLevelIndex = 40;
	__Local__374.TexelFactor = 574.107788f;
	auto& __Local__375 = bpv__StaticMeshComponent062__pf->StreamingTextureData[3];
	__Local__375.PackedRelativeBox = 4294901760;
	__Local__375.TextureLevelIndex = 49;
	__Local__375.TexelFactor = 574.107788f;
	auto& __Local__376 = bpv__StaticMeshComponent062__pf->StreamingTextureData[4];
	__Local__376.PackedRelativeBox = 4294901760;
	__Local__376.TextureLevelIndex = 133;
	__Local__376.TexelFactor = 574.107788f;
	auto& __Local__377 = bpv__StaticMeshComponent062__pf->StreamingTextureData[5];
	__Local__377.PackedRelativeBox = 4294901760;
	__Local__377.TextureLevelIndex = 43;
	__Local__377.TexelFactor = 574.107788f;
	auto& __Local__378 = bpv__StaticMeshComponent062__pf->StreamingTextureData[6];
	__Local__378.PackedRelativeBox = 4294901760;
	__Local__378.TextureLevelIndex = 44;
	__Local__378.TexelFactor = 574.107788f;
	auto& __Local__379 = bpv__StaticMeshComponent062__pf->StreamingTextureData[7];
	__Local__379.PackedRelativeBox = 4294901760;
	__Local__379.TextureLevelIndex = 45;
	__Local__379.TexelFactor = 574.107788f;
	auto& __Local__380 = bpv__StaticMeshComponent062__pf->StreamingTextureData[8];
	__Local__380.PackedRelativeBox = 4294901760;
	__Local__380.TextureLevelIndex = 46;
	__Local__380.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent062__pf), false, 0));
	bpv__StaticMeshComponent062__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent062__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__381 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent062__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__381 = FVector(188.174255, -219.065399, -4.683105);
	bpv__StaticMeshComponent062__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent062__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent062__pf), true, 0));
	bpv__StaticMeshComponent0510__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0510__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__382 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0510__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__382 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0510__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0510__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0510__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__383 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[0];
	__Local__383.PackedRelativeBox = 4294901760;
	__Local__383.TextureLevelIndex = 137;
	__Local__383.TexelFactor = 300.084900f;
	auto& __Local__384 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[1];
	__Local__384.PackedRelativeBox = 4294901760;
	__Local__384.TextureLevelIndex = 138;
	__Local__384.TexelFactor = 300.084900f;
	auto& __Local__385 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[2];
	__Local__385.PackedRelativeBox = 4294901760;
	__Local__385.TextureLevelIndex = 40;
	__Local__385.TexelFactor = 300.084900f;
	auto& __Local__386 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[3];
	__Local__386.PackedRelativeBox = 4294901760;
	__Local__386.TextureLevelIndex = 49;
	__Local__386.TexelFactor = 300.084900f;
	auto& __Local__387 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[4];
	__Local__387.PackedRelativeBox = 4294901760;
	__Local__387.TextureLevelIndex = 139;
	__Local__387.TexelFactor = 300.084900f;
	auto& __Local__388 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[5];
	__Local__388.PackedRelativeBox = 4294901760;
	__Local__388.TextureLevelIndex = 43;
	__Local__388.TexelFactor = 300.084900f;
	auto& __Local__389 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[6];
	__Local__389.PackedRelativeBox = 4294901760;
	__Local__389.TextureLevelIndex = 44;
	__Local__389.TexelFactor = 300.084900f;
	auto& __Local__390 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[7];
	__Local__390.PackedRelativeBox = 4294901760;
	__Local__390.TextureLevelIndex = 45;
	__Local__390.TexelFactor = 300.084900f;
	auto& __Local__391 = bpv__StaticMeshComponent0510__pf->StreamingTextureData[8];
	__Local__391.PackedRelativeBox = 4294901760;
	__Local__391.TextureLevelIndex = 46;
	__Local__391.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0510__pf), false, 0));
	bpv__StaticMeshComponent0510__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0510__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__392 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0510__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__392 = FVector(206.667786, -513.796509, 5.822876);
	auto& __Local__393 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0510__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__393 = FRotator(0.000000, -90.000114, 0.000000);
	bpv__StaticMeshComponent0510__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0510__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0510__pf), true, 0));
	bpv__StaticMeshComponent0101__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0101__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__394 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0101__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__394 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0101__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0101__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0101__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__395 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[0];
	__Local__395.PackedRelativeBox = 4294901760;
	__Local__395.TextureLevelIndex = 131;
	__Local__395.TexelFactor = 574.107788f;
	auto& __Local__396 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[1];
	__Local__396.PackedRelativeBox = 4294901760;
	__Local__396.TextureLevelIndex = 132;
	__Local__396.TexelFactor = 574.107788f;
	auto& __Local__397 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[2];
	__Local__397.PackedRelativeBox = 4294901760;
	__Local__397.TextureLevelIndex = 40;
	__Local__397.TexelFactor = 574.107788f;
	auto& __Local__398 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[3];
	__Local__398.PackedRelativeBox = 4294901760;
	__Local__398.TextureLevelIndex = 49;
	__Local__398.TexelFactor = 574.107788f;
	auto& __Local__399 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[4];
	__Local__399.PackedRelativeBox = 4294901760;
	__Local__399.TextureLevelIndex = 133;
	__Local__399.TexelFactor = 574.107788f;
	auto& __Local__400 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[5];
	__Local__400.PackedRelativeBox = 4294901760;
	__Local__400.TextureLevelIndex = 43;
	__Local__400.TexelFactor = 574.107788f;
	auto& __Local__401 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[6];
	__Local__401.PackedRelativeBox = 4294901760;
	__Local__401.TextureLevelIndex = 44;
	__Local__401.TexelFactor = 574.107788f;
	auto& __Local__402 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[7];
	__Local__402.PackedRelativeBox = 4294901760;
	__Local__402.TextureLevelIndex = 45;
	__Local__402.TexelFactor = 574.107788f;
	auto& __Local__403 = bpv__StaticMeshComponent0101__pf->StreamingTextureData[8];
	__Local__403.PackedRelativeBox = 4294901760;
	__Local__403.TextureLevelIndex = 46;
	__Local__403.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0101__pf), false, 0));
	bpv__StaticMeshComponent0101__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0101__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__404 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0101__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__404 = FVector(488.174255, 80.934601, -4.683105);
	bpv__StaticMeshComponent0101__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0101__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0101__pf), true, 0));
	bpv__StaticMeshComponent0410__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0410__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__405 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0410__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__405 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0410__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0410__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0410__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__406 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[0];
	__Local__406.PackedRelativeBox = 4294901760;
	__Local__406.TextureLevelIndex = 137;
	__Local__406.TexelFactor = 300.084900f;
	auto& __Local__407 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[1];
	__Local__407.PackedRelativeBox = 4294901760;
	__Local__407.TextureLevelIndex = 138;
	__Local__407.TexelFactor = 300.084900f;
	auto& __Local__408 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[2];
	__Local__408.PackedRelativeBox = 4294901760;
	__Local__408.TextureLevelIndex = 40;
	__Local__408.TexelFactor = 300.084900f;
	auto& __Local__409 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[3];
	__Local__409.PackedRelativeBox = 4294901760;
	__Local__409.TextureLevelIndex = 49;
	__Local__409.TexelFactor = 300.084900f;
	auto& __Local__410 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[4];
	__Local__410.PackedRelativeBox = 4294901760;
	__Local__410.TextureLevelIndex = 139;
	__Local__410.TexelFactor = 300.084900f;
	auto& __Local__411 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[5];
	__Local__411.PackedRelativeBox = 4294901760;
	__Local__411.TextureLevelIndex = 43;
	__Local__411.TexelFactor = 300.084900f;
	auto& __Local__412 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[6];
	__Local__412.PackedRelativeBox = 4294901760;
	__Local__412.TextureLevelIndex = 44;
	__Local__412.TexelFactor = 300.084900f;
	auto& __Local__413 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[7];
	__Local__413.PackedRelativeBox = 4294901760;
	__Local__413.TextureLevelIndex = 45;
	__Local__413.TexelFactor = 300.084900f;
	auto& __Local__414 = bpv__StaticMeshComponent0410__pf->StreamingTextureData[8];
	__Local__414.PackedRelativeBox = 4294901760;
	__Local__414.TextureLevelIndex = 46;
	__Local__414.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0410__pf), false, 0));
	bpv__StaticMeshComponent0410__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0410__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__415 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0410__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__415 = FVector(-93.332214, -513.796509, 5.822876);
	auto& __Local__416 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0410__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__416 = FRotator(0.000000, -90.000114, 0.000000);
	auto& __Local__417 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0410__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__417 = FVector(1.000000, 1.147963, 1.000000);
	bpv__StaticMeshComponent0410__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0410__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0410__pf), true, 0));
	bpv__StaticMeshComponent0310__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0310__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__418 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0310__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__418 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0310__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0310__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0310__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__419 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[0];
	__Local__419.PackedRelativeBox = 4294901760;
	__Local__419.TextureLevelIndex = 131;
	__Local__419.TexelFactor = 574.107788f;
	auto& __Local__420 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[1];
	__Local__420.PackedRelativeBox = 4294901760;
	__Local__420.TextureLevelIndex = 132;
	__Local__420.TexelFactor = 574.107788f;
	auto& __Local__421 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[2];
	__Local__421.PackedRelativeBox = 4294901760;
	__Local__421.TextureLevelIndex = 40;
	__Local__421.TexelFactor = 574.107788f;
	auto& __Local__422 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[3];
	__Local__422.PackedRelativeBox = 4294901760;
	__Local__422.TextureLevelIndex = 49;
	__Local__422.TexelFactor = 574.107788f;
	auto& __Local__423 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[4];
	__Local__423.PackedRelativeBox = 4294901760;
	__Local__423.TextureLevelIndex = 133;
	__Local__423.TexelFactor = 574.107788f;
	auto& __Local__424 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[5];
	__Local__424.PackedRelativeBox = 4294901760;
	__Local__424.TextureLevelIndex = 43;
	__Local__424.TexelFactor = 574.107788f;
	auto& __Local__425 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[6];
	__Local__425.PackedRelativeBox = 4294901760;
	__Local__425.TextureLevelIndex = 44;
	__Local__425.TexelFactor = 574.107788f;
	auto& __Local__426 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[7];
	__Local__426.PackedRelativeBox = 4294901760;
	__Local__426.TextureLevelIndex = 45;
	__Local__426.TexelFactor = 574.107788f;
	auto& __Local__427 = bpv__StaticMeshComponent0310__pf->StreamingTextureData[8];
	__Local__427.PackedRelativeBox = 4294901760;
	__Local__427.TextureLevelIndex = 46;
	__Local__427.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0310__pf), false, 0));
	bpv__StaticMeshComponent0310__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0310__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__428 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0310__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__428 = FVector(-411.825745, -219.065399, -4.683105);
	bpv__StaticMeshComponent0310__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0310__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0310__pf), true, 0));
	bpv__StaticMeshComponent0210__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0210__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__429 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0210__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__429 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0210__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0210__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0210__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__430 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[0];
	__Local__430.PackedRelativeBox = 4294901760;
	__Local__430.TextureLevelIndex = 131;
	__Local__430.TexelFactor = 574.107788f;
	auto& __Local__431 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[1];
	__Local__431.PackedRelativeBox = 4294901760;
	__Local__431.TextureLevelIndex = 132;
	__Local__431.TexelFactor = 574.107788f;
	auto& __Local__432 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[2];
	__Local__432.PackedRelativeBox = 4294901760;
	__Local__432.TextureLevelIndex = 40;
	__Local__432.TexelFactor = 574.107788f;
	auto& __Local__433 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[3];
	__Local__433.PackedRelativeBox = 4294901760;
	__Local__433.TextureLevelIndex = 49;
	__Local__433.TexelFactor = 574.107788f;
	auto& __Local__434 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[4];
	__Local__434.PackedRelativeBox = 4294901760;
	__Local__434.TextureLevelIndex = 133;
	__Local__434.TexelFactor = 574.107788f;
	auto& __Local__435 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[5];
	__Local__435.PackedRelativeBox = 4294901760;
	__Local__435.TextureLevelIndex = 43;
	__Local__435.TexelFactor = 574.107788f;
	auto& __Local__436 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[6];
	__Local__436.PackedRelativeBox = 4294901760;
	__Local__436.TextureLevelIndex = 44;
	__Local__436.TexelFactor = 574.107788f;
	auto& __Local__437 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[7];
	__Local__437.PackedRelativeBox = 4294901760;
	__Local__437.TextureLevelIndex = 45;
	__Local__437.TexelFactor = 574.107788f;
	auto& __Local__438 = bpv__StaticMeshComponent0210__pf->StreamingTextureData[8];
	__Local__438.PackedRelativeBox = 4294901760;
	__Local__438.TextureLevelIndex = 46;
	__Local__438.TexelFactor = 574.107788f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0210__pf), false, 0));
	bpv__StaticMeshComponent0210__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0210__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__439 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0210__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__439 = FVector(-111.825745, -219.065399, -4.683105);
	bpv__StaticMeshComponent0210__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0210__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0210__pf), true, 0));
	bpv__StaticMeshComponent0110__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent0110__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__440 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent0110__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__440 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent0110__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent0110__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent0110__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__441 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[0];
	__Local__441.PackedRelativeBox = 4294901760;
	__Local__441.TextureLevelIndex = 134;
	__Local__441.TexelFactor = 628.452393f;
	auto& __Local__442 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[1];
	__Local__442.PackedRelativeBox = 4294901760;
	__Local__442.TextureLevelIndex = 135;
	__Local__442.TexelFactor = 628.452393f;
	auto& __Local__443 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[2];
	__Local__443.PackedRelativeBox = 4294901760;
	__Local__443.TextureLevelIndex = 40;
	__Local__443.TexelFactor = 628.452393f;
	auto& __Local__444 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[3];
	__Local__444.PackedRelativeBox = 4294901760;
	__Local__444.TextureLevelIndex = 49;
	__Local__444.TexelFactor = 628.452393f;
	auto& __Local__445 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[4];
	__Local__445.PackedRelativeBox = 4294901760;
	__Local__445.TextureLevelIndex = 136;
	__Local__445.TexelFactor = 628.452393f;
	auto& __Local__446 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[5];
	__Local__446.PackedRelativeBox = 4294901760;
	__Local__446.TextureLevelIndex = 43;
	__Local__446.TexelFactor = 628.452393f;
	auto& __Local__447 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[6];
	__Local__447.PackedRelativeBox = 4294901760;
	__Local__447.TextureLevelIndex = 44;
	__Local__447.TexelFactor = 628.452393f;
	auto& __Local__448 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[7];
	__Local__448.PackedRelativeBox = 4294901760;
	__Local__448.TextureLevelIndex = 45;
	__Local__448.TexelFactor = 628.452393f;
	auto& __Local__449 = bpv__StaticMeshComponent0110__pf->StreamingTextureData[8];
	__Local__449.PackedRelativeBox = 4294901760;
	__Local__449.TextureLevelIndex = 46;
	__Local__449.TexelFactor = 628.452393f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0110__pf), false, 0));
	bpv__StaticMeshComponent0110__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent0110__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__450 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent0110__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__450 = FVector(-737.566040, -235.961578, 5.316772);
	auto& __Local__451 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent0110__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__451 = FRotator(0.000000, 89.999565, 0.000000);
	bpv__StaticMeshComponent0110__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0110__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent0110__pf), true, 0));
	bpv__StaticMeshComponent063__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent063__pf->AttachToComponent(bpv__SharedRoot2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__452 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent063__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__452 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent063__pf->StreamingTextureData = TArray<FStreamingTextureBuildInfo> ();
	bpv__StaticMeshComponent063__pf->StreamingTextureData.AddUninitialized(9);
	FStreamingTextureBuildInfo::StaticStruct()->InitializeStruct(bpv__StaticMeshComponent063__pf->StreamingTextureData.GetData(), 9);
	auto& __Local__453 = bpv__StaticMeshComponent063__pf->StreamingTextureData[0];
	__Local__453.PackedRelativeBox = 4294901760;
	__Local__453.TextureLevelIndex = 137;
	__Local__453.TexelFactor = 300.084900f;
	auto& __Local__454 = bpv__StaticMeshComponent063__pf->StreamingTextureData[1];
	__Local__454.PackedRelativeBox = 4294901760;
	__Local__454.TextureLevelIndex = 138;
	__Local__454.TexelFactor = 300.084900f;
	auto& __Local__455 = bpv__StaticMeshComponent063__pf->StreamingTextureData[2];
	__Local__455.PackedRelativeBox = 4294901760;
	__Local__455.TextureLevelIndex = 40;
	__Local__455.TexelFactor = 300.084900f;
	auto& __Local__456 = bpv__StaticMeshComponent063__pf->StreamingTextureData[3];
	__Local__456.PackedRelativeBox = 4294901760;
	__Local__456.TextureLevelIndex = 49;
	__Local__456.TexelFactor = 300.084900f;
	auto& __Local__457 = bpv__StaticMeshComponent063__pf->StreamingTextureData[4];
	__Local__457.PackedRelativeBox = 4294901760;
	__Local__457.TextureLevelIndex = 139;
	__Local__457.TexelFactor = 300.084900f;
	auto& __Local__458 = bpv__StaticMeshComponent063__pf->StreamingTextureData[5];
	__Local__458.PackedRelativeBox = 4294901760;
	__Local__458.TextureLevelIndex = 43;
	__Local__458.TexelFactor = 300.084900f;
	auto& __Local__459 = bpv__StaticMeshComponent063__pf->StreamingTextureData[6];
	__Local__459.PackedRelativeBox = 4294901760;
	__Local__459.TextureLevelIndex = 44;
	__Local__459.TexelFactor = 300.084900f;
	auto& __Local__460 = bpv__StaticMeshComponent063__pf->StreamingTextureData[7];
	__Local__460.PackedRelativeBox = 4294901760;
	__Local__460.TextureLevelIndex = 45;
	__Local__460.TexelFactor = 300.084900f;
	auto& __Local__461 = bpv__StaticMeshComponent063__pf->StreamingTextureData[8];
	__Local__461.PackedRelativeBox = 4294901760;
	__Local__461.TextureLevelIndex = 46;
	__Local__461.TexelFactor = 300.084900f;
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent063__pf), false, 0));
	bpv__StaticMeshComponent063__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__StaticMeshComponent063__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__462 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent063__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__462 = FVector(-717.250244, -233.322647, 5.822876);
	auto& __Local__463 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent063__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__463 = FRotator(0.000000, 179.999802, 0.000000);
	auto& __Local__464 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent063__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__464 = FVector(1.000000, 1.102493, 1.000000);
	bpv__StaticMeshComponent063__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__StaticMeshComponent063__pf), true, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent063__pf), true, 0));
	bpv__StaticMeshComponent064__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent064__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent064__pf->ForcedLodModel = 1;
	auto& __Local__465 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent064__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__465 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent064__pf), false, 0));
	bpv__StaticMeshComponent064__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__466 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent064__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__466 = FVector(-440.282837, 88.068848, -1025.917236);
	auto& __Local__467 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent064__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__467 = FRotator(0.000000, -179.999954, 0.000000);
	bpv__StaticMeshComponent064__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent064__pf), true, 0));
	bpv__StaticMeshComponent065__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMeshComponent065__pf->AttachToComponent(bpv__SharedRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMeshComponent065__pf->ForcedLodModel = 1;
	auto& __Local__468 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMeshComponent065__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__468 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__StaticMeshComponent065__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Reserve(21);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(nullptr);
	bpv__StaticMeshComponent065__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Building_1_C__pf147218599::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__StaticMeshComponent065__pf), false, 0));
	bpv__StaticMeshComponent065__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__469 = (*(AccessPrivateProperty<FVector >((bpv__StaticMeshComponent065__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__469 = FVector(-440.282837, -211.931152, -425.917297);
	auto& __Local__470 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMeshComponent065__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__470 = FRotator(0.000000, -179.999954, 0.000000);
	bpv__StaticMeshComponent065__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMeshComponent065__pf), true, 0));
	auto& __Local__471 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__471 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Building_1_C__pf147218599::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__SharedRoot1__pf)
	{
		bpv__SharedRoot1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent031__pf)
	{
		bpv__StaticMeshComponent031__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent030__pf)
	{
		bpv__StaticMeshComponent030__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent029__pf)
	{
		bpv__StaticMeshComponent029__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent028__pf)
	{
		bpv__StaticMeshComponent028__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent027__pf)
	{
		bpv__StaticMeshComponent027__pf->CreationMethod = EComponentCreationMethod::Native;
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
	if(bpv__StaticMeshComponent032__pf)
	{
		bpv__StaticMeshComponent032__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent014__pf)
	{
		bpv__StaticMeshComponent014__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent013__pf)
	{
		bpv__StaticMeshComponent013__pf->CreationMethod = EComponentCreationMethod::Native;
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
	if(bpv__StaticMeshComponent015__pf)
	{
		bpv__StaticMeshComponent015__pf->CreationMethod = EComponentCreationMethod::Native;
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
	if(bpv__StaticMeshComponent07__pf)
	{
		bpv__StaticMeshComponent07__pf->CreationMethod = EComponentCreationMethod::Native;
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
	if(bpv__StaticMeshComponent057__pf)
	{
		bpv__StaticMeshComponent057__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent058__pf)
	{
		bpv__StaticMeshComponent058__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent059__pf)
	{
		bpv__StaticMeshComponent059__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent060__pf)
	{
		bpv__StaticMeshComponent060__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent061__pf)
	{
		bpv__StaticMeshComponent061__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SharedRoot2__pf)
	{
		bpv__SharedRoot2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0201__pf)
	{
		bpv__StaticMeshComponent0201__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0191__pf)
	{
		bpv__StaticMeshComponent0191__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0181__pf)
	{
		bpv__StaticMeshComponent0181__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0171__pf)
	{
		bpv__StaticMeshComponent0171__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0161__pf)
	{
		bpv__StaticMeshComponent0161__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0151__pf)
	{
		bpv__StaticMeshComponent0151__pf->CreationMethod = EComponentCreationMethod::Native;
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
	if(bpv__StaticMeshComponent0211__pf)
	{
		bpv__StaticMeshComponent0211__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent091__pf)
	{
		bpv__StaticMeshComponent091__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent081__pf)
	{
		bpv__StaticMeshComponent081__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent071__pf)
	{
		bpv__StaticMeshComponent071__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent062__pf)
	{
		bpv__StaticMeshComponent062__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0510__pf)
	{
		bpv__StaticMeshComponent0510__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0101__pf)
	{
		bpv__StaticMeshComponent0101__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent0410__pf)
	{
		bpv__StaticMeshComponent0410__pf->CreationMethod = EComponentCreationMethod::Native;
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
	if(bpv__StaticMeshComponent063__pf)
	{
		bpv__StaticMeshComponent063__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent064__pf)
	{
		bpv__StaticMeshComponent064__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMeshComponent065__pf)
	{
		bpv__StaticMeshComponent065__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_1_C__pf147218599::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__472 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__472);
	static TWeakFieldPtr<FProperty> __Local__474{};
	const FProperty* __Local__473 = __Local__474.Get();
	if (nullptr == __Local__473)
	{
		__Local__473 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__473);
		__Local__474 = __Local__473;
	}
	(((FBoolProperty*)__Local__473)->SetPropertyValue_InContainer((__Local__472), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_1_C__pf147218599::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1062, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Parapet_1.SM_Parapet_1 
		{1050, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Slab_1_Slab_1.SM_Slab_1_Slab_1 
		{1051, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Ladder.SM_Ladder 
		{1063, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Chimney_3.SM_Chimney_3 
		{1047, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Chimney_Host.SM_Chimney_Host 
		{1054, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Parapet_Corner_1_Parapet_Corner_1.SM_Parapet_Corner_1_Parapet_Corner_1 
		{1043, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/WallsAndSlabs/SM_Parapet_1_1.SM_Parapet_1_1 
		{1052, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Base_Station_1.SM_Base_Station_1 
		{1064, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/FlatModules_V_1_1/SM_FlatModule_5.SM_FlatModule_5 
		{1065, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Abandoned_City/Envior/Materials/TileableMaterials/MI_Tileable_Concrete.MI_Tileable_Concrete 
		{1066, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Street/SM_Cloth_2.SM_Cloth_2 
		{1061, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Street/SM_Air_Conditioner.SM_Air_Conditioner 
		{1067, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Covered_Balcony_6.SM_Covered_Balcony_6 
		{1041, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Tv_Antenna_Tv_Antenna.SM_Tv_Antenna_Tv_Antenna 
		{1068, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Street/SM_Cloth_1.SM_Cloth_1 
		{1069, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Old_Antenna.SM_Old_Antenna 
		{1070, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Structure_3.SM_Structure_3 
		{1071, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Billboards/SM_Table_5.SM_Table_5 
		{1072, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/Balconies/SM_Covered_Balcony_7.SM_Covered_Balcony_7 
		{1073, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_WindowFence2.SM_WindowFence2 
		{1074, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/BuildingParts/SM_Structure_5.SM_Structure_5 
		{1056, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Abandoned_City/Envior/Meshes/FlatModules_V_1_1/SM_FlatModule_1.SM_FlatModule_1 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Building_1_C__pf147218599::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__ABP_Building_1_C__pf147218599
{
	FRegisterHelper__ABP_Building_1_C__pf147218599()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Abandoned_City/Blueprints/BP_FlatModules_v_1_1/BP_Building_1"), &ABP_Building_1_C__pf147218599::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Building_1_C__pf147218599 Instance;
};
FRegisterHelper__ABP_Building_1_C__pf147218599 FRegisterHelper__ABP_Building_1_C__pf147218599::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
