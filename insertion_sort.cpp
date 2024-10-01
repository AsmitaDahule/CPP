// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10], i, j, n;
//     cout << "Enter the size of an array\n";
//     cin >> n;

//     cout << "Enter elements\n";
//     for (i = 0; i < n; i++)
//         cin >> arr[i];

//     for(i=0;i<n;i++)
//     {
//         int temp=arr[i];
//         for(j=i;j>0; j--)
//         {   
//             if(arr[j]<arr[j-1])
//             arr[j]=arr[i-1];
//         }
//         arr[j]=temp;
//     }
//     for(i=0;i<n;i++)
//     cout<<arr[i];
// }