#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Graphic
{
private:
    double x;
public:
    Graphic(double xx):x(xx){}
    virtual void show()=0;
    double getX(){return x;}
};
class Shape:public Graphic
{
public:
    Shape(double xx):Graphic(xx){}
    virtual double area()=0;
};
class Solid:public Graphic
{
public:
    Solid(double xx):Graphic(xx){}
    virtual double area()=0;
    virtual double volume()=0;
};
class Square:public Shape
{
public:
    Square(double xx):Shape(xx){}
    double area(){return getX()*getX();}
    void show(){cout<<"Square, side:"<<getX()<<", area:"<<area()<<"."<<endl;}
};
class Circle:public Shape
{
public:
    Circle(double xx):Shape(xx){}
    double area(){return getX()*getX()*3.14;}
    void show(){cout<<"Circle, radius:"<<getX()<<", area:"<<area()<<"."<<endl;}
};
class Cube:public Solid
{
public:
    Cube(double xx):Solid(xx){}
    double area(){return getX()*getX()*6;}
    double volume(){return getX()*getX()*getX();}
    void show(){cout<<"Cube, side:"<<getX()<<", area:"<<area()<<", volume:"<<volume()<<"."<<endl;}
};
class Ball:public Solid
{
public:
    Ball(double xx):Solid(xx){}
    double area(){return getX()*getX()*3.14*4;}
    double volume(){return getX()*getX()*getX()*3.14;}
    void show(){cout<<"Ball, radius:"<<getX()<<", area:"<<area()<<", volume:"<<volume()<<"."<<endl;}
};
 
int main()
{
    Graphic *gp[100];
    int cases;
    cin>>cases;
    for(int i = 0; i < cases; ++i)
    {
        string types;
        double value;
        cin>>types>>value;
        if(types == "square")
            gp[i] = new Square(value);
        if(types == "cube")
            gp[i] = new Cube(value);
        if(types == "ball")
            gp[i] = new Ball(value);
        if(types == "circle")
            gp[i] = new Circle(value);
    }
    for(int i = 0; i < cases; ++i)
    {
        gp[i]->show();
        delete gp[i];
    }
}