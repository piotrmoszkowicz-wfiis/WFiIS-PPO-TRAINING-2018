#pragma once
#include <iostream>
#include "MapPoint.h"

void movePoint(MapPoint& mapPoint, float newLatitude, float newLongtitude);
MapPoint &inTheMiddle(MapPoint mapPoint1, MapPoint mapPoint2, std::string newName);
