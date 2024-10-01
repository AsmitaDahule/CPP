#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1;
    i = ++i + i++;
    // 2   + now i=2 then i++ is 3
    cout << i << endl;
    j = j++ + ++j;
    // j=1 after j++ it become 2 . now j is 2 then ++j is 3
    cout << j << endl;

    int i = 1, j = 2, k;
    k = i + j + i++ + j++ + ++i + ++j;
    // i=1 j=2 i++ means i=1 but after ++ is 2 then j=2 but after j++ is become 3 then i=2 then ++i 3 then j=2 then ++j is 4
    cout << k << endl;

    int i = 0;
    i = i++ - --i + ++i - i--;
    cout << i << endl;

    int i = 1, j = 2, k = 3;
    int m = i-- - j-- - k--;
    cout << m;

    int i = 10, j = 20, k;
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout << k;

    return 0;
}