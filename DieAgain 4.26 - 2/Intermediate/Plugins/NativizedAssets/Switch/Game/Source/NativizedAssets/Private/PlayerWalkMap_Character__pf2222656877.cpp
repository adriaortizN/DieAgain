#include "NativizedAssets.h"
#include "PlayerWalkMap_Character__pf2222656877.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODAudioComponent.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODEvent.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODAsset.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "CyberWalkMap_AnimBP__pf3949469439.h"
#include "CameraActor__pf1295471953.h"
#include "Conversation_Actor__pf2744501483.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "SaveGameBP__pf4030252459.h"
#include "MyGameInstance__pf2410127383.h"
#include "DieAgainGamemode__pf1010915279.h"
#include "PauseHUD__pf197907997.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "GamepadInteraction__pf197907997.h"
#include "MyDialogueWidget__pf596304771.h"
#include "WorldMapPlayerAnimBP__pf1902219163.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Demon_WalkMap_AnimBP__pf4182214707.h"
#include "WalkMapAltPlayerAnimBP__pf1902219163.h"
#include "AnimBP_RobotPlayer__pf1902219163.h"
#include "PlayerWalk_SteinerAnimBP__pf1028405882.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
APlayerWalkMap_Character_C__pf2222656877::APlayerWalkMap_Character_C__pf2222656877(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		static TWeakFieldPtr<FProperty> __Local__4{};
		const FProperty* __Local__3 = __Local__4.Get();
		if (nullptr == __Local__3)
		{
			__Local__3 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__3);
			__Local__4 = __Local__3;
		}
		(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->RotationRate = FRotator(720.000000, 720.000000, 720.000000);
		__Local__1->bOrientRotationToMovement = true;
		static TWeakFieldPtr<FProperty> __Local__6{};
		const FProperty* __Local__5 = __Local__6.Get();
		if (nullptr == __Local__5)
		{
			__Local__5 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__5);
			__Local__6 = __Local__5;
		}
		(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__8{};
		const FProperty* __Local__7 = __Local__8.Get();
		if (nullptr == __Local__7)
		{
			__Local__7 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__7);
			__Local__8 = __Local__7;
		}
		(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->AnimClass = UWorldMapPlayerAnimBP_C__pf1902219163::StaticClass();
		__Local__2->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		__Local__2->bReceivesDecals = false;
		auto& __Local__9 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__9 = __Local__0;
		auto& __Local__10 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeLocation() )));
		__Local__10 = FVector(0.000000, 0.000000, -86.000000);
		auto& __Local__11 = (*(AccessPrivateProperty<FRotator >((__Local__2), USceneComponent::__PPO__RelativeRotation() )));
		__Local__11 = FRotator(0.000000, -90.000114, 0.000000);
		static TWeakFieldPtr<FProperty> __Local__13{};
		const FProperty* __Local__12 = __Local__13.Get();
		if (nullptr == __Local__12)
		{
			__Local__12 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__12);
			__Local__13 = __Local__12;
		}
		(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__GasMask__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GasMask"));
	bpv__WalkMapMusic__pf = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("WalkMapMusic"));
	bpv__Weapon__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon"));
	bpv__Capa__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Capa"));
	bpv__SM_Hara_horn__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Hara_horn"));
	bpv__Knight_Helmet__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Helmet"));
	bpv__Knight_Glove__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Glove"));
	bpv__Knight_Cape__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Cape"));
	bpv__Knight_BodySkirt__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_BodySkirt"));
	bpv__Knight_Pants__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Pants"));
	bpv__Knight_Head__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knight_Head"));
	bpv__PartyHat__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartyHat"));
	bpv__PumpkinHeadd__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PumpkinHeadd"));
	bpv__CyberMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CyberMesh"));
	bpv__AstroMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AstroMesh"));
	bpv__GasMask__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GasMask__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__GasMask__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__14 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__GasMask__pf->bReceivesDecals = false;
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__GasMask__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__15 = FVector(-160.580002, 41.139999, -0.380000);
	auto& __Local__16 = (*(AccessPrivateProperty<FRotator >((bpv__GasMask__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__16 = FRotator(-88.610001, 73.089996, -85.605003);
	static TWeakFieldPtr<FProperty> __Local__18{};
	const FProperty* __Local__17 = __Local__18.Get();
	if (nullptr == __Local__17)
	{
		__Local__17 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__17);
		__Local__18 = __Local__17;
	}
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__GasMask__pf), true, 0));
	bpv__WalkMapMusic__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WalkMapMusic__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__WalkMapMusic__pf), false, 0));
	bpv__Weapon__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Weapon__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Weapon__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__19 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Weapon__pf->bReceivesDecals = false;
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__Weapon__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__20 = FVector(0.000000, 0.000000, 86.000000);
	auto& __Local__21 = (*(AccessPrivateProperty<FRotator >((bpv__Weapon__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__21 = FRotator(0.000000, 90.000114, 0.000000);
	static TWeakFieldPtr<FProperty> __Local__23{};
	const FProperty* __Local__22 = __Local__23.Get();
	if (nullptr == __Local__22)
	{
		__Local__22 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__22);
		__Local__23 = __Local__22;
	}
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__Weapon__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__Weapon__pf), true, 0));
	bpv__Capa__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Capa__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Capa__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Capa__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Capa__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Capa__pf->bReceivesDecals = false;
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__Capa__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__24 = FVector(-165.000000, 0.000000, 0.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<FRotator >((bpv__Capa__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__25 = FRotator(-90.000000, -16.908226, 16.908281);
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__Capa__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__Capa__pf), false, 0));
	bpv__SM_Hara_horn__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SM_Hara_horn__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform , TEXT("head"));
	auto& __Local__26 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SM_Hara_horn__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__26 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__28{};
	const FProperty* __Local__27 = __Local__28.Get();
	if (nullptr == __Local__27)
	{
		__Local__27 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__27);
		__Local__28 = __Local__27;
	}
	(((FBoolProperty*)__Local__27)->SetPropertyValue_InContainer((bpv__SM_Hara_horn__pf), false, 0));
	auto& __Local__29 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__SM_Hara_horn__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__30 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__29), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__30 = TArray<FResponseChannel> ();
	__Local__30.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__30.GetData(), 11);
	auto& __Local__31 = __Local__30[0];
	__Local__31.Channel = FName(TEXT("WorldStatic"));
	__Local__31.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__32 = __Local__30[1];
	__Local__32.Channel = FName(TEXT("WorldDynamic"));
	__Local__32.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__33 = __Local__30[2];
	__Local__33.Channel = FName(TEXT("Pawn"));
	__Local__33.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__34 = __Local__30[3];
	__Local__34.Channel = FName(TEXT("Visibility"));
	__Local__34.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__35 = __Local__30[4];
	__Local__35.Channel = FName(TEXT("Camera"));
	__Local__35.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__36 = __Local__30[5];
	__Local__36.Channel = FName(TEXT("PhysicsBody"));
	__Local__36.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__37 = __Local__30[6];
	__Local__37.Channel = FName(TEXT("Vehicle"));
	__Local__37.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__38 = __Local__30[7];
	__Local__38.Channel = FName(TEXT("Destructible"));
	__Local__38.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__39 = __Local__30[8];
	__Local__39.Channel = FName(TEXT("OverlapShoot"));
	__Local__39.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__40 = __Local__30[9];
	__Local__40.Channel = FName(TEXT("GunShoot"));
	__Local__40.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__41 = __Local__30[10];
	__Local__41.Channel = FName(TEXT("ExplosionMissile"));
	__Local__41.Response = ECollisionResponse::ECR_Ignore;
	bpv__SM_Hara_horn__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__42 = (*(AccessPrivateProperty<FRotator >((bpv__SM_Hara_horn__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__42 = FRotator(-90.000000, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__SM_Hara_horn__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__SM_Hara_horn__pf), false, 0));
	bpv__Knight_Helmet__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Helmet__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__43 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Helmet__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__43 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Helmet__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Helmet__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__Knight_Helmet__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	auto& __Local__44 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Knight_Helmet__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__44), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__45 = TArray<FResponseChannel> ();
	__Local__45.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__45.GetData(), 11);
	auto& __Local__46 = __Local__45[0];
	__Local__46.Channel = FName(TEXT("Visibility"));
	__Local__46.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__47 = __Local__45[1];
	__Local__47.Channel = FName(TEXT("Camera"));
	__Local__47.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__48 = __Local__45[2];
	__Local__48.Channel = FName(TEXT("WorldStatic"));
	__Local__48.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__49 = __Local__45[3];
	__Local__49.Channel = FName(TEXT("WorldDynamic"));
	__Local__49.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__50 = __Local__45[4];
	__Local__50.Channel = FName(TEXT("Pawn"));
	__Local__50.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__51 = __Local__45[5];
	__Local__51.Channel = FName(TEXT("PhysicsBody"));
	__Local__51.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__52 = __Local__45[6];
	__Local__52.Channel = FName(TEXT("Vehicle"));
	__Local__52.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__53 = __Local__45[7];
	__Local__53.Channel = FName(TEXT("Destructible"));
	__Local__53.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__54 = __Local__45[8];
	__Local__54.Channel = FName(TEXT("OverlapShoot"));
	__Local__54.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__55 = __Local__45[9];
	__Local__55.Channel = FName(TEXT("GunShoot"));
	__Local__55.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__56 = __Local__45[10];
	__Local__56.Channel = FName(TEXT("ExplosionMissile"));
	__Local__56.Response = ECollisionResponse::ECR_Ignore;
	bpv__Knight_Helmet__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__Knight_Helmet__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__Knight_Helmet__pf), false, 0));
	bpv__Knight_Glove__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Glove__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__57 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Glove__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__57 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Glove__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Glove__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Knight_Glove__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	auto& __Local__58 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Knight_Glove__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__59 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__58), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__59 = TArray<FResponseChannel> ();
	__Local__59.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__59.GetData(), 11);
	auto& __Local__60 = __Local__59[0];
	__Local__60.Channel = FName(TEXT("Visibility"));
	__Local__60.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__61 = __Local__59[1];
	__Local__61.Channel = FName(TEXT("Camera"));
	__Local__61.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__62 = __Local__59[2];
	__Local__62.Channel = FName(TEXT("WorldStatic"));
	__Local__62.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__63 = __Local__59[3];
	__Local__63.Channel = FName(TEXT("WorldDynamic"));
	__Local__63.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__64 = __Local__59[4];
	__Local__64.Channel = FName(TEXT("Pawn"));
	__Local__64.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__65 = __Local__59[5];
	__Local__65.Channel = FName(TEXT("PhysicsBody"));
	__Local__65.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__66 = __Local__59[6];
	__Local__66.Channel = FName(TEXT("Vehicle"));
	__Local__66.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__67 = __Local__59[7];
	__Local__67.Channel = FName(TEXT("Destructible"));
	__Local__67.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__68 = __Local__59[8];
	__Local__68.Channel = FName(TEXT("OverlapShoot"));
	__Local__68.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__69 = __Local__59[9];
	__Local__69.Channel = FName(TEXT("GunShoot"));
	__Local__69.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__70 = __Local__59[10];
	__Local__70.Channel = FName(TEXT("ExplosionMissile"));
	__Local__70.Response = ECollisionResponse::ECR_Ignore;
	bpv__Knight_Glove__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__71 = (*(AccessPrivateProperty<FVector >((bpv__Knight_Glove__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__71 = FVector(0.000000, 0.000000, 2.000000);
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__Knight_Glove__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__Knight_Glove__pf), false, 0));
	bpv__Knight_Cape__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Cape__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__72 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Cape__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__72 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Cape__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Cape__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__Knight_Cape__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Knight_Cape__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Knight_Cape__pf->OverrideMaterials.Reserve(2);
	bpv__Knight_Cape__pf->OverrideMaterials.Add(nullptr);
	bpv__Knight_Cape__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	auto& __Local__73 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Knight_Cape__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__73), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__74 = TArray<FResponseChannel> ();
	__Local__74.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__74.GetData(), 11);
	auto& __Local__75 = __Local__74[0];
	__Local__75.Channel = FName(TEXT("Visibility"));
	__Local__75.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__76 = __Local__74[1];
	__Local__76.Channel = FName(TEXT("Camera"));
	__Local__76.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__77 = __Local__74[2];
	__Local__77.Channel = FName(TEXT("WorldStatic"));
	__Local__77.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__78 = __Local__74[3];
	__Local__78.Channel = FName(TEXT("WorldDynamic"));
	__Local__78.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__79 = __Local__74[4];
	__Local__79.Channel = FName(TEXT("Pawn"));
	__Local__79.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__80 = __Local__74[5];
	__Local__80.Channel = FName(TEXT("PhysicsBody"));
	__Local__80.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__81 = __Local__74[6];
	__Local__81.Channel = FName(TEXT("Vehicle"));
	__Local__81.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__82 = __Local__74[7];
	__Local__82.Channel = FName(TEXT("Destructible"));
	__Local__82.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__83 = __Local__74[8];
	__Local__83.Channel = FName(TEXT("OverlapShoot"));
	__Local__83.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__84 = __Local__74[9];
	__Local__84.Channel = FName(TEXT("GunShoot"));
	__Local__84.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__85 = __Local__74[10];
	__Local__85.Channel = FName(TEXT("ExplosionMissile"));
	__Local__85.Response = ECollisionResponse::ECR_Ignore;
	bpv__Knight_Cape__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__Knight_Cape__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__Knight_Cape__pf), false, 0));
	bpv__Knight_BodySkirt__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_BodySkirt__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__86 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_BodySkirt__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__86 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_BodySkirt__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_BodySkirt__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__Knight_BodySkirt__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	auto& __Local__87 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Knight_BodySkirt__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__87), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__88 = TArray<FResponseChannel> ();
	__Local__88.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__88.GetData(), 11);
	auto& __Local__89 = __Local__88[0];
	__Local__89.Channel = FName(TEXT("Visibility"));
	__Local__89.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__90 = __Local__88[1];
	__Local__90.Channel = FName(TEXT("Camera"));
	__Local__90.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__91 = __Local__88[2];
	__Local__91.Channel = FName(TEXT("WorldStatic"));
	__Local__91.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__92 = __Local__88[3];
	__Local__92.Channel = FName(TEXT("WorldDynamic"));
	__Local__92.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__93 = __Local__88[4];
	__Local__93.Channel = FName(TEXT("Pawn"));
	__Local__93.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__94 = __Local__88[5];
	__Local__94.Channel = FName(TEXT("PhysicsBody"));
	__Local__94.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__95 = __Local__88[6];
	__Local__95.Channel = FName(TEXT("Vehicle"));
	__Local__95.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__96 = __Local__88[7];
	__Local__96.Channel = FName(TEXT("Destructible"));
	__Local__96.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__97 = __Local__88[8];
	__Local__97.Channel = FName(TEXT("OverlapShoot"));
	__Local__97.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__98 = __Local__88[9];
	__Local__98.Channel = FName(TEXT("GunShoot"));
	__Local__98.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__99 = __Local__88[10];
	__Local__99.Channel = FName(TEXT("ExplosionMissile"));
	__Local__99.Response = ECollisionResponse::ECR_Ignore;
	bpv__Knight_BodySkirt__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__Knight_BodySkirt__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__Knight_BodySkirt__pf), false, 0));
	bpv__Knight_Pants__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Pants__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__100 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Pants__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__100 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Pants__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Pants__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__Knight_Pants__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	auto& __Local__101 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Knight_Pants__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__102 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__101), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__102 = TArray<FResponseChannel> ();
	__Local__102.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__102.GetData(), 11);
	auto& __Local__103 = __Local__102[0];
	__Local__103.Channel = FName(TEXT("Visibility"));
	__Local__103.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__104 = __Local__102[1];
	__Local__104.Channel = FName(TEXT("Camera"));
	__Local__104.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__105 = __Local__102[2];
	__Local__105.Channel = FName(TEXT("WorldStatic"));
	__Local__105.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__106 = __Local__102[3];
	__Local__106.Channel = FName(TEXT("WorldDynamic"));
	__Local__106.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__107 = __Local__102[4];
	__Local__107.Channel = FName(TEXT("Pawn"));
	__Local__107.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__108 = __Local__102[5];
	__Local__108.Channel = FName(TEXT("PhysicsBody"));
	__Local__108.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__109 = __Local__102[6];
	__Local__109.Channel = FName(TEXT("Vehicle"));
	__Local__109.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__110 = __Local__102[7];
	__Local__110.Channel = FName(TEXT("Destructible"));
	__Local__110.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__111 = __Local__102[8];
	__Local__111.Channel = FName(TEXT("OverlapShoot"));
	__Local__111.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__112 = __Local__102[9];
	__Local__112.Channel = FName(TEXT("GunShoot"));
	__Local__112.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__113 = __Local__102[10];
	__Local__113.Channel = FName(TEXT("ExplosionMissile"));
	__Local__113.Response = ECollisionResponse::ECR_Ignore;
	bpv__Knight_Pants__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__Knight_Pants__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__Knight_Pants__pf), false, 0));
	bpv__Knight_Head__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Knight_Head__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__114 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__Knight_Head__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__114 = EAnimationMode::Type::AnimationSingleNode;
	bpv__Knight_Head__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Knight_Head__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpv__Knight_Head__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	auto& __Local__115 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Knight_Head__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__116 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__115), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__116 = TArray<FResponseChannel> ();
	__Local__116.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__116.GetData(), 11);
	auto& __Local__117 = __Local__116[0];
	__Local__117.Channel = FName(TEXT("Visibility"));
	__Local__117.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__118 = __Local__116[1];
	__Local__118.Channel = FName(TEXT("Camera"));
	__Local__118.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__119 = __Local__116[2];
	__Local__119.Channel = FName(TEXT("WorldStatic"));
	__Local__119.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__120 = __Local__116[3];
	__Local__120.Channel = FName(TEXT("WorldDynamic"));
	__Local__120.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__121 = __Local__116[4];
	__Local__121.Channel = FName(TEXT("Pawn"));
	__Local__121.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__122 = __Local__116[5];
	__Local__122.Channel = FName(TEXT("PhysicsBody"));
	__Local__122.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__123 = __Local__116[6];
	__Local__123.Channel = FName(TEXT("Vehicle"));
	__Local__123.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__124 = __Local__116[7];
	__Local__124.Channel = FName(TEXT("Destructible"));
	__Local__124.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__125 = __Local__116[8];
	__Local__125.Channel = FName(TEXT("OverlapShoot"));
	__Local__125.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__126 = __Local__116[9];
	__Local__126.Channel = FName(TEXT("GunShoot"));
	__Local__126.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__127 = __Local__116[10];
	__Local__127.Channel = FName(TEXT("ExplosionMissile"));
	__Local__127.Response = ECollisionResponse::ECR_Ignore;
	bpv__Knight_Head__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__Knight_Head__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__Knight_Head__pf), false, 0));
	bpv__PartyHat__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PartyHat__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform , TEXT("head"));
	auto& __Local__128 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__PartyHat__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__128 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__27)->SetPropertyValue_InContainer((bpv__PartyHat__pf), false, 0));
	bpv__PartyHat__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__129 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__PartyHat__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__129 = ECollisionChannel::ECC_WorldStatic;
	auto& __Local__130 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__PartyHat__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__130 = ECollisionEnabled::Type::NoCollision;
	auto& __Local__131 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__PartyHat__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__132 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__131), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__132 = TArray<FResponseChannel> ();
	__Local__132.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__132.GetData(), 11);
	auto& __Local__133 = __Local__132[0];
	__Local__133.Channel = FName(TEXT("Visibility"));
	__Local__133.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__134 = __Local__132[1];
	__Local__134.Channel = FName(TEXT("Camera"));
	__Local__134.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__135 = __Local__132[2];
	__Local__135.Channel = FName(TEXT("WorldStatic"));
	__Local__135.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__136 = __Local__132[3];
	__Local__136.Channel = FName(TEXT("WorldDynamic"));
	__Local__136.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__137 = __Local__132[4];
	__Local__137.Channel = FName(TEXT("Pawn"));
	__Local__137.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__138 = __Local__132[5];
	__Local__138.Channel = FName(TEXT("PhysicsBody"));
	__Local__138.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__139 = __Local__132[6];
	__Local__139.Channel = FName(TEXT("Vehicle"));
	__Local__139.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__140 = __Local__132[7];
	__Local__140.Channel = FName(TEXT("Destructible"));
	__Local__140.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__141 = __Local__132[8];
	__Local__141.Channel = FName(TEXT("OverlapShoot"));
	__Local__141.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__142 = __Local__132[9];
	__Local__142.Channel = FName(TEXT("GunShoot"));
	__Local__142.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__143 = __Local__132[10];
	__Local__143.Channel = FName(TEXT("ExplosionMissile"));
	__Local__143.Response = ECollisionResponse::ECR_Ignore;
	bpv__PartyHat__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__144 = (*(AccessPrivateProperty<FVector >((bpv__PartyHat__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__144 = FVector(30.637535, -2.143268, 0.000014);
	auto& __Local__145 = (*(AccessPrivateProperty<FRotator >((bpv__PartyHat__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__145 = FRotator(-89.999992, -360.000000, 260.000763);
	auto& __Local__146 = (*(AccessPrivateProperty<FVector >((bpv__PartyHat__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__146 = FVector(3.000000, 3.000000, 3.000000);
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__PartyHat__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__PartyHat__pf), false, 0));
	bpv__PumpkinHeadd__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PumpkinHeadd__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform , TEXT("head"));
	auto& __Local__147 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__PumpkinHeadd__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__147 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	auto& __Local__148 = (*(AccessPrivateProperty<FVector >((bpv__PumpkinHeadd__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__148 = FVector(-9.999985, -0.000044, -0.000013);
	auto& __Local__149 = (*(AccessPrivateProperty<FRotator >((bpv__PumpkinHeadd__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__149 = FRotator(-90.000000, 450.000000, -84.999756);
	auto& __Local__150 = (*(AccessPrivateProperty<FVector >((bpv__PumpkinHeadd__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__150 = FVector(0.500000, 0.500000, 0.500000);
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__PumpkinHeadd__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__PumpkinHeadd__pf), true, 0));
	bpv__CyberMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__CyberMesh__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__CyberMesh__pf->AnimClass = UCyberWalkMap_AnimBP_C__pf3949469439::StaticClass();
	bpv__CyberMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__CyberMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	bpv__CyberMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__CyberMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__CyberMesh__pf->OverrideMaterials.Reserve(4);
	bpv__CyberMesh__pf->OverrideMaterials.Add(nullptr);
	bpv__CyberMesh__pf->OverrideMaterials.Add(nullptr);
	bpv__CyberMesh__pf->OverrideMaterials.Add(nullptr);
	bpv__CyberMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
	auto& __Local__151 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__CyberMesh__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__151 = ECollisionChannel::ECC_Pawn;
	auto& __Local__152 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__CyberMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__152 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__153 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__CyberMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__154 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__153), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__154 = TArray<FResponseChannel> ();
	__Local__154.AddUninitialized(3);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__154.GetData(), 3);
	auto& __Local__155 = __Local__154[0];
	__Local__155.Channel = FName(TEXT("Visibility"));
	__Local__155.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__156 = __Local__154[1];
	__Local__156.Channel = FName(TEXT("Pawn"));
	__Local__156.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__157 = __Local__154[2];
	__Local__157.Channel = FName(TEXT("Vehicle"));
	__Local__157.Response = ECollisionResponse::ECR_Ignore;
	bpv__CyberMesh__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__158 = (*(AccessPrivateProperty<FVector >((bpv__CyberMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__158 = FVector(0.000000, 0.000000, -84.000000);
	auto& __Local__159 = (*(AccessPrivateProperty<FRotator >((bpv__CyberMesh__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__159 = FRotator(0.000000, -90.000122, 0.000000);
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__CyberMesh__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__CyberMesh__pf), false, 0));
	bpv__AstroMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__AstroMesh__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__AstroMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__AstroMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	bpv__AstroMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	auto& __Local__160 = (*(AccessPrivateProperty<FVector >((bpv__AstroMesh__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__160 = FVector(0.920000, 0.920000, 0.920000);
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__AstroMesh__pf), false, 0));
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((bpv__AstroMesh__pf), false, 0));
	bpv__CameraActor__pf = nullptr;
	bpv__ActorToTalk__pf = nullptr;
	bpv__IsMale__pf = false;
	bpv__CanWalk__pf = true;
	bpv__CanDance__pf = false;
	bpv__HasTalked__pf = false;
	bpv__IsSteiner__pf = false;
	bpv__AltAnimation__pf = false;
	bpv__MusicLobby__pf = E__EnumLobbyMusic__pf::NewEnumerator0;
	bpv__CanPet__pf = false;
	bpv__IsRobot__pf = false;
	bpv__TalkingDialogActor__pf = nullptr;
	bpv__IsTalking__pf = false;
	auto& __Local__161 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__161 = __Local__2;
	auto& __Local__162 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__162 = __Local__1;
	auto& __Local__163 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__163 = __Local__0;
	bUseControllerRotationYaw = false;
	auto& __Local__164 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__164 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void APlayerWalkMap_Character_C__pf2222656877::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__GasMask__pf)
	{
		bpv__GasMask__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WalkMapMusic__pf)
	{
		bpv__WalkMapMusic__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Weapon__pf)
	{
		bpv__Weapon__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Capa__pf)
	{
		bpv__Capa__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SM_Hara_horn__pf)
	{
		bpv__SM_Hara_horn__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Helmet__pf)
	{
		bpv__Knight_Helmet__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Glove__pf)
	{
		bpv__Knight_Glove__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Cape__pf)
	{
		bpv__Knight_Cape__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_BodySkirt__pf)
	{
		bpv__Knight_BodySkirt__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Pants__pf)
	{
		bpv__Knight_Pants__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Knight_Head__pf)
	{
		bpv__Knight_Head__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PartyHat__pf)
	{
		bpv__PartyHat__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PumpkinHeadd__pf)
	{
		bpv__PumpkinHeadd__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__CyberMesh__pf)
	{
		bpv__CyberMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AstroMesh__pf)
	{
		bpv__AstroMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void APlayerWalkMap_Character_C__pf2222656877::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Enemies/EnumLobbyMusic.EnumLobbyMusic")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UCyberWalkMap_AnimBP_C__pf3949469439::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ACameraActor_C__pf1295471953::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AConversation_Actor_C__pf2744501483::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USaveGameBP_C__pf4030252459::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMyGameInstance_C__pf2410127383::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADieAgainGamemode_C__pf1010915279::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPauseHUD_C__pf197907997::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGamepadInteraction_C__pf197907997::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMyDialogueWidget_C__pf596304771::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABaseCharacter_C__pf1010915279::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWorldMapPlayerAnimBP_C__pf1902219163::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UDemon_WalkMap_AnimBP_C__pf4182214707::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWalkMapAltPlayerAnimBP_C__pf1902219163::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UAnimBP_RobotPlayer_C__pf1902219163::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayerWalk_SteinerAnimBP_C__pf1028405882::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__165 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__165);
	auto __Local__166 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__166);
	auto __Local__167 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__167);
	static TWeakFieldPtr<FProperty> __Local__169{};
	const FProperty* __Local__168 = __Local__169.Get();
	if (nullptr == __Local__168)
	{
		__Local__168 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__168);
		__Local__169 = __Local__168;
	}
	(((FBoolProperty*)__Local__168)->SetPropertyValue_InContainer((__Local__165), false, 0));
	__Local__166->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__166->InputActionDelegateBindings.AddUninitialized(3);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__166->InputActionDelegateBindings.GetData(), 3);
	auto& __Local__170 = __Local__166->InputActionDelegateBindings[0];
	__Local__170.InputActionName = FName(TEXT("Jump"));
	__Local__170.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_2"));
	auto& __Local__171 = __Local__166->InputActionDelegateBindings[1];
	__Local__171.InputActionName = FName(TEXT("Pause"));
	__Local__171.FunctionNameToBind = FName(TEXT("InpActEvt_Pause_K2Node_InputActionEvent_1"));
	__Local__171.bExecuteWhenPaused = true;
	auto& __Local__172 = __Local__166->InputActionDelegateBindings[2];
	__Local__172.InputActionName = FName(TEXT("Dance"));
	__Local__172.FunctionNameToBind = FName(TEXT("InpActEvt_Dance_K2Node_InputActionEvent_0"));
	__Local__167->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__167->InputAxisDelegateBindings.AddUninitialized(3);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__167->InputAxisDelegateBindings.GetData(), 3);
	auto& __Local__173 = __Local__167->InputAxisDelegateBindings[0];
	__Local__173.InputAxisName = FName(TEXT("MoveRight"));
	__Local__173.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0"));
	auto& __Local__174 = __Local__167->InputAxisDelegateBindings[1];
	__Local__174.InputAxisName = FName(TEXT("MoveRight"));
	__Local__174.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90"));
	__Local__174.bOverrideParentBinding = false;
	auto& __Local__175 = __Local__167->InputAxisDelegateBindings[2];
	__Local__175.InputAxisName = FName(TEXT("MoveForward"));
	__Local__175.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79"));
	__Local__175.bOverrideParentBinding = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__SetAstro__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				__StateStack.Push(47);
				__StateStack.Push(46);
				__StateStack.Push(45);
				__StateStack.Push(39);
				__StateStack.Push(24);
				__StateStack.Push(18);
			}
		case 9:
			{
				(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ACameraActor_C__pf1295471953::StaticClass(), /*out*/ TArrayCaster<ACameraActor_C__pf1295471953*>(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 10:
			{
				b1l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 11:
			{
				b1l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 12:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				b1l__Temp_int_Array_Index_Variable__pf = b1l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 14:
			{
				__StateStack.Push(49);
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetAllActorsOfClass_OutActors__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf = Cast<ACameraActor_C__pf1295471953>(b1l__CallFunc_Array_Get_Item__pf);
				b1l__K2Node_DynamicCast_bSuccess_6__pf = (b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				bpv__CameraActor__pf = b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf;
			}
		case 17:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf))
				{
					b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf->bpv__Player__pf = this;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("Save_File")), 0);
			}
		case 19:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 20:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Save_File")), 0);
			}
		case 21:
			{
				b1l__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_2__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				bool  __Local__176 = false;
				bpf__SetSexAvatar__pf(((::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (b1l__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsMale__pf) : (__Local__176)));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpf__SetSexAvatar__pf(bpv__IsMale__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				if (!bpv__IsSteiner__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 25:
			{
				bpf__SetSteiner__pf();
			}
		case 26:
			{
				if(::IsValid(bpv__PumpkinHeadd__pf))
				{
					bpv__PumpkinHeadd__pf->USceneComponent::K2_SetRelativeRotation(FRotator(0.000430,635.000366,-270.000061), false, /*out*/ b1l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
			}
		case 27:
			{
				bpf__SetPumpkinHead__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_4__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				bool  __Local__177 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsRobotActive__pf) : (__Local__177)))
				{
					__CurrentState = 31;
					break;
				}
			}
		case 30:
			{
				bpf__SetRobot__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				bool  __Local__178 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsDemonActive__pf) : (__Local__178)))
				{
					__CurrentState = 33;
					break;
				}
			}
		case 32:
			{
				bpf__SetDemon__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bool  __Local__179 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsKnightActive__pf) : (__Local__179)))
				{
					__CurrentState = 35;
					break;
				}
			}
		case 34:
			{
				bpf__SetKnight__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bool  __Local__180 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsCyberActive__pf) : (__Local__180)))
				{
					__CurrentState = 37;
					break;
				}
			}
		case 36:
			{
				bpf__SetCyber__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				bool  __Local__181 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__IsAstroActive__pf) : (__Local__181)))
				{
					__CurrentState = 38;
					break;
				}
				__CurrentState = 1;
				break;
			}
		case 38:
			{
				bpf__SetPumpkinHead__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				if (!bpv__AltAnimation__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 40:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf);
				b1l__K2Node_DynamicCast_bSuccess_5__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 41:
			{
				bool  __Local__182 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf->bpv__IsRobotActive__pf) : (__Local__182)))
				{
					__CurrentState = 42;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				bool  __Local__183 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf->bpv__IsDemonActive__pf) : (__Local__183)))
				{
					__CurrentState = 43;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 43:
			{
				bool  __Local__184 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf->bpv__IsCyberActive__pf) : (__Local__184)))
				{
					__CurrentState = 44;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				bpf__AlternativeAnimation__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				bpf__SetMusicLobby__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				bpf__SetBirthDay__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_3__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 48:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpf__StopMusic__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 49:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 12;
				break;
			}
		case 65:
			{
				__CurrentState = 66;
				break;
			}
		case 66:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
				}
			}
		case 67:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				__CurrentState = 8;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_SetGamePaused_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 59:
			{
				bpfv__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, true);
			}
		case 60:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetVolume(0.400000);
				}
			}
		case 61:
			{
				UWidgetLayoutLibrary::RemoveAllWidgets(this);
			}
		case 62:
			{
				b1l__CallFunc_Create_ReturnValue__pf = CastChecked<UPauseHUD_C__pf197907997>(UWidgetBlueprintLibrary::Create(this, UPauseHUD_C__pf197907997::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 63:
			{
				if(::IsValid(b1l__CallFunc_Create_ReturnValue__pf))
				{
					b1l__CallFunc_Create_ReturnValue__pf->bpf__ResetWidget__pf(b1l__CallFunc_Create_ReturnValue__pf);
				}
			}
		case 64:
			{
				if(::IsValid(b1l__CallFunc_Create_ReturnValue__pf))
				{
					b1l__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = -1;
				break;
			}
		case 68:
			{
				if (!bpv__CanWalk__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 69:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b1l__Temp_bool_Variable__pf);
				b1l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 70:
			{
				if (!b1l__Temp_bool_Variable__pf)
				{
					__CurrentState = 71;
					break;
				}
				__CurrentState = 59;
				break;
			}
		case 71:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_7__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = 75;
					break;
				}
			}
		case 72:
			{
				UGamepadInteraction_C__pf197907997*  __Local__185 = ((UGamepadInteraction_C__pf197907997*)nullptr);
				b1l__K2Node_DynamicCast_AsPause_HUD__pf = Cast<UPauseHUD_C__pf197907997>(((::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf)) ? (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf->bpv__CurrentWidget__pf) : (__Local__185)));
				b1l__K2Node_DynamicCast_bSuccess_8__pf = (b1l__K2Node_DynamicCast_AsPause_HUD__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_8__pf)
				{
					__CurrentState = 74;
					break;
				}
			}
		case 73:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsPause_HUD__pf))
				{
					b1l__K2Node_DynamicCast_AsPause_HUD__pf->bpf__ClosexMenu__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 74:
			{
				bpf__OpenxMenu__pfT();
				__CurrentState = -1;
				break;
			}
		case 75:
			{
				bpf__OpenxMenu__pfT();
				__CurrentState = -1;
				break;
			}
		case 86:
			{
				__CurrentState = 87;
				break;
			}
		case 87:
			{
				if (!bpv__IsTalking__pf)
				{
					__CurrentState = 91;
					break;
				}
			}
		case 88:
			{
				b1l__K2Node_DynamicCast_AsConversation_Actor_1__pf = Cast<AConversation_Actor_C__pf2744501483>(bpv__TalkingDialogActor__pf);
				b1l__K2Node_DynamicCast_bSuccess_9__pf = (b1l__K2Node_DynamicCast_AsConversation_Actor_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_9__pf)
				{
					__CurrentState = 91;
					break;
				}
			}
		case 89:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsConversation_Actor_1__pf))
				{
					b1l__K2Node_DynamicCast_AsConversation_Actor_1__pf->bpf__StopConversation__pf();
				}
			}
		case 90:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsConversation_Actor_1__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsConversation_Actor_1__pf->bpv__DialogueWB__pf))
				{
					b1l__K2Node_DynamicCast_AsConversation_Actor_1__pf->bpv__DialogueWB__pf->RemoveFromParent();
				}
				__CurrentState = -1;
				break;
			}
		case 91:
			{
				if (!bpv__blockMenu__pf)
				{
					__CurrentState = 68;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 95:
			{
				__CurrentState = 69;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 96);
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 94);
	// optimized KCST_UnconditionalGoto
	b1l__K2Node_DynamicCast_AsConversation_Actor__pf = Cast<AConversation_Actor_C__pf2744501483>(bpv__ActorToTalk__pf);
	b1l__K2Node_DynamicCast_bSuccess_1__pf = (b1l__K2Node_DynamicCast_AsConversation_Actor__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__HasTalked__pf = true;
	bpv__CanDance__pf = false;
	bpv__IsTalking__pf = true;
	if(::IsValid(b1l__K2Node_DynamicCast_AsConversation_Actor__pf))
	{
		b1l__K2Node_DynamicCast_AsConversation_Actor__pf->bpf__StartConversation__pf();
	}
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 92);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(b1l__K2Node_InputAxisEvent_AxisValue__pf, 0.000000);
	if (!bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpv__CanDance__pf = false;
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 82:
			{
				if (!bpv__CanDance__pf)
				{
					__CurrentState = 83;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 83:
			{
				bpv__CanDance__pf = true;
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				__CurrentState = 82;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_6(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 79);
	// optimized KCST_UnconditionalGoto
	bpv__CanPet__pf = false;
	bpfv__CallFunc_K2_SetActorRotation_ReturnValue_1__pf = AActor::K2_SetActorRotation(FRotator(0.000000,-90.000000,0.000000), false);
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 76);
	// optimized KCST_UnconditionalGoto
	bpv__CanPet__pf = true;
	bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = AActor::K2_SetActorRotation(FRotator(0.000000,-90.000000,0.000000), false);
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 57);
	// optimized KCST_UnconditionalGoto
	bpv__CanDance__pf = false;
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 55);
	// optimized KCST_UnconditionalGoto
	bpv__CanDance__pf = true;
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_10(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_NegateVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	if (!bpv__CanWalk__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakRotator_Roll__pf, /*out*/ b1l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b1l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b1l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	bpfv__CallFunc_NegateVector_ReturnValue__pf = UKismetMathLibrary::NegateVector(bpfv__CallFunc_GetRightVector_ReturnValue__pf);
	AddMovementInput(bpfv__CallFunc_NegateVector_ReturnValue__pf, b1l__K2Node_InputAxisEvent_AxisValue_1__pf, false);
	b1l__K2Node_DynamicCast_AsCamera_Actor__pf = Cast<ACameraActor_C__pf1295471953>(bpv__CameraActor__pf);
	b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsCamera_Actor__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsCamera_Actor__pf))
	{
		b1l__K2Node_DynamicCast_AsCamera_Actor__pf->bpf__MoveCam__pf();
	}
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	return; //KCST_EndOfThread
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b1l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_2(96);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__OpenxMenu__pfT()
{
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_1(95);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_4(92);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__StopPet__pf()
{
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_6(79);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__InitPet__pf()
{
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_7(76);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__StopDance__pf()
{
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_8(57);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__InitDance__pf()
{
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_9(55);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_10(3);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_11(2);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_0(65);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__InpActEvt_Dance_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_5(85);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__InpActEvt_Pause_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_1(86);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_3(94);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetSexAvatar__pf(bool bpp__IsMale__pf)
{
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__IsMale__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), true);
				}
			}
		case 3:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed), true);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpv__GasMask__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__GasMask__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__GasMask__pf->USceneComponent::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("head")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetSteiner__pf()
{
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_1__pf{};
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed), true);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetAnimClass(UPlayerWalk_SteinerAnimBP_C__pf1028405882::StaticClass());
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpfv__CallFunc_K2_AttachToComponent_ReturnValue_1__pf = bpv__GasMask__pf->USceneComponent::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("Head")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpv__GasMask__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-167.068008,4.856300,-10.740547), FRotator(4.236657,-92.024696,87.662491), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1__pf, true);
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpv__GasMask__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__Weapon__pf))
	{
		bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__Weapon__pf->USceneComponent::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("Neck")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
	}
	if(::IsValid(bpv__Weapon__pf))
	{
		bpv__Weapon__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-11.748800,9.925179,9.527671), FRotator(66.015480,-179.408005,73.260269), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, false);
	}
	if(::IsValid(bpv__Weapon__pf))
	{
		bpv__Weapon__pf->USceneComponent::SetVisibility(true, false);
	}
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetRobot__pf()
{
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), true);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed));
	}
	if(::IsValid(bpv__Capa__pf))
	{
		bpv__Capa__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__Capa__pf))
	{
		bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__Capa__pf->USceneComponent::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("head")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetAnimClass(UAnimBP_RobotPlayer_C__pf1902219163::StaticClass());
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpv__GasMask__pf->USceneComponent::SetVisibility(false, false);
	}
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__AlternativeAnimation__pf()
{
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf{};
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetAnimClass(UWalkMapAltPlayerAnimBP_C__pf1902219163::StaticClass());
	}
	if(::IsValid(bpv__Weapon__pf))
	{
		bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__Weapon__pf->USceneComponent::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("hand_rSocket")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
	}
	if(::IsValid(bpv__Weapon__pf))
	{
		bpv__Weapon__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, false);
	}
	if(::IsValid(bpv__Weapon__pf))
	{
		bpv__Weapon__pf->USceneComponent::SetVisibility(true, false);
	}
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetMusicLobby__pf()
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator4));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator5));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator6));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator7));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator8));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator9));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator10));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__MusicLobby__pf), static_cast<uint8>(E__EnumLobbyMusic__pf::NewEnumerator11));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 24;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed));
				}
			}
		case 3:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed));
				}
			}
		case 5:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed));
				}
			}
		case 7:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed));
				}
			}
		case 9:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed));
				}
			}
		case 11:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[26], ECastCheckedType::NullAllowed));
				}
			}
		case 13:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[27], ECastCheckedType::NullAllowed));
				}
			}
		case 15:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[28], ECastCheckedType::NullAllowed));
				}
			}
		case 17:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[29], ECastCheckedType::NullAllowed));
				}
			}
		case 19:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed));
				}
			}
		case 21:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[31], ECastCheckedType::NullAllowed));
				}
			}
		case 23:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 24:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::SetEvent(CastChecked<UFMODEvent>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[32], ECastCheckedType::NullAllowed));
				}
			}
		case 25:
			{
				if(::IsValid(bpv__WalkMapMusic__pf))
				{
					bpv__WalkMapMusic__pf->UFMODAudioComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetDemon__pf()
{
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[33], ECastCheckedType::NullAllowed), true);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[34], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(1, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[35], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(2, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[36], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(3, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[37], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(4, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[38], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(5, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[39], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(6, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[40], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(7, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[41], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(8, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[42], ECastCheckedType::NullAllowed));
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetAnimClass(UDemon_WalkMap_AnimBP_C__pf4182214707::StaticClass());
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpv__GasMask__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid(bpv__SM_Hara_horn__pf))
	{
		bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(true, false);
	}
	UKismetSystemLibrary::PrintString(this, FString(TEXT("SET DEMON")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetKnight__pf()
{
	if(::IsValid(bpv__Knight_Pants__pf))
	{
		bpv__Knight_Pants__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__Knight_Helmet__pf))
	{
		bpv__Knight_Helmet__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__Knight_Head__pf))
	{
		bpv__Knight_Head__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__Knight_Glove__pf))
	{
		bpv__Knight_Glove__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__Knight_Cape__pf))
	{
		bpv__Knight_Cape__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__Knight_BodySkirt__pf))
	{
		bpv__Knight_BodySkirt__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[43], ECastCheckedType::NullAllowed));
	}
	if(::IsValid(bpv__Knight_Helmet__pf))
	{
		bpv__Knight_Helmet__pf->USkinnedMeshComponent::SetMasterPoseComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), false);
	}
	if(::IsValid(bpv__Knight_Head__pf))
	{
		bpv__Knight_Head__pf->USkinnedMeshComponent::SetMasterPoseComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), false);
	}
	if(::IsValid(bpv__Knight_Glove__pf))
	{
		bpv__Knight_Glove__pf->USkinnedMeshComponent::SetMasterPoseComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), false);
	}
	if(::IsValid(bpv__Knight_Pants__pf))
	{
		bpv__Knight_Pants__pf->USkinnedMeshComponent::SetMasterPoseComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), false);
	}
	if(::IsValid(bpv__Knight_BodySkirt__pf))
	{
		bpv__Knight_BodySkirt__pf->USkinnedMeshComponent::SetMasterPoseComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), false);
	}
	if(::IsValid(bpv__Knight_Cape__pf))
	{
		bpv__Knight_Cape__pf->USkinnedMeshComponent::SetMasterPoseComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetAnimClass(UWorldMapPlayerAnimBP_C__pf1902219163::StaticClass());
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpv__GasMask__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid(bpv__SM_Hara_horn__pf))
	{
		bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid(bpv__Capa__pf))
	{
		bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::SetVisibility(true, false);
	}
	UKismetSystemLibrary::PrintString(this, FString(TEXT("SET KNIGHT")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetCyber__pf()
{
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	if(::IsValid(bpv__CyberMesh__pf))
	{
		bpv__CyberMesh__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpv__GasMask__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(-165.250534,1.147400,-11.356000), FRotator(-86.000999,29.497807,-27.376200), false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, true);
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__GasMask__pf->USceneComponent::K2_AttachToComponent(bpv__CyberMesh__pf, FName(TEXT("head")), EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, true);
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpv__GasMask__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid(bpv__Capa__pf))
	{
		bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::SetVisibility(false, false);
	}
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetBirthDay__pf()
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
				bool  __Local__186 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsBirthday__pf) : (__Local__186)))
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__PartyHat__pf))
				{
					bpv__PartyHat__pf->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__PartyHat__pf))
				{
					bpv__PartyHat__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetPumpkinHead__pf()
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
				bool  __Local__187 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsHalloween__pf) : (__Local__187)))
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__PumpkinHeadd__pf))
				{
					bpv__PumpkinHeadd__pf->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__PumpkinHeadd__pf))
				{
					bpv__PumpkinHeadd__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void APlayerWalkMap_Character_C__pf2222656877::bpf__SetAstro__pf()
{
	if(::IsValid(bpv__AstroMesh__pf))
	{
		bpv__AstroMesh__pf->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::SetVisibility(true, false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APlayerWalkMap_Character_C__pf2222656877::StaticClass())->UsedAssets[43], ECastCheckedType::NullAllowed));
	}
	if(::IsValid(bpv__AstroMesh__pf))
	{
		bpv__AstroMesh__pf->USkinnedMeshComponent::SetMasterPoseComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->SetAnimClass(UWorldMapPlayerAnimBP_C__pf1902219163::StaticClass());
	}
	if(::IsValid(bpv__GasMask__pf))
	{
		bpv__GasMask__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid(bpv__SM_Hara_horn__pf))
	{
		bpv__SM_Hara_horn__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid(bpv__Capa__pf))
	{
		bpv__Capa__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::SetVisibility(true, false);
	}
	UKismetSystemLibrary::PrintString(this, FString(TEXT("SET ASTRO")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void APlayerWalkMap_Character_C__pf2222656877::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{230, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Post_Apoca_Character/Mesh/SK_Full.SK_Full 
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Post_Apoca_Character/Mesh/GasMask_StaticMesh.GasMask_StaticMesh 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ka47/SM_KA47.SM_KA47 
		{339, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/SciFi_Robot/MESHES/CLOAK_SK.CLOAK_SK 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Hara/Meshes/SM_Hara_horn.SM_Hara_horn 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Helmet.SK_GothicKnight_Helmet 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Glove.SK_GothicKnight_Glove 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_CapeFur.SK_GothicKnight_CapeFur 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/GKnight/Materials/CustomizationExample/MI_GKnightCape.MI_GKnightCape 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_BodySkirtLong.SK_GothicKnight_BodySkirtLong 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Pants.SK_GothicKnight_Pants 
		{219, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/GKnight/Meshes/Parts/SK_GothicKnight_Head.SK_GothicKnight_Head 
		{340, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/PartyHat/PartyHat.PartyHat 
		{220, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/PumpkinHead/PumpkinHead.PumpkinHead 
		{221, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/CyberGirl/Character/Meshes/Skin01/SK_CyberGirl_Skin01.SK_CyberGirl_Skin01 
		{368, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/CyberGirl/Character/Meshes/Skin01/Materials/instance/MI_NPRCloth002.MI_NPRCloth002 
		{222, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Astro/astrorig.astrorig 
		{232, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Apocalypse_Girl/Mesh/SK_Apocalypse_Girl_Full.SK_Apocalypse_Girl_Full 
		{223, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Steiner/Steiner.Steiner 
		{231, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/SciFi_Robot/MESHES/SCIFI_ROBOT_IK_SK.SCIFI_ROBOT_IK_SK 
		{347, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/SciFi_Robot/MATERIALS/BODY/NAVY_MAT.NAVY_MAT 
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
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void APlayerWalkMap_Character_C__pf2222656877::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{665, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/BaseCharacter.BaseCharacter_C 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{97, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/FMODStudio.FMODAudioComponent 
		{48, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{26, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{244, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkinnedMeshComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{249, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Art/Enemies/Enemy1/EnemyType1_Skeleton.EnemyType1_Skeleton 
		{251, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{250, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{253, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{254, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{255, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{256, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{259, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{381, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/RunningNoWeapon.RunningNoWeapon 
		{382, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleMoverBrazo.IdleMoverBrazo 
		{383, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Idle_Happy.Idle_Happy 
		{384, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/IdleMoverPiernas.IdleMoverPiernas 
		{385, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Idle_Lobby.Idle_Lobby 
		{386, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking3.Talking3 
		{357, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking2.Talking2 
		{358, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Talking1.Talking1 
		{350, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/SciFi_Robot/Mannequin/Character/Mesh/UE4_Robot_Mannequin_Skeleton.UE4_Robot_Mannequin_Skeleton 
		{351, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Petting_Robot.Petting_Robot 
		{352, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/DanceMoves_Robot.DanceMoves_Robot 
		{353, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Running_Robot.Running_Robot 
		{354, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle3_Robot.Idle3_Robot 
		{355, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle2_Robot.Idle2_Robot 
		{356, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Idle1_Robot.Idle1_Robot 
		{359, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Post_Apoca_Character/AnimDemoScene/Mesh/UE4_Mannequin_Skeleton_GOOD.UE4_Mannequin_Skeleton_GOOD 
		{252, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
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
		{324, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/IdleStatic_PostApoc.IdleStatic_PostApoc 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Button_Normal.Button_Normal 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/28_Days_Later_Font.28_Days_Later_Font 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
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
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{293, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{402, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.EventReply 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{403, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{404, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
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
		{332, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Key_R.Key_R 
		{333, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Escape.Escape 
		{334, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_A.Gamepad_A 
		{335, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_B.Gamepad_B 
		{336, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Start.Gamepad_Start 
		{337, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Select.Gamepad_Select 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Up.Gamepad_Stick_Up 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Down.Gamepad_Stick_Down 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_X.Gamepad_X 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Y.Gamepad_Y 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Left.Gamepad_Stick_Left 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Right.Gamepad_Stick_Right 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_8.C_8 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_7.C_7 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_6.C_6 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_5.C_5 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_4.C_4 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_2.C_2 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_1.C_1 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_Tut.C_Tut 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Enemies/Death_Trans_Clean_MAT_Inst.Death_Trans_Clean_MAT_Inst 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy1/EnemyType1.EnemyType1 
		{417, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Speedlines.M_Speedlines 
		{418, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_CyberScan.M_CyberScan 
		{628, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.BlackboardComponent 
		{629, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AIModule.AIStimulus 
		{630, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorDog/DogAITree.DogAITree 
		{631, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AIModule.BlackboardKeySelector 
		{633, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Art/Enemies/DogAnimation/Dog_BlendSpace.Dog_BlendSpace 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/OnlineSubsystemUtils.AchievementWriteDelegate__DelegateSignature 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMesh 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TargetPoint 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/FMODStudio.FMODBlueprintStatics 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/FMODStudio.FMODEventInstance 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_NF.C_NF 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_PerfectWorld.C_PerfectWorld 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_3.C_3 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_10.C_10 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/Combat/C_9.C_9 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Rifle_Walk_mixamo_com.Rifle_Walk_mixamo_com 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/Enemy1_MAT.Enemy1_MAT 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/_Eye_trans._Eye_trans 
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
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperSpriteComponent 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/Art/Circle/Circulo3_Sprite.Circulo3_Sprite 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.ParticleCollisionSignature__DelegateSignature 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Rifle/RifleShoot.RifleShoot 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShootNoBump1.ShotgunShootNoBump1 
		{111, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Weapons/RPG/RPGNoAmmoStatic.RPGNoAmmoStatic 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShoot.ShotgunShoot 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorShooting/ShootingAITree.ShootingAITree 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSuicide/SuicideAITree.SuicideAITree 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSniper/SniperAITree.SniperAITree 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSlave/SlaveAITree.SlaveAITree 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Sniper/SniperShoot.SniperShoot 
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
		{179, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
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
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Alarm/ScannerMaterial.ScannerMaterial 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Enemies/Expose_Trans_Clean_MAT_Inst.Expose_Trans_Clean_MAT_Inst 
		{594, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{572, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{573, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{574, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{609, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_It.Gamepad_It 
		{579, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Es.Gamepad_Es 
		{580, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Pt.Gamepad_Pt 
		{581, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Ru.Gamepad_Ru 
		{582, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Zh.Gamepad_Zh 
		{583, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_Ca.Gamepad_Ca 
		{412, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask4.T_Mask4 
		{413, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/2K_Masks/T_Mask7.T_Mask7 
		{414, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_GradientFog.M_GradientFog 
		{415, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ColorIndexer.M_ColorIndexer 
		{416, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Dither.M_Dither 
		{209, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Weapons/Sniper/SniperSM.SniperSM 
		{210, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder 
		{224, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/DyingBack_Robot.DyingBack_Robot 
		{225, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_DieB.Anim_DieB 
		{226, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/DyingBack_PostApoc.DyingBack_PostApoc 
		{227, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Knocked_Down_Short.Knocked_Down_Short 
		{228, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Blood/SplatterRed_PS.SplatterRed_PS 
		{229, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Blood/SplattersRed_Decal_M.SplattersRed_Decal_M 
		{245, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Transparent/Transparent_MATInst.Transparent_MATInst 
		{246, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/ShotgunShoot1.ShotgunShoot1 
		{247, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/KnifeSound1.KnifeSound1 
		{248, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/SniperShoot1.SniperShoot1 
		{257, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{258, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend 
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
		{338, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/LevelsMusic/WorldMap/WorldMapMusic.WorldMapMusic 
		{341, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/CyberGirl/Character/Meshes/SK_CyberGirl.SK_CyberGirl 
		{342, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_Cutepose_WorldMap.Anim_Cutepose_WorldMap 
		{343, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /NorthernFront/Sound/EnteringLevel_DemonSound02.EnteringLevel_DemonSound02 
		{344, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/Victory_Robot.Victory_Robot 
		{345, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_Pose03.A_Pose03 
		{346, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/Victory_Idle_Anim_PostApoc.Victory_Idle_Anim_PostApoc 
		{348, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Post_Apoca_Character/Material/M_Post_Apocal.M_Post_Apocal 
		{349, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Apocalypse_Girl/Materials/M_Apocalypse_Girl.M_Apocalypse_Girl 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/MousePlayerController.MousePlayerController_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MousePlayerController_C /Game/ThirdPersonBP/Blueprints/MousePlayerController.Default__MousePlayerController_C 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/Mouse/Mira.Mira 
		{547, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{570, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Default.BK_Default 
		{556, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level3.BK_Level3 
		{557, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level6.BK_Level6 
		{558, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level8.BK_Level8 
		{559, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level12.BK_Level12 
		{560, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Endgame.BK_Endgame 
		{533, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.PointerEvent 
		{571, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_01.Tip_01 
		{561, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_02.Tip_02 
		{562, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_03.Tip_03 
		{563, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_04.Tip_04 
		{564, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_05.Tip_05 
		{565, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_06.Tip_06 
		{566, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_07.Tip_07 
		{567, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_08.Tip_08 
		{568, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_09.Tip_09 
		{569, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_10.Tip_10 
		{537, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_11.Tip_11 
		{538, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Tip_12.Tip_12 
		{587, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ruFlag.ruFlag 
		{588, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ZhFlag.ZhFlag 
		{589, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/esFlag.esFlag 
		{590, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/PtFlag.PtFlag 
		{591, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/caFlag.caFlag 
		{592, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/FrFlag.FrFlag 
		{593, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetInternationalizationLibrary 
		{585, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/ItaFlag.ItaFlag 
		{586, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Flags/EnglishFlag.EnglishFlag 
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
		{534, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/TwLogo.TwLogo 
		{535, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/TwSeleccionado.TwSeleccionado 
		{536, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/TwPressed.TwPressed 
		{539, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/Apocalypse_Font.Apocalypse_Font 
		{540, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/RifleLogo.RifleLogo 
		{541, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/PowerUpCooldown.PowerUpCooldown 
		{542, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/PowerUpReady.PowerUpReady 
		{543, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/RightMousePress.RightMousePress 
		{544, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/R_Bumper.R_Bumper 
		{545, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/GodModeIcon.GodModeIcon 
		{546, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{548, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/ShotgunLogo.ShotgunLogo 
		{549, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/KnifeLogo.KnifeLogo 
		{550, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/SniperLogo.SniperLogo 
		{551, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/RPGLogo.RPGLogo 
		{552, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/AShotgunLogo.AShotgunLogo 
		{553, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.BackgroundBlur 
		{554, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{555, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScaleBox 
		{614, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Bottom.Gamepad_Stick_Bottom 
		{615, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_L_Stick_Top.Gamepad_L_Stick_Top 
		{616, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{608, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/ControlsGamepad/Gamepad_En.Gamepad_En 
		{458, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_Black.T_Black 
		{617, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/VFX_Toolkit_V1/Textures/Sprites/T_thundaraPanDot_01.T_thundaraPanDot_01 
		{605, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls.Controls 
		{606, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ita.Controls_Ita 
		{607, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Es.Controls_Es 
		{575, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Pt.Controls_Pt 
		{576, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ru.Controls_Ru 
		{577, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Zh.Controls_Zh 
		{578, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/ControlsAndTIps/Controls_Ca.Controls_Ca 
		{584, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{610, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODBus /Game/FMOD/Buses/Master/SFXAudio.SFXAudio 
		{611, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODBus /Game/FMOD/Buses/Master/MusicAudio.MusicAudio 
		{612, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.EUINavigation 
		{613, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{407, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_LensDistortion.M_LensDistortion 
		{408, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_ScopePlaceholder.T_ScopePlaceholder 
		{409, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Zone.M_Zone 
		{410, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Pyramid.M_Pyramid 
		{411, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Mojo.M_Mojo 
		{621, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/TitleRectangle.TitleRectangle 
		{622, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/TitleSquare.TitleSquare 
		{623, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Arrow.Arrow 
		{624, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.SizeBox 
		{449, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Wired.M_Wired 
		{450, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ActorFeaturette.M_ActorFeaturette 
		{451, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Infected.M_Infected 
		{452, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_CameraShake.M_CameraShake 
		{453, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_ColoredAO.M_ColoredAO 
		{454, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_DiscoBall.M_DiscoBall 
		{455, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_HazyLights.M_HazyLights 
		{456, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_MeltedWorld.M_MeltedWorld 
		{457, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_SelectiveColor.M_SelectiveColor 
		{459, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Chameleon/Textures/T_Organic03.T_Organic03 
		{406, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_GridCell.M_GridCell 
		{618, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/CyberGirl/Character/Meshes/SKL_CyberGirl.SKL_CyberGirl 
		{619, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_BattleSprint.A_BattleSprint 
		{620, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/CyberGirl/Character/Animations/A_BattleIdle.A_BattleIdle 
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
		{442, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Letterboxing.M_Letterboxing 
		{443, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Snow.M_Snow 
		{444, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_WorldSplash.M_WorldSplash 
		{445, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_WorldGlitch.M_WorldGlitch 
		{446, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Digitize.M_Digitize 
		{447, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Alarm.M_Alarm 
		{448, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Chameleon/Materials/M_Sketch.M_Sketch 
		{625, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIPerceptionComponent 
		{626, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AISense_Sight 
		{627, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AISense_Hearing 
		{632, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/AnimalVarietyPack/Wolf/Meshes/SK_Wolf_Skeleton.SK_Wolf_Skeleton 
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
		{532, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/FondoReply.FondoReply 
		{419, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Post_Apoca_Character/Mesh/SK_Mask.SK_Mask 
		{737, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/CyberGirl/Character/Meshes/CyberWalkMap_AnimBP.CyberWalkMap_AnimBP_C 
		{696, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraActor.CameraActor_C 
		{666, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Conversations/Actors/Conversation_Actor.Conversation_Actor_C 
		{677, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/SaveGame/SaveGameBP.SaveGameBP_C 
		{657, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/MyGameInstance/MyGameInstance.MyGameInstance_C 
		{654, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/DieAgainGamemode.DieAgainGamemode_C 
		{707, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/PauseHUD.PauseHUD_C 
		{663, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/GamepadInteraction.GamepadInteraction_C 
		{662, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Conversations/MyDialogueWidget.MyDialogueWidget_C 
		{734, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/WorldMapAnim/WorldMapPlayerAnimBP.WorldMapPlayerAnimBP_C 
		{738, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Hara/Hara_Anim/WalkMap/Demon_WalkMap_AnimBP.Demon_WalkMap_AnimBP_C 
		{739, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/WorldMapAnim/WalkMapAltPlayerAnimBP.WalkMapAltPlayerAnimBP_C 
		{736, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/WorldMapAnim/AnimBP_RobotPlayer.AnimBP_RobotPlayer_C 
		{740, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Art/Enemies/Lobby_Animations/PlayerWalk_SteinerAnimBP.PlayerWalk_SteinerAnimBP_C 
		{741, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Enemies/EnumLobbyMusic.EnumLobbyMusic 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__APlayerWalkMap_Character_C__pf2222656877
{
	FRegisterHelper__APlayerWalkMap_Character_C__pf2222656877()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ThirdPersonBP/Blueprints/PlayerWalkMap_Character"), &APlayerWalkMap_Character_C__pf2222656877::__StaticDependenciesAssets);
	}
	static FRegisterHelper__APlayerWalkMap_Character_C__pf2222656877 Instance;
};
FRegisterHelper__APlayerWalkMap_Character_C__pf2222656877 FRegisterHelper__APlayerWalkMap_Character_C__pf2222656877::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
