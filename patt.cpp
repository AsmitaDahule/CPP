#include<iostream>
using namespace std;
void pattern();

int main()
{
    pattern();
    return 0;
}

void pattern()
{
    int row , column;
    cout<<"Enter the size of an array"<<endl;
    cin>>row>>column;
    for(int i=1; i<=row; i++)
    {
        for(int j=row-i; j>=1; j--)
        {
            cout<<" ";
        }
        for(int k=1; k<=row; k++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
     
}