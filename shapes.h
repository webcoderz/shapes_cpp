#ifndef SHAPES_H
#define SHAPES_H

//cody webb
class Shape{
public:
  Shape(int, int);
  Shape();
  int getX();
  void setX(int);
  int getY();
  void setY(int);
  virtual char display();
  virtual double area();
private:
  int x;
  int y;
};



class Circle : public Shape{
public:
  //A constructor with no parameters and one with x, y, radius parameters (in that)
  Circle();
  Circle(int,int,int);
  int getRadius(); //returns an int for the circles radius
  void setRadius(int); //assigns the circles radius
  char display() ;//- displays the circle as a text string containing the word Circle, and the x, y and radius values
  double area(); //- calculates and returns a double of the area.
private:
  int radius;
};



class Rectangle : public Shape{
public:
//A constructor with no parameters and one with x, y, height, width parameters(in that order)
  Rectangle();
  Rectangle(int,int,int,int);
  int getHeight(); //returns an int for the rectangles height
  void setHeight(int); //assigns the rectangles height
  int getWidth(); // returns an int for the rectangles width
  void setWidth(int); // assigns the rectangles width
  char display() ; // - displays the rectangle as a text string containing the word Rectangle,and the x, y, width and height values
  double area();// - calculates and returns a double of the area.
private:
  int width;
  int height;
};



class Triangle : public Shape{
  public:
    //A constructor with no parameters and one with x, y, height, base parameters (in that order)
    Triangle();
    Triangle(int, int, int, int);
    int getHeight(); //returns an int for the Triangle height
    void setHeight(int); //assigns the Triangle height
    int getBase(); //returns an int for the Triangle base
    void setBase(int); //assigns the Triangle base
    char display() ; // - displays the triangle as a text string containing the word Triangle, and the x, y, width and height values
    double area(); //- calculates and returns a double of the area.
  private:
    int base;
    int height;


  };


#endif
