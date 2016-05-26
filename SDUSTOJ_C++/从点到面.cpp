#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Point
{
    int x,y;
public:
    Point(int xx,int yy):x(xx),y(yy){cout<<"A point ("<<x<<", "<<y<<") is created!"<<endl;}
    ~Point(){cout<<"A point ("<<x<<", "<<y<<") is erased!"<<endl;}
    Point(const Point & p):x(p.x),y(p.y){cout<<"A point ("<<x<<", "<<y<<") is copied!"<<endl;}
    int getX()const {return x;}
    int getY()const {return y;}
 
};
class Rectangle
{
    Point leftTop,rightBottom;
public:
    Rectangle(int x1,int y1,int x2,int y2):leftTop(x1,y1),rightBottom(x2,y2){cout<<"A rectangle ("<<leftTop.getX()<<", "<<leftTop.getY()<<") to ("<<rightBottom.getX()<<", "<<rightBottom.getY()<<") is created!"<<endl;}
    ~Rectangle(){cout<<"A rectangle ("<<leftTop.getX()<<", "<<leftTop.getY()<<") to ("<<rightBottom.getX()<<", "<<rightBottom.getY()<<") is erased!"<<endl;}
    Point &getLeftTop()
    {
        return leftTop;
    }
    Point  getRightBottome()
    {
        return this->rightBottom;
    }
    int getArea()
    {
        return -((rightBottom.getX()-leftTop.getX())*(rightBottom.getY()-leftTop.getY()));
    }
 
};
int main()
{
    int cases;
    int x1, y1, x2, y2;
 
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x1>>y1>>x2>>y2;
        Rectangle rect(x1,y1,x2,y2);
        cout<<"Area: "<<rect.getArea()<<endl;
        cout<<"Left top is ("<<rect.getLeftTop().getX()<<", "<<rect.getLeftTop().getY()<<")"<<endl;
        cout<<"Right bottom is ("<<rect.getRightBottome().getX()<<", "<<rect.getRightBottome().getY()<<")"<<endl;
    }
    return 0;
}