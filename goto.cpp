#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
        goto even;
    else
        goto odd;

even:
    cout << "Even number";
    return 0;

odd:
    cout << "Odd number";

    return 0;
}