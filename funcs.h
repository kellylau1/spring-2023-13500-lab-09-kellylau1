#pragma once

#include "coord3d.h"

double length(Coord3D* p);
Coord3D * fartherFromOrigin(Coord3D, Coord3D); 
void move(Coord3D*, Coord3D*, double); 
Coord3D* createCoord3D(double, double, double);
void deleteCoord3D(Coord3D);