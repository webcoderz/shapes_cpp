#include "shapes.h"
#include<iostream>
using namespace std;
using std::cout;

//cody webb
int main()
{

 Circle C1(20, 20, 40);
 Triangle T1(70, 70, 20, 30);
 Rectangle R1(150, 150, 40, 40);
 int i;
 Shape* ArrOfShapes[3] = { &C1, &T1, &R1}; // array of different shapes
 for (int i = 0; i < 3; i ++ ) { // loop through all objects in the array

 ArrOfShapes[i] -> display(); // don’t care what kind of object, display it
 }
 i= 0;
 double totalarea = 0.0;
 while ( i < 3) { // loop through all objects in the array
 totalarea = totalarea + ArrOfShapes[i]->area(); // get area for this object
 i++;
 }
 cout << "\nThe total area for all Shape objects is " << totalarea << endl;
return 0;
}
