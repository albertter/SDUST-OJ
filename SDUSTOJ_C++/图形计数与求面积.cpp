#include<iostream>
#include <iomanip>
using namespace std;
class Shape
{
    static int num;
public:
    Shape(){cout<<"A shape is created!"<<endl;num++;}
    virtual ~Shape(){cout<<"A shape is erased!"<<endl;}
    static int getNumOfShapes()
    {
        return num;
    }
    virtual double getArea()=0;
};
int Shape::num=0;
class Circle:public Shape
{
    static int num1;
    double r;
public:
    Circle(double rr):r(rr){cout<<"A circle is created!"<<endl;num1++;}
    ~Circle(){cout<<"A circle is erased!"<<endl;}
    double getArea(){return 3.14*r*r;}
    static int getNumOfCircles(){return num1;}
};
int Circle::num1=0;
class Square:public Shape
{
    static int num2;
    double l;
public:
    Square(double ll):l(ll){cout<<"A square is created!"<<endl;num2++;}
    ~Square(){cout<<"A square is erased!"<<endl;}
    double getArea(){return l*l;}
    static int getNumOfSquares(){return num2;}
};
int Square::num2=0;
int main()
{
    int cases;
    char type;
    double data;
    Shape *shape;
    cin>>cases;
    cout<<"numOfShapes = "<<Shape::getNumOfShapes();
    cout<<", numOfCircles = "<<Circle::getNumOfCircles();
    cout<<", numOfSquares = "<<Square::getNumOfSquares()<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>type>>data;
        switch(type)
        {
        case 'C':
            shape = new Circle(data);
            break;
        case 'S':
            shape = new Square(data);
            break;
        }
        cout<<"Area = "<<setprecision(2)<<fixed<<shape->getArea()<<endl;
        delete shape;
    }
    cout<<"numOfShapes = "<<Shape::getNumOfShapes();
    cout<<", numOfCircles = "<<Circle::getNumOfCircles();
    cout<<", numOfSquares = "<<Square::getNumOfSquares()<<endl;
}
