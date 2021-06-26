#include "AABB.h"

AABB::AABB(const Vector3D<float>& min, const Vector3D<float>& max )
	:Min(min), Max(max)
{}	 

Vector3D<float> AABB::GetMin() const noexcept { return Min; }	

Vector3D<float> AABB::GetMax() const noexcept { return Max; }	

Result AABB::Intersect(const AABB& other) noexcept
{
	Vector3D<float> t0 = (other.Min - Max);
	Vector3D<float> t1 = (Min - other.Max);
	Vector3D<float> Distance  = Vector3D<float>(t0.Max(t1));

	float maxDistance = Distance.MaxValue();

	return Result(maxDistance < 0, maxDistance);
}	