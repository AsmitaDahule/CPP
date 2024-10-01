#include<iostream>
using namespace std;
class loop
{
    int n;
    public:
        void getdata();
        void putdata();
};

void loop:: getdata()
{
    cout<<"enter n number";
    cin>>n;
}

void loop:: putdata()
{
    for(int i=1; i<=n; i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    loop m;
    m.getdata();
    m.putdata();
    return 0;
}