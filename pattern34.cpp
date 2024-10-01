#include <iostream>
using namespace std;
void pattern3();
void pattern4();
int main()
{
    // pattern3();
    pattern4();
    return 0;
}

void pattern3()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4()
{
    int n, i, j;
    i = 1;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i * j ;
            j++;
        }
        cout << endl;
        i++;
    }
}