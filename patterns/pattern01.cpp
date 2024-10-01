#include<iostream>
using namespace std;
void print1 ()
{
    int row,i;
    cin>>row;
    for(i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    print1();
}