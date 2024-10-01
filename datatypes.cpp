#include<iostream>
using namespace std;

int main()
{
    int a; //declaration
    a = 12; //initialization

    cout<<"size of int "<<sizeof(a)<<endl;
    
    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;

    // signed int e;
    // cout<<"size of signed "<<sizeof(e)<<endl;

    // unsigned int f;
    // cout<<"size of unsigned "<<sizeof(f)<<endl;

    short int g;
    cout<<"size of short "<<sizeof(g)<<endl;

    long int h;
    cout<<"size of long "<<sizeof(h)<<endl;

    return 0;
}