#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
class Point
{
    double x,y;
public:
    friend class Circle;
    Point(double xx,double yy):x(xx),y(yy){}
    Point(const Point&p):x(p.x),y(p.y){}
 
 
};
class Circle
{
    Point po;
    double r;
public:
    Circle(Point p,double rr):po(p.x,p.y),r(rr){}
    Circle(const Circle &c):po(c.po.x,c.po.y),r(c.r){}
    int JudgeRelation(const Circle& another)
    {
        double l=sqrt((po.x-another.po.x)*(po.x-another.po.x)+(po.y-another.po.y)*(po.y-another.po.y));
        double aa=r-another.r;
        if(aa<0) aa=-aa;
        //if(r-another.r<0) r-another.r=-(r-another.r);
        if(l<aa) return 2;
 
        //double l2=sqrt((po.x-another.po.x)*(po.x-another.x)-(po.y-another.po.y)*(po.y-another.po.y));
        if(l>r+another.r) return 1;
        else if(l<aa) return 2;
        else if(l<r+another.r&&l>aa) return 5;
        else if(l=r+another.r&&l!=aa&&l) return 3;
        else if(l=aa) return 4;
 
 
    }
};
int main()
{
    int cases;
    double x, y, r;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        Point p1(x,y);
        Circle c1(p1, r);
        cin>>x>>y>>r;
        Point p2(x, y);
        Circle c2(p2, r);
        switch(c1.JudgeRelation(c2))
        {
        case 1:
            cout<<"Outside"<<endl;
            break;
        case 2:
            cout<<"Inside"<<endl;
            break;
        case 3:
            cout<<"Externally tangent"<<endl;
            break;
        case 4:
            cout<<"Internally tangent"<<endl;
            break;
        case 5:
            cout<<"Intersection"<<endl;
        }
    }
}