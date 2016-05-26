#include<iostream>
#include<iomanip>
#include<string.h>
#include<string>
using namespace std;
class Person
{
 
public:
    string name;
    int age;
    char sex;
    string address;
    string tel;
    string getName()const{return name;}
    Person(string nam,int age,char sex,string addr,string t):name(nam),age(age),sex(sex),address(addr),tel(t){}
};
class Cadre : public Person
{
public:
 
    string pos;
 
    Cadre(string nam,int age,char sex,string addr,string t,string p):Person(nam,age,sex,addr,t),pos(p){}
    void setTel(string te)
    {
        tel=te;
    }
};
 
class Student :  public Person
{
 
public:
    string maj;
    void setTel(string te)
    {
        tel=te;
    }
    Student(string nam,int age,char sex,string addr,string t,string m):Person(nam,age,sex,addr,t),maj(m){}
};
class Student_Cadre :virtual public Student,virtual public Cadre
{
 
public:
    float wage;
    Student_Cadre(string nam,int age,char sex,string addr,string t,string m,string p,float wa):Student(nam,age,sex,addr,t,m),Cadre(nam,age,sex,addr,t,p),wage(wa){}
    void display()
    {
        cout<<"name:"<<Student::getName()<<endl;
        cout<<"age"<<Student::age<<endl;
        cout<<"sex:"<<Student::sex<<endl;
        cout<<"address:"<<Student::address<<endl;
        cout<<"tel:"<<Cadre::tel<<endl;
        cout<<"major:"<<maj<<endl;
        cout<<"post:"<<pos<<endl;
        cout<<"wages:"<<wage<<endl;
    }
    void setAddr(string na)
    {
        Student::address=na;
    }
};
int main( )
{
    string name, major, post, addr, tel;
    int age;
    char sex;
    float wage;
    cin>>name>>age>>sex>>addr>>tel>>major>>post>>wage;
 
    Student_Cadre st_ca(name, age, sex,  addr, tel, major, post,wage);
    st_ca.display( );
 
    cout<<endl;
    string newAddr, newTel1, newTel2;
    cin>>newAddr>>newTel1>>newTel2;
 
    st_ca.setAddr(newAddr);
    st_ca.Student::setTel(newTel1);
    st_ca.Cadre::setTel(newTel2);
    st_ca.display( );
    return 0;
}