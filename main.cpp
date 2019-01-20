#include <iostream>
#include <vector>
#include "Point.h"
#include "isInside.h"

int main() 
{
    Point P = Point(4.f, 1.f);

    std::vector<Point> shape = 
    {
        Point(4.f, 0.f),
        Point(5.f, 1.f),
        Point(4.f, 2.f),
        Point(3.f, 1.f)
    };

    if (isInside(&P, &shape)) 
    {
        std::cout << "The point is inside the square" << std::endl;
    }
    else 
    {
        std::cout << "The point is outside the square" << std::endl;
    }

    return 0;
}