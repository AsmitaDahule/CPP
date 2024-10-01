#include<iostream>
using namespace std;

void print11(int n);

int main()
{
    int n;
    cout<<"enter row number";
    cin>>n;
    print11(n);
}

void print11(int n)
{
    int i , j;
    for(i=1;i<=2*n-1;i++)
    {int star=i;
     if(i>n) star=2*n-i;
     //if(i>n?star=2*n-i:i,j)
     //awsome yar!! kuchh bhi likho correct ans dera
    
    for(j=1;j<=star;j++){
        cout<<"*";
    }
    cout<<endl;
    }
}