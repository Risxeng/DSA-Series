// #include <iostream>
// using namespace std;

// void ReverseArray(int arr[] , int n) {

//     int i = 0;
//     int j = n-1;

//     while (i < j)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
    
// }

// int main() {

//     int arr[] = {1,4,3,2,6,5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     ReverseArray(arr,n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// *****************************************************************using Librabry****************************************************************************

#include<iostream>
#include<algorithm>  // it include std::reverse
using namespace std;

int main () {

    int arr[] = {1,4,3,2,6,5,10,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,arr+n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}