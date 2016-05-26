#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Animal
{
public:
 
    string name;
    char s;
    Animal(string nam,char ss):name(nam),s(ss) {}
    string getName()
    {
        return name;
    }
    char getSex()
    {
        return s;
    }
    virtual void cry()=0;
};
class Mouse:public Animal
{
public:
    Mouse(string nam,char ss):Animal(nam,ss) {}
    void cry()
    {
        cout<<"我叫"<<name<<"，是一只";
        if(s=='m')
        cout<<"男";
        if(s=='f')
        cout<<"女";
        cout<<"老鼠，我的叫声是：吱吱吱！"<<endl;
    }
};
class Cat:public Animal
{
public:
    Cat(string nam,char ss):Animal(nam,ss) {}
    void cry()
    {
        cout<<"我叫"<<name<<"，是一只";
        if(s=='m')
        cout<<"男";
        if(s=='f')
        cout<<"女";
        cout<<"猫，我的叫声是：喵喵喵！"<<endl;
    }
};
class Dog:public Animal
{
public:
    Dog(string nam,char ss):Animal(nam,ss) {}
    void cry()
    {
        cout<<"我叫"<<name<<"，是一条";
        if(s=='m')
        cout<<"男";
        if(s=='f')
        cout<<"女";
        cout<<"狗，我的叫声是：汪汪汪！"<<endl;
    }
};
int main( )
{
    string nam;
    char s;
    cin>>nam>>s;
    Animal *p;
    Mouse m1(nam, s);
    p=&m1;
    p->cry();
    cin>>nam>>s;
    Mouse m2(nam, s);
    p=&m2;
    p->cry();
    cin>>nam>>s;
    Cat c1(nam, s);
    p=&c1;
    p->cry();
    cin>>nam>>s;
    Dog d1(nam, s);
    p=&d1;
    p->cry();
    return 0;
}