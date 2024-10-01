#include <iostream>
using namespace std;
void print19(int n);
void pattern20(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print19(n);
    pattern20(n);
}

void print19(int n)
{

    int i, j;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
void pattern20(int n)
    {   
        int i,j;
        for (i = 0; i < n; i++)
        {

            for (j = 0; j <i + 1; j++)
            {
                cout << "*";
            }
            for (j = 0; j < 2 * (n - i)-2; j++)
            {
                cout << " ";
            }
            for (j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
