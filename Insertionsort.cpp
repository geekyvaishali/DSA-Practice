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

//     for (int i = 1; i < n; i++)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             if (arr[j] < arr[j - 1])
//                 swap(arr[j], arr[j - 1]);
//             else
//                 break;
//         }
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



 //Use Insertion Sort Algorithm to sort the array of integers in decreasing order.

 #include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the element in an array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}



 // Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. 


 #include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the element in an array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            else
                break;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}