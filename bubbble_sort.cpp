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
    while (i < n)
    {
        j = 0;
        while (j < n - 1 - i)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
          
        }
          i++;
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
