#include <vector>
#include "Point.h"

float D(Point       *firstPoint, Point *secondPoint, Point *checkPoint);

bool isLeft(Point   *firstPoint, Point *secondPoint, Point *checkPoint);

bool isInside(Point *checkPoint, std::vector<Point> *shape);

