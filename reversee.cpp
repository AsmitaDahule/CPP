#include <iostream>
using namespace std;
class rev
{
    int n;

public:
    void getdata();
    void putdata();
};

void rev::getdata()
{
    cout << "enter number";
    cin >> n;
}
void rev::putdata()
{
    int rev = 0;
    while (n > 0)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    cout << rev;
}

int main()
{
    rev a;
    a.getdata();
    a.putdata();
    return 0;
}