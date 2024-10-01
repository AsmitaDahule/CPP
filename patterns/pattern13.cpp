#include <iostream>
using namespace std;
void print13(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print13(n);
}

void print13(int n)
{
    int i, j;
     for(i=1;i<=n;i++)
     {  
        //numbers
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }

        //spaces
        for(j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }

        //numbers
        for(j=i;j>=1;j--){
            cout<<j;

        }
        cout<<endl;
     }
}
//by me