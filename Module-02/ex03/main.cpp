#include "Fixed.hpp"
#include "Point.hpp"
#include "Triangle.hpp"

int main( void ) 
{
	Point const a = Point(0,5);
	Point const b = Point(-5,0);
	Point const c = Point(5,0);
	Point const point = Point(1,3);
	bool isInside = bsp(a, b, c, point);
	if (isInside)
		std::cout << "True";
	else
		std::cout << "False";
	return 0;
}