#include<iostream>
using namespace std;
void print1820(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print1820(n);
}

void print1820(int n)
{   
    
    int i, j;
     for(i=0;i<n;i++)
     {
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(j=0;j<2*(n-i-1);j++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;

     }
}
