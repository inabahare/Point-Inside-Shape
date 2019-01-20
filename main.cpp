#include <iostream>
#include <vector>
#include "Point.h"
#include "isInside.h"
#include "generateSquare.h"

void checkPointInsideShape()
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
}

void checkSquareGenerator()
{
    Point P = Point(4.f, 1.f);

    std::vector<Point> square = generateSquare(P, 4, 4);
    
    std::cout << "The generated square has the coordinates:" << std::endl;

    for (auto s : square) 
    {
        std::cout << "("
                  << s.x
                  << ", "
                  << s.y
                  << ")"
                  << std::endl;
    }

}

int main() 
{
    std::cout << "Running the point inside shape thing" << std::endl;
    
    checkPointInsideShape();
    
    std::cout << "--------------------------------------------------" << std::endl  << " " << std::endl;
    std::cout << "Running the square generator" << std::endl;
    checkSquareGenerator();

    std::cout << std::endl;
    return 0;
}
