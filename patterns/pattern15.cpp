#include <iostream>
using namespace std;
void print15(int n);

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    print15(n);
}

void print15(int n)
{   
    
    int i, j;
     for(i=1;i<=n;i++)
     {
        for(char ch ='A';ch<= 'A'+i;ch++)
        {
           cout<<ch<<" ";
        }
        cout<<endl;

     }
}
//by me