#include<iostream>
#include <iomanip>
#include <string>
#include<cmath>
using namespace std;
class Persons
{
    string name;
    int age[100];
    static int nn;
public:
    void addAPerson(string n,int a)
    {
        name=n;
        age[nn]=a;
        nn++;
    }
    double getAveAge()
    {
        double sum;
        for(int i=0;i<nn;i++)
        {
            sum+=age[i];
        }
        return sum/nn;
    }
};
int Persons::nn=0;
int main()
{
    int cases, age;
    string name;
    Persons persons;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>age;
        persons.addAPerson(name, age);
    }
    co