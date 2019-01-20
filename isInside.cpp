#include "isInside.h"

float D(Point *firstPoint, Point *secondPoint, Point *checkPoint)
{
    // https://stackoverflow.com/a/2752753
    return (secondPoint->x - firstPoint->x)  *
           (checkPoint ->y - firstPoint->y)  -
           (checkPoint ->x - firstPoint->x)  *
           (secondPoint->y - firstPoint->y);
}

// Returns true if the checkPoint is on the left of the two points
// False if the checkpoint is on the right or on the line between the two points
bool isLeft(Point *firstPoint, Point *secondPoint, Point *checkPoint) 
{
    return D(firstPoint, secondPoint, checkPoint) > 0.f;
}

bool isInside(Point *checkPoint, std::vector<Point> *shape) 
{
    // Go through all the points in the shape
    for (int i = 0; i < shape->size(); ++i)
    {
        // More readable names (and one to prevent overflow)
        int current = i;
        int next    = i + 1;

        // The last point needs to connect with the first point
        // So do this to prevent an overflow (and set the next point to the very first point)
        if (next == shape->size())
            next = 0;

        Point *currentPoint = &shape->at(current);
        Point *nextPoint    = &shape->at(next);

        bool outside = isLeft(currentPoint, nextPoint, checkPoint);

        if (outside) 
            return false;
    }
    return true;
}