#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <cmath>

// add your tests here
  Coord3D pointP = {10,20,30};
  Coord3D pointQ = {-20, 21, -22};
  Coord3D pointR = {25,25,25};
  Coord3D pointS = {-20,-20,-20};
  double x = 3; 
  double y = 4; 
  double z = 5; 

TEST_CASE("fartherFromOrigin") {
  CHECK(length(&pointP) == 37.4166);
  CHECK(length(&pointQ) == 36.40054945);
}

TEST_CASE("fartherFromOrigin") {
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  CHECK(fartherFromOrigin(&pointS, &pointR) == &pointR);
}

TEST_CASE("move") {
    Coord3D ppos = {0, 0, 100.0};
    Coord3D pvel = {1, -5, 0.2};
    CHECK(ppos.x == 2);
    CHECK(ppos.y == -10);
    CHECK(ppos.z == 100.4);
}

TEST_CASE("createCoord3D/deleteCoord3D") {
    Coord3D *ppos = createCoord3D(x, y, z);
    CHECK((*ppos).x == 3);
    CHECK((*ppos).y == 4);
    CHECK((*ppos).z == 5);

    Coord3D *pvel = createCoord3D(x,y,z);    
    CHECK((*pvel).x == 3);
    CHECK((*pvel).y == 4);
    CHECK((*pvel).z == 5);

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}

