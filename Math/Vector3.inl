#include "Vector3.h"

template<typename T>
Vector3D<T>::Vector3D()
	:x(0.0), y(0.0), z(0.0)
{}	//Default Constructor

template<typename T>
Vector3D<T>::Vector3D(const T x, const T y, const T z)
	: x(x), y(y), z(z)
{}	//Constructor

template<typename T>
void Vector3D<T>::SetX(const T x) noexcept
{
	x = x;
}	//Set x

template<typename T>
void Vector3D<T>::SetY(const T y) noexcept
{
	y = y;
}	//Set y

template<typename T>
void Vector3D<T>::SetZ(const T z) noexcept
{
	z = z;
}	//Set z

template<typename T>
T Vector3D<T>::GetX() const noexcept { return x; }	//Get x

template<typename T>
T Vector3D<T>::GetY() const noexcept { return y; }	//Get y

template<typename T>
T Vector3D<T>::GetZ() const noexcept { return z; }	//Get z

template<typename T>
Vector3D<T> Vector3D<T>::operator+(const Vector3D<T>& other) const noexcept
{
	return Vector3D(x + other.x, y + other.y, z + other.z);
}	//Operator +

template<typename T>
Vector3D<T> Vector3D<T>::operator-(const Vector3D<T>& other) const noexcept
{
	return Vector3D(x - other.x, y - other.y, z - other.z);
}	//Operator -

template<typename T>
Vector3D<T> Vector3D<T>::operator*(const Vector3D<T>& other) const noexcept
{
	return Vector3D(x * other.x, y * other.y, z * other.z);
}	//Operator *

template<typename T>
Vector3D<T> Vector3D<T>::operator/(const Vector3D<T>& other) const noexcept
{
	return Vector3D(x / other.x, y / other.y, z / other.z);
}	//Operator /

template<typename T>
T Vector3D<T>::InnerProduct(const Vector3D& other) const noexcept
{
	return (x * other.x + y * other.y + z * other.z);
}	//Inner product

template<typename T>
Vector3D<T> Vector3D<T>::CrossProduct(const Vector3D<T>& other) const noexcept
{
	return Vector3D(y * other.z - z * other.y,
		z * other.x - x * other.z,
		x * other.y - y * other.x);
}	//Cross product

template<typename T>
T Vector3D<T>::Length() const noexcept
{
	return sqrt(x * x + y * y + z * z);
}	//Get the length

template <typename T>
Vector3D<T> Vector3D<T>::Normalize() const noexcept
{
	return Vector3D(x / Length(), y / Length(), z / Length());
}	//Normalize the vector

template <typename T>
Vector3D<T> Vector3D<T>::Max(const Vector3D<T>& other) noexcept
{
	return Vector3D(max(x, other.x), max(y, other.y), max(z, other.z));
}	//Return max coordinates

template <typename T>
Vector3D<T> Vector3D<T>::Min(const Vector3D<T>& other) noexcept
{
	return Vector3D(min(x, other.x), min(y, other.y), min(z, other.z));
}	//Return min coordinates

template<typename T>
T Vector3D<T>::MaxValue() noexcept
{
	T max = INT32_MIN;
	if (x > max) max = x;
	if (y > max) max = y;
	if (z > max) max = z;

	return max;
}	//Retrun max coordinate