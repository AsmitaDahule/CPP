// #include<iostream>
// using namespace std;
// int main(){
//     int a=0, b=1, c=0;
//     int n;
//     cout<<"Enter number";
//     cin>>n;
//     while(c<=n){
//         cout<<"\n"<<c;
//         a=b;
//         b=c;
//         c=a+b;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=0, b=1, c=0;
//     int n, count=1;
//     cout<<"Enter number";
//     cin>>n;
//     while(count<=n){
//         cout<<"\n"<<c;
//         a=b;
//         b=c;
//         c=a+b;
//         count++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a=0, b=1, c=0, count=1,n;
    cin>>n;
    for(count=1; count<=n; count++){
        cout<<"\n"<<c;
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}