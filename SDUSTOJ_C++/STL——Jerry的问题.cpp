#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int f=0;
    int a, b;
    set <int> aa, bb, c, d, e;
    set <int>::iterator it;
    set <int>::iterator it1;
    while(1)
    {
        f=0;
        while(1)
        {
            if(cin >> a);
            else
            {
                f=1;
                break;
            }
            if(a == 0)
                break;
            else
                aa.insert(a);
        }
        while(1)
        {
            if(cin >> b);
            else
            {
                f=1;
                break;
            }
            if(b == 0)
                break;
            else
                bb.insert(b);
        }
        if(f==1)
            break;
        set_symmetric_difference(aa.begin(), aa.end(), bb.begin(), bb.end(), inserter(c, c.begin()));
        if(c.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        aa.clear();
        bb.clear();
        c.clear();
    }



    return 0;
}
