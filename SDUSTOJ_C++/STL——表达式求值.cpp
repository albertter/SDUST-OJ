#include <iostream>
#include <cstdio>
#include <stack>
#include <iomanip>
using namespace std;
int main()
{
    stack<double>ss;
    double a[101];
    char s[101];
    int n, i;
    while(cin>>n)
    {
        for( i = 0; i < n; i++)
            cin >> a[i] >> s[i];
        //ss.push(a[0]);
        for(i = 0; i < n; i++)
        {
            if(i == 0)
                ss.push(a[i]);
            if(s[i] == '*')
                ss.top() *= a[i + 1];
            if(s[i] == '+')
                ss.push(a[i + 1]);
            if(s[i] == '-')
                ss.push(-a[i + 1]);
            if(s[i] == '=')
                break;
        }
        double sum = 0;
        while(!ss.empty())
        {
            sum += ss.top();
            ss.pop();
        }
        cout << setiosflags(ios::fixed) << setprecision(2) << sum << endl;
    }
    return 0;
}
