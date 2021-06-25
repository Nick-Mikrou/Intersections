#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
class Vector3D
{
private:
	T x, y, z;

public:
	Vector3D();
	Vector3D(const T x, const T y, const T z);
	//Constructors

	void SetX(const T x) noexcept;
	void SetY(const T y) noexcept;
	void SetZ(const T z) noexcept;
	//Set

	T GetX() const noexcept;
	T GetY() const noexcept;
	T GetZ() const noexcept;
	//Get	

	Vector3D operator+ (const Vector3D<T>& other) const noexcept;
	Vector3D operator- (const Vector3D<T>& other) const noexcept;
	Vector3D operator* (const Vector3D<T>& other) const noexcept;
	Vector3D operator/ (const Vector3D<T>& other) const noexcept;
	//Overload Operators

	T InnerProduct(const Vector3D<T>& other)		   const noexcept;
	Vector3D<T> CrossProduct(const Vector3D<T>& other) const noexcept;
	T Length()				const noexcept;
	Vector3D<T> Normalize() const noexcept;
	Vector3D<T> Max(const Vector3D<T>& other) noexcept;
	Vector3D<T> Min(const Vector3D<T>& other) noexcept;
	T MaxValue() noexcept;
};

#include "Vector3.inl"