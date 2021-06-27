#pragma once

class Result
{
private:
	bool  isIntersected;
	float distance;

public:
	Result(const bool isIntersected, const float distance)
		:isIntersected(isIntersected), distance(distance)
	{}																			

	inline bool GetisIntersected()  const noexcept { return isIntersected; }		
	inline float GetDistance()		const noexcept { return distance; }				
};