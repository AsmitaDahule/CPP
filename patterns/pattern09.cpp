#include<iostream>
using namespace std;
void print7(int n);
void print8(int n);


int main()
{
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
   print7(n);
   print8(n);
}
void print7(int n)
{   int i,j;
    for( i=0; i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for( j=0; j< 2*i+1; j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

}

void print8(int n)
{   int i,j;
    for( i=0; i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=0;j< 2*(n-i)-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}