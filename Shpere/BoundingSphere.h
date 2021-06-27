#pragma once
#include <iostream>
#include "Vector3.h"
#include "Results.h"

class BoundingSphere
{
	private:
		Vector3D<float> center;
		float radius;

	public:
		BoundingSphere(const Vector3D<float>&, const float);		

		Vector3D<float> GetCenter() const noexcept;								
		float GetRadius()			const noexcept;								

		Result Intersect(const BoundingSphere&);		
};
