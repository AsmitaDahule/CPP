#include<iostream>
using namespace std;
int main()
{
    int i, j, n, k;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=n-i; j>=0; j--)
        {
            cout<<"  ";
        }
        for(k=1; k<=2*i-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}