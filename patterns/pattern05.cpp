#include<iostream>
using namespace std;
void print5(int n);

int main()
{
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
   print5 (n);
}
void print5(int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}