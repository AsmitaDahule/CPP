#include <iostream>
using namespace std;
void print13(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print14(n);
}

void print14(int n)
{
    int i, j;
    int count=1;
     for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

     }
}
//by me