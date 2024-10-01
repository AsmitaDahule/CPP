#include<iostream>
using namespace std;
class xyz
{
    int a, b;
    public:
        void getdata()
        {
            cout<<"enter numberes\n";
            cin>>a>>b;
        }
        void putdata()
        {
            cout<<"a="<<a<<" "<<"b="<<b<<endl;
        }
};

int main()
{
    xyz arr[5];
    int i;
    for(i=0; i<5; i++)
    arr[i].getdata();
    for(i=0; i<5; i++)
    arr[i].putdata();
    return 0;
}