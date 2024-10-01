#include <iostream>
using namespace std;
void print16(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print16(n);
}

void print16(int n)
{   
    
    int i, j;
     for(i=0;i<n;i++)
     {
        for(char ch ='A';ch<= 'A'+(n-i-1);ch++)
        {
           cout<<ch<<" ";
        }
        cout<<endl;

     }
}
//by me