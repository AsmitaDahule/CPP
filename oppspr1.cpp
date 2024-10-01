#include<iostream>
using namespace std;
void swap(void);
void fact(void);
void fib(void);
int main()
{
    int i, n=4;
    cout<<"1.swap\n2.fact\n3.fib\n";
    cout<<"Enter your choice\n";
    cin>>i;
    for(i=0; i<n; i++)
    {
        switch(i)
        {
            case 1:
            swap();
            break;
            case 2:
            fact();
            break;
            case 3:
            fib();
            break;
            default:
            cout<<"Invalid case\n";
        }
    }
}

void swap()
{
    int a, b, temp;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    a=b;
    b=temp;
    temp=a;
    cout<<"after swap a is"<<a<<"and b is"<<b<<endl;
}

void fact()
{
    int f, i;
    cout<<"Enter the positive integer\n"<<endl;
    cin>>f;
    for(i=1;i<f;i++)
    {
        f=f*i;
    }
    cout<<"factorial is"<<f;

}