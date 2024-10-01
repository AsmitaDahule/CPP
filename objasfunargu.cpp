#include<iostream>
using namespace std;
class time
{
    int h,m;
    public:
        void getdata()
        {
            cout<<"enter hours and minutes";
            cin>>h>>m;
        }
        void putdata()
        {
            cout<<"hours="<<h<<" "<<"minutes="<<m;
        }
        void sum(time t1, time t2)
        {
            h=(t1.m+t2.m)/60;
            m=(t1.m+t2.m)%60;
            h=h+(t1.h+t2.h);
        }
};

int main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
    t1.putdata();
    t2.putdata();
    t3.putdata();
    return 0;
}

