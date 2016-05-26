#include<iostream>
#include <string>
using namespace std;
class Array
{
    int length;
    int *mems;
public:
    Array()
    {
        mems=NULL;
        length=0;
    }
    ~Array(){delete []mems;}
    bool operator==(Array &b)
    {
        if(length!=b.length)
            return false;
        int flag=0;
        for(int i=0;i<length;i++)
        {
            if(mems[i]!=b.mems[i])
            {
                return false;
                //break;
 
            }
 
           // if(i==length&&mems[i]==b.mems[i])
              // return true;
        }
 
 
//        if(this==&b)
//            return true;
 
            return true;
 
    }
    friend ostream &operator<<(ostream &os,Array &b);
    friend istream &operator>>(istream &is,Array &b);
};
ostream &operator<<(ostream &os, Array &b)
{
    for(int i=0;i<b.length;i++)
    {
        if(i!=0)
            os<<" ";
        os<<b.mems[i];
    }
    //delete []b.mems;
    return os;
 
}
istream &operator>>(istream &is,Array &b)
{
    int n;
    is>>n;
    b.length=n;
    b.mems=new int [n];
    for(int i=0;i<b.length;i++)
        is>>b.mems[i];
    return is;
    //delete []b.mems;
}
int main()
{
    int cases;
    cin>>cases;
    Array arraies[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>arraies[i];
    }
    cout<<arraies[0]<<endl;
    for (int i = 1; i < cases; i++)
    {
        if (arraies[i] == arraies[i - 1])
        {
            cout<<arraies[i]<<" "<<"equal to above."<<endl;
        }
        else
        {
            cout<<arraies[i]<<" "<<"unequal to above."<<endl;
        }
    }
    return 0;
}