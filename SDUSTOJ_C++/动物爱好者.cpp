#include<iostream>
#include <string>
using namespace std;
class Animal
{
    string name;
    int num;
public:
    Animal(){}
    void setAnimal(string nam,int n)
    {
        name=nam;
        num=n;
 
    }
    int getNum() const{return num;}
    string getName() const{return name;}
    Animal &operator=(Animal b)
    {
        name=b.name;
        num=b.num;
    }
};
class AnimalList
{
    Animal *animalLis;
    int numOfAnimal;
public:
    AnimalList(Animal *animals, int n)
    {
 
        animalLis=new Animal [n];
        for(int i=0;i<n;i++)
            animalLis[i]=animals[i];
        numOfAnimal=n;
    }
    ~AnimalList(){delete []animalLis;}
    int operator[](string nam)
    {
        for(int i=0;i<numOfAnimal;i++)
            if(animalLis[i].getName()==nam)
                return animalLis[i].getNum();
            return -1;
    }
};
int main()
{
    int cases;
    string name;
    int num;
    cin>>cases;
    Animal animals[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>num;
        animals[i].setAnimal(name, num);
    }
    AnimalList animalList(animals, cases);
 
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name;
        if (animalList[name] != -1)
            cout<<"There are "<<animalList[name]<<" "<<name<<"s."<<endl;
        else
            cout<<"There is none "<<name<<"."<<endl;
    }
    return 0;
}