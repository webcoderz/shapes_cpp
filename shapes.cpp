#include <iostream>
using std::cout;
using namespace std;

#include "shapes.h"


//cody webb
//shape
//shape constructor
Shape::Shape(int a,int b){setX(a);setY(b);};
Shape::Shape(){setX(0);setY(0);}
//set x & y
void Shape::setX(int a){x=a;} //sets x
void Shape::setY(int b){y=b;} //sets y
//get x&y
int Shape::getX(){return x;} // returns int x
int Shape::getY(){return y;} // returns int y
// shape area
double Shape::area(){return 0;}
//shape display
char Shape::display(){return 0;}


//circle
//circle Constructors
Circle::Circle(int a,int b, int radius){setX(a);setY(b);setRadius(radius);}
Circle::Circle(){setX(0);setY(0);setRadius(0);}
//set radius
void Circle::setRadius(int r){radius=r;}
//get radius
int Circle::getRadius(){return radius;}
//circle area
double Circle::area(){return 3.1415926535 * getRadius() * getRadius();}
//circle display
char Circle::display(){cout << "shape: Circle\nx: "<<getX() << "\ny: "<<getY()<<"\nradius: "<<getRadius();}



//rectangle
//rectangle constructors
Rectangle::Rectangle(int a,int b, int height, int width){setX(a);setY(b);setHeight(height);setWidth(width);}
Rectangle::Rectangle(){setX(0);setY(0);setHeight(0);setWidth(0);}
//set height
void Rectangle::setHeight(int h){height=h;}
//get height
int Rectangle::getHeight(){return height;}
//set width
void Rectangle::setWidth(int w){width=w;}
//get width
int Rectangle::getWidth(){return width;}
//rectangle area
double Rectangle::area(){return getX()*getY();}
//rectangle display
char Rectangle::display(){cout << "\nshape: Rectangle\nx: "<<getX() << "\ny: "<<getY()<<"\nwidth: "<<getWidth()<<"\nheight: "<<getHeight();}


//triangle
//triangle Constructors
Triangle::Triangle(int a,int b, int height, int base){setX(a);setY(b);setHeight(height);setBase(base);}
Triangle::Triangle(){setX(0);setY(0);setHeight(0);setBase(0);}
//set height
void Triangle::setHeight(int h){height=h;}
//get height
int Triangle::getHeight(){return height;}
//set base
void Triangle::setBase(int b){base=b;}
//get base
int Triangle::getBase(){return base;}
//triangle area
double Triangle::area(){return 0.5*(getBase()*getHeight());}
//Triangle display
char Triangle::display(){cout << "\nshape: Triangle\nx: "<<getX() << "\ny: "<<getY()<<"\nbase: "<<getBase()<<"\nheight: "<<getHeight();}
