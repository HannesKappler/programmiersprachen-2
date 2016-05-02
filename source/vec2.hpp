#ifndef VEC2_HPP
#define VEC2_HPP

//Vec2 class definition
class Vec2
{
public:
	Vec2(float x, float y = 0)
	: _x{x}, _y{y} {};
public:
	float _x;
	float _y;
};

#endif //VEC2_HPP
