#include<iostream>
using namespace std;
class pog_neg
{
    int a;
    public:
        void getdata();
        void putdata();
};

void pog_neg :: getdata()
{
    cout<<"Enter a number to be chack";
    cin>>a;
}

void pog_neg :: putdata()
{
    if(a<0)
    cout<<"negative";
    else
    cout<<"positive";
}
int main()
{
    pog_neg x;
    x.getdata();
    x.putdata();
    return 0;
}