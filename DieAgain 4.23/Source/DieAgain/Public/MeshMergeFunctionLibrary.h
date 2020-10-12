// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "../MeshMergeFunctionLibrary.h"
/**
* Blueprint equivalent of FSkeleMeshMergeSectionMapping
* Info to map all the sections from a single source skeletal mesh to
* a final section entry in the merged skeletal mesh.
*/
USTRUCT(BlueprintType)
struct DIEAGAIN_API FSkelMeshMergeSectionMapping_BP
{
	GENERATED_BODY()
		/** Indices to final section entries of the merged skeletal mesh */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Merge Params")
		TArray<type> SectionIDs;
};
/**
* Used to wrap a set of UV Transforms for one mesh.
*/
USTRUCT(BlueprintType)
struct DIEAGAIN_API FSkelMeshMergeUVTransform
{
	GENERATED_BODY()
		/** A list of how UVs should be transformed on a given mesh, where index represents a specific UV channel. */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Merge Params")
		TArray UVTransforms;
};
/**
* Blueprint equivalent of FSkelMeshMergeUVTransforms
* Info to map all the sections about how to transform their UVs
*/
USTRUCT(BlueprintType)
struct DIEAGAIN_API FSkelMeshMergeUVTransformMapping
{
	GENERATED_BODY()
		/** For each UV channel on each mesh, how the UVS should be transformed. */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Merge Params")
		TArray UVTransformsPerMesh;
};
/**
* Struct containing all parameters used to perform a Skeletal Mesh merge.
*/
USTRUCT(BlueprintType)
struct DIEAGAIN_API FSkeletalMeshMergeParams
{
	GENERATED_BODY()
		FSkeletalMeshMergeParams()
	{
		MeshSectionMappings = TArray();
		UVTransformsPerMesh = TArray();
		StripTopLODS = 0;
		bNeedsCpuAccess = false;
		bSkeletonBefore = false;
		Skeleton = nullptr;
	}
	// An optional array to map sections from the source meshes to merged section entries
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray MeshSectionMappings;
	// An optional array to transform the UVs in each mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray UVTransformsPerMesh;
	// The list of skeletal meshes to merge.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray MeshesToMerge;
	// The number of high LODs to remove from input meshes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 StripTopLODS;
	// Whether or not the resulting mesh needs to be accessed by the CPU for any reason (e.g. for spawning particle effects).
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint32 bNeedsCpuAccess : 1;
	// Update skeleton before merge. Otherwise, update after.
	// Skeleton must also be provided.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint32 bSkeletonBefore : 1;
	// Skeleton that will be used for the merged mesh.
	// Leave empty if the generated skeleton is OK.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class USkeleton* Skeleton;
};
/**
*
*/
UCLASS()
class DIEAGAIN_API UMeshMergeFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/**
	* Merges the given meshes into a single mesh.
	* @return The merged mesh (will be invalid if the merge failed).
	*/
	UFUNCTION(BlueprintCallable, Category = "Mesh Merge", meta = (UnsafeDuringActorConstruction = "true"))
		static class USkeletalMesh* MergeMeshes(const FSkeletalMeshMergeParams& Params);
};
~~~
