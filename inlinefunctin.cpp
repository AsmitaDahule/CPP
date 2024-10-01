#include<iostream>
using namespace std;
inline int square(int a)
{
    return a*a;
}

inline int cube(int b)
{
    return b*b*b;
}

int main()
{
    cout<<"square of a="<<square(16)<<endl;
    cout<<"cube of b="<<cube(3);
    return 0;
}