// Copyright 2024 4eeP. All Rights Reserved.

#include "CompoundOperatorsBPLibrary.h"

UCompoundOperatorsBPLibrary::UCompoundOperatorsBPLibrary(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
}


//
// Add function
//

void UCompoundOperatorsBPLibrary::AddTo_ByteByte(UPARAM(ref) uint8 &A, uint8 B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_IntInt(UPARAM(ref) int32 &A, int32 B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_Int64Int64(UPARAM(ref) int64 &A, int64 B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_DoubleDouble(UPARAM(ref) double &A, double B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_IntPointIntPoint(UPARAM(ref) FIntPoint &A, FIntPoint B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_IntPointInt(UPARAM(ref) FIntPoint &A, int32 B)
{
	A += FIntPoint(B);
}

void UCompoundOperatorsBPLibrary::AddTo_Vector2DVector2D(UPARAM(ref) FVector2D &A, FVector2D B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_Vector2DFloat(UPARAM(ref) FVector2D &A, double B)
{
	A = A + B;
}

void UCompoundOperatorsBPLibrary::AddTo_VectorVector(UPARAM(ref) FVector &A, FVector B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_VectorFloat(UPARAM(ref) FVector &A, double B)
{
	A = A + B;
}

void UCompoundOperatorsBPLibrary::AddTo_VectorInt(UPARAM(ref) FVector &A, int32 B)
{
	A = A + (float)B;
}

void UCompoundOperatorsBPLibrary::AddTo_Vector4Vector4(UPARAM(ref) FVector4 &A, UPARAM(ref) FVector4 &B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_MatrixMatrix(UPARAM(ref) FMatrix &A, UPARAM(ref) FMatrix &B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_QuatQuat(UPARAM(ref) FQuat &A, UPARAM(ref) FQuat &B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_LinearColorLinearColor(UPARAM(ref) FLinearColor &A, FLinearColor B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_DateTimeTimespan(UPARAM(ref) FDateTime &A, FTimespan B)
{
	A += B;
}

void UCompoundOperatorsBPLibrary::AddTo_DateTimeDateTime(UPARAM(ref) FDateTime &A, FDateTime B)
{
	A += FTimespan(B.GetTicks());
}

void UCompoundOperatorsBPLibrary::AddTo_TimespanTimespan(UPARAM(ref) FTimespan &A, FTimespan B)
{
	A += B;
}

//
// Subtract function
//

void UCompoundOperatorsBPLibrary::SubtractTo_ByteByte(UPARAM(ref) uint8 &A, uint8 B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_IntInt(UPARAM(ref) int32 &A, int32 B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_Int64Int64(UPARAM(ref) int64 &A, int64 B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_DoubleDouble(UPARAM(ref) double &A, double B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_IntPointIntPoint(UPARAM(ref) FIntPoint &A, FIntPoint B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_IntPointInt(UPARAM(ref) FIntPoint &A, int32 B)
{
	A -= FIntPoint(B);
}

void UCompoundOperatorsBPLibrary::SubtractTo_Vector2DVector2D(UPARAM(ref) FVector2D &A, FVector2D B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_Vector2DFloat(UPARAM(ref) FVector2D &A, double B)
{
	A = A - B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_VectorVector(UPARAM(ref) FVector &A, FVector B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_VectorFloat(UPARAM(ref) FVector &A, double B)
{
	A = A - B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_VectorInt(UPARAM(ref) FVector &A, int32 B)
{
	A = A - (float)B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_Vector4Vector4(UPARAM(ref) FVector4 &A, UPARAM(ref) FVector4 &B)
{
	A = A - B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_QuatQuat(UPARAM(ref) FQuat &A, UPARAM(ref) FQuat &B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_LinearColorLinearColor(UPARAM(ref) FLinearColor &A, FLinearColor B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_DateTimeTimespan(UPARAM(ref) FDateTime &A, FTimespan B)
{
	A -= B;
}

void UCompoundOperatorsBPLibrary::SubtractTo_DateTimeDateTime(UPARAM(ref) FDateTime &A, FDateTime B)
{
	A -= FTimespan(B.GetTicks());
}

void UCompoundOperatorsBPLibrary::SubtractTo_TimespanTimespan(UPARAM(ref) FTimespan &A, FTimespan B)
{
	A -= B;
}

//
// Multiply function
//

void UCompoundOperatorsBPLibrary::MultiplyTo_ByteByte(UPARAM(ref) uint8 &A, uint8 B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_IntInt(UPARAM(ref) int32 &A, int32 B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_Int64Int64(UPARAM(ref) int64 &A, int64 B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_DoubleDouble(UPARAM(ref) double &A, double B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_IntPointIntPoint(UPARAM(ref) FIntPoint &A, FIntPoint B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_IntPointInt(UPARAM(ref) FIntPoint &A, int32 B)
{
	A *= FIntPoint(B);
}

void UCompoundOperatorsBPLibrary::MultiplyTo_Vector2DVector2D(UPARAM(ref) FVector2D &A, FVector2D B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_Vector2DFloat(UPARAM(ref) FVector2D &A, double B)
{
	A = A * B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_VectorVector(UPARAM(ref) FVector &A, FVector B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_VectorFloat(UPARAM(ref) FVector &A, double B)
{
	A = A * B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_VectorInt(UPARAM(ref) FVector &A, int32 B)
{
	A = A * (float)B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_Vector4Vector4(UPARAM(ref) FVector4 &A, UPARAM(ref) FVector4 &B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_MatrixMatrix(UPARAM(ref) FMatrix &A, UPARAM(ref) FMatrix &B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_QuatQuat(UPARAM(ref) FQuat &A, UPARAM(ref) FQuat &B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::MultiplyTo_LinearColorLinearColor(UPARAM(ref) FLinearColor &A, FLinearColor B)
{
	A *= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_ByteByte(UPARAM(ref) uint8 &A, uint8 B)
{
	A /= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_IntInt(UPARAM(ref) int32 &A, int32 B)
{
	A /= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_Int64Int64(UPARAM(ref) int64 &A, int64 B)
{
	A /= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_DoubleDouble(UPARAM(ref) double &A, double B)
{
	A /= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_IntPointIntPoint(UPARAM(ref) FIntPoint &A, FIntPoint B)
{
	A /= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_IntPointInt(UPARAM(ref) FIntPoint &A, int32 B)
{
	A /= FIntPoint(B);
}

void UCompoundOperatorsBPLibrary::DivideTo_Vector2DVector2D(UPARAM(ref) FVector2D &A, FVector2D B)
{
	A /= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_Vector2DFloat(UPARAM(ref) FVector2D &A, double B)
{
	A = A / B;
}

void UCompoundOperatorsBPLibrary::DivideTo_VectorVector(UPARAM(ref) FVector &A, FVector B)
{
	A /= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_VectorFloat(UPARAM(ref) FVector &A, double B)
{
	A = A / B;
}

void UCompoundOperatorsBPLibrary::DivideTo_VectorInt(UPARAM(ref) FVector &A, int32 B)
{
	A = A / (float)B;
}

void UCompoundOperatorsBPLibrary::DivideTo_Vector4Vector4(UPARAM(ref) FVector4 &A, UPARAM(ref) FVector4 &B)
{
	A /= B;
}

void UCompoundOperatorsBPLibrary::DivideTo_LinearColorLinearColor(UPARAM(ref) FLinearColor &A, FLinearColor B)
{
	A /= B;
}
