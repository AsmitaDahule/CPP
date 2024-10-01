#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    printf("Enter no.of rows\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        cout<<" ";
    }
    for(j=0;j<n;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}