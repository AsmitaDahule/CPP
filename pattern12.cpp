#include <iostream>
using namespace std;
void pattern1();
void pattern2();
int main()
{
    pattern1();
    pattern2();

    return 0;
}

void pattern1()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

void pattern2()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
