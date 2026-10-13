// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n;
//     cout << "Enter the size of an array: ";
//     cin >> n;

//     cout << "Enter the element in an array: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = n - 2; i >= 0; i--)
//     {
//         bool isSwap = 0;
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 isSwap = 1;
//             }
//         }
//         if (!isSwap)
//             break;
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// class Solution
// {
// public:
//     // Function to sort the array using bubble sort algorithm.
//     void bubbleSort(int arr[], int n)
//     {
//         for (int i = n - 2; i >= 0; i--)
//         {
//             bool isSwap = 0;
//             for (int j = 0; j <= i; j++)
//             {
//                 if (arr[j] > arr[j + 1])
//                 {
//                     swap(arr[j], arr[j + 1]);
//                     isSwap = 1;
//                 }
//             }
//             if (!isSwap)
//                 break;
//         }
//     }
// };


// Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n;
//     cout << "Enter the size of an array: ";
//     cin >> n;

//     cout << "Enter the element in an array: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = n - 2; i >= 0; i--)
//     {
//         bool isSwap = 0;
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 isSwap = 1;
//             }
//         }
//         if (!isSwap)
//             break;
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



 // Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from
 // the last.

 // #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n;
//     cout << "Enter the size of an array: ";
//     cin >> n;

//     cout << "Enter the element in an array: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = 1; i <= n - 1; i++)
//     {
//         bool isSwap = 0;
//         for (int j = n - 1; j >= i; j--)
//         {
//             if (arr[j] < arr[j - 1])
//             {
//                 swap(arr[j], arr[j - 1]);
//                 isSwap = 1;
//             }
//         }
//         if (!isSwap)
//             break;
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }  


// Bubble Sort Algorithm to sort the array of char in ascending order. 

#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'b', 'z', 'a', 'm', 'y'};
    int n = 5;

    for (int i = n - 2; i >= 0; i--)
    {
        bool isSwap = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = 1;
            }
        }
        if (!isSwap)
            break;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}