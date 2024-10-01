#include<iostream>
using namespace std;
int main(){
    int n, rev=0;
    cin>>n;
    int temp=n;
    while(n>0){
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(temp==rev){
        cout<<"Number is palindrome";
        
    }
    else
    {
        cout<<"Not palindrome number";
    }
    return 0;
}