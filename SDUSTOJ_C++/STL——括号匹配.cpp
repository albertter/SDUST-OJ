#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdio>
using namespace std;
int main()
{
    stack <int> s;
    string c;
    while(cin>>c!=NULL)
    {
        int f=0;
        for(int i=0;i<c.size();i++)
        if(c[i]=='(')
            s.push(c[i]);
        else if(c[i]==')')
        {
            if(s.empty())
            {

            }
            else


        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
