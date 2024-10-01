#include<iostream>
using namespace std;

int solve(int r,int unit,int arr[],int n)
{
    if(arr==0)
        return -1;

    int res=r*unit;
    int sum=0;
    int count=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        count++;
        if(sum>=res)
        break;
    }
    if(sum<res)
    return 0;
    return count;
}


int main()
{
    int r,unit,n;
    int arr[10];
    cout<<"Enter the no.of rat, unit,size of array"<<endl;
    cin>>r>>unit>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<solve(r,unit,arr,n);
}