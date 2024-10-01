#include<iostream>
using namespace std;
void sum(int a=5, int b=10);
int main()
{
    sum();
    sum(10);
    sum(10, 20);
    return 0;
}

void sum(int a, int b)
{
    cout<<"sum="<<a+b<<endl;
}