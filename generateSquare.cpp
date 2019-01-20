#include "generateSquare.h"

std::vector<Point> generateSquare(Point start, float length, float height) 
{
    std::vector<Point> Square = 
    {
        Point(start.x - (length / 2), start.y - (height / 2)), // Bottom left point
        Point(start.x - (length / 2), start.y + (height / 2)), // Top left point
        Point(start.x + (length / 2), start.y + (height / 2)), // Top right point
        Point(start.x + (length / 2), start.y - (height / 2)), // Bottom right point
    };

    return Square;
}