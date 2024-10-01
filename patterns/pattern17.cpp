#include <iostream>
using namespace std;
void print17(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print17(n);
}

void print17(int n)
{   
    
    int i, j;
     for(i=0;i<n;i++)
     {
        char ch='A'+i;
        for(j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
     }
}
//by me