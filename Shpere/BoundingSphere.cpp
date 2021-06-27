#include "BoundingSphere.h"
#include "Vector3.h"

BoundingSphere::BoundingSphere(const Vector3D<float>& center, const float radius)
	:center(center),radius(radius)
{}	//Constructor

Vector3D<float> BoundingSphere::GetCenter() const noexcept
{
	return center;
}	//Get center

float BoundingSphere::GetRadius() const noexcept
{
	return radius;
}	//Get radious

Result BoundingSphere::Intersect(const BoundingSphere& other)
{
	float radiusDistance = radius + other.radius;
	float centerDistance = (other.center - center).Length();
	float distance = centerDistance - radiusDistance;

	return Result(radiusDistance > centerDistance, distance);
}	//Spheres Intersected