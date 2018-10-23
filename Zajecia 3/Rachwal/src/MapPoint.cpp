#include <stdlib.h>
#include "../include/MapPoint.h"

MapPoint &construct(std::string name, float latitude, float longtitude) {
  MapPoint *mapPoint = (MapPoint*)malloc(sizeof(MapPoint));
  mapPoint->name = name;
  mapPoint->latitude = latitude;
  mapPoint->longtitude = longtitude;

  MapPoint &ref = *mapPoint;

  return ref;
}

void print(MapPoint mapPoint) {
  std::cout << "Position of " << mapPoint.name << ". Latitude: " << mapPoint.latitude << ". Longtitude: " << mapPoint.longtitude << std::endl;
}

void clear(MapPoint &mapPoint) {
  free(&mapPoint);
}