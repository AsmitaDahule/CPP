#include<iostream>
using namespace std;

int main()
{
    int n, sum;
    cout<<"enter value"<<endl;
    cin>>n;
    for(int count=1; count<n; count++)
    {
     sum=sum+count;
    }
    cout<<sum;
    return 0;
}