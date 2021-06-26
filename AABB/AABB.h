#pragma once
#include <iostream>
#include "Vector3.h"
#include "Results.h"

using namespace std;

class AABB
{
	private:
		Vector3D<float> Min;
		Vector3D<float> Max;

	public:
		AABB(const Vector3D<float>&, const Vector3D<float>&);	

		Vector3D<float> GetMin() const noexcept;						
		Vector3D<float> GetMax() const noexcept;						

		Result Intersect(const AABB&) noexcept;		
};