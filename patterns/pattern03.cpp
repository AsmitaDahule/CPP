#include<iostream>
using namespace std;
void print3
(int n);

int main()
{
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
   print3 (n);
}
void print3(int n)
{
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

}