#include <iostream>
#include <map>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    map<string, string>dic;
    map<string, string>::iterator it;
    //string str1[100001], str2[100001];
    char s1[21], s2[21], word[21];
    int n, k;
    //cin >> n;
    while(scanf("%d", &n)!=EOF)
    {

        for(int i = 0; i < n; i++)
        {
            //cin >> str1[i] >> str2[i];
            scanf("%s%s", s1, s2);
            dic[s2] = s1;
        }
        //cin >> k;
        scanf("%d", &k);
        //string word[100001];
        for(int j = 0; j < k; j++)
        {
            //cin >> word[j];
            scanf("%s", &word);
            if(dic.count(word))
                printf("%s\n", dic[word].c_str());
            else
                //cout << "eh" << endl;
                printf("eh\n");

        }
        dic.clear();
    }

    return 0;
}
