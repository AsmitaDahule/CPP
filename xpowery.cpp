// #include<iostream>
// using namespace std;
// int main(){
//     int x, y, prod=1, count=1;
//     cin>>x>>y;
//     while(count<=y)
//     {
//         prod=prod*x;
//         count++;
//     }
//     cout<<prod;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int x, y, prod=1, count=1;
    cin>>x>>y;
    for(count=1; count<=y; count++){
        prod=prod*x;
    }
    cout<<prod;
    return 0;
}

