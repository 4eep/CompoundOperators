// Copyright 2024 4eeP. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CompoundOperatorsBPLibrary.generated.h"

UCLASS()
class UCompoundOperatorsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	//
	// Add function
	//

	/** Assign (A += B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to Byte", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|Byte")
	static void AddTo_ByteByte(UPARAM(ref) uint8 &A, uint8 B = 1);

	/** Assign (A += B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to int", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|Integer")
	static void AddTo_IntInt(UPARAM(ref) int32 &A, int32 B = 1);

	/** Assign (A += B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to integer64", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|Integer64")
	static void AddTo_Int64Int64(UPARAM(ref) int64 &A, int64 B = 1);

	/** Assign (A += B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to float", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|Float")
	static void AddTo_DoubleDouble(UPARAM(ref) double &A, double B = 1.0);

	/** Assign A added by B */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to IntPoint", CompactNodeTitle = "+=", ScriptMethod = "AddToIntPoint",
							ScriptOperator = "+;+=", Keywords = "+= add plus"),
				 Category = "Math|IntPoint")
	static void AddTo_IntPointIntPoint(UPARAM(ref) FIntPoint &A, FIntPoint B);

	/** Assign (A += B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to Integer", CompactNodeTitle = "+=", ScriptMethod = "AddToInt",
							ScriptOperator = "+;+=", Keywords = "+= add plus"),
				 Category = "Math|IntPoint")
	static void AddTo_IntPointInt(UPARAM(ref) FIntPoint &A, int32 B);

	/** Assign Vector A and Vector B (A += B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to vector2d", CompactNodeTitle = "+=", ScriptMethod = "AddToVector2D",
							ScriptOperator = "+;+=", Keywords = "+= add plus"),
				 Category = "Math|Vector2D")
	static void AddTo_Vector2DVector2D(UPARAM(ref) FVector2D &A, FVector2D B);

	/** Assign Vector A added by B */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to vector2d float", CompactNodeTitle = "+=", ScriptMethod = "AddToFloat",
							ScriptOperator = "+;+=", Keywords = "+= add plus"),
				 Category = "Math|Vector2D")
	static void AddTo_Vector2DFloat(UPARAM(ref) FVector2D &A, double B);

	/** Vector Assign */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to vector", CompactNodeTitle = "+=", ScriptMethod = "AddTo",
							ScriptOperator = "+;+=", Keywords = "+= add plus"),
				 Category = "Math|Vector")
	static void AddTo_VectorVector(UPARAM(ref) FVector &A, FVector B);

	/** Assign adding a float to each component of a vector */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to float", CompactNodeTitle = "+=", ScriptMethod = "AddToFloat", Keywords = "+= add plus"),
				 Category = "Math|Vector")
	static void AddTo_VectorFloat(UPARAM(ref) FVector &A, double B);

	/** Assign an integer to each component of a vector */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to integer", CompactNodeTitle = "+=", ScriptMethod = "AddToInt", Keywords = "+= add plus"),
				 Category = "Math|Vector")
	static void AddTo_VectorInt(UPARAM(ref) FVector &A, int32 B);

	/** Assign of Vector A  (A += B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to Vector4", CompactNodeTitle = "+=", Keywords = "+ add plus"),
				 Category = "Math|Vector4")
	static void AddTo_Vector4Vector4(UPARAM(ref) FVector4 &A, UPARAM(ref) FVector4 &B);

	/** Assign adding a matrix to matrix (A += B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to Matrix", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|Matrix")
	static void AddTo_MatrixMatrix(UPARAM(ref) FMatrix &A, UPARAM(ref) FMatrix &B);

	/** Assign adding of Vector (A + B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to Quat", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|Quat")
	static void AddTo_QuatQuat(UPARAM(ref) FQuat &A, UPARAM(ref) FQuat &B);

	/** Element-wise assign addition of two linear colors (R+=R, G+=G, B+=B, A+=A) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Add to LinearColor", CompactNodeTitle = "+=", ScriptMethod = "AddToLinearColor",
							ScriptOperator = "+;+=", Keywords = "+= add plus"),
				 Category = "Math|Color")
	static void AddTo_LinearColorLinearColor(UPARAM(ref) FLinearColor &A, FLinearColor B);

	/** Assign (A + B) */
	UFUNCTION(BlueprintCallable,
				 meta = (IgnoreTypePromotion, DisplayName = "Add to Timespan", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|DateTime")
	static void AddTo_DateTimeTimespan(UPARAM(ref) FDateTime &A, FTimespan B);

	/** Assign (A + B) */
	UFUNCTION(BlueprintCallable,
				 meta = (IgnoreTypePromotion, DisplayName = "Add to DateTime", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|DateTime")
	static void AddTo_DateTimeDateTime(UPARAM(ref) FDateTime &A, FDateTime B);

	/** Assign (A + B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to Timespan", CompactNodeTitle = "+=", Keywords = "+= add plus"),
				 Category = "Math|Timespan")
	static void AddTo_TimespanTimespan(UPARAM(ref) FTimespan &A, FTimespan B);

	//
	// Subtract function
	//

	/** Assign (A -= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Subtract to Byte", CompactNodeTitle = "-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Byte")
	static void SubtractTo_ByteByte(UPARAM(ref) uint8 &A, uint8 B = 1);

	/** Assign (A -= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Subtract to int", CompactNodeTitle = "-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Integer")
	static void SubtractTo_IntInt(UPARAM(ref) int32 &A, int32 B = 1);

	/** Assign (A -= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Subtract to integer64", CompactNodeTitle = "-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Integer64")
	static void SubtractTo_Int64Int64(UPARAM(ref) int64 &A, int64 B = 1);

	/** Assign (A -= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Subtract to float", CompactNodeTitle = "-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Float")
	static void SubtractTo_DoubleDouble(UPARAM(ref) double &A, double B = 1.0);

	/** Assign A Subtracted by B */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to IntPoint", CompactNodeTitle = "-=", ScriptMethod = "SubtractToIntPoint",
							ScriptOperator = "-;-=", Keywords = "-= Subtract minus"),
				 Category = "Math|IntPoint")
	static void SubtractTo_IntPointIntPoint(UPARAM(ref) FIntPoint &A, FIntPoint B);

	/** Assign (A -= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to Integer", CompactNodeTitle = "-=", ScriptMethod = "SubtractToInt",
							ScriptOperator = "-;-=", Keywords = "-= Subtract minus"),
				 Category = "Math|IntPoint")
	static void SubtractTo_IntPointInt(UPARAM(ref) FIntPoint &A, int32 B);

	/** Assign Vector A and Vector B (A -= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to vector2d", CompactNodeTitle = "-=", ScriptMethod = "SubtractToVector2D",
							ScriptOperator = "-;-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Vector2D")
	static void SubtractTo_Vector2DVector2D(UPARAM(ref) FVector2D &A, FVector2D B);

	/** Assign Vector A Subtracted by B */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to vector2d float", CompactNodeTitle = "-=", ScriptMethod = "SubtractToFloat",
							ScriptOperator = "-;-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Vector2D")
	static void SubtractTo_Vector2DFloat(UPARAM(ref) FVector2D &A, double B);

	/** Vector Assign */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to vector", CompactNodeTitle = "-=", ScriptMethod = "SubtractTo",
							ScriptOperator = "-;-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Vector")
	static void SubtractTo_VectorVector(UPARAM(ref) FVector &A, FVector B);

	/** Assign Subtracting a float to each component of a vector */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to float", CompactNodeTitle = "-=", ScriptMethod = "SubtractToFloat",
							Keywords = "-= Subtract minus"),
				 Category = "Math|Vector")
	static void SubtractTo_VectorFloat(UPARAM(ref) FVector &A, double B);

	/** Assign an integer to each component of a vector */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to integer", CompactNodeTitle = "-=", ScriptMethod = "SubtractToInt",
							Keywords = "-= Subtract minus"),
				 Category = "Math|Vector")
	static void SubtractTo_VectorInt(UPARAM(ref) FVector &A, int32 B);

	/** Assign of Vector A  (A -= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to Vector4", CompactNodeTitle = "-=", Keywords = "- Subtract minus"),
				 Category = "Math|Vector4")
	static void SubtractTo_Vector4Vector4(UPARAM(ref) FVector4 &A, UPARAM(ref) FVector4 &B);

	/** Assign Subtracting of Vector (A - B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to Quat", CompactNodeTitle = "-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Quat")
	static void SubtractTo_QuatQuat(UPARAM(ref) FQuat &A, UPARAM(ref) FQuat &B);

	/** Element-wise assign Subtractition of two linear colors (R-=R, G-=G, B-=B, A-=A) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Subtract to LinearColor", CompactNodeTitle = "-=", ScriptMethod = "SubtractToLinearColor",
							ScriptOperator = "-;-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Color")
	static void SubtractTo_LinearColorLinearColor(UPARAM(ref) FLinearColor &A, FLinearColor B);

	/** Assign (A - B) */
	UFUNCTION(BlueprintCallable,
				 meta = (IgnoreTypePromotion, DisplayName = "Subtract to Timespan", CompactNodeTitle = "-=", Keywords = "-= Subtract minus"),
				 Category = "Math|DateTime")
	static void SubtractTo_DateTimeTimespan(UPARAM(ref) FDateTime &A, FTimespan B);

	/** Assign (A - B) */
	UFUNCTION(BlueprintCallable,
				 meta = (IgnoreTypePromotion, DisplayName = "Subtract to DateTime", CompactNodeTitle = "-=", Keywords = "-= Subtract minus"),
				 Category = "Math|DateTime")
	static void SubtractTo_DateTimeDateTime(UPARAM(ref) FDateTime &A, FDateTime B);

	/** Assign (A - B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Subtract to Timespan", CompactNodeTitle = "-=", Keywords = "-= Subtract minus"),
				 Category = "Math|Timespan")
	static void SubtractTo_TimespanTimespan(UPARAM(ref) FTimespan &A, FTimespan B);

	//
	// Multiply function
	//

	/** Assign (A *= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Multiply to Byte", CompactNodeTitle = "*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Byte")
	static void MultiplyTo_ByteByte(UPARAM(ref) uint8 &A, uint8 B = 1);

	/** Assign (A *= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Multiply to int", CompactNodeTitle = "*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Integer")
	static void MultiplyTo_IntInt(UPARAM(ref) int32 &A, int32 B = 1);

	/** Assign (A *= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Multiply to integer64", CompactNodeTitle = "*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Integer64")
	static void MultiplyTo_Int64Int64(UPARAM(ref) int64 &A, int64 B = 1);

	/** Assign (A *= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Multiply to float", CompactNodeTitle = "*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Float")
	static void MultiplyTo_DoubleDouble(UPARAM(ref) double &A, double B = 1.0);

	/** Assign A Multiplyed by B */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to IntPoint", CompactNodeTitle = "*=", ScriptMethod = "MultiplyToIntPoint",
							ScriptOperator = "*;*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|IntPoint")
	static void MultiplyTo_IntPointIntPoint(UPARAM(ref) FIntPoint &A, FIntPoint B);

	/** Assign (A *= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to Integer", CompactNodeTitle = "*=", ScriptMethod = "MultiplyToInt",
							ScriptOperator = "*;*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|IntPoint")
	static void MultiplyTo_IntPointInt(UPARAM(ref) FIntPoint &A, int32 B);

	/** Assign Vector A and Vector B (A *= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to vector2d", CompactNodeTitle = "*=", ScriptMethod = "MultiplyToVector2D",
							ScriptOperator = "*;*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Vector2D")
	static void MultiplyTo_Vector2DVector2D(UPARAM(ref) FVector2D &A, FVector2D B);

	/** Assign Vector A Multiplyed by B */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to vector2d float", CompactNodeTitle = "*=", ScriptMethod = "MultiplyToFloat",
							ScriptOperator = "*;*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Vector2D")
	static void MultiplyTo_Vector2DFloat(UPARAM(ref) FVector2D &A, double B);

	/** Vector Assign */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to vector", CompactNodeTitle = "*=", ScriptMethod = "MultiplyToVector",
							ScriptOperator = "*;*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Vector")
	static void MultiplyTo_VectorVector(UPARAM(ref) FVector &A, FVector B);

	/** Assign Multiplying a float to each component of a vector */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to float", CompactNodeTitle = "*=", ScriptMethod = "MultiplyToFloat",
							Keywords = "*= Multiply multiply"),
				 Category = "Math|Vector")
	static void MultiplyTo_VectorFloat(UPARAM(ref) FVector &A, double B);

	/** Assign an integer to each component of a vector */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to integer", CompactNodeTitle = "*=", ScriptMethod = "MultiplyToInt",
							Keywords = "*= Multiply multiply"),
				 Category = "Math|Vector")
	static void MultiplyTo_VectorInt(UPARAM(ref) FVector &A, int32 B);

	/** Assign of Vector A  (A *= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to Vector4", CompactNodeTitle = "*=", Keywords = "* Multiply multiply"),
				 Category = "Math|Vector4")
	static void MultiplyTo_Vector4Vector4(UPARAM(ref) FVector4 &A, UPARAM(ref) FVector4 &B);

	/** Assign Multiplying a matrix to matrix (A *= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to Matrix", CompactNodeTitle = "*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Matrix")
	static void MultiplyTo_MatrixMatrix(UPARAM(ref) FMatrix &A, UPARAM(ref) FMatrix &B);

	/** Assign Multiplying of Vector (A * B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to Quat", CompactNodeTitle = "*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Quat")
	static void MultiplyTo_QuatQuat(UPARAM(ref) FQuat &A, UPARAM(ref) FQuat &B);

	/** Element-wise assign Multiplyition of two linear colors (R*=R, G*=G, B*=B, A*=A) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Multiply to LinearColor", CompactNodeTitle = "*=", ScriptMethod = "MultiplyToLinearColor",
							ScriptOperator = "*;*=", Keywords = "*= Multiply multiply"),
				 Category = "Math|Color")
	static void MultiplyTo_LinearColorLinearColor(UPARAM(ref) FLinearColor &A, FLinearColor B);

	//
	// Divide function
	//

	/** Assign (A /= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Divide to Byte", CompactNodeTitle = "/=", Keywords = "/= Divide divide"),
				 Category = "Math|Byte")
	static void DivideTo_ByteByte(UPARAM(ref) uint8 &A, uint8 B = 1);

	/** Assign (A /= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Divide to int", CompactNodeTitle = "/=", Keywords = "/= Divide divide"),
				 Category = "Math|Integer")
	static void DivideTo_IntInt(UPARAM(ref) int32 &A, int32 B = 1);

	/** Assign (A /= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Divide to integer64", CompactNodeTitle = "/=", Keywords = "/= Divide divide"),
				 Category = "Math|Integer64")
	static void DivideTo_Int64Int64(UPARAM(ref) int64 &A, int64 B = 1);

	/** Assign (A /= B) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Divide to float", CompactNodeTitle = "/=", Keywords = "/= Divide divide"),
				 Category = "Math|Float")
	static void DivideTo_DoubleDouble(UPARAM(ref) double &A, double B = 1.0);

	/** Assign A Divideed by B */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to IntPoint", CompactNodeTitle = "/=", ScriptMethod = "DivideToIntPoint",
							ScriptOperator = "/;/=", Keywords = "/= Divide divide"),
				 Category = "Math|IntPoint")
	static void DivideTo_IntPointIntPoint(UPARAM(ref) FIntPoint &A, FIntPoint B);

	/** Assign (A /= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to Integer", CompactNodeTitle = "/=", ScriptMethod = "DivideToInt",
							ScriptOperator = "/;/=", Keywords = "/= Divide divide"),
				 Category = "Math|IntPoint")
	static void DivideTo_IntPointInt(UPARAM(ref) FIntPoint &A, int32 B);

	/** Assign Vector A and Vector B (A /= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to vector2d", CompactNodeTitle = "/=", ScriptMethod = "DivideToVector2D",
							ScriptOperator = "/;/=", Keywords = "/= Divide divide"),
				 Category = "Math|Vector2D")
	static void DivideTo_Vector2DVector2D(UPARAM(ref) FVector2D &A, FVector2D B);

	/** Assign Vector A Divideed by B */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to vector2d float", CompactNodeTitle = "/=", ScriptMethod = "DivideToFloat",
							ScriptOperator = "/;/=", Keywords = "/= Divide divide"),
				 Category = "Math|Vector2D")
	static void DivideTo_Vector2DFloat(UPARAM(ref) FVector2D &A, double B);

	/** Vector Assign */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to vector", CompactNodeTitle = "/=", ScriptMethod = "DivideToVector",
							ScriptOperator = "/;/=", Keywords = "/= Divide divide"),
				 Category = "Math|Vector")
	static void DivideTo_VectorVector(UPARAM(ref) FVector &A, FVector B);

	/** Assign Divideing a float to each component of a vector */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to float", CompactNodeTitle = "/=", ScriptMethod = "DivideToFloat", Keywords = "/= Divide divide"),
				 Category = "Math|Vector")
	static void DivideTo_VectorFloat(UPARAM(ref) FVector &A, double B);

	/** Assign an integer to each component of a vector */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to integer", CompactNodeTitle = "/=", ScriptMethod = "DivideToInt", Keywords = "/= Divide divide"),
				 Category = "Math|Vector")
	static void DivideTo_VectorInt(UPARAM(ref) FVector &A, int32 B);

	/** Assign of Vector A  (A /= B) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to Vector4", CompactNodeTitle = "/=", Keywords = "/ Divide divide"),
				 Category = "Math|Vector4")
	static void DivideTo_Vector4Vector4(UPARAM(ref) FVector4 &A, UPARAM(ref) FVector4 &B);

	/** Element-wise assign Divideition of two linear colors (R/=R, G/=G, B/=B, A/=A) */
	UFUNCTION(BlueprintCallable,
				 meta = (DisplayName = "Divide to LinearColor", CompactNodeTitle = "/=", ScriptMethod = "DivideToLinearColor",
							ScriptOperator = "/;/=", Keywords = "/= Divide divide"),
				 Category = "Math|Color")
	static void DivideTo_LinearColorLinearColor(UPARAM(ref) FLinearColor &A, FLinearColor B);
};
