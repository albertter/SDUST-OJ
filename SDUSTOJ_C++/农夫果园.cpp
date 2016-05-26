#include<iostream>
#include<iomanip>
using namespace std;
class Fruit
{
private:
    string name;
    double price;
    int num;
public:
    Fruit & input()
    {
        cin>>price>>num;
        return *this;
    }
    virtual double total() = 0;
    double getPrice(){return price;}
    int getNum(){return num;}
};
class Apple:public Fruit
{
public:
    Apple(){}
    double total()
    {
        return getPrice()*getNum()*30;
    }
};
class Banana:public Fruit
{
public:
    Banana(){}
    double total()
    {
        return getPrice()*getNum()*25;
    }
};
class Pear:public Fruit
{
public:
    Pear(){}
    double total()
    {
        return getPrice()*getNum()*20;
    }
};
int main()
{
    Fruit* fruit;
    string fruit_name;
    double sum = 0.0;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; i++)
    {
        cin >> fruit_name;
        if(fruit_name == "Apple")
            fruit = new Apple();
        if(fruit_name == "Banana")
            fruit = new Banana();
        if(fruit_name == "Pear")
            fruit = new Pear();
        fruit->input();
        sum += fruit->total();
        delete fruit;
    }
    cout << "Total Price : " << sum << endl;
 
     return 0;
}