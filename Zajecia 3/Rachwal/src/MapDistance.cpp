#include "../include/MapDistance.h"

void movePoint(MapPoint& mapPoint, float newLatitude, float newLongtitude) {
  mapPoint.latitude += newLatitude;
  mapPoint.longtitude += newLongtitude;
}

MapPoint &inTheMiddle(MapPoint mapPoint1, MapPoint mapPoint2, std::string newName) {
  float newLatitude = (mapPoint1.latitude + mapPoint2.latitude) / 2;
  float newLongtitude = (mapPoint1.longtitude + mapPoint2.longtitude) / 2;
  return construct(newName, newLatitude, newLongtitude);
}