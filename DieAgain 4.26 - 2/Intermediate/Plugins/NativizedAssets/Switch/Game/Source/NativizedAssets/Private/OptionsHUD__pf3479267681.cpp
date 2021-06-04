#include "NativizedAssets.h"
#include "OptionsHUD__pf3479267681.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
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
#include "Runtime/Engine/Classes/Materials/Material.h"
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
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
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
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
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
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
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
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
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
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "DieAgainGamemode__pf1010915279.h"
#include "SaveGameBP__pf4030252459.h"
#include "MyGameInstance__pf2410127383.h"
#include "GraphicSettingsHUD__pf1481852004.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Volume_WB__pf3479267681.h"
#include "PreControlsHUD__pf3479267681.h"
#include "PauseHUD__pf197907997.h"
#include "MainMenu_WB__pf1565531276.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/DialogueUserWidget.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/Dialogue.h"
#include "TipsHUD__pf3479267681.h"
#include "EnemyShootingCh__pf3349424045.h"
#include "ThirdPersonCharacter__pf2222656877.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteAtlas.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UOptionsHUD_C__pf3479267681::UOptionsHUD_C__pf3479267681(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__Area_Button__pf = nullptr;
	bpv__Audio_Button__pf = nullptr;
	bpv__Controls_Button__pf = nullptr;
	bpv__Exit_Button__pf = nullptr;
	bpv__Graphics_Buttons__pf = nullptr;
	bpv__TextBlock__pf = nullptr;
	bpv__TextAreaVisible__pf = FText::GetEmpty();
	bpv__ItsComingFromMainMenu__pf = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOptionsHUD_C__pf3479267681::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UOptionsHUD_C__pf3479267681::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(USaveGameBP_C__pf4030252459::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMyGameInstance_C__pf2410127383::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGraphicSettingsHUD_C__pf1481852004::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UVolume_WB_C__pf3479267681::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPreControlsHUD_C__pf3479267681::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPauseHUD_C__pf197907997::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMainMenu_WB_C__pf1565531276::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGamepadInteraction_C__pf197907997::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UTipsHUD_C__pf3479267681::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AEnemyShootingCh_C__pf3349424045::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AThirdPersonCharacter_C__pf2222656877::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(5);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 5);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Area_Button"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Area_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Graphics_Buttons"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__OptionsHUD_Voice_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Controls_Button"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Audio_Button"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Voice_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Exit_Button"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Exit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(6);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_16"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Left = -308.960938f;
	__Local__9->LayoutData.Offsets.Top = 43.459473f;
	__Local__9->LayoutData.Offsets.Right = 600.000000f;
	__Local__9->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__9->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UButton>(__Local__1, TEXT("Controls_Button"), (EObjectFlags)0x00280008);
	__Local__10->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__11 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__10->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__11 = FLinearColor(0.000000, 0.000000, 1.000000, 1.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<UObject* >(&(__Local__10->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__12 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__10->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<UObject* >(&(__Local__10->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__13 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__10->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__14 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__10->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__14 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<UObject* >(&(__Local__10->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__15 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(1);
	auto __Local__17 = NewObject<UButtonSlot>(__Local__10, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__17->Parent = __Local__10;
	auto __Local__18 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_105"), (EObjectFlags)0x00280008);
	__Local__18->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"A57B5DC84E5073D3AAC99688520C9039\", \"Controls\")")	);
	auto& __Local__19 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__18->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__19 = FLinearColor(1.000000, 1.000000, 1.000000, 2.000000);
	__Local__18->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__18->Font.OutlineSettings.OutlineSize = 5;
	__Local__18->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__18->Font.Size = 40;
	auto& __Local__20 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__18), UTextLayoutWidget::__PPO__Justification() )));
	__Local__20 = ETextJustify::Type::Center;
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Left = -300.960938f;
	__Local__21->LayoutData.Offsets.Top = 335.459473f;
	__Local__21->LayoutData.Offsets.Right = 600.000000f;
	__Local__21->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__21->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__21->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__21->Parent = __Local__7;
	auto __Local__22 = NewObject<UButton>(__Local__1, TEXT("Exit_Button"), (EObjectFlags)0x00280008);
	__Local__22->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__23 = FLinearColor(0.000000, 0.000000, 1.000000, 1.000000);
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__25 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__27 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__27 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(1);
	auto __Local__29 = NewObject<UButtonSlot>(__Local__22, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__29->Parent = __Local__22;
	auto __Local__30 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_3"), (EObjectFlags)0x00280008);
	__Local__30->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"609E666B47D9BAE24C3E15B928F3FC1F\", \"Go  back\")")	);
	auto& __Local__31 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__30->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__31 = FLinearColor(1.000000, 1.000000, 1.000000, 2.000000);
	__Local__30->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__30->Font.OutlineSettings.OutlineSize = 5;
	__Local__30->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__30->Font.Size = 40;
	auto& __Local__32 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__30), UTextLayoutWidget::__PPO__Justification() )));
	__Local__32 = ETextJustify::Type::Center;
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__8.Add(__Local__21);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_17"), (EObjectFlags)0x00280008);
	__Local__33->LayoutData.Offsets.Left = -300.960938f;
	__Local__33->LayoutData.Offsets.Top = 191.459473f;
	__Local__33->LayoutData.Offsets.Right = 600.000000f;
	__Local__33->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__33->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__33->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__33->Parent = __Local__7;
	auto __Local__34 = NewObject<UButton>(__Local__1, TEXT("Area_Button"), (EObjectFlags)0x00280008);
	__Local__34->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__34->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__35 = FLinearColor(0.000000, 0.000000, 1.000000, 1.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__36 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__34->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__34->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__34->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__39 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(1);
	auto __Local__41 = NewObject<UButtonSlot>(__Local__34, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__41->Parent = __Local__34;
	auto __Local__42 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__42->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"CC49A2DD44E457B21124EAA9A4DF4E63\", \"Area Visible ON\")")	);
	auto& __Local__43 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__42->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__43 = FLinearColor(1.000000, 1.000000, 1.000000, 2.000000);
	__Local__42->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__42->Font.OutlineSettings.OutlineSize = 5;
	__Local__42->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__42->Font.Size = 40;
	auto& __Local__44 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__42), UTextLayoutWidget::__PPO__Justification() )));
	__Local__44 = ETextJustify::Type::Center;
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__8.Add(__Local__33);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__45->LayoutData.Offsets.Left = -140.960938f;
	__Local__45->LayoutData.Offsets.Top = 92.000000f;
	__Local__45->LayoutData.Offsets.Right = 269.057922f;
	__Local__45->LayoutData.Offsets.Bottom = 96.733406f;
	__Local__45->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__45->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__45->Parent = __Local__7;
	auto __Local__46 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_65"), (EObjectFlags)0x00280008);
	__Local__46->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"2ECDE373402EF5F2A9E9D9940055A1C8\", \"Options\")")	);
	__Local__46->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__46->Font.OutlineSettings.OutlineSize = 5;
	__Local__46->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__46->Font.Size = 60;
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__8.Add(__Local__45);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__47->LayoutData.Offsets.Left = -308.960938f;
	__Local__47->LayoutData.Offsets.Top = -264.540527f;
	__Local__47->LayoutData.Offsets.Right = 600.000000f;
	__Local__47->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__47->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__47->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__47->Parent = __Local__7;
	auto __Local__48 = NewObject<UButton>(__Local__1, TEXT("Audio_Button"), (EObjectFlags)0x00280008);
	__Local__48->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__48->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__49 = FLinearColor(0.000000, 0.000000, 1.000000, 1.000000);
	auto& __Local__50 = (*(AccessPrivateProperty<UObject* >(&(__Local__48->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__50 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__48->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__51 = (*(AccessPrivateProperty<UObject* >(&(__Local__48->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__51 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__48->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__52 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__48->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__52 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__53 = (*(AccessPrivateProperty<UObject* >(&(__Local__48->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__53 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__48), UPanelWidget::__PPO__Slots() )));
	__Local__54 = TArray<UPanelSlot*> ();
	__Local__54.Reserve(1);
	auto __Local__55 = NewObject<UButtonSlot>(__Local__48, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__55->Parent = __Local__48;
	auto __Local__56 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__56->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"25354F92474376E21A61C391C3CC63A4\", \"Audio options\")")	);
	auto& __Local__57 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__57 = FLinearColor(1.000000, 1.000000, 1.000000, 2.000000);
	__Local__56->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__56->Font.OutlineSettings.OutlineSize = 5;
	__Local__56->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__56->Font.Size = 40;
	auto& __Local__58 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__56), UTextLayoutWidget::__PPO__Justification() )));
	__Local__58 = ETextJustify::Type::Center;
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__54.Add(__Local__55);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__8.Add(__Local__47);
	auto __Local__59 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__59->LayoutData.Offsets.Left = -300.960938f;
	__Local__59->LayoutData.Offsets.Top = -108.540527f;
	__Local__59->LayoutData.Offsets.Right = 600.000000f;
	__Local__59->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__59->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__59->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__59->Parent = __Local__7;
	auto __Local__60 = NewObject<UButton>(__Local__1, TEXT("Graphics_Buttons"), (EObjectFlags)0x00280008);
	__Local__60->WidgetStyle.Normal.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__60->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.000000, 0.000000, 1.000000, 1.000000);
	auto& __Local__62 = (*(AccessPrivateProperty<UObject* >(&(__Local__60->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__62 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__60->WidgetStyle.Hovered.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__63 = (*(AccessPrivateProperty<UObject* >(&(__Local__60->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__63 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__60->WidgetStyle.Pressed.ImageSize = FVector2D(809.000000, 207.000000);
	auto& __Local__64 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__60->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__64 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__65 = (*(AccessPrivateProperty<UObject* >(&(__Local__60->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__65 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__66 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__66 = TArray<UPanelSlot*> ();
	__Local__66.Reserve(1);
	auto __Local__67 = NewObject<UButtonSlot>(__Local__60, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__67->Parent = __Local__60;
	auto __Local__68 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__68->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"CE0AD7D14925B82077097DB5A0830B48\", \"Graphic Settings\")")	);
	auto& __Local__69 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__68->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__69 = FLinearColor(1.000000, 1.000000, 1.000000, 2.000000);
	__Local__68->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__68->Font.OutlineSettings.OutlineSize = 5;
	__Local__68->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__68->Font.Size = 40;
	auto& __Local__70 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__68), UTextLayoutWidget::__PPO__Justification() )));
	__Local__70 = ETextJustify::Type::Center;
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__66.Add(__Local__67);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__8.Add(__Local__59);
	__Local__1->RootWidget = __Local__7;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOptionsHUD_C__pf3479267681::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__71;
	SlotNames.Append(__Local__71);
}
void UOptionsHUD_C__pf3479267681::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__72;
	TArray<FDelegateRuntimeBinding>  __Local__73;
	__Local__73.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__73.GetData(), 1);
	auto& __Local__74 = __Local__73[0];
	__Local__74.ObjectName = FString(TEXT("TextBlock"));
	__Local__74.PropertyName = FName(TEXT("Text"));
	__Local__74.FunctionName = FName(TEXT("GetText_4"));
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__74.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__75 = TArray<FPropertyPathSegment> ();
	__Local__75.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__75.GetData(), 1);
	auto& __Local__76 = __Local__75[0];
	__Local__76.Name = FName(TEXT("GetText_4"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->MiscConvertedSubobjects[0]), __Local__72, __Local__73);
}
void UOptionsHUD_C__pf3479267681::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UOptionsHUD_C__pf3479267681::bpf__ExecuteUbergraph_OptionsHUD__pf_0(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue_2__pf{};
	UVolume_WB_C__pf3479267681* bpfv__CallFunc_Create_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 18);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	bpfv__CallFunc_Create_ReturnValue_1__pf = CastChecked<UVolume_WB_C__pf3479267681>(UWidgetBlueprintLibrary::Create(this, UVolume_WB_C__pf3479267681::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	bpfv__CallFunc_GetGameMode_ReturnValue_2__pf = UGameplayStatics::GetGameMode(this);
	b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue_2__pf);
	b1l__K2Node_DynamicCast_bSuccess_4__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_4__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf))
	{
		b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf->bpf__ResetWidget__pf(bpfv__CallFunc_Create_ReturnValue_1__pf);
	}
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue_1__pf))
	{
		bpfv__CallFunc_Create_ReturnValue_1__pf->UUserWidget::AddToViewport(0);
	}
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue_1__pf))
	{
		bpfv__CallFunc_Create_ReturnValue_1__pf->bpv__ItsComingFromMainMenu__pf = bpv__ItsComingFromMainMenu__pf;
	}
	return; // KCST_GotoReturn
}
void UOptionsHUD_C__pf3479267681::bpf__ExecuteUbergraph_OptionsHUD__pf_1(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue_1__pf{};
	UPreControlsHUD_C__pf3479267681* bpfv__CallFunc_Create_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	bpfv__CallFunc_Create_ReturnValue_2__pf = CastChecked<UPreControlsHUD_C__pf3479267681>(UWidgetBlueprintLibrary::Create(this, UPreControlsHUD_C__pf3479267681::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	bpfv__CallFunc_GetGameMode_ReturnValue_1__pf = UGameplayStatics::GetGameMode(this);
	b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue_1__pf);
	b1l__K2Node_DynamicCast_bSuccess_3__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_3__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf))
	{
		b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf->bpf__ResetWidget__pf(bpfv__CallFunc_Create_ReturnValue_2__pf);
	}
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue_2__pf))
	{
		bpfv__CallFunc_Create_ReturnValue_2__pf->UUserWidget::AddToViewport(0);
	}
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue_2__pf))
	{
		bpfv__CallFunc_Create_ReturnValue_2__pf->bpv__ItsComingFromMainMenu__pf = bpv__ItsComingFromMainMenu__pf;
	}
	return; // KCST_GotoReturn
}
void UOptionsHUD_C__pf3479267681::bpf__ExecuteUbergraph_OptionsHUD__pf_2(int32 bpp__EntryPoint__pf)
{
	UGraphicSettingsHUD_C__pf1481852004* bpfv__CallFunc_Create_ReturnValue__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 50);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UGraphicSettingsHUD_C__pf1481852004>(UWidgetBlueprintLibrary::Create(this, UGraphicSettingsHUD_C__pf1481852004::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	bpfv__CallFunc_GetGameMode_ReturnValue_3__pf = UGameplayStatics::GetGameMode(this);
	b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_3__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue_3__pf);
	b1l__K2Node_DynamicCast_bSuccess_6__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_3__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_6__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_3__pf))
	{
		b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_3__pf->bpf__ResetWidget__pf(bpfv__CallFunc_Create_ReturnValue__pf);
	}
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
	}
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->bpv__ItsComingFromMainMenu__pf = bpv__ItsComingFromMainMenu__pf;
	}
	return; // KCST_GotoReturn
}
void UOptionsHUD_C__pf3479267681::bpf__ExecuteUbergraph_OptionsHUD__pf_3(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UPauseHUD_C__pf197907997* bpfv__CallFunc_Create_ReturnValue_3__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue_4__pf{};
	UMainMenu_WB_C__pf1565531276* bpfv__CallFunc_Create_ReturnValue_4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
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
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_2__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_2__pf)
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
				b1l__K2Node_DynamicCast_AsSave_Game_BP__pf = Cast<USaveGameBP_C__pf4030252459>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess_1__pf = (b1l__K2Node_DynamicCast_AsSave_Game_BP__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				bool  __Local__77 = false;
				if(::IsValid(b1l__K2Node_DynamicCast_AsSave_Game_BP__pf))
				{
					b1l__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__IsAreaVisible__pf = ((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__AreaVisible__pf) : (__Local__77));
				}
			}
		case 6:
			{
				if (!bpv__ItsComingFromMainMenu__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 7:
			{
				RemoveFromParent();
			}
		case 8:
			{
				bpfv__CallFunc_Create_ReturnValue_4__pf = CastChecked<UMainMenu_WB_C__pf1565531276>(UWidgetBlueprintLibrary::Create(this, UMainMenu_WB_C__pf1565531276::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 9:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue_4__pf = UGameplayStatics::GetGameMode(this);
				b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_4__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue_4__pf);
				b1l__K2Node_DynamicCast_bSuccess_7__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_4__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_4__pf))
				{
					b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_4__pf->bpf__ResetWidget__pf(bpfv__CallFunc_Create_ReturnValue_4__pf);
				}
			}
		case 11:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue_4__pf))
				{
					bpfv__CallFunc_Create_ReturnValue_4__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				RemoveFromParent();
			}
		case 13:
			{
				bpfv__CallFunc_Create_ReturnValue_3__pf = CastChecked<UPauseHUD_C__pf197907997>(UWidgetBlueprintLibrary::Create(this, UPauseHUD_C__pf197907997::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 14:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf = Cast<ADieAgainGamemode_C__pf1010915279>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf))
				{
					b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf->bpf__ResetWidget__pf(bpfv__CallFunc_Create_ReturnValue_3__pf);
				}
			}
		case 16:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue_3__pf))
				{
					bpfv__CallFunc_Create_ReturnValue_3__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptionsHUD_C__pf3479267681::bpf__ExecuteUbergraph_OptionsHUD__pf_4(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 45:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf = Cast<UMyGameInstance_C__pf2410127383>(bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf);
				b1l__K2Node_DynamicCast_bSuccess_5__pf = (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 46:
			{
				bool  __Local__78 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__AreaVisible__pf) : (__Local__78)))
				{
					__CurrentState = 49;
					break;
				}
			}
		case 47:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__AreaVisible__pf = false;
				}
			}
		case 48:
			{
				bool  __Local__79 = false;
				bpf__SetVisibilityPlayerArea__pf(((::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf)) ? (b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__AreaVisible__pf) : (__Local__79)));
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf))
				{
					b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf->bpv__AreaVisible__pf = true;
				}
				__CurrentState = 48;
				break;
			}
		case 52:
			{
				__CurrentState = 45;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptionsHUD_C__pf3479267681::bpf__ExecuteUbergraph_OptionsHUD__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	USaveGameBP_C__pf4030252459* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 17:
			{
				Super::bpf__Construct__pf();
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				b1l__K2Node_MakeArray_Array__pf.SetNum(4, true);
				b1l__K2Node_MakeArray_Array__pf[0] = bpv__Controls_Button__pf;
				b1l__K2Node_MakeArray_Array__pf[1] = bpv__Area_Button__pf;
				b1l__K2Node_MakeArray_Array__pf[2] = bpv__Exit_Button__pf;
				b1l__K2Node_MakeArray_Array__pf[3] = bpv__Audio_Button__pf;
				bpv__Buttons__pf = b1l__K2Node_MakeArray_Array__pf;
			}
		case 36:
			{
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("Save_File")), 0);
			}
		case 37:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 38;
					break;
				}
				__CurrentState = 17;
				break;
			}
		case 38:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<USaveGameBP_C__pf4030252459>(UGameplayStatics::CreateSaveGameObject(USaveGameBP_C__pf4030252459::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 39:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf, FString(TEXT("Save_File")), 0);
				__CurrentState = 17;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptionsHUD_C__pf3479267681::bpf__ExecuteUbergraph_OptionsHUD__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	Super::bpf__Tick__pf(b1l__K2Node_Event_MyGeometry__pf, b1l__K2Node_Event_InDeltaTime__pf);
	return; // KCST_GotoReturn
}
void UOptionsHUD_C__pf3479267681::bpf__BndEvt__OptionsHUD_Voice_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsHUD__pf_2(50);
}
void UOptionsHUD_C__pf3479267681::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_OptionsHUD__pf_5(34);
}
void UOptionsHUD_C__pf3479267681::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b1l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b1l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_OptionsHUD__pf_6(32);
}
void UOptionsHUD_C__pf3479267681::bpf__BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsHUD__pf_1(25);
}
void UOptionsHUD_C__pf3479267681::bpf__BndEvt__Voice_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsHUD__pf_0(18);
}
void UOptionsHUD_C__pf3479267681::bpf__BndEvt__Exit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsHUD__pf_3(1);
}
void UOptionsHUD_C__pf3479267681::bpf__BndEvt__Area_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_OptionsHUD__pf_4(52);
}
FText  UOptionsHUD_C__pf3479267681::bpf__GetText_AreaVisible__pf()
{
	FText bpp__ReturnValue__pf{};
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
				bool  __Local__80 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__AreaVisible__pf) : (__Local__80)))
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpv__TextAreaVisible__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"493D41554613D0005AADDC988531B450\", \" AREA VISIBLE ON\")")	);
			}
		case 4:
			{
				bpp__ReturnValue__pf = bpv__TextAreaVisible__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpv__TextAreaVisible__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"9BA7999449E138BCC4DF2998EAC8B89D\", \"AREA VISIBLE OFF\")")	);
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UOptionsHUD_C__pf3479267681::bpf__SetVisibilityPlayerArea__pf(bool bpp__Visibility__pf)
{
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	TArray<AEnemyShootingCh_C__pf3349424045*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	AEnemyShootingCh_C__pf3349424045* bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	TArray<AThirdPersonCharacter_C__pf2222656877*> bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__CallFunc_Array_Get_Item_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	AThirdPersonCharacter_C__pf2222656877* bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AThirdPersonCharacter_C__pf2222656877::StaticClass(), /*out*/ TArrayCaster<AThirdPersonCharacter_C__pf2222656877*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(20);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors_1__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf = Cast<AThirdPersonCharacter_C__pf2222656877>(bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf))
				{
					bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf = bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->IsPlayerControlled();
				}
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__PaperSprite__pf))
				{
					bpfv__K2Node_DynamicCast_AsThird_Person_Character__pf->bpv__PaperSprite__pf->USceneComponent::SetVisibility(bpp__Visibility__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AEnemyShootingCh_C__pf3349424045::StaticClass(), /*out*/ TArrayCaster<AEnemyShootingCh_C__pf3349424045*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 11:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 12:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 15:
			{
				__StateStack.Push(19);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf = Cast<AEnemyShootingCh_C__pf3349424045>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf))
				{
					bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->IsPlayerControlled();
				}
				if (!bpfv__CallFunc_IsPlayerControlled_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__PaperSprite__pf))
				{
					bpfv__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf->bpv__PaperSprite__pf->USceneComponent::SetVisibility(bpp__Visibility__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 13;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptionsHUD_C__pf3479267681::bpf__GetText_0__pf()
{
	FText bpfv__TextControlsTips__pf{};
}
void UOptionsHUD_C__pf3479267681::bpf__GetText_1__pf()
{
	FText bpfv__TextControls__pf{};
}
void UOptionsHUD_C__pf3479267681::bpf__GetText_2__pf()
{
	FText bpfv__TextTips__pf{};
}
void UOptionsHUD_C__pf3479267681::bpf__GetText_3__pf()
{
	FText bpfv__TextGoBack__pf{};
}
FEventReply  UOptionsHUD_C__pf3479267681::bpf__OnMouseButtonDown_0__pf(FGeometry bpp__MyGeometry__pf, FPointerEvent const& bpp__MouseEvent__pf__const)
{
	typedef FPointerEvent  T__Local__81;
	T__Local__81& bpp__MouseEvent__pf = *const_cast<T__Local__81 *>(&bpp__MouseEvent__pf__const);
	FEventReply bpp__ReturnValue__pf{};
	FEventReply bpfv__K2Node_MakeStruct_EventReply__pf{};
	UTipsHUD_C__pf3479267681* bpfv__CallFunc_Create_ReturnValue__pf{};
	RemoveFromParent();
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UTipsHUD_C__pf3479267681>(UWidgetBlueprintLibrary::Create(this, UTipsHUD_C__pf3479267681::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
	}
	bpp__ReturnValue__pf = bpfv__K2Node_MakeStruct_EventReply__pf;
	return bpp__ReturnValue__pf;
}
FText  UOptionsHUD_C__pf3479267681::bpf__GetText_4__pf()
{
	FText bpp__ReturnValue__pf{};
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
				bool  __Local__82 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__AreaVisible__pf) : (__Local__82)))
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpv__TextAreaVisible__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"493D41554613D0005AADDC988531B450\", \" AREA VISIBLE ON\")")	);
			}
		case 4:
			{
				bpp__ReturnValue__pf = bpv__TextAreaVisible__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpv__TextAreaVisible__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"9BA7999449E138BCC4DF2998EAC8B89D\", \"AREA VISIBLE OFF\")")	);
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UOptionsHUD_C__pf3479267681::bpf__GetText_5__pf()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__TextVoiceActing__pf{};
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
				bool  __Local__83 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf)) ? (bpfv__K2Node_DynamicCast_AsMy_Game_Instance__pf->bpv__IsVoiceActive__pf) : (__Local__83)))
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__TextVoiceActing__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"9CA792904C921A6AF10340A2EBF3D981\", \"VOICE ACTING ON\")")	);
			}
		case 4:
			{
				bpp__ReturnValue__pf = bpfv__TextVoiceActing__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__TextVoiceActing__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E4C3CE404F58263399897DA10D7C31E7]\", \"9C420789433A790BB8CE18A916535317\", \"VOICE ACTING OFF\")")	);
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UOptionsHUD_C__pf3479267681::bpf__GetVisibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	ESlateVisibility bpfv__IsVisibleImage__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__IsVisibleImage__pf = ESlateVisibility::Visible;
			}
		case 2:
			{
				if (!bpv__ItsComingFromMainMenu__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__IsVisibleImage__pf = ESlateVisibility::Visible;
			}
		case 4:
			{
				bpp__ReturnValue__pf = bpfv__IsVisibleImage__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__IsVisibleImage__pf = ESlateVisibility::Hidden;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FSlateBrush  UOptionsHUD_C__pf3479267681::bpf__GetBrush_0__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	FSlateBrush bpfv__Endgame_Slate__pf{};
	FSlateBrush bpfv__LV12_Slate__pf{};
	FSlateBrush bpfv__LV8_Slate__pf{};
	FSlateBrush bpfv__LV6_Slate__pf{};
	FSlateBrush bpfv__LV3_Slate__pf{};
	FSlateBrush bpfv__Default_Slate__pf{};
	FSlateBrush bpfv__FinalSlate__pf{};
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
				const UScriptStruct* __Local__85 = FSlateBrush::StaticStruct();
				uint8* __Local__86 = (uint8*)FMemory_Alloca(__Local__85->GetStructureSize());
				__Local__85->InitializeStruct(__Local__86);
				FSlateBrush& __Local__84 = *reinterpret_cast<FSlateBrush*>(__Local__86);
				__Local__84.ImageSize = FVector2D(1920.000000, 1080.000000);
				auto& __Local__87 = (*(AccessPrivateProperty<UObject* >(&(__Local__84), FSlateBrush::__PPO__ResourceObject() )));
				__Local__87 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				bpfv__FinalSlate__pf = __Local__84;
			}
		case 2:
			{
				const UScriptStruct* __Local__89 = FSlateBrush::StaticStruct();
				uint8* __Local__90 = (uint8*)FMemory_Alloca(__Local__89->GetStructureSize());
				__Local__89->InitializeStruct(__Local__90);
				FSlateBrush& __Local__88 = *reinterpret_cast<FSlateBrush*>(__Local__90);
				__Local__88.ImageSize = FVector2D(1920.000000, 1080.000000);
				auto& __Local__91 = (*(AccessPrivateProperty<UObject* >(&(__Local__88), FSlateBrush::__PPO__ResourceObject() )));
				__Local__91 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				bpfv__Default_Slate__pf = __Local__88;
			}
		case 3:
			{
				const UScriptStruct* __Local__93 = FSlateBrush::StaticStruct();
				uint8* __Local__94 = (uint8*)FMemory_Alloca(__Local__93->GetStructureSize());
				__Local__93->InitializeStruct(__Local__94);
				FSlateBrush& __Local__92 = *reinterpret_cast<FSlateBrush*>(__Local__94);
				__Local__92.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__95 = (*(AccessPrivateProperty<UObject* >(&(__Local__92), FSlateBrush::__PPO__ResourceObject() )));
				__Local__95 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
				bpfv__LV3_Slate__pf = __Local__92;
			}
		case 4:
			{
				const UScriptStruct* __Local__97 = FSlateBrush::StaticStruct();
				uint8* __Local__98 = (uint8*)FMemory_Alloca(__Local__97->GetStructureSize());
				__Local__97->InitializeStruct(__Local__98);
				FSlateBrush& __Local__96 = *reinterpret_cast<FSlateBrush*>(__Local__98);
				__Local__96.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__99 = (*(AccessPrivateProperty<UObject* >(&(__Local__96), FSlateBrush::__PPO__ResourceObject() )));
				__Local__99 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
				bpfv__LV6_Slate__pf = __Local__96;
			}
		case 5:
			{
				const UScriptStruct* __Local__101 = FSlateBrush::StaticStruct();
				uint8* __Local__102 = (uint8*)FMemory_Alloca(__Local__101->GetStructureSize());
				__Local__101->InitializeStruct(__Local__102);
				FSlateBrush& __Local__100 = *reinterpret_cast<FSlateBrush*>(__Local__102);
				__Local__100.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__103 = (*(AccessPrivateProperty<UObject* >(&(__Local__100), FSlateBrush::__PPO__ResourceObject() )));
				__Local__103 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
				bpfv__LV8_Slate__pf = __Local__100;
			}
		case 6:
			{
				const UScriptStruct* __Local__105 = FSlateBrush::StaticStruct();
				uint8* __Local__106 = (uint8*)FMemory_Alloca(__Local__105->GetStructureSize());
				__Local__105->InitializeStruct(__Local__106);
				FSlateBrush& __Local__104 = *reinterpret_cast<FSlateBrush*>(__Local__106);
				__Local__104.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__107 = (*(AccessPrivateProperty<UObject* >(&(__Local__104), FSlateBrush::__PPO__ResourceObject() )));
				__Local__107 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				bpfv__LV12_Slate__pf = __Local__104;
			}
		case 7:
			{
				const UScriptStruct* __Local__109 = FSlateBrush::StaticStruct();
				uint8* __Local__110 = (uint8*)FMemory_Alloca(__Local__109->GetStructureSize());
				__Local__109->InitializeStruct(__Local__110);
				FSlateBrush& __Local__108 = *reinterpret_cast<FSlateBrush*>(__Local__110);
				__Local__108.ImageSize = FVector2D(3840.000000, 2080.000000);
				auto& __Local__111 = (*(AccessPrivateProperty<UObject* >(&(__Local__108), FSlateBrush::__PPO__ResourceObject() )));
				__Local__111 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptionsHUD_C__pf3479267681::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				bpfv__Endgame_Slate__pf = __Local__108;
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
				int32  __Local__112 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__112)), 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				int32  __Local__113 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__113)), 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				int32  __Local__114 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__114)), 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				int32  __Local__115 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__115)), 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				int32  __Local__116 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__116)), 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				int32  __Local__117 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__117)), 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				int32  __Local__118 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__118)), 6);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				int32  __Local__119 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__119)), 7);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				int32  __Local__120 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__120)), 8);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				int32  __Local__121 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__121)), 9);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				int32  __Local__122 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__122)), 10);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				int32  __Local__123 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__123)), 11);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				int32  __Local__124 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__124)), 12);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				int32  __Local__125 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__125)), 13);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 17;
					break;
				}
				int32  __Local__126 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__126)), 14);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				int32  __Local__127 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__127)), 15);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				int32  __Local__128 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__128)), 16);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				int32  __Local__129 = 0;
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Game_BP__pf->bpv__LevelsUnlocked_Save__pf) : (__Local__129)), 17);
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
PRAGMA_DISABLE_OPTIMIZATION
void UOptionsHUD_C__pf3479267681::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Button_Normal.Button_Normal 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/Button_Overlap.Button_Overlap 
		{207, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/28_Days_Later_Font.28_Days_Later_Font 
		{570, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Default.BK_Default 
		{556, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level3.BK_Level3 
		{557, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level6.BK_Level6 
		{558, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level8.BK_Level8 
		{559, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Level12.BK_Level12 
		{560, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Art/2D_Art/BK/BK_Endgame.BK_Endgame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UOptionsHUD_C__pf3479267681::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{663, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/GamepadInteraction.GamepadInteraction_C 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{208, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{547, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{400, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{330, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{533, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.PointerEvent 
		{402, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.EventReply 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperSpriteComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{404, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{209, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Weapons/Sniper/SniperSM.SniperSM 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_Vulcannon_Player.Par_Vulcannon_Player 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/VFX_Toolkit_V1/ParticleSystems/356Days/Par_MuzzleFlash1_01.Par_MuzzleFlash1_01 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_RattleSnake_Content/Meshes/Attachments/SM_RattleSnake_Scope_X6.SM_RattleSnake_Scope_X6 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_RattleSnake_Content/Meshes/Attachments/SM_RattleSnake_Silencer.SM_RattleSnake_Silencer 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Buttstock.SM_Buttstock 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Barrel_Cover.SM_Barrel_Cover 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/BLS_Shotgun/Meshes/Attachments/SM_Handguard_Type_1.SM_Handguard_Type_1 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/RedMaterial.RedMaterial 
		{210, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Circle/Circulo1_Mat.Circulo1_Mat 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpotLightComponent 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PointLightComponent 
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Post_Apoca_Character/Mesh/GasMask_StaticMesh.GasMask_StaticMesh 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/Art/Circle/Circulo3_Sprite.Circulo3_Sprite 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Hara/Meshes/SM_Hara_horn.SM_Hara_horn 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
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
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.ParticleCollisionSignature__DelegateSignature 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DecalComponent 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/FMODStudio.FMODEventInstance 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/Weapons/RPG/RPGNoAmmoStatic.RPGNoAmmoStatic 
		{223, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/NPCs/Steiner/Steiner.Steiner 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/FMODStudio.FMODBlueprintStatics 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/NoAmmo/NoAmmo.NoAmmo 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LocalLightComponent 
		{224, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/AnimRobot/DyingBack_Robot.DyingBack_Robot 
		{225, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Hara/Animations_wing/Anim_DieB.Anim_DieB 
		{226, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/DyingBack_PostApoc.DyingBack_PostApoc 
		{227, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Knocked_Down_Short.Knocked_Down_Short 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Blood/Splatters_Decal_M.Splatters_Decal_M 
		{228, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Blood/SplatterRed_PS.SplatterRed_PS 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Blood/Splatter_PS.Splatter_PS 
		{229, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Blood/SplattersRed_Decal_M.SplattersRed_Decal_M 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.ParticleSysParam 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EParticleSysParamType 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
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
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Art/GasMask/GasMask.GasMask 
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
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Rifle/RifleShoot.RifleShoot 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShootNoBump1.ShotgunShootNoBump1 
		{246, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/ShotgunShoot1.ShotgunShoot1 
		{247, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/KnifeSound1.KnifeSound1 
		{248, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Sound/Guns/SniperShoot1.SniperShoot1 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/M4A4_Animated/Sounds/Sound_Packs/Warfare_SFX_Bundle/Gun_Sound_Essentials/Wavs/Shotgun01.Shotgun01 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeRifle.CameraShakeRifle_C 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeRifle_C /Game/CameraActor/CameraShakeRifle.Default__CameraShakeRifle_C 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeShotgun.CameraShakeShotgun_C 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeShotgun_C /Game/CameraActor/CameraShakeShotgun.Default__CameraShakeShotgun_C 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/CameraActor/CameraShakeSniper.CameraShakeSniper_C 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CameraShakeSniper_C /Game/CameraActor/CameraShakeSniper.Default__CameraShakeSniper_C 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/FPS_Weapon_Bundle/Weapons/Meshes/Ka47/SM_KA47.SM_KA47 
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
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMesh 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/Enemy1/EnemyType1.EnemyType1 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/_Eye_trans._Eye_trans 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
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
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Rifle_Walk_mixamo_com.Rifle_Walk_mixamo_com 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/Enemy1/Enemy1_MAT.Enemy1_MAT 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Weapons/Sniper/SniperPartycleSystemLaser.SniperPartycleSystemLaser 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Art/Weapons/Sniper/SniperShootPS2.SniperShootPS2 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/FMODStudio.FMODAudioComponent 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Shotgun/ShotgunShoot.ShotgunShoot 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorShooting/ShootingAITree.ShootingAITree 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSuicide/SuicideAITree.SuicideAITree 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSniper/SniperAITree.SniperAITree 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Enemies/BehaviorSlave/SlaveAITree.SlaveAITree 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Sniper/SniperShoot.SniperShoot 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/Enemies/Animations/Death1.Death1 
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
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FMODEvent /Game/FMOD/Events/Sounds/Knife/KnifeShoot.KnifeShoot 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave1/SlaveMesh1.SlaveMesh1 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave1/BodySlave1.BodySlave1 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave2/Slave2NoArms.Slave2NoArms 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave2/BodySlave2.BodySlave2 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Art/Enemies/SlaveEnemy/Slave3/Slave3NoArms.Slave3NoArms 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Enemies/SlaveEnemy/Slave3/BodySlave3.BodySlave3 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MovementComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TargetPoint 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Art/Alarm/ScannerMaterial.ScannerMaterial 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Art/Enemies/Expose_Trans_Clean_MAT_Inst.Expose_Trans_Clean_MAT_Inst 
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
		{325, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/DialoguePlugin.Dialogue 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{326, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{327, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{328, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{329, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.KeyEvent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/DialoguePlugin.DialogueUserWidget 
		{331, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.HorizontalBox 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Up.Gamepad_Stick_Up 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Down.Gamepad_Stick_Down 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_X.Gamepad_X 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Y.Gamepad_Y 
		{205, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Left.Gamepad_Stick_Left 
		{206, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Icons/Gamepad_Stick_Right.Gamepad_Stick_Right 
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
		{324, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Art/PostApocAnimations/IdleStatic_PostApoc.IdleStatic_PostApoc 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{403, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{405, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
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
		{401, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBoxSlot 
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
		{654, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/DieAgainGamemode.DieAgainGamemode_C 
		{677, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/SaveGame/SaveGameBP.SaveGameBP_C 
		{657, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/MyGameInstance/MyGameInstance.MyGameInstance_C 
		{727, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/GraphicsSettingsHUD/GraphicSettingsHUD.GraphicSettingsHUD_C 
		{728, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/ControlsWB/Volume_WB.Volume_WB_C 
		{723, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/ControlsWB/PreControlsHUD.PreControlsHUD_C 
		{707, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/PauseHUD.PauseHUD_C 
		{682, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/MainMenu/MainMenu_WB.MainMenu_WB_C 
		{726, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/HUD/ControlsWB/TipsHUD.TipsHUD_C 
		{686, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemies/EnemyShootingCh.EnemyShootingCh_C 
		{684, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UOptionsHUD_C__pf3479267681
{
	FRegisterHelper__UOptionsHUD_C__pf3479267681()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/ControlsWB/OptionsHUD"), &UOptionsHUD_C__pf3479267681::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UOptionsHUD_C__pf3479267681 Instance;
};
FRegisterHelper__UOptionsHUD_C__pf3479267681 FRegisterHelper__UOptionsHUD_C__pf3479267681::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
