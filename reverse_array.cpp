#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, j, n;
    cout << "Enter the size of an array\n";
    cin >> n;

    cout << "Enter elements\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    i = 0;
    while (i < n / 2)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        i++;
    }

    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}