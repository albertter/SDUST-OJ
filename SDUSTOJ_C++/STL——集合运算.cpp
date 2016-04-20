#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    set <int> a,b;
    set <int> v1,v2,v3,v4,v5;
    set <int>::iterator it,it1;
    int t,n1,n2,aa[111],bb[111];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n1;
        int j;
        for(j=0;j<n1;j++)
        {
            cin>>aa[j];
            a.insert(aa[j]);
        }
        cin>>n2;
        for(j=0;j<n2;j++)
        {
            cin>>bb[j];
            b.insert(bb[j]);
        }
        cout<<"Case# "<<i<<":"<<endl;
        cout<<"A = {";
        for(it=a.begin();it!=a.end();it++)
        {

            if(it!=a.begin())
                cout<<", ";
            cout<<*it;
        }
        cout<<"}"<<endl;
        cout<<"B = {";
        for(it=b.begin();it!=b.end();it++)
        {

            if(it!=b.begin())
                cout<<", ";
            cout<<*it;
        }
        cout<<"}"<<endl;
        cout<<"A u B = {";
        set_union(a.begin(),a.end(),b.begin(),b.end(),inserter(v1,v1.begin()));
        for(it1=v1.begin();it1!=v1.end();it1++)
        {

            if(it1!=v1.begin())
                cout<<", ";
            cout<<*it1;
        }
        cout<<"}"<<endl;
        cout<<"A n B = {";
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),inserter(v2,v2.begin()));
        for(it1=v2.begin();it1!=v2.end();it1++)
        {

            if(it1!=v2.begin())
                cout<<", ";
            cout<<*it1;
        }
        cout<<"}"<<endl;
        cout<<"A - B = {";
        set_difference(a.begin(),a.end(),b.begin(),b.end(),inserter(v3,v3.begin()));
        for(it1=v3.begin();it1!=v3.end();it1++)
        {

            if(it1!=v3.begin())
                cout<<", ";
            cout<<*it1;
        }
        cout<<"}"<<endl;
        cout<<"SA = {";
        set_difference(b.begin(),b.end(),a.begin(),a.end(),inserter(v5,v5.begin()));
        for(it1=v5.begin();it1!=v5.end();it1++)
        {

            if(it1!=v5.begin())
                cout<<", ";
            cout<<*it1;
        }
        cout<<"}"<<endl;
        cout<<"SB = {";
        set_difference(a.begin(),a.end(),b.begin(),b.end(),inserter(v4,v4.begin()));
        for(it1=v4.begin();it1!=v4.end();it1++)
        {

            if(it1!=v4.begin())
                cout<<", ";
            cout<<*it1;
        }
        cout<<"}"<<endl;
        a.clear();
        b.clear();
        v1.clear();
        v2.clear();
        v3.clear();
        v4.clear();
        v5.clear();



    }
    return 0;
}
