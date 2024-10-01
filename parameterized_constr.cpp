#include<iostream>
using namespace std;
class constructor
{
    private:
        int a,b;
    public:
        constructor(double x, int y)
        {
            a=x;
            b=y;
        }
        constructor(int h=78,int j)
        {
            a=h;
            b=j;
        }
        void display()
        {
            cout<<"parameterized constructor invoked"<<endl;
            cout<<"a="<<a<<"b="<<b<<endl;
        }
};

int main()
{
    constructor c1(23,87);
    c1.display();
    constructor c2(54);
    c2.display();
    return 0;
}