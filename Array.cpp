//Array

//#include <iostream>
//using namespace std;

//int main()
//{
    // WAYS OF PRINTING ARRAY;

    // 1: Way 1
    //int arr[5] = {1, 2, 3, 4, 5};

    // 2: Way 2
    //  int arr[] = {1,2,3,4,5};

    // 3: Way: 3
    // int arr[5] = {2,3}

    // 4: Way: 4
    // int arr[5];
    // for(int i = 0; i<5; i++){
    //  cin>>arr[i];
    // }

    // 5: Way: 5
    // int arr[5] = {0}

    // printing array
    //for (int i = 0; i < 5; i++)
    //{
        //cout << arr[i] << " ";
   // }
//}

//input Array

//#include <iostream>
//using namespace std;

//int main()
//{

    //int size;
    //cout << "Enter the size of an array: ";
    //cin >> size;

    // input array
    //int arr[1000];
    //for (int i = 0; i < size; i++)
    //{
        //cin >> arr[i];
    //}

    // printing array
   // for (int i = 0; i < size; i++)
    //{
       // cout << arr[i] << " ";
    //}
//}

//size Of Array


//#include <iostream>
//using namespace std;

//int main()
//{
   // int arr[5] = {1, 2, 3, 4, 5};
   // cout << "Size of array: " << sizeof(arr) << " ";

    //cout << "Elements in an array: " << sizeof(arr) / sizeof(arr[0]) << " ";

    //return 0;
//}

//access Arrays Value

//#include <iostream>
//using namespace std;

//int main()
//{
   // int arr[5] = {1, 2, 3, 4, 5};
    //cout << arr[0];

    //return 0;
//}

//min Element

//#include <iostream>
//using namespace std;

//int main()
//{
    //int arr[5] = {1, 2, 3, 4, 5};

    //int ans = INT_MAX;
    //for (int i = 0; i < 5; i++)
    //{
       // if (arr[i] < ans)
           // ans = arr[i];
    //}
    //cout << ans;

    //return 0;
//}

//max Element

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int ans = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
            ans = arr[i];
    }
    cout << ans;

    return 0;
}