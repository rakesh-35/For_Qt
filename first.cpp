// Write a program that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
#include <iostream>
#include <conio.h>
using namespace std;


class Shape
{
public:
    int width;
    int height;
public:
    Shape(int width_, int height_) : width(width_), height(height_){};

public:
    virtual int area() const{
        return 0;
    }
    
};

class Triangle: public Shape
{   
public:
    Triangle(int w, int h): Shape(w, h){};
    ~Triangle(){};
public:
    int area() const override{
        return 0.5 * height * width;
    }

};

class Rectnagle : public Shape
{
public:
    Rectnagle(int w_rect, int h_rect): Shape(w_rect, h_rect){};
    ~Rectnagle(){};

public:
    int area() const override{
        return width * height;
    }
};

int main(){
    Triangle *triangle = new Triangle(20, 30);
    cout << triangle->area() << endl;

    Rectnagle *rectangle = new Rectnagle(10, 20);
    cout << rectangle->area() << endl;

}





