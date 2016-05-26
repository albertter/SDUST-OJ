#include<iostream>
using namespace std;
class Demo
{
    int a;
public:
    Demo(int aa=0):a(aa){cout<<"A data "<<a<<" is created!"<<endl;}
    ~Demo(){cout<<"A data "<<a<<" is erased!"<<endl;}
    void show(){cout<<"This is data "<<a<<endl;}
};
int main()
{
    Demo tmp(10), tmp2;
    int d;
    cin>>d;
    Demo tmp3(d);
 
    tmp.show();
    tmp2.show();
    tmp3.show();
    return 0;
}