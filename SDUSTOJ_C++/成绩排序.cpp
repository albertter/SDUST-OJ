#include<iostream>
#include <iomanip>
#include <string>
#include<cmath>
using namespace std;
class Student
{
    string name;
    int score;
public:
    Student(){}
    Student& setStudent(string n,int s)
    {
        name=n;
        score=s;
        return *this;
    }
    bool operator > (Student b)
    {
        if(score>b.score) return true;
        else if(score==b.score&&name<b.name) return true;
        else return false;
    }
    friend ostream& operator<<(ostream &os,Student &a);
};
ostream& operator<<(ostream &os,Student &a)
{
    os<<a.score<<" "<<a.name;
    return os;
}
int main()
{
    int cases;
    string name;
    int score;
    cin>>cases;
    Student students[cases], temp;
    for (int i = 0; i < cases; i++)
    {
       cin>>name>>score;
       students[i].setStudent(name, score);
    }
    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < cases - i - 1; j++)
        {
            if (!(students[j] > students[j + 1]))
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < cases; i++)
        cout<<students[i]<<endl;
    return 0;
}