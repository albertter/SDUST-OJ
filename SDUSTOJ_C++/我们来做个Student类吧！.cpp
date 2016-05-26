#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Student
{
    char *name;
    int numOfScores;
    int *scores;
    static int id;
public:
 
    Student(char *n,int *s,int num):name(n),scores(s),numOfScores(num){cout<<"A student whose name is \""<<name<<"\" and id is "<<id+1<<" is created!"<<endl;id++;}
    ~Student(){cout<<"A student whose name is \""<<name<<"\" and id is "<<id<<" is erased!"<<endl;}
    void showStudent()
    {
        cout<<"This student is \""<<name<<"\" whose id is "<<id<<"."<<endl;
        cout<<"This student's scores are:";
        for(int i=0;i<numOfScores;i++)
        {
            cout<<" ";
            cout<<scores[i];
        }
 
        cout<<endl;
    }
};
int Student::id=0;
int main()
{
    int cases;
    char *str;
    int maxLenOfString, numOfCourses;
    int *scores;
 
    cin>>cases>>maxLenOfString>>numOfCourses;
    str = new char[maxLenOfString + 1];
    scores = new int[numOfCourses];
    for (int i = 0; i < cases; i++)
    {
        cin>>str;
        for (int j = 0; j < numOfCourses; j++)
            cin>>scores[j];
        Student stu(str,scores,numOfCourses);
        stu.showStudent();
    }
    return 0;
}