#include "NativizedAssets.h"
#include "B_LightningNode__pf2650558384.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
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
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
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
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
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
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "B_LightningMaster__pf2650558384.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AB_LightningNode_C__pf2650558384::AB_LightningNode_C__pf2650558384(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__LightningSpoke__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LightningSpoke"));
	RootComponent = bpv__LightningSpoke__pf;
	bpv__LightningSpoke__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__LightningSpoke__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AB_LightningNode_C__pf2650558384::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__LightningSpoke__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__LightningSpoke__pf), false, 0));
	bpv__Index__pf = 0;
	bpv__CurrentBrancheDepth__pf = 0;
	bpv__ParentIndex__pf = 0;
	bpv__UpdateCount__pf = 0;
	bpv__CreationTime__pf = 0.000000f;
	bpv__Lifetime__pf = 0.000000f;
	bpv__SelfAmperesFactor__pf = 0.000000f;
	bpv__AmperesWidth__pf = 0.000000f;
	bpv__MainChild__pf = nullptr;
	bpv__BrancheChild__pf = nullptr;
	bpv__MainBrancheFactor__pf = 1.000000f;
	bpv__SourceLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__TargetLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__TargetSubLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__TargetSubLocationNoise__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__BrancheDone__pf = false;
	bpv__BrancheChanced__pf = false;
	bpv__BrancheChanceYes__pf = false;
	bpv__SelfComponent__pf = nullptr;
	bpv__HighlightMesh__pf = nullptr;
	bpv__MasterCopy__pf = nullptr;
	bpv__DeleteSelfOnNextUpdate__pf = false;
	bpv__DeleteBrancheOnNextUpdate__pf = false;
	bpv__LastNodeUpdateTime__pf = 0.000000f;
	bpv__NodeDeltaSeconds__pf = 0.000000f;
	auto& __Local__2 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__2 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AB_LightningNode_C__pf2650558384::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__LightningSpoke__pf)
	{
		bpv__LightningSpoke__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AB_LightningNode_C__pf2650558384::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(AB_LightningMaster_C__pf2650558384::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__3 = NewObject<UChildActorComponent>(InDynamicClass, UChildActorComponent::StaticClass(), TEXT("NODE_AddChildActorComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__3);
	auto __Local__4 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_1"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	auto& __Local__6 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((__Local__3), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__6 = InDynamicClass;
	static TWeakFieldPtr<FProperty> __Local__8{};
	const FProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__3), false, 0));
	auto& __Local__9 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__4), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__9 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AB_LightningNode_C__pf2650558384::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__4), true, 0));
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__5), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void AB_LightningNode_C__pf2650558384::bpf__UpdateBranche__pf()
{
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BrancheTimeReached_Reached__pf{};
	float bpfv__CallFunc_BrancheTimeReached_OutMainBrancheFactor__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FMin_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue__pf{};
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_3__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_3__pf{};
	bool bpfv__CallFunc_MustRebranche_Rebranche__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	UChildActorComponent* bpfv__CallFunc_NewLightningNode_NewChild__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	UChildActorComponent* bpfv__CallFunc_NewLightningNode_NewChild_1__pf{};
	bool bpfv__CallFunc_MustRebranche_Rebranche_1__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_2__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_3__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_5__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_4__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_6__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_7__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_2__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__ShowNodeInfo__pf();
			}
		case 2:
			{
				__StateStack.Push(5);
				__StateStack.Push(4);
			}
		case 3:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->USceneComponent::K2_SetWorldLocation(bpv__SourceLocation__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__UpdateCount__pf, 1);
				bpv__UpdateCount__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				__StateStack.Push(20);
				__StateStack.Push(27);
			}
		case 6:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__Index__pf, 1);
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				int32  __Local__10 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheSubdivisions__pf) : (__Local__10)), bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf);
				int32  __Local__11 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__MaxBrancheDepth__pf) : (__Local__11)), bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf, bpfv__CallFunc_Greater_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 32;
					break;
				}
			}
		case 7:
			{
				bpf__MustRebranche__pf(/*out*/ bpfv__CallFunc_MustRebranche_Rebranche_1__pf);
			}
		case 8:
			{
				if (!bpfv__CallFunc_MustRebranche_Rebranche_1__pf)
				{
					__CurrentState = 37;
					break;
				}
			}
		case 9:
			{
				__StateStack.Push(37);
			}
		case 10:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 11:
			{
				bool  __Local__12 = false;
				if (!((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__12)))
				{
					__CurrentState = 66;
					break;
				}
			}
		case 12:
			{
				if (!bpv__DeleteBrancheOnNextUpdate__pf)
				{
					__CurrentState = 74;
					break;
				}
			}
		case 13:
			{
				AActor*  __Local__13 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__13)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__DestroyBranche__pf(true);
				}
			}
		case 15:
			{
				bpv__BrancheChild__pf = ((UChildActorComponent*)nullptr);
			}
		case 16:
			{
				bpv__MainBrancheFactor__pf = 1.000000;
			}
		case 17:
			{
				bpf__UpdateBrancheWidth__pf(bpv__AmperesWidth__pf);
			}
		case 18:
			{
				__StateStack.Push(81);
				__StateStack.Push(79);
				__StateStack.Push(78);
				__StateStack.Push(77);
			}
		case 19:
			{
				bpv__BrancheChanced__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				__StateStack.Push(24);
			}
		case 21:
			{
				bpfv__CallFunc_IsValid_ReturnValue_5__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				AActor*  __Local__14 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_4__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__14)));
				bpfv__K2Node_DynamicCast_bSuccess_4__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_4__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_4__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_4__pf->bpf__UpdateBranche__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				AActor*  __Local__15 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_3__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__15)));
				bpfv__K2Node_DynamicCast_bSuccess_3__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_3__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_3__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_3__pf->bpf__UpdateBranche__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				float  __Local__16 = 0.000000;
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__UpdateNodePositionInterval__pf) : (__Local__16)), 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 28:
			{
				float  __Local__17 = 0.000000;
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__UpdateNodePositionInterval__pf) : (__Local__17)), bpv__LastNodeUpdateTime__pf);
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf, bpv__LastNodeUpdateTime__pf);
				bpfv__CallFunc_FMin_ReturnValue__pf = UKismetMathLibrary::FMin(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 0.100000);
				bpv__NodeDeltaSeconds__pf = bpfv__CallFunc_FMin_ReturnValue__pf;
			}
		case 30:
			{
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpv__LastNodeUpdateTime__pf = bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf;
			}
		case 31:
			{
				bpf__UpdateBranchePositionParentDependent__pf(((AB_LightningNode_C__pf2650558384*)nullptr), bpv__SourceLocation__pf, bpv__TargetLocation__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(bpv__BrancheDone__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf)
				{
					__CurrentState = 35;
					break;
				}
			}
		case 33:
			{
				bpv__BrancheDone__pf = true;
			}
		case 34:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__AddBrancheCountDone__pf();
				}
			}
		case 35:
			{
				bpf__MustRebranche__pf(/*out*/ bpfv__CallFunc_MustRebranche_Rebranche__pf);
			}
		case 36:
			{
				if (!bpfv__CallFunc_MustRebranche_Rebranche__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 10;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf = UKismetMathLibrary::Not_PreBool(bpv__BrancheDone__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf, bpfv__CallFunc_MustRebranche_Rebranche_1__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 38:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_MustRebranche_Rebranche_1__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf = UKismetMathLibrary::Not_PreBool(bpv__BrancheDone__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_5__pf, bpfv__CallFunc_Not_PreBool_ReturnValue_4__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue_2__pf, bpfv__CallFunc_IsValid_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_3__pf)
				{
					__CurrentState = 40;
					break;
				}
			}
		case 39:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Warning: overwrite branche chilld")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 40:
			{
				bpf__BrancheTimeReached__pf(bpv__MasterCopy__pf, /*out*/ bpfv__CallFunc_BrancheTimeReached_Reached__pf, /*out*/ bpfv__CallFunc_BrancheTimeReached_OutMainBrancheFactor__pf);
			}
		case 41:
			{
				if (!bpfv__CallFunc_BrancheTimeReached_Reached__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				bpv__MainBrancheFactor__pf = bpfv__CallFunc_BrancheTimeReached_OutMainBrancheFactor__pf;
			}
		case 43:
			{
				__StateStack.Push(46);
				__StateStack.Push(47);
				__StateStack.Push(55);
			}
		case 44:
			{
				if (!bpv__BrancheChanced__pf)
				{
					__CurrentState = 82;
					break;
				}
			}
		case 45:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpv__BrancheChanceYes__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 46:
			{
				if (!bpv__BrancheDone__pf)
				{
					__CurrentState = 86;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				if (!bpv__BrancheChanceYes__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 48:
			{
				bpfv__CallFunc_IsValid_ReturnValue_6__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_6__pf)
				{
					__CurrentState = 49;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__NewLightningNode__pf(bpv__TargetSubLocationNoise__pf, /*out*/ bpfv__CallFunc_NewLightningNode_NewChild__pf);
				}
			}
		case 50:
			{
				bpv__BrancheChild__pf = bpfv__CallFunc_NewLightningNode_NewChild__pf;
			}
		case 51:
			{
				AActor*  __Local__18 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__18)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 52:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(1.000000, bpv__MainBrancheFactor__pf);
				bpfv__CallFunc_Sqrt_ReturnValue__pf = UKismetMathLibrary::Sqrt(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf);
				bool  __Local__19 = false;
				bpfv__CallFunc_SelectFloat_ReturnValue_2__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Sqrt_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesFactorIsSquared__pf) : (__Local__19)));
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__InitializexBranchexChild__pfTT(bpv__MasterCopy__pf, this, bpfv__CallFunc_SelectFloat_ReturnValue_2__pf, false, bpv__BrancheChild__pf);
				}
			}
		case 53:
			{
				bool  __Local__20 = false;
				if (!((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__20)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 54:
			{
				bpf__UpdateBrancheWidth__pf(bpv__AmperesWidth__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				bpfv__CallFunc_IsValid_ReturnValue_7__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_7__pf)
				{
					__CurrentState = 56;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__NewLightningNode__pf(bpv__TargetSubLocationNoise__pf, /*out*/ bpfv__CallFunc_NewLightningNode_NewChild_1__pf);
				}
			}
		case 57:
			{
				bpv__MainChild__pf = bpfv__CallFunc_NewLightningNode_NewChild_1__pf;
			}
		case 58:
			{
				AActor*  __Local__21 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_2__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__21)));
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_2__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 59:
			{
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(this);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = 65;
					break;
				}
			}
		case 60:
			{
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(bpv__MainBrancheFactor__pf, 1.000000, bpv__BrancheChanceYes__pf);
				bpfv__CallFunc_Sqrt_ReturnValue_1__pf = UKismetMathLibrary::Sqrt(bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				bool  __Local__22 = false;
				bpfv__CallFunc_SelectFloat_ReturnValue_1__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Sqrt_ReturnValue_1__pf, bpfv__CallFunc_SelectFloat_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesFactorIsSquared__pf) : (__Local__22)));
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_2__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_2__pf->bpf__InitializexBranchexChild__pfTT(bpv__MasterCopy__pf, this, bpfv__CallFunc_SelectFloat_ReturnValue_1__pf, true, bpv__MainChild__pf);
				}
			}
		case 61:
			{
				bool  __Local__23 = false;
				if (!((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__TipsAreNarrow__pf) : (__Local__23)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 62:
			{
				bpf__SetWidth__pf(1.000000);
			}
		case 63:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Deactivate();
				}
			}
		case 64:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Activate(true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("B_LightningNode self is not valid")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue_2__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 1.000000);
				float  __Local__24 = 0.000000;
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_RandomFloatInRange_ReturnValue_2__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheChance__pf) : (__Local__24)));
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_3__pf)
				{
					__CurrentState = 67;
					break;
				}
				__CurrentState = 13;
				break;
			}
		case 67:
			{
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_1__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpv__CreationTime__pf = bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_1__pf;
			}
		case 68:
			{
				bool  __Local__25 = false;
				if (!((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__25)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 69:
			{
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_3__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpv__CreationTime__pf = bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_3__pf;
			}
		case 70:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsValid_ReturnValue_1__pf);
				bool  __Local__26 = false;
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__VaryMainBranche__pf) : (__Local__26)));
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 71:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 1.000000);
				float  __Local__27 = 0.000000;
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Greater_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheChance__pf) : (__Local__27)), bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 72:
			{
				bpf__CalculateTarget__pf(bpv__SourceLocation__pf, bpv__TargetLocation__pf);
			}
		case 73:
			{
				bpf__UpdateBranchePosition__pf(false, bpv__TargetSubLocationNoise__pf, FVector(0.000000,0.000000,0.000000));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 74:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 1.000000);
				float  __Local__28 = 0.000000;
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheChance__pf) : (__Local__28)));
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 67;
					break;
				}
			}
		case 75:
			{
				bpv__DeleteBrancheOnNextUpdate__pf = true;
			}
		case 76:
			{
				bpf__UpdateBrancheLifetime__pf(bpv__DeleteBrancheOnNextUpdate__pf);
				__CurrentState = 67;
				break;
			}
		case 77:
			{
				bpv__BrancheChanceYes__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 78:
			{
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_2__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpv__CreationTime__pf = bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue_2__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 79:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__SubtractxBranchexCountxDone__pfTTT(/*out*/ bpv__BrancheDone__pf);
				}
			}
		case 80:
			{
				bpv__BrancheDone__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 81:
			{
				bpv__DeleteBrancheOnNextUpdate__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 82:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf, 1);
				int32  __Local__29 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__MaxBrancheDepth__pf) : (__Local__29)), bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf = UKismetMathLibrary::Not_PreBool(bpv__DeleteSelfOnNextUpdate__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_IntInt_ReturnValue_2__pf, bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 85;
					break;
				}
			}
		case 83:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue_3__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 1.000000);
				float  __Local__30 = 0.000000;
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheChance__pf) : (__Local__30)), bpfv__CallFunc_RandomFloatInRange_ReturnValue_3__pf);
				bpv__BrancheChanceYes__pf = bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf;
			}
		case 84:
			{
				bpv__BrancheChanced__pf = true;
				__CurrentState = 45;
				break;
			}
		case 85:
			{
				bpv__BrancheChanceYes__pf = false;
				__CurrentState = 84;
				break;
			}
		case 86:
			{
				bpv__BrancheDone__pf = true;
			}
		case 87:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__AddBrancheCountDone__pf();
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
void AB_LightningNode_C__pf2650558384::bpf__TransformTarget__pf(FVector bpp__RootSourceLocation__pf, FVector bpp__SourceOffset__pf, float bpp__inScale__pf, FRotator bpp__inRotate__pf, float bpp__ChildTransformStrenth__pf, float bpp__ChopOffStrength__pf, float bpp__RecursiveStrength__pf)
{
	FVector bpfv__locSourceOffset__pf(EForceInit::ForceInit);
	float bpfv__locChopOffStrength__pf{};
	float bpfv__locRecursiveStrengthNext__pf{};
	float bpfv__locChildTransformStrength__pf{};
	float bpfv__locRecursiveStrength__pf{};
	FVector bpfv__locPivot__pf(EForceInit::ForceInit);
	FRotator bpfv__locRotate__pf(EForceInit::ForceInit);
	float bpfv__locScale__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__locPivot__pf = bpp__RootSourceLocation__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(1.000000, bpp__inScale__pf, bpp__RecursiveStrength__pf);
				bpfv__locScale__pf = bpfv__CallFunc_Lerp_ReturnValue__pf;
			}
		case 3:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpp__RecursiveStrength__pf, 0.999000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 4:
			{
				bpfv__locRotate__pf = bpp__inRotate__pf;
			}
		case 5:
			{
				bpfv__locSourceOffset__pf = bpp__SourceOffset__pf;
			}
		case 6:
			{
				bpfv__locRecursiveStrength__pf = bpp__RecursiveStrength__pf;
			}
		case 7:
			{
				bpfv__locChildTransformStrength__pf = bpp__ChildTransformStrenth__pf;
			}
		case 8:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__ChildTransformStrenth__pf, bpp__RecursiveStrength__pf);
				bpfv__locRecursiveStrengthNext__pf = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf;
			}
		case 9:
			{
				bpfv__locChopOffStrength__pf = bpp__ChopOffStrength__pf;
			}
		case 10:
			{
				__StateStack.Push(17);
				__StateStack.Push(16);
				__StateStack.Push(15);
				__StateStack.Push(14);
				__StateStack.Push(13);
			}
		case 11:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__SourceLocation__pf, bpfv__locPivot__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_3__pf, bpfv__locScale__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_3__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf, bpfv__locRotate__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_3__pf, bpfv__locPivot__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_6__pf, bpfv__locSourceOffset__pf);
				bpv__SourceLocation__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_7__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_RotatorFloat(bpp__inRotate__pf, bpp__RecursiveStrength__pf);
				bpfv__locRotate__pf = bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetSubLocation__pf, bpfv__locPivot__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf, bpfv__locScale__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_2__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf, bpfv__locRotate__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_2__pf, bpfv__locPivot__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf, bpfv__locSourceOffset__pf);
				bpv__TargetSubLocation__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetSubLocationNoise__pf, bpfv__locPivot__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf, bpfv__locScale__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_1__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf, bpfv__locRotate__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue_1__pf, bpfv__locPivot__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, bpfv__locSourceOffset__pf);
				bpv__TargetSubLocationNoise__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetLocation__pf, bpfv__locPivot__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpfv__locScale__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpfv__locRotate__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf, bpfv__locPivot__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__locSourceOffset__pf);
				bpv__TargetLocation__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpf__UpdatePosition__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				__StateStack.Push(22);
			}
		case 18:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__locRecursiveStrengthNext__pf, bpfv__locChopOffStrength__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				AActor*  __Local__31 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__31)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 21:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__TransformTarget__pf(bpfv__locPivot__pf, FVector(0.000000,0.000000,0.000000), bpp__inScale__pf, bpp__inRotate__pf, bpfv__locChildTransformStrength__pf, bpfv__locChopOffStrength__pf, bpfv__locRecursiveStrengthNext__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__locRecursiveStrength__pf, bpfv__locChopOffStrength__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				AActor*  __Local__32 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__32)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__TransformTarget__pf(bpfv__locPivot__pf, FVector(0.000000,0.000000,0.000000), bpp__inScale__pf, bpp__inRotate__pf, bpfv__locChildTransformStrength__pf, bpfv__locChopOffStrength__pf, bpfv__locRecursiveStrength__pf);
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
void AB_LightningNode_C__pf2650558384::bpf__MustRebranche__pf(/*out*/ bool& bpp__Rebranche__pf)
{
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__CreationTime__pf, bpv__Lifetime__pf);
	bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	bool  __Local__33 = false;
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__33)));
	bpp__Rebranche__pf = bpfv__CallFunc_BooleanAND_ReturnValue__pf;
}
void AB_LightningNode_C__pf2650558384::bpf__CalculateTarget__pf(FVector bpp__inSourceLocation__pf, FVector bpp__inTargetLocation__pf)
{
	int32 bpfv__SubBrancheSubdivisions__pf{};
	float bpfv__LengthNormalized__pf{};
	float bpfv__Length__pf{};
	FVector bpfv__DirectionNoise__pf(EForceInit::ForceInit);
	FVector bpfv__AbsoluteTarget__pf(EForceInit::ForceInit);
	FVector bpfv__Direction__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Max_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_Max_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Min_ReturnValue__pf{};
	int32 bpfv__CallFunc_Min_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpfv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FMax_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_2__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_5__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue_3__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf{};
	float bpfv__CallFunc_DegSin_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Get2OrthogonormalVectors_OutCross1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Get2OrthogonormalVectors_OutCross2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_DegCos_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_5__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_6__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__SourceLocation__pf = bpp__inSourceLocation__pf;
			}
		case 2:
			{
				int32  __Local__34 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheSubdivisions__pf) : (__Local__34)), bpv__Index__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf, 0);
				bpfv__CallFunc_SelectInt_ReturnValue_3__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf, 1, bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf);
				bpfv__SubBrancheSubdivisions__pf = bpfv__CallFunc_SelectInt_ReturnValue_3__pf;
			}
		case 3:
			{
				__StateStack.Push(11);
				__StateStack.Push(9);
			}
		case 4:
			{
				bpv__TargetLocation__pf = bpp__inTargetLocation__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SelfAmperesFactor__pf, bpv__SelfAmperesFactor__pf);
				bool  __Local__35 = false;
				bpfv__CallFunc_SelectFloat_ReturnValue_2__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpv__SelfAmperesFactor__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesFactorIsSquared__pf) : (__Local__35)));
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue_2__pf, 0.500000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue_2__pf, 2.000000);
				bpfv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::MultiplyMultiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, 2.000000);
				bpfv__CallFunc_FMax_ReturnValue__pf = UKismetMathLibrary::FMax(bpfv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf, 0.050000);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				bool  __Local__36 = false;
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheIsSameLengthAsMain__pf) : (__Local__36)));
				bpfv__CallFunc_BooleanOR_ReturnValue_2__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue_1__pf, bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_5__pf = UKismetMathLibrary::SelectFloat(1.000000, bpfv__CallFunc_FMax_ReturnValue__pf, bpfv__CallFunc_BooleanOR_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__SubBrancheSubdivisions__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetLocation__pf, bpv__SourceLocation__pf);
				bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Divide_VectorFloat(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_6__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf, bpfv__CallFunc_SelectFloat_ReturnValue_5__pf);
				bpfv__Direction__pf = bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_6__pf;
			}
		case 6:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__Direction__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.010000);
				float  __Local__37 = 0.000000;
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Greater_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__MinimumSpokeLength__pf) : (__Local__37)), bpfv__CallFunc_VSize_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__Direction__pf);
				float  __Local__38 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__MinimumSpokeLength__pf) : (__Local__38)), bpfv__CallFunc_VSize_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__Direction__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__Direction__pf = bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpf__Get2OrthogonormalVectors__pf(bpfv__Direction__pf, /*out*/ bpfv__CallFunc_Get2OrthogonormalVectors_OutCross1__pf, /*out*/ bpfv__CallFunc_Get2OrthogonormalVectors_OutCross2__pf);
			}
		case 10:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SelfAmperesFactor__pf, bpv__SelfAmperesFactor__pf);
				bool  __Local__39 = false;
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__SelfAmperesFactor__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesFactorIsSquared__pf) : (__Local__39)));
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(1.010000, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue__pf, 0.500000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_1__pf = UKismetMathLibrary::SelectFloat(1.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				int32  __Local__40 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheSubdivisions__pf) : (__Local__40)), 1);
				int32  __Local__41 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheSubdivisions__pf) : (__Local__41)), bpv__ParentIndex__pf);
				bpfv__CallFunc_Max_ReturnValue__pf = UKismetMathLibrary::Max(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf, bpfv__CallFunc_SelectFloat_ReturnValue_1__pf);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_Max_ReturnValue_1__pf = UKismetMathLibrary::Max(bpfv__CallFunc_FTrunc_ReturnValue__pf, 1);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				int32  __Local__42 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheSubdivisions__pf) : (__Local__42)), bpfv__CallFunc_Max_ReturnValue_1__pf);
				float  __Local__43 = 0.000000;
				float  __Local__44 = 0.000000;
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__Noise__pf) : (__Local__43)), ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__NoiseBrancheBias__pf) : (__Local__44)));
				bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__CurrentBrancheDepth__pf, 2);
				bpfv__CallFunc_Min_ReturnValue__pf = UKismetMathLibrary::Min(bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf, bpfv__CallFunc_Max_ReturnValue__pf);
				bpfv__CallFunc_Min_ReturnValue_1__pf = UKismetMathLibrary::Min(bpv__CurrentBrancheDepth__pf, bpfv__CallFunc_Max_ReturnValue__pf);
				bool  __Local__45 = false;
				bpfv__CallFunc_SelectInt_ReturnValue__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Min_ReturnValue_1__pf, 0, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__StartIndexIsBrancheDepth__pf) : (__Local__45)));
				bool  __Local__46 = false;
				bpfv__CallFunc_SelectInt_ReturnValue_1__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Min_ReturnValue__pf, bpfv__CallFunc_SelectInt_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__StartIndexIsTwiceBrancheDepth__pf) : (__Local__46)));
				bool  __Local__47 = false;
				bpfv__CallFunc_SelectInt_ReturnValue_2__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf, bpfv__CallFunc_SelectInt_ReturnValue_1__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__StartIndexIsProportionalToBrancheLength__pf) : (__Local__47)));
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__Index__pf, bpfv__CallFunc_SelectInt_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Greater_IntInt_ReturnValue__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				float  __Local__48 = 0.000000;
				bpfv__CallFunc_SelectFloat_ReturnValue_3__pf = UKismetMathLibrary::SelectFloat(0.000000, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__NoiseBrancheBias__pf) : (__Local__48)), bpfv__CallFunc_BooleanOR_ReturnValue__pf);
				float  __Local__49 = 0.000000;
				bpfv__CallFunc_SelectFloat_ReturnValue_4__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__Noise__pf) : (__Local__49)), bpfv__CallFunc_BooleanOR_ReturnValue__pf);
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpfv__CallFunc_SelectFloat_ReturnValue_3__pf, bpfv__CallFunc_SelectFloat_ReturnValue_4__pf);
				bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 360.000000);
				bpfv__CallFunc_DegSin_ReturnValue__pf = UKismetMathLibrary::DegSin(bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf);
				bpfv__CallFunc_VSize_ReturnValue_1__pf = UKismetMathLibrary::VSize(bpfv__Direction__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue_1__pf, bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf);
				bpfv__CallFunc_DegCos_ReturnValue__pf = UKismetMathLibrary::DegCos(bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpfv__CallFunc_DegSin_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpfv__CallFunc_DegCos_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Get2OrthogonormalVectors_OutCross2__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Get2OrthogonormalVectors_OutCross1__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_5__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__Direction__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_5__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf);
				bpfv__DirectionNoise__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_5__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				__StateStack.Push(14);
				__StateStack.Push(15);
			}
		case 12:
			{
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__SourceLocation__pf, bpfv__Direction__pf);
				bpv__TargetSubLocation__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue__pf;
			}
		case 13:
			{
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpv__SourceLocation__pf, bpfv__DirectionNoise__pf);
				bpv__TargetSubLocationNoise__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetSubLocationNoise__pf, bpv__SourceLocation__pf);
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->SetVectorParameter(FName(TEXT("Target")), bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bool  __Local__50 = false;
				if (!((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__Directional__pf) : (__Local__50)))
				{
					__CurrentState = 16;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				__StateStack.Push(20);
			}
		case 17:
			{
				bpfv__Length__pf = 1.000000;
			}
		case 18:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__SubBrancheSubdivisions__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__Length__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				bpfv__LengthNormalized__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf;
			}
		case 19:
			{
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__Direction__pf, bpfv__Length__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Add_VectorVector(bpv__SourceLocation__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf);
				bpfv__AbsoluteTarget__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Subtract_FloatFloat(1.000000, bpfv__LengthNormalized__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__TargetSubLocationNoise__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__AbsoluteTarget__pf, bpfv__LengthNormalized__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf);
				bpv__TargetSubLocationNoise__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AB_LightningNode_C__pf2650558384::bpf__Get2OrthogonormalVectors__pf(FVector bpp__inVector__pf, /*out*/ FVector& bpp__OutCross1__pf, /*out*/ FVector& bpp__OutCross2__pf)
{
	FVector bpfv__Cross2__pf(EForceInit::ForceInit);
	FVector bpfv__Cross1__pf(EForceInit::ForceInit);
	FVector bpfv__Helper__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue_1__pf{};
	float bpfv__CallFunc_Abs_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Cross_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Cross_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue_1__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(6);
				__StateStack.Push(5);
				__StateStack.Push(4);
			}
		case 2:
			{
				UKismetMathLibrary::BreakVector(bpp__inVector__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Abs_ReturnValue_1__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Y__pf);
				bpfv__CallFunc_Abs_ReturnValue_2__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpfv__CallFunc_Abs_ReturnValue_2__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Abs_ReturnValue_1__pf, bpfv__CallFunc_Abs_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__Helper__pf = FVector(1.000000,0.000000,0.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Cross_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Cross_VectorVector(bpp__inVector__pf, bpfv__Helper__pf);
				bpfv__CallFunc_Normal_ReturnValue_1__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Cross_VectorVector_ReturnValue_1__pf, 0.000100);
				bpfv__Cross1__pf = bpfv__CallFunc_Normal_ReturnValue_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Cross_VectorVector_ReturnValue__pf = UKismetMathLibrary::Cross_VectorVector(bpp__inVector__pf, bpfv__Cross1__pf);
				bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Cross_VectorVector_ReturnValue__pf, 0.000100);
				bpfv__Cross2__pf = bpfv__CallFunc_Normal_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpp__OutCross1__pf = bpfv__Cross1__pf;
				bpp__OutCross2__pf = bpfv__Cross2__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				UKismetMathLibrary::BreakVector(bpp__inVector__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Abs_ReturnValue_1__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Y__pf);
				bpfv__CallFunc_Abs_ReturnValue_2__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpfv__CallFunc_Abs_ReturnValue_1__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue_2__pf, bpfv__CallFunc_Abs_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 8:
			{
				bpfv__Helper__pf = FVector(0.000000,1.000000,0.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__Helper__pf = FVector(0.000000,0.000000,1.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AB_LightningNode_C__pf2650558384::bpf__InitializexBranche__pfT(AB_LightningMaster_C__pf2650558384* bpp__InMaster__pf, FVector bpp__InSourceLocation__pf, FVector bpp__InTargetLocation__pf, float bpp__InAmperesWidth__pf, float bpp__AmperesFactor__pf, float bpp__ParentLifeTIme__pf, float bpp__ParentAliveTIme__pf, int32 bpp__ParentIndex__pf, int32 bpp__ParentBrancheDepth__pf, bool bpp__isMainBranche__pf, UChildActorComponent* bpp__SelfComponentIn__pf, bool bpp__inDeleteSelfOnNextUpdate__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_4__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FMax_ReturnValue__pf{};
	float bpfv__CallFunc_FMin_ReturnValue__pf{};
	float bpfv__CallFunc_FMin_ReturnValue_1__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_6__pf{};
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Max_ReturnValue__pf{};
	int32 bpfv__CallFunc_Min_ReturnValue__pf{};
	int32 bpfv__CallFunc_Min_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue_2__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_7__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_8__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_Max_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_SelectInt_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__MasterCopy__pf = bpp__InMaster__pf;
			}
		case 2:
			{
				bpv__SelfComponent__pf = bpp__SelfComponentIn__pf;
			}
		case 3:
			{
				bpv__DeleteSelfOnNextUpdate__pf = bpp__inDeleteSelfOnNextUpdate__pf;
			}
		case 4:
			{
				bpv__DeleteBrancheOnNextUpdate__pf = bpv__DeleteSelfOnNextUpdate__pf;
			}
		case 5:
			{
				__StateStack.Push(23);
				__StateStack.Push(21);
				__StateStack.Push(17);
				__StateStack.Push(11);
				__StateStack.Push(10);
				__StateStack.Push(8);
				__StateStack.Push(7);
			}
		case 6:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__AddBrancheCountCreated__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpp__ParentBrancheDepth__pf, 1);
				bpfv__CallFunc_SelectInt_ReturnValue__pf = UKismetMathLibrary::SelectInt(bpp__ParentBrancheDepth__pf, bpfv__CallFunc_Add_IntInt_ReturnValue__pf, bpp__isMainBranche__pf);
				bpv__CurrentBrancheDepth__pf = bpfv__CallFunc_SelectInt_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpv__ParentIndex__pf = bpp__ParentIndex__pf;
			}
		case 9:
			{
				bpv__SelfAmperesFactor__pf = bpp__AmperesFactor__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpp__ParentIndex__pf, 1);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpv__CurrentBrancheDepth__pf, 2);
				int32  __Local__51 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheSubdivisions__pf) : (__Local__51)), 1);
				int32  __Local__52 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheSubdivisions__pf) : (__Local__52)), bpv__ParentIndex__pf);
				bpfv__CallFunc_Max_ReturnValue__pf = UKismetMathLibrary::Max(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0);
				bpfv__CallFunc_Min_ReturnValue__pf = UKismetMathLibrary::Min(bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf, bpfv__CallFunc_Max_ReturnValue__pf);
				bpfv__CallFunc_Min_ReturnValue_1__pf = UKismetMathLibrary::Min(bpv__CurrentBrancheDepth__pf, bpfv__CallFunc_Max_ReturnValue__pf);
				bool  __Local__53 = false;
				bpfv__CallFunc_SelectInt_ReturnValue_1__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Min_ReturnValue_1__pf, 0, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__StartIndexIsBrancheDepth__pf) : (__Local__53)));
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SelfAmperesFactor__pf, bpv__SelfAmperesFactor__pf);
				bool  __Local__54 = false;
				bpfv__CallFunc_SelectInt_ReturnValue_2__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Min_ReturnValue__pf, bpfv__CallFunc_SelectInt_ReturnValue_1__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__StartIndexIsTwiceBrancheDepth__pf) : (__Local__54)));
				bool  __Local__55 = false;
				bpfv__CallFunc_SelectFloat_ReturnValue_7__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__SelfAmperesFactor__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesFactorIsSquared__pf) : (__Local__55)));
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(1.010000, bpfv__CallFunc_SelectFloat_ReturnValue_7__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue_7__pf, 0.500000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue_7__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_8__pf = UKismetMathLibrary::SelectFloat(1.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf, bpfv__CallFunc_SelectFloat_ReturnValue_8__pf);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_Max_ReturnValue_1__pf = UKismetMathLibrary::Max(bpfv__CallFunc_FTrunc_ReturnValue__pf, 1);
				int32  __Local__56 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__BrancheSubdivisions__pf) : (__Local__56)), bpfv__CallFunc_Max_ReturnValue_1__pf);
				bool  __Local__57 = false;
				bpfv__CallFunc_SelectInt_ReturnValue_3__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf, bpfv__CallFunc_SelectInt_ReturnValue_2__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__StartIndexIsProportionalToBrancheLength__pf) : (__Local__57)));
				bpfv__CallFunc_SelectInt_ReturnValue_4__pf = UKismetMathLibrary::SelectInt(bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf, bpfv__CallFunc_SelectInt_ReturnValue_3__pf, bpp__isMainBranche__pf);
				bpv__Index__pf = bpfv__CallFunc_SelectInt_ReturnValue_4__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpf__CalculateTarget__pf(bpp__InSourceLocation__pf, bpp__InTargetLocation__pf);
			}
		case 12:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__SourceLocation__pf, bpv__TargetSubLocationNoise__pf);
				bpfv__CallFunc_VSize_ReturnValue_1__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_VSize_ReturnValue_1__pf, 2000.000000);
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->SetFloatParameter(FName(TEXT("NoiseScale")), bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				}
			}
		case 13:
			{
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpp__ParentLifeTIme__pf, 0.000000);
				bool  __Local__58 = false;
				bool  __Local__59 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__58)), ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__FadeOut__pf) : (__Local__59)));
				float  __Local__60 = 0.000000;
				bpfv__CallFunc_SelectFloat_ReturnValue_1__pf = UKismetMathLibrary::SelectFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__LifetimeMax__pf) : (__Local__60)), bpp__ParentLifeTIme__pf, bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpp__ParentAliveTIme__pf, 0.000000, bpfv__CallFunc_SelectFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_SelectFloat_ReturnValue_1__pf, bpfv__CallFunc_FClamp_ReturnValue__pf);
				float  __Local__61 = 0.000000;
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__LifetimeMax__pf) : (__Local__61)), 0.000000);
				bpfv__CallFunc_FMax_ReturnValue__pf = UKismetMathLibrary::FMax(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 0.010000);
				float  __Local__62 = 0.000000;
				bpfv__CallFunc_FMin_ReturnValue__pf = UKismetMathLibrary::FMin(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__LifetimeMax__pf) : (__Local__62)), bpfv__CallFunc_FMax_ReturnValue__pf);
				float  __Local__63 = 0.000000;
				bpfv__CallFunc_FMin_ReturnValue_1__pf = UKismetMathLibrary::FMin(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__LifetimeMin__pf) : (__Local__63)), bpfv__CallFunc_FMax_ReturnValue__pf);
				float  __Local__64 = 0.000000;
				bpfv__CallFunc_SelectFloat_ReturnValue_3__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_FMin_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__LifetimeMax__pf) : (__Local__64)), bpfv__CallFunc_BooleanAND_ReturnValue__pf);
				float  __Local__65 = 0.000000;
				bpfv__CallFunc_SelectFloat_ReturnValue_4__pf = UKismetMathLibrary::SelectFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__LifetimeMin__pf) : (__Local__65)), bpp__ParentLifeTIme__pf, bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_5__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_FMin_ReturnValue_1__pf, bpfv__CallFunc_SelectFloat_ReturnValue_4__pf, bpfv__CallFunc_BooleanAND_ReturnValue__pf);
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpfv__CallFunc_SelectFloat_ReturnValue_5__pf, bpfv__CallFunc_SelectFloat_ReturnValue_3__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_6__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 0.000000, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				bpv__Lifetime__pf = bpfv__CallFunc_SelectFloat_ReturnValue_6__pf;
			}
		case 14:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__DeleteSelfOnNextUpdate__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				bool  __Local__66 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__66)), bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				bool  __Local__67 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__67)));
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_BooleanAND_ReturnValue_1__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_BooleanAND_ReturnValue_2__pf);
				bool  __Local__68 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue_3__pf = UKismetMathLibrary::BooleanAND(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__FadeOut__pf) : (__Local__68)), bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue_3__pf, bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue_2__pf = UKismetMathLibrary::SelectFloat(bpv__Lifetime__pf, 0.000000, bpfv__CallFunc_BooleanAND_ReturnValue_4__pf);
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->SetFloatParameter(FName(TEXT("Lifetime")), bpfv__CallFunc_SelectFloat_ReturnValue_2__pf);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Deactivate();
				}
			}
		case 16:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Activate(true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__InAmperesWidth__pf, bpp__AmperesFactor__pf);
				bpv__AmperesWidth__pf = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf;
			}
		case 18:
			{
				bool  __Local__69 = false;
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(0.600000, 1.000000, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__TipsAreNarrow__pf) : (__Local__69)));
				bpf__SetWidth__pf(bpfv__CallFunc_SelectFloat_ReturnValue__pf);
			}
		case 19:
			{
				FLinearColor  __Local__70 = FLinearColor(0.000000,0.000000,0.000000,1.000000);
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_LinearColorToVector(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__Color_0__pf) : (__Local__70)));
				float  __Local__71 = 0.000000;
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__Intensity__pf) : (__Local__71)));
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->SetVectorParameter(FName(TEXT("Color")), bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				}
			}
		case 20:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__SourceLocation__pf, bpv__TargetSubLocationNoise__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 2000.000000);
				float  __Local__72 = 0.000000;
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__NoiseSpokeScale__pf) : (__Local__72)), bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->SetFloatParameter(FName(TEXT("NoiseScale")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				__CurrentState = 22;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpv__CreationTime__pf = bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Activate(true);
				}
			}
		case 24:
			{
				bpv__UpdateCount__pf = 0;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AB_LightningNode_C__pf2650558384::bpf__BrancheTimeReached__pf(AB_LightningMaster_C__pf2650558384* bpp__InMaster__pf, /*out*/ bool& bpp__Reached__pf, /*out*/ float& bpp__OutMainBrancheFactor__pf)
{
	float bpfv__lMainBrancheFactor__pf{};
	bool bpfv__BrancheNow__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__BrancheNow__pf = false;
			}
		case 2:
			{
				float  __Local__73 = 0.000000;
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(((::IsValid(bpp__InMaster__pf)) ? (bpp__InMaster__pf->bpv__Speed__pf) : (__Local__73)), 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf, bpv__CreationTime__pf);
				float  __Local__74 = 0.000000;
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, ((::IsValid(bpp__InMaster__pf)) ? (bpp__InMaster__pf->bpv__Speed__pf) : (__Local__74)));
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetSubLocationNoise__pf, bpv__SourceLocation__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_VSize_ReturnValue__pf);
				bpfv__BrancheNow__pf = bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf;
			}
		case 4:
			{
				if (!bpfv__BrancheNow__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				float  __Local__75 = 0.000000;
				float  __Local__76 = 0.000000;
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(((::IsValid(bpp__InMaster__pf)) ? (bpp__InMaster__pf->bpv__MainBrancheAmperesFactorMin__pf) : (__Local__75)), ((::IsValid(bpp__InMaster__pf)) ? (bpp__InMaster__pf->bpv__MainBrancheAmperesFactorMax__pf) : (__Local__76)));
				bpfv__lMainBrancheFactor__pf = bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf;
			}
		case 6:
			{
				bpp__Reached__pf = bpfv__BrancheNow__pf;
				bpp__OutMainBrancheFactor__pf = bpfv__lMainBrancheFactor__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__BrancheNow__pf = true;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				bpfv__lMainBrancheFactor__pf = 1.000000;
				__CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AB_LightningNode_C__pf2650558384::bpf__InitializexBranchexChild__pfTT(AB_LightningMaster_C__pf2650558384* bpp__InMaster__pf, AB_LightningNode_C__pf2650558384* bpp__ParentNode__pf, float bpp__AmperesFactor__pf, bool bpp__isMainBranche__pf, UChildActorComponent* bpp__SelfComponent__pf)
{
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf{};
	FVector bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bpf__CalculateTargetDependingOnParent__pf(bpp__ParentNode__pf, bpp__InMaster__pf, bpp__isMainBranche__pf, /*out*/ bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation__pf);
	bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
	float  __Local__77 = 0.000000;
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf, ((::IsValid(bpp__ParentNode__pf)) ? (bpp__ParentNode__pf->bpv__CreationTime__pf) : (__Local__77)));
	bool  __Local__78 = false;
	bool  __Local__79 = false;
	bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(((::IsValid(bpp__ParentNode__pf)) ? (bpp__ParentNode__pf->bpv__DeleteBrancheOnNextUpdate__pf) : (__Local__78)), ((::IsValid(bpp__ParentNode__pf)) ? (bpp__ParentNode__pf->bpv__DeleteSelfOnNextUpdate__pf) : (__Local__79)));
	FVector  __Local__80 = FVector(0.000000,0.000000,0.000000);
	float  __Local__81 = 0.000000;
	float  __Local__82 = 0.000000;
	int32  __Local__83 = 0;
	int32  __Local__84 = 0;
	bpf__InitializexBranche__pfT(bpp__InMaster__pf, ((::IsValid(bpp__ParentNode__pf)) ? (bpp__ParentNode__pf->bpv__TargetSubLocationNoise__pf) : (__Local__80)), bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation__pf, ((::IsValid(bpp__ParentNode__pf)) ? (bpp__ParentNode__pf->bpv__AmperesWidth__pf) : (__Local__81)), bpp__AmperesFactor__pf, ((::IsValid(bpp__ParentNode__pf)) ? (bpp__ParentNode__pf->bpv__Lifetime__pf) : (__Local__82)), bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, ((::IsValid(bpp__ParentNode__pf)) ? (bpp__ParentNode__pf->bpv__Index__pf) : (__Local__83)), ((::IsValid(bpp__ParentNode__pf)) ? (bpp__ParentNode__pf->bpv__CurrentBrancheDepth__pf) : (__Local__84)), bpp__isMainBranche__pf, bpp__SelfComponent__pf, bpfv__CallFunc_BooleanOR_ReturnValue__pf);
}
void AB_LightningNode_C__pf2650558384::bpf__DestroyBranche__pf(bool bpp__HideSpokes__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(10);
				__StateStack.Push(6);
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				AActor*  __Local__85 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__85)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__DestroyBranche__pf(bpp__HideSpokes__pf);
				}
			}
		case 5:
			{
				bpv__BrancheChild__pf = ((UChildActorComponent*)nullptr);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				AActor*  __Local__86 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__86)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__DestroyBranche__pf(bpp__HideSpokes__pf);
				}
			}
		case 9:
			{
				bpv__MainChild__pf = ((UChildActorComponent*)nullptr);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MasterCopy__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__SubtractxBranchexCount__pfTT(/*out*/ bpv__BrancheDone__pf);
				}
			}
		case 12:
			{
				if (!bpp__HideSpokes__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 13:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Deactivate();
				}
			}
		case 14:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__AddxNodextoxHiddenxGroup__pfTTTT(bpv__SelfComponent__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__DestroyNode__pf(bpv__SelfComponent__pf, this);
				}
			}
		case 16:
			{
				bpv__SelfComponent__pf = ((UChildActorComponent*)nullptr);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Master copy not valid")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = 11;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AB_LightningNode_C__pf2650558384::bpf__PrintBranche__pf()
{
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(6);
				__StateStack.Push(3);
			}
		case 2:
			{
				bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(bpv__CreationTime__pf);
				bpfv__CallFunc_Conv_FloatToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_FloatToString(bpv__AmperesWidth__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT(" Creation=")), bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT(" Width=")), bpfv__CallFunc_Conv_FloatToString_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpv__Index__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Index=")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpv__CurrentBrancheDepth__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT(" Branche=")), bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				AActor*  __Local__87 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__87)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__PrintBranche__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				AActor*  __Local__88 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__88)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__PrintBranche__pf();
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
void AB_LightningNode_C__pf2650558384::bpf__UpdateBrancheWidth__pf(float bpp__NewAmperesWidth__pf)
{
	float bpfv__OldAmperesWidth__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue_1__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__OldAmperesWidth__pf = bpv__AmperesWidth__pf;
			}
		case 2:
			{
				bpv__AmperesWidth__pf = bpp__NewAmperesWidth__pf;
			}
		case 3:
			{
				bool  __Local__89 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__TipsAreNarrow__pf) : (__Local__89)));
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_IsValid_ReturnValue__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(1.000000, 0.600000, bpfv__CallFunc_BooleanOR_ReturnValue__pf);
				bpf__SetWidth__pf(bpfv__CallFunc_SelectFloat_ReturnValue__pf);
			}
		case 4:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpv__DeleteSelfOnNextUpdate__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__OldAmperesWidth__pf, bpv__AmperesWidth__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(0.900000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 1.100000);
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanOR_ReturnValue_1__pf, bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Deactivate();
				}
			}
		case 6:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Activate(true);
				}
			}
		case 7:
			{
				__StateStack.Push(11);
			}
		case 8:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				AActor*  __Local__90 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__90)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(1.000000, bpv__MainBrancheFactor__pf);
				bpfv__CallFunc_Sqrt_ReturnValue__pf = UKismetMathLibrary::Sqrt(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				bool  __Local__91 = false;
				bpfv__CallFunc_SelectFloat_ReturnValue_2__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Sqrt_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesFactorIsSquared__pf) : (__Local__91)));
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__AmperesWidth__pf, bpfv__CallFunc_SelectFloat_ReturnValue_2__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__UpdateBrancheWidth__pf(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				AActor*  __Local__92 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__92)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_Sqrt_ReturnValue_1__pf = UKismetMathLibrary::Sqrt(bpv__MainBrancheFactor__pf);
				bool  __Local__93 = false;
				bpfv__CallFunc_SelectFloat_ReturnValue_1__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Sqrt_ReturnValue_1__pf, bpv__MainBrancheFactor__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesFactorIsSquared__pf) : (__Local__93)));
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__AmperesWidth__pf, bpfv__CallFunc_SelectFloat_ReturnValue_1__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__UpdateBrancheWidth__pf(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
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
void AB_LightningNode_C__pf2650558384::bpf__UpdateBranchePosition__pf(bool bpp__isSub__pf, FVector bpp__NewSourceLocation__pf, FVector bpp__NewTargetLocation__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__isSub__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpv__SourceLocation__pf = bpp__NewSourceLocation__pf;
			}
		case 3:
			{
				bpf__UpdatePosition__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				__StateStack.Push(8);
			}
		case 5:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				AActor*  __Local__94 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__94)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__UpdateBranchePosition__pf(true, bpp__NewSourceLocation__pf, FVector(0.000000,0.000000,0.000000));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				AActor*  __Local__95 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__95)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__UpdateBranchePosition__pf(true, bpp__NewSourceLocation__pf, FVector(0.000000,0.000000,0.000000));
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
void AB_LightningNode_C__pf2650558384::bpf__SetWidth__pf(float bpp__ExtraFactor__pf)
{
	float bpfv__CallFunc_FMin_ReturnValue__pf{};
	float bpfv__CallFunc_FMax_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float  __Local__96 = 0.000000;
	bpfv__CallFunc_FMin_ReturnValue__pf = UKismetMathLibrary::FMin(bpv__AmperesWidth__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesWidthClipMax__pf) : (__Local__96)));
	float  __Local__97 = 0.000000;
	bpfv__CallFunc_FMax_ReturnValue__pf = UKismetMathLibrary::FMax(bpfv__CallFunc_FMin_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__AmperesWidthClipMin__pf) : (__Local__97)));
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__ExtraFactor__pf, bpfv__CallFunc_FMax_ReturnValue__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 1.000000, 1.000000);
	if(::IsValid(bpv__LightningSpoke__pf))
	{
		bpv__LightningSpoke__pf->SetVectorParameter(FName(TEXT("Width")), bpfv__CallFunc_MakeVector_ReturnValue__pf);
	}
}
void AB_LightningNode_C__pf2650558384::bpf__HighlightNode__pf(int32 bpp__NodeIndex__pf, /*out*/ int32& bpp__RecursiveIndex__pf)
{
	UStaticMeshComponent* bpfv__LocalHighlightMeshCopy__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	UStaticMeshComponent* bpfv__CallFunc_MakeHighlightMesh_OutMesh__pf{};
	FRotator bpfv__CallFunc_MakeRotFromZ_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	FString bpfv__CallFunc_Conv_BoolToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_BoolToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(13);
				__StateStack.Push(10);
				__StateStack.Push(9);
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__NodeIndex__pf, bpp__RecursiveIndex__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Conv_BoolToString_ReturnValue__pf = UKismetStringLibrary::Conv_BoolToString(bpv__DeleteSelfOnNextUpdate__pf);
				bpfv__CallFunc_Conv_BoolToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_BoolToString(bpv__DeleteBrancheOnNextUpdate__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT(" DelSelf=")), bpfv__CallFunc_Conv_BoolToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT(" DelBranche=")), bpfv__CallFunc_Conv_BoolToString_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(bpv__Lifetime__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT(" Lifetime=")), bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpv__Index__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Index=")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpv__CurrentBrancheDepth__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT(" Branche=")), bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 4:
			{
				if(::IsValid(bpv__MasterCopy__pf))
				{
					bpv__MasterCopy__pf->bpf__MakeHighlightMesh__pf(/*out*/ bpfv__CallFunc_MakeHighlightMesh_OutMesh__pf);
				}
			}
		case 5:
			{
				bpfv__LocalHighlightMeshCopy__pf = bpfv__CallFunc_MakeHighlightMesh_OutMesh__pf;
			}
		case 6:
			{
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__SourceLocation__pf, bpv__TargetSubLocationNoise__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, 0.500000);
				if(::IsValid(bpfv__LocalHighlightMeshCopy__pf))
				{
					bpfv__LocalHighlightMeshCopy__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
				}
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetSubLocationNoise__pf, bpv__SourceLocation__pf);
				bpfv__CallFunc_MakeRotFromZ_ReturnValue__pf = UKismetMathLibrary::MakeRotFromZ(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				if(::IsValid(bpfv__LocalHighlightMeshCopy__pf))
				{
					bpfv__LocalHighlightMeshCopy__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_MakeRotFromZ_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 8:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetSubLocationNoise__pf, bpv__SourceLocation__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 1000.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.100000, 0.100000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpfv__LocalHighlightMeshCopy__pf))
				{
					bpfv__LocalHighlightMeshCopy__pf->USceneComponent::SetWorldScale3D(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpp__RecursiveIndex__pf, 1);
				bpp__RecursiveIndex__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				AActor*  __Local__98 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__98)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__HighlightNode__pf(bpp__NodeIndex__pf, /*out*/ bpp__RecursiveIndex__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				AActor*  __Local__99 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__99)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__HighlightNode__pf(bpp__NodeIndex__pf, /*out*/ bpp__RecursiveIndex__pf);
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
void AB_LightningNode_C__pf2650558384::bpf__UpdateBrancheLifetime__pf(bool bpp__inDeleteBrancheOnNextUpdate__pf)
{
	float bpfv__OldAmperesWidth__pf{};
	float bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__DeleteBrancheOnNextUpdate__pf = bpp__inDeleteBrancheOnNextUpdate__pf;
			}
		case 2:
			{
				bool  __Local__100 = false;
				if (!((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__FadeOut__pf) : (__Local__100)))
				{
					__CurrentState = 8;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				bool  __Local__101 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__101)));
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_BooleanAND_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpv__DeleteSelfOnNextUpdate__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(bpv__Lifetime__pf, 0.000000, bpfv__CallFunc_BooleanAND_ReturnValue_1__pf);
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->SetFloatParameter(FName(TEXT("Lifetime")), bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				bool  __Local__102 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__102)));
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_BooleanAND_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpv__DeleteSelfOnNextUpdate__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf = UKismetSystemLibrary::GetGameTimeInSeconds(this);
				bpv__CreationTime__pf = bpfv__CallFunc_GetGameTimeInSeconds_ReturnValue__pf;
			}
		case 6:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Deactivate();
				}
			}
		case 7:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Activate(true);
				}
			}
		case 8:
			{
				__StateStack.Push(13);
			}
		case 9:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				AActor*  __Local__103 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__103)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpv__DeleteSelfOnNextUpdate__pf = true;
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__UpdateBrancheLifetime__pf(bpv__DeleteBrancheOnNextUpdate__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__CurrentBrancheDepth__pf, 0);
				bool  __Local__104 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf, ((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__ContiniousRebranching__pf) : (__Local__104)));
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_BooleanAND_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpv__DeleteSelfOnNextUpdate__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				AActor*  __Local__105 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__105)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpv__DeleteSelfOnNextUpdate__pf = true;
				}
			}
		case 17:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__UpdateBrancheLifetime__pf(bpv__DeleteBrancheOnNextUpdate__pf);
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
void AB_LightningNode_C__pf2650558384::bpf__ShowNodeInfo__pf()
{
}
void AB_LightningNode_C__pf2650558384::bpf__UpdateTarget__pf(FVector bpp__NewTargetLocation__pf, FVector bpp__NewSourceLocation__pf, float bpp__ChildTransformStrength__pf, float bpp__ChildTransformStrengthChopOff__pf)
{
	float bpfv__NewScale__pf{};
	FRotator bpfv__NewRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue_1__pf{};
	float bpfv__CallFunc_Dot_VectorVector_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Dot_VectorVector_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Acos_ReturnValue__pf{};
	FVector bpfv__CallFunc_Cross_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_RadiansToDegrees_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue_2__pf{};
	FRotator bpfv__CallFunc_RotatorFromAxisAndAngle_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpp__NewTargetLocation__pf, bpp__NewSourceLocation__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetLocation__pf, bpv__SourceLocation__pf);
				bpfv__CallFunc_VSize_ReturnValue_1__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__CallFunc_VSize_ReturnValue_1__pf);
				bpfv__NewScale__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpp__NewTargetLocation__pf, bpp__NewSourceLocation__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetLocation__pf, bpv__SourceLocation__pf);
				bpfv__CallFunc_VSize_ReturnValue_1__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__CallFunc_VSize_ReturnValue_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 0.005000);
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 0.000000);
				bpfv__CallFunc_Cross_VectorVector_ReturnValue__pf = UKismetMathLibrary::Cross_VectorVector(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue_2__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Cross_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_VSize_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf, bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__NewRotation__pf = FRotator(0.000000,0.000000,0.000000);
			}
		case 4:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpp__NewSourceLocation__pf, bpv__SourceLocation__pf);
				bpf__TransformTarget__pf(bpv__SourceLocation__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf, bpfv__NewScale__pf, bpfv__NewRotation__pf, bpp__ChildTransformStrength__pf, bpp__ChildTransformStrengthChopOff__pf, 1.000000);
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpp__NewTargetLocation__pf, bpp__NewSourceLocation__pf);
				bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf = UKismetMathLibrary::Dot_VectorVector(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetLocation__pf, bpv__SourceLocation__pf);
				bpfv__CallFunc_Dot_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Dot_VectorVector(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf, bpfv__CallFunc_Dot_VectorVector_ReturnValue_1__pf);
				bpfv__CallFunc_Sqrt_ReturnValue__pf = UKismetMathLibrary::Sqrt(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Dot_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Dot_VectorVector(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Dot_VectorVector_ReturnValue_2__pf, bpfv__CallFunc_Sqrt_ReturnValue__pf);
				bpfv__CallFunc_Acos_ReturnValue__pf = UKismetMathLibrary::Acos(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Cross_VectorVector_ReturnValue__pf = UKismetMathLibrary::Cross_VectorVector(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_RadiansToDegrees_ReturnValue__pf = UKismetMathLibrary::RadiansToDegrees(bpfv__CallFunc_Acos_ReturnValue__pf);
				bpfv__CallFunc_RotatorFromAxisAndAngle_ReturnValue__pf = UKismetMathLibrary::RotatorFromAxisAndAngle(bpfv__CallFunc_Cross_VectorVector_ReturnValue__pf, bpfv__CallFunc_RadiansToDegrees_ReturnValue__pf);
				bpfv__NewRotation__pf = bpfv__CallFunc_RotatorFromAxisAndAngle_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AB_LightningNode_C__pf2650558384::bpf__UpdatePosition__pf()
{
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	if(::IsValid(bpv__LightningSpoke__pf))
	{
		bpv__LightningSpoke__pf->USceneComponent::K2_SetWorldLocation(bpv__SourceLocation__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
	}
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__TargetSubLocationNoise__pf, bpv__SourceLocation__pf);
	if(::IsValid(bpv__LightningSpoke__pf))
	{
		bpv__LightningSpoke__pf->SetVectorParameter(FName(TEXT("Target")), bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf);
	}
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__SourceLocation__pf, bpv__TargetSubLocationNoise__pf);
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 2000.000000);
	float  __Local__106 = 0.000000;
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(((::IsValid(bpv__MasterCopy__pf)) ? (bpv__MasterCopy__pf->bpv__NoiseSpokeScale__pf) : (__Local__106)), bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
	if(::IsValid(bpv__LightningSpoke__pf))
	{
		bpv__LightningSpoke__pf->SetFloatParameter(FName(TEXT("NoiseScale")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	}
}
void AB_LightningNode_C__pf2650558384::bpf__CalculateTargetDependingOnParent__pf(AB_LightningNode_C__pf2650558384* bpp__ParentLightningNode__pf, AB_LightningMaster_C__pf2650558384* bpp__MasterData__pf, bool bpp__IsMainBranche__pf, /*out*/ FVector& bpp__OutTargetLocation__pf)
{
	FVector bpfv__LocalNewTargetLocation__pf(EForceInit::ForceInit);
	FVector bpfv__FinalTargetLocationNoise__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_VLerp_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bool  __Local__107 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(((::IsValid(bpp__MasterData__pf)) ? (bpp__MasterData__pf->bpv__Directional__pf) : (__Local__107)));
				int32  __Local__108 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(((::IsValid(bpp__ParentLightningNode__pf)) ? (bpp__ParentLightningNode__pf->bpv__CurrentBrancheDepth__pf) : (__Local__108)), 0);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf, bpp__IsMainBranche__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				FVector  __Local__109 = FVector(0.000000,0.000000,0.000000);
				bpfv__LocalNewTargetLocation__pf = ((::IsValid(bpp__ParentLightningNode__pf)) ? (bpp__ParentLightningNode__pf->bpv__TargetLocation__pf) : (__Local__109));
			}
		case 3:
			{
				bpp__OutTargetLocation__pf = bpfv__LocalNewTargetLocation__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				FVector  __Local__110 = FVector(0.000000,0.000000,0.000000);
				FVector  __Local__111 = FVector(0.000000,0.000000,0.000000);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(((::IsValid(bpp__ParentLightningNode__pf)) ? (bpp__ParentLightningNode__pf->bpv__TargetSubLocationNoise__pf) : (__Local__110)), ((::IsValid(bpp__ParentLightningNode__pf)) ? (bpp__ParentLightningNode__pf->bpv__SourceLocation__pf) : (__Local__111)));
				int32  __Local__112 = 0;
				int32  __Local__113 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(bpp__MasterData__pf)) ? (bpp__MasterData__pf->bpv__BrancheSubdivisions__pf) : (__Local__112)), ((::IsValid(bpp__ParentLightningNode__pf)) ? (bpp__ParentLightningNode__pf->bpv__Index__pf) : (__Local__113)));
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				FVector  __Local__114 = FVector(0.000000,0.000000,0.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, ((::IsValid(bpp__ParentLightningNode__pf)) ? (bpp__ParentLightningNode__pf->bpv__SourceLocation__pf) : (__Local__114)));
				bpfv__FinalTargetLocationNoise__pf = bpfv__CallFunc_Add_VectorVector_ReturnValue__pf;
			}
		case 5:
			{
				FVector  __Local__115 = FVector(0.000000,0.000000,0.000000);
				float  __Local__116 = 0.000000;
				bpfv__CallFunc_VLerp_ReturnValue__pf = UKismetMathLibrary::VLerp(bpfv__FinalTargetLocationNoise__pf, ((::IsValid(bpp__ParentLightningNode__pf)) ? (bpp__ParentLightningNode__pf->bpv__TargetLocation__pf) : (__Local__115)), ((::IsValid(bpp__MasterData__pf)) ? (bpp__MasterData__pf->bpv__AllSpokesConvergeToTarget__pf) : (__Local__116)));
				bpfv__LocalNewTargetLocation__pf = bpfv__CallFunc_VLerp_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AB_LightningNode_C__pf2650558384::bpf__UpdateBranchePositionParentDependent__pf(AB_LightningNode_C__pf2650558384* bpp__ParentNode__pf, FVector bpp__NewSourceLocation__pf, FVector bpp__NewTargetLocation__pf)
{
	FVector bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AB_LightningNode_C__pf2650558384* bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__CalculateTarget__pf(bpp__NewSourceLocation__pf, bpp__NewTargetLocation__pf);
			}
		case 2:
			{
				bpf__UpdatePosition__pf();
			}
		case 3:
			{
				if(::IsValid(bpv__LightningSpoke__pf))
				{
					bpv__LightningSpoke__pf->Activate(true);
				}
			}
		case 4:
			{
				__StateStack.Push(9);
			}
		case 5:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__BrancheChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				AActor*  __Local__117 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__BrancheChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__BrancheChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__117)));
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				bpf__CalculateTargetDependingOnParent__pf(this, bpv__MasterCopy__pf, false, /*out*/ bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation_1__pf);
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node_1__pf->bpf__UpdateBranchePosition__pf(true, bpv__TargetSubLocationNoise__pf, bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MainChild__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				AActor*  __Local__118 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf = Cast<AB_LightningNode_C__pf2650558384>(((::IsValid(bpv__MainChild__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__MainChild__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__118)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				bpf__CalculateTargetDependingOnParent__pf(this, bpv__MasterCopy__pf, true, /*out*/ bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation__pf);
			}
		case 12:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf))
				{
					bpfv__K2Node_DynamicCast_AsB_Lightning_Node__pf->bpf__UpdateBranchePosition__pf(true, bpv__TargetSubLocationNoise__pf, bpfv__CallFunc_CalculateTargetDependingOnParent_OutTargetLocation__pf);
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
PRAGMA_DISABLE_OPTIMIZATION
void AB_LightningNode_C__pf2650558384::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{926, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/ProceduralLightning/P_LightningSpoke.P_LightningSpoke 
		{927, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/ProceduralLightning/Main/SupportMesh/innercylinder1000uv1tex.innercylinder1000uv1tex 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AB_LightningNode_C__pf2650558384::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{80, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{928, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{929, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/ProceduralLightning/Main/Materials/M_ParticleColorEmissive.M_ParticleColorEmissive 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{930, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ProceduralLightning/B_LightningMaster.B_LightningMaster_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AB_LightningNode_C__pf2650558384
{
	FRegisterHelper__AB_LightningNode_C__pf2650558384()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ProceduralLightning/B_LightningNode"), &AB_LightningNode_C__pf2650558384::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AB_LightningNode_C__pf2650558384 Instance;
};
FRegisterHelper__AB_LightningNode_C__pf2650558384 FRegisterHelper__AB_LightningNode_C__pf2650558384::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
