#include<iostream>
using namespace std;

class addition
{
private:
    int a, b;
public:
    void getdata();
    void putdata();
};
 void addition::getdata()
{
    cout<<"Enter two number";
    cin>>a>>b;
}

 void addition::putdata()
{
    cout<<"Addition="<<a+b;
}
int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();
    return 0;
}