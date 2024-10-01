#include <iostream>
using namespace std;
void print12(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print12(n);
}

void print12(int n)
{
    int i, j;
    int start = i;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}