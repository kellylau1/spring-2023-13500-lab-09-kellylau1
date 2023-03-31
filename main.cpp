#include <iostream>
#include "funcs.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

    //Task A
    std::cout << length(&pointP) << std::endl; // would print 37.4166

    //Task B
    std::cout << fartherFromOrigin(&pointP, &pointQ) << std::endl; 
   
    //Task C 
    Coord3D ppos = {0, 0, 100.0};
    Coord3D pvel = {1, -5, 0.2};

    move(&ppos, &pvel, 2.0); // object pos gets changed
    std::cout << ppos.x << " " << ppos.y << " " << ppos.z << std::endl; // prints: 2 -10 100.4

  //Task E
    double x = 1; 
    double y = 2; 
    double z = 3; 
    
    std::cout << "Enter position: ";
    std::cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    std::cout << "Enter velocity: ";
    std::cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    std::cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);


  return 0;
}
