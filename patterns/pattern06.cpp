#include<iostream>
using namespace std;
void print6(int n);

int main()
{
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
   print6 (n);
}
void print6(int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

}