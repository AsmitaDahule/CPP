#include<iostream>
using namespace std;

void pattern1();

int main()
{
    pattern1();
    return 0;
}

void pattern1()
{
    int row,col;
    cout<<"enter the number of row and col"<<endl;
    cin>>row>>col;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    
}
