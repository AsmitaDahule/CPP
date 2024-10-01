#include <iostream>
using namespace std;
void print21(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print21(n);
}

void print21(int n)
{

    int i, j;
    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < n; j++)

        {
            if (j == 0 || j == 2 * n - 1)
            {
                cout << n;
            }
            else if(j==1 || j==n-2)
            {
                cout<<n-1;
            }
        }
        for(j=0;j<2*n-1;j++)
        {
            cout<<n-i;
        }
        cout<<endl;
    }
    

    cout << endl;
}
