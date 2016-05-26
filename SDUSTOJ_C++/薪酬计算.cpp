#include<iostream>
#include<iomanip>
#include<string.h>
#include<string>
using namespace std;
class Person
{
    string job;
    string name;
 
public:
    int base;
    Person(string nam):name(nam){}
    string getName()const{return name;}
    int getBase()const{return base;}
    virtual void input()=0;
    virtual void show()=0;
    virtual int pay()=0;
};
class Manager:public Person
{
public:
    Manager(string nam):Person{nam}{}
    void input(){cin>>base;}
    int pay()
    {
        return getBase()*1000;
    }
    void show()
    {
        cout<<getName()<<" (Manager)";
    }
};
class Employee:public Person
{
    int k;
public:
    Employee(string nam):Person{nam}{}
    void input(){cin>>base>>k;}
    int pay()
    {
        return getBase()*1000*12+k*1000*getBase();
    }
    void show()
    {
        cout<<getName()<<" (Employee)";
    }
};
class HourlyWorker:public Person
{
    int k;
public:
    HourlyWorker(string nam):Person{nam}{}
    void input(){cin>>base>>k;}
    int pay()
    {
        return getBase()*k;
    }
    void show()
    {
        cout<<getName()<<" (HourlyWorker)";
    }
};
class CommWorker:public Person
{
    int k;
public:
    CommWorker(string nam):Person{nam}{}
    void input(){cin>>base>>k;}
    int pay()
    {
        return getBase()*1000*12+k*1000*0.02;
    }
    void show()
    {
        cout<<getName()<<" (CommWorker)";
    }
};
 
int main()
{
    Person *person;
    string name, job;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> job >> name;
        if(job == "Manager")
            person = new Manager(name);
        if(job == "Employee")
            person = new Employee(name);
        if(job == "HourlyWorker")
            person = new HourlyWorker(name);
        if(job == "CommWorker")
            person = new CommWorker(name);
        person->input();
        person->show();
        cout << " Annual Salary is " << person->pay() << "." << endl;
    }
 
}