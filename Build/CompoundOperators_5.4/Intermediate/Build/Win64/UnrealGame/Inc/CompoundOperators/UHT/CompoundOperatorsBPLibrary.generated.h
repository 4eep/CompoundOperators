// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompoundOperatorsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FLinearColor;
struct FTimespan;
#ifdef COMPOUNDOPERATORS_CompoundOperatorsBPLibrary_generated_h
#error "CompoundOperatorsBPLibrary.generated.h already included, missing '#pragma once' in CompoundOperatorsBPLibrary.h"
#endif
#define COMPOUNDOPERATORS_CompoundOperatorsBPLibrary_generated_h

#define FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_11_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDivideTo_LinearColorLinearColor); \
	DECLARE_FUNCTION(execDivideTo_Vector4Vector4); \
	DECLARE_FUNCTION(execDivideTo_VectorInt); \
	DECLARE_FUNCTION(execDivideTo_VectorFloat); \
	DECLARE_FUNCTION(execDivideTo_VectorVector); \
	DECLARE_FUNCTION(execDivideTo_Vector2DFloat); \
	DECLARE_FUNCTION(execDivideTo_Vector2DVector2D); \
	DECLARE_FUNCTION(execDivideTo_IntPointInt); \
	DECLARE_FUNCTION(execDivideTo_IntPointIntPoint); \
	DECLARE_FUNCTION(execDivideTo_DoubleDouble); \
	DECLARE_FUNCTION(execDivideTo_Int64Int64); \
	DECLARE_FUNCTION(execDivideTo_IntInt); \
	DECLARE_FUNCTION(execDivideTo_ByteByte); \
	DECLARE_FUNCTION(execMultiplyTo_LinearColorLinearColor); \
	DECLARE_FUNCTION(execMultiplyTo_QuatQuat); \
	DECLARE_FUNCTION(execMultiplyTo_MatrixMatrix); \
	DECLARE_FUNCTION(execMultiplyTo_Vector4Vector4); \
	DECLARE_FUNCTION(execMultiplyTo_VectorInt); \
	DECLARE_FUNCTION(execMultiplyTo_VectorFloat); \
	DECLARE_FUNCTION(execMultiplyTo_VectorVector); \
	DECLARE_FUNCTION(execMultiplyTo_Vector2DFloat); \
	DECLARE_FUNCTION(execMultiplyTo_Vector2DVector2D); \
	DECLARE_FUNCTION(execMultiplyTo_IntPointInt); \
	DECLARE_FUNCTION(execMultiplyTo_IntPointIntPoint); \
	DECLARE_FUNCTION(execMultiplyTo_DoubleDouble); \
	DECLARE_FUNCTION(execMultiplyTo_Int64Int64); \
	DECLARE_FUNCTION(execMultiplyTo_IntInt); \
	DECLARE_FUNCTION(execMultiplyTo_ByteByte); \
	DECLARE_FUNCTION(execSubtractTo_TimespanTimespan); \
	DECLARE_FUNCTION(execSubtractTo_DateTimeDateTime); \
	DECLARE_FUNCTION(execSubtractTo_DateTimeTimespan); \
	DECLARE_FUNCTION(execSubtractTo_LinearColorLinearColor); \
	DECLARE_FUNCTION(execSubtractTo_QuatQuat); \
	DECLARE_FUNCTION(execSubtractTo_Vector4Vector4); \
	DECLARE_FUNCTION(execSubtractTo_VectorInt); \
	DECLARE_FUNCTION(execSubtractTo_VectorFloat); \
	DECLARE_FUNCTION(execSubtractTo_VectorVector); \
	DECLARE_FUNCTION(execSubtractTo_Vector2DFloat); \
	DECLARE_FUNCTION(execSubtractTo_Vector2DVector2D); \
	DECLARE_FUNCTION(execSubtractTo_IntPointInt); \
	DECLARE_FUNCTION(execSubtractTo_IntPointIntPoint); \
	DECLARE_FUNCTION(execSubtractTo_DoubleDouble); \
	DECLARE_FUNCTION(execSubtractTo_Int64Int64); \
	DECLARE_FUNCTION(execSubtractTo_IntInt); \
	DECLARE_FUNCTION(execSubtractTo_ByteByte); \
	DECLARE_FUNCTION(execAddTo_TimespanTimespan); \
	DECLARE_FUNCTION(execAddTo_DateTimeDateTime); \
	DECLARE_FUNCTION(execAddTo_DateTimeTimespan); \
	DECLARE_FUNCTION(execAddTo_LinearColorLinearColor); \
	DECLARE_FUNCTION(execAddTo_QuatQuat); \
	DECLARE_FUNCTION(execAddTo_MatrixMatrix); \
	DECLARE_FUNCTION(execAddTo_Vector4Vector4); \
	DECLARE_FUNCTION(execAddTo_VectorInt); \
	DECLARE_FUNCTION(execAddTo_VectorFloat); \
	DECLARE_FUNCTION(execAddTo_VectorVector); \
	DECLARE_FUNCTION(execAddTo_Vector2DFloat); \
	DECLARE_FUNCTION(execAddTo_Vector2DVector2D); \
	DECLARE_FUNCTION(execAddTo_IntPointInt); \
	DECLARE_FUNCTION(execAddTo_IntPointIntPoint); \
	DECLARE_FUNCTION(execAddTo_DoubleDouble); \
	DECLARE_FUNCTION(execAddTo_Int64Int64); \
	DECLARE_FUNCTION(execAddTo_IntInt); \
	DECLARE_FUNCTION(execAddTo_ByteByte);


#define FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCompoundOperatorsBPLibrary(); \
	friend struct Z_Construct_UClass_UCompoundOperatorsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UCompoundOperatorsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompoundOperators"), NO_API) \
	DECLARE_SERIALIZER(UCompoundOperatorsBPLibrary)


#define FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompoundOperatorsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompoundOperatorsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompoundOperatorsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompoundOperatorsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompoundOperatorsBPLibrary(UCompoundOperatorsBPLibrary&&); \
	UCompoundOperatorsBPLibrary(const UCompoundOperatorsBPLibrary&); \
public: \
	NO_API virtual ~UCompoundOperatorsBPLibrary();


#define FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_8_PROLOG
#define FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_11_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_11_INCLASS \
	FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOUNDOPERATORS_API UClass* StaticClass<class UCompoundOperatorsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CompoundOperators_Source_CompoundOperators_Public_CompoundOperatorsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
