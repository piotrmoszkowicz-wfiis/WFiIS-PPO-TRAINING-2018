#pragma once
#include <iostream>

struct MapPoint {
  std::string name;
  float latitude;
  float longtitude;
};

/**
 * Function which constructs single MapPoint
 * 
 * 
 * @param (string) name
 * @param (float)  latitude
 * @param (float)  longtitude
 * 
 * @return (MapPoint)
 */
MapPoint &construct(std::string name, float latitude, float longtitude);

/**
 * Prints mapPoint in nice way 
 *
 * @param (MapPoint) mapPoint
 */
void print(MapPoint mapPoint);

/**
 * Clears memory used for mapPoint
 * 
 * @param (MapPoint) mapPoint
 */
void clear(MapPoint &mapPoint);