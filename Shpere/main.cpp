#include "BoundingSphere.h"

int main()
{
	BoundingSphere *SpheresList[7]{};

	SpheresList[0] = new BoundingSphere(Vector3D<float>(0.0f, 0.0f, 0.0f), 1.0f);
	SpheresList[1] = new BoundingSphere(Vector3D<float>(7.0f, 0.0f, 0.0f), 1.0f);
	SpheresList[2] = new BoundingSphere(Vector3D<float>(0.0f, 9.0f, 0.0f), 1.0f);
	SpheresList[3] = new BoundingSphere(Vector3D<float>(0.0f, 0.0f, 3.0f), 1.0f);
	SpheresList[4] = new BoundingSphere(Vector3D<float>(4.0f, 6.0f, 8.0f), 2.0f);
	SpheresList[5] = new BoundingSphere(Vector3D<float>(7.0f, 2.0f, 4.0f), 6.0f);
	SpheresList[6] = new BoundingSphere(Vector3D<float>(7.0f, 4.0f, 5.0f), 2.0f);

	//
	// Check if exist intersection
	//
	Result Sphere1IntersectSphere2 = SpheresList[0]->Intersect(*SpheresList[1]);
	Result Sphere1IntersectSphere3 = SpheresList[0]->Intersect(*SpheresList[2]);
	Result Sphere1IntersectSphere4 = SpheresList[0]->Intersect(*SpheresList[3]);
	Result Sphere2IntersectSphere6 = SpheresList[1]->Intersect(*SpheresList[5]);
	Result Sphere2IntersectSphere7 = SpheresList[1]->Intersect(*SpheresList[6]);

	//
	// Print results 
	//
	std::cout << " Sphere 1 Intersect Sphere 2 : " << Sphere1IntersectSphere2.GetisIntersected() << " Distance : " << Sphere1IntersectSphere2.GetDistance() << std::endl;
	std::cout << " Sphere 1 Intersect Sphere 3 : " << Sphere1IntersectSphere3.GetisIntersected() << " Distance : " << Sphere1IntersectSphere3.GetDistance() << std::endl;
	std::cout << " Sphere 1 Intersect Sphere 4 : " << Sphere1IntersectSphere4.GetisIntersected() << " Distance : " << Sphere1IntersectSphere4.GetDistance() << std::endl;
	std::cout << " Sphere 5 Intersect Sphere 6 : " << Sphere2IntersectSphere6.GetisIntersected() << " Distance : " << Sphere2IntersectSphere6.GetDistance() << std::endl;
	std::cout << " Sphere 5 Intersect Sphere 7 : " << Sphere2IntersectSphere7.GetisIntersected() << " Distance : " << Sphere2IntersectSphere7.GetDistance() << std::endl;

	return 0;
}