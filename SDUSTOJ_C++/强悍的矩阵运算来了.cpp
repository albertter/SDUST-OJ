#include<iostream>
#include<vector>
using namespace std;
class Matrix
{
   int m,n;
   double  **mat;
   int f;
public:
    Matrix(){f=1;}
    ~Matrix(){}
    friend istream &operator>>(istream&is,Matrix&s)
    {
        is>>s.m>>s.n;
        s.mat=new double*[s.m];
        for(int i=0;i<s.m;i++)
        {
            s.mat[i]=new double [s.n];
            //cout<<i<<endl;
        }
        for(int i=0;i<s.m;i++)
            for(int j=0;j<s.n;j++)
            {
                is>>s.mat[i][j];
            }
        return is;
    }
    friend ostream &operator<<(ostream&os,Matrix s)
    {
        if(s.f==0) {cout<<"Error"<<endl;return os;}
 
 
        for(int i=0;i<s.m;i++)
        {
            for(int j=0;j<s.n;j++)
            {
                if(j!=0)cout<<" ";
                cout<<s.mat[i][j];
 
            }
            cout<<endl;
        }
        return os;
    }
 
    Matrix operator+(Matrix& b)
    {
        if(m!=b.m||n!=b.n){Matrix temp1;temp1.f=0;temp1.m=0;temp1.n=0;return temp1;}
        Matrix temp;temp.m=m;temp.n=n;
        temp.mat=new double*[m];
        for(int i=0;i<m;i++)
        {
            temp.mat[i]=new double [n];
        }
 
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                temp.mat[i][j]=mat[i][j]+b.mat[i][j];
            }
        return temp;
    }
    Matrix operator* (Matrix& b)
    {
        if(n!=b.m){Matrix temp1;temp1.f=0;temp1.m=0;temp1.n=0;return temp1;}
    Matrix temp;temp.m=m;temp.n=b.n;
        temp.mat=new double*[m];
        for(int i=0;i<m;i++)
        {
            temp.mat[i]=new double [b.n];
        }
    for (int i=0; i<m; i++)
        for (int j=0; j<b.n; j++)
            for (int k=0; k<n; k++)
                temp.mat[i][j] += mat[i][k] * b.mat[k][j];
    return temp;
    }
};
int main()
{
    int cases, i;
    cin>>cases;
    for (i = 0; i < cases; i++)
    {
        Matrix A, B, C, D;
        cin>>A>>B;
        C = A + B;
        D = A * B;
        cout<<"Case "<<i + 1<<":"<<endl;
        cout<<C<<endl;
        cout<<D;
    }
    return 0;
}