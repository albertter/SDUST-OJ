#include<iostream>
using namespace std;
class Character
{
    char c;
public:
    Character(){}
    char operator+(int n)
    {
        n=n%26;
        char a=char(c+('z'-'a'+1)+n);
        if(n<0&&c-'a'<-n)
            return a;
        else if(n==0)
            return c;
        else if(n>=0&&'z'-c<n)
            return c+'a'-'z'+n-1;
        else
            return char(c+n);
 
    }
    char operator-(int n)
    {
        n=n%26;
        char a=char(c+('z'-'a'+1)-n);
        if(n>0&&c-'a'<n)
            return a;
        else if(n==0)
            return c;
        else if(n<0&&'z'-c<-n)
            return c-('z'-'a')-n-1;
        else
            return char(c-n);
 
    }
    friend istream & operator>>(istream &is,Character &a);
    friend ostream & operator<<(ostream &os,Character &a);
};
istream & operator>>(istream &is,Character &a)
{
    is>>a.c;
    return is;
}
ostream & operator<<(ostream &os,Character &a)
{
    os<<a.c;
    return os;
}
int main()
{
    int cases, data;
    Character ch;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>ch;
        cin>>data;
        cout<<(ch + data)<<" "<<(ch - data)<<endl;
    }
}