#include<iostream>
using namespace std;
void print2(int n);

int main()
{
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
   print2 (n);
}
void print2(int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}