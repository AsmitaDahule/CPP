#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age==18)
    {
        cout<<"You are just 18 so wait for a year";
    }
    else if(age>18)
    {
        cout<<"You can vote";
    }
    else{
        cout<<"you can't do aanything , grown up guys ";
    }
}