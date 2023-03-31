#include <iostream>
#include <cmath>
#include "funcs.h"
// Task A
double length(Coord3D* p) //Points to class 
{
    double value = pow(p->x,2) + pow(p->y,2) + pow(p->z,2); //access members within class
    return sqrt(value); 
}
//Task B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    if (length(p1) > length(p2)) {
        return p1; 
    } else {
        return p2; 
    }
}

//Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt) {
   
    ppos->x = ppos->x + pvel->x * dt; 
    ppos->y = ppos->y + pvel->y * dt; 
    ppos->z = ppos->z + pvel->z * dt; 
    
}

//Task E
Coord3D* createCoord3D(double x, double y, double z) {
   
    Coord3D *p = new Coord3D(); //alocate new memory by calling 
    p -> x = x;
    p -> y = y;
    p -> z = z;

    return p;
}

void deleteCoord3D(Coord3D *p) {
    delete p; 
}