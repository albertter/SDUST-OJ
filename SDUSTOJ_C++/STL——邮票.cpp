#include <iostream>
#include <set>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    string c;
    int a;
    multiset<int>set1;
    multiset<int>::iterator it;
    multiset<int>::iterator it1;
    while(cin>>n&&n!=0)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> c;
            if(c == "B")
            {
                cin>>a;
                set1.insert(a);
            }

            if(c == "G")
            {
                it1=min_element(set1.begin(),set1.end());
                cout<<*it1<<endl;
                set1.erase(it1);
                //for(it = set1.begin(); it != set1.end(); it++)
                //{

                //}
            }
            if(c=="0")
                break;

        }
//        for(it = set1.begin(); it != set1.end(); it++)
//        {
//            if(it!=set1.begin())
//                cout<<" ";
//            cout << *it;
//        }
//        cout<<endl;
        set1.clear();


    }

    return 0;
}
