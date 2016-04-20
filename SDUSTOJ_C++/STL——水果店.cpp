#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int m;
    string f;
    int n;
    map<string, int>num;
    map<string, int>::iterator it;
    while(scanf("%d",&m)!=EOF)
    {
        //cin >> m;
        for(int i = 0; i < m; i++)
        {
            cin >> f >> n;
            num[f]+=n;
        }
        //sort(num.begin(),num.end());
        for(it = num.begin(); it != num.end(); it++)
        {
            cout << it->first << ":" << it->second << endl;
        }
        num.clear();
    }
    return 0;
}
