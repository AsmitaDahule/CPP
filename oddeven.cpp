#include<iostream>
using namespace std;
class oddev
{
    int a;
    public:
        void getdata();
        void putdata();
};

void oddev :: getdata()
{
    cout<<"Enter a number to be chack"<<endl;
    cin>>a;
}

void oddev :: putdata()
{
    if(a%2==0)
    cout<<"even";
    else
    cout<<"odd";
}
int main()
{
    oddev x;
    x.getdata();
    x.putdata();
    return 0;
}