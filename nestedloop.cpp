#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}