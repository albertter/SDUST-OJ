#include<iostream>
#include<iomanip>
#include<string.h>
#include<string>
using namespace std;
class Person
{
    string name;
    int age;
public:
    Person():name("no name"),age(0){cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is created!"<<endl;}
    Person(char *n,int a):name(n),age(a){cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is created!"<<endl;}
    ~Person(){cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is erased!"<<endl;}
    Person(const Person &p):name(p.name),age(p.age){cout<<"A person whose name is \""<<name<<"\" and age is "<<age<<" is cloned!"<<endl;}
    void showPerson(){cout<<"This person is \""<<name<<"\" whose age is "<<age<<"."<<endl;}
    Person& setName(char *nam)
    {
        //strcpy(name,nam);
        name=nam;
        return *this;
    }
    Person& setAge(int ag)
    {
        age=ag;
        return *this;
    }
};
int main()
{
    int cases;
    char str[80];
    int age;
 
    Person noname, Tom("Tom", 16), anotherTom(Tom);
    cin>>cases;
    for (int ca = 0; ca < cases; ca++)
    {
        cin>>str>>age;
        Person newPerson(str, age);
        newPerson.showPerson();
    }
    anotherTom.setName(str).setAge(18);
    anotherTom.showPerson();
    noname.showPerson();
    return 0;
}