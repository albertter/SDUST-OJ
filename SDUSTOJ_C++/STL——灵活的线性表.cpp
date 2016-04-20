#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{

    float a=0,b=0,c=0;
    //vector <int>::iterator first=vet.begin();
    string s;
    cin>>s>>a>>b;
    vector <float> vet(a,b);
    vector <float>::iterator it;
    while(cin>>s!=NULL)
    {

//        //float a=0,b=0,c=0;
//        if(s=="Build")
//            {
//                cin>>a>>b;
//                for(int i=0;i<a;i++)
//                    vet.push_back(b);
//            }
        if(s=="Modify")
            {
                cin>>a>>b;
                vet[a-1]=b;
            }
        if(s=="Insert")
            {
                cin>>a>>b>>c;
                vet.insert(vet.begin()+a-1,b,c);
            }
        if(s=="Erase")
            {
                cin>>a>>b;
                vet.erase(vet.begin()+a-1,vet.begin()+b);
            }
        if(s=="Print")
            {
                cin>>a>>b;
                for(it=vet.begin()+a-1;it!=vet.begin()+b;it++)
                {
                    if(it!=vet.begin())
                        cout<<" ";
                    cout<<"["<<it-vet.begin()+1<<"]:"<<*it;
                }
                cout<<endl;
            }
            //vet.clear();
    }
    return 0;
}
