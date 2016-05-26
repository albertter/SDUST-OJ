#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Point
{
    int x, y;
    static int numOfPoints;
public:
    Point(int xx = 0, int yy = 0): x(xx), y(yy)
    {
        cout << "The Point (" << x << ", " << y << ") is created! ";
        numOfPoints++;
        cout<<"Now, we have "<<numOfPoints<<" points."<<endl;
    }
    ~Point()
    {
        cout << "A Point (" << x << ", " << y << ") is erased! ";
        numOfPoints--;
        cout<<"Now, we have "<<numOfPoints<<" points."<<endl;
    }
    Point(const Point & p): x(p.x), y(p.y)
    {
        cout << "A Point (" << x << ", " << y << ") is copied! ";
        numOfPoints++;
        cout<<"Now, we have "<<numOfPoints<<" points."<<endl;
    }
    static int getNumOfPoints()
    {
        return numOfPoints;
    }
    int getX()const
    {
        return x;
    }
    int getY()const
    {
        return y;
    }
 
};
int Point::numOfPoints = 0;
class Circle
{
    Point center;
    int radius;
    static int numOfCircles;
public:
    Circle(int a, int b, int c): center(a, b), radius(c)
    {
        cout << "A circle at (" << center.getX() << ", " << center.getY() << ") and radius " << radius << " is created! ";
        numOfCircles++;
        cout<<"Now, we have "<<numOfCircles<<" circles."<<endl;
    }
    Circle(Point a, int c): center(a), radius(c)
    {
        cout << "A circle at (" << center.getX() << ", " << center.getY() << ") and radius " << radius << " is created! ";
        numOfCircles++;
        cout<<"Now, we have "<<numOfCircles<<" circles."<<endl;
    }
    Circle(const Circle & p): center(p.center), radius(p.radius)
    {
        cout << "A circle at (" << center.getX() << ", " << center.getY() << ") and radius " << radius << " is created! ";
        numOfCircles++;
        cout<<"Now, we have "<<numOfCircles<<" circles."<<endl;
    }
    ~Circle()
    {
        cout << "A circle at (" << center.getX() << ", " << center.getY() << ") and radius " << radius << " is erased! ";
        numOfCircles--;
        cout<<"Now, we have "<<numOfCircles<<" circles."<<endl;
    }
    static int getNumOfCircles()
    {
        return numOfCircles;
    }
    Point &getCenter()
    {
        return center;
    }
    bool pointInCircle(Point &p)
    {
        if(((p.getX() - center.getX()) * (p.getX() - center.getX()) + (p.getY() - center.getY()) * (p.getY() - center.getY())) < radius)
            return true;
        else
            return false;
    }
};
int Circle::numOfCircles = 0;
int main()
{
    int cases,num;
    int x, y, r, px, py;
    Point aPoint(0,0), *bPoint;
    Circle aCircle(1,1,1);
    cin>>cases;
    cout<<"We have "<<Point::getNumOfPoints()<<" points and "<<Circle::getNumOfCircles()<<" circles now."<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        bPoint = new Point(x,y);
        Circle circle(*bPoint, r);
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            cin>>px>>py;
            if (circle.pointInCircle(*(new Point(px, py))))
            {
                cout<<"("<<px<<", "<<py<<") is in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
            else
            {
                cout<<"("<<px<<", "<<py<<") is not in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
        }
        delete bPoint;
    }
    cout<<"We have "<<Point::getNumOfPoints()<<" points, and "<<Circle::getNumOfCircles()<<" circles."<<endl;
    return 0;
}