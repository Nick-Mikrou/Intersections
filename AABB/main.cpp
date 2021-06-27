#include "AABB.h"

int main()
{
	AABB AABB1(Vector3D<float>(0.0f, 0.0f, 0.0f), Vector3D<float>(1.0f, 1.0f, 1.0f));
	AABB AABB2(Vector3D<float>(1.0f, 1.0f, 1.0f), Vector3D<float>(3.0f, 2.0f, 1.0f));
	AABB AABB3(Vector3D<float>(1.0f, 0.0f, 0.0f), Vector3D<float>(2.0f, 1.0f, 1.0f));
	AABB AABB4(Vector3D<float>(0.0f, 0.0f, 2.0f), Vector3D<float>(1.0f, 1.0f, 1.0f));
	AABB AABB5(Vector3D<float>(0.0f, 0.5f, 0.0f), Vector3D<float>(1.0f, 1.5f, 1.0f));

	Result AABB1IntersectAABB2 = AABB1.Intersect(AABB2);
	Result AABB1IntersectAABB3 = AABB1.Intersect(AABB3);
	Result AABB1IntersectAABB4 = AABB1.Intersect(AABB4);
	Result AABB1IntersectAABB5 = AABB1.Intersect(AABB5);

	cout << "AABB1 Intersect AABB2 : " << AABB1IntersectAABB2.GetisIntersected() << " Distance : " << AABB1IntersectAABB2.GetDistance() << endl;
	cout << "AABB1 Intersect AABB3 : " << AABB1IntersectAABB3.GetisIntersected() << " Distance : " << AABB1IntersectAABB3.GetDistance() << endl;
	cout << "AABB1 Intersect AABB4 : " << AABB1IntersectAABB4.GetisIntersected() << " Distance : " << AABB1IntersectAABB4.GetDistance() << endl;
	cout << "AABB1 Intersect AABB5 : " << AABB1IntersectAABB5.GetisIntersected() << " Distance : " << AABB1IntersectAABB5.GetDistance() << endl;

	return 0;
}