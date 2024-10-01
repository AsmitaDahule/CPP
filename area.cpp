#include<iostream>
using namespace std;
void area(int r);
void cir(int r);

void area(int r)
{
    float a;
    a=3.14*r*r;
    cout<<"area of circle:"<<a<<endl;
}

void cir(int r)
{
    float c;
    c=2*3.14*r;
    cout<<"area of circumference:"<<c;
}
int main()
{
    int r;
    cout<<"enter the radius of circle";
    cin>>r;
    area(r);
    cir(r);
    return 0;
}