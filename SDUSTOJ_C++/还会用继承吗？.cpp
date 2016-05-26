#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
class Base
{
protected:
 
    int x;
public:
    Base(int xx):x(xx){cout<<"Base = "<<x<<" is created."<<endl;}
    Base(const Base &p):x(p.x){cout<<"Base = "<<x<<" is copied."<<endl;}
    ~Base(){cout<<"Base = "<<x<<" is erased."<<endl;}
};
class Derived:public Base
{
    int y;
public:
    Derived(int xx,int yy):Base(xx),y(yy){cout<<"Derived = "<<y<<" is created."<<endl;}
    Derived(const Derived&p):Base(p),y(p.y){cout<<"Derived = "<<y<<" is copied."<<endl;}
    ~Derived(){cout<<"Derived = "<<y<<" is erased."<<endl;}
 
 
};
int main()
{
    int cases, data1, data2;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>data1>>data2;
        Base base1(data1), base2(base1);
 
        Derived derived1(data1, data2), derived2(derived1);
    }
}