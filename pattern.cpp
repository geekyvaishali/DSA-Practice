//#include <iostream>
//using namespace std;

//int main()
//{
    //int row, col;

   // for (row = 1; row <= 5; row = row + 1)
    //{
       // for (col = 1; col <= 5; col = col + 1)
        //{
            //cout << "* ";
       // }
        //cout << endl;
   // }
//}
//#include <iostream>
//using namespace std;

//int main()
//{
    //int row, col;

    //for (row = 1; row <= 4; row = row + 1)
    //{
       // for (col = 1; col <= 5; col = col + 1)
       // {
         //   cout << 10 << " ";
        //}
        //cout << endl;
   // }
//}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 1; col <= 5; col = col + 1)
//         {
//             cout << row << " ";
//         }

//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 1; col <= 5; col = col + 1)
//         {
//             cout << col << " ";
//         }

//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 5; col >= 1; col = col - 1)
//         {
//             cout << col << " ";
//         }

//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     char name;

//     for (row = 1; row <= 5; row = row + 1)
//     {
//         name = 'a' + (row - 1);

//         for (col = 1; col <= 5; col = col + 1)
//         {
//             cout << name << " ";
//         }

//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     // METHOD 1:
//     int row;
//     char col;

//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 'a'; col <= 'e'; col = col + 1)
//         {
//             cout << col << " ";
//         }

//         cout << endl;
//     }

//     // METHOD 2:
//     /*
//     int row, col;
//     char name;

//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 1; col <= 5; col = col + 1)
//         {
//             name = 'a' + col - 1;
//             cout << name << " ";
//         }

//         cout << endl;
//     }
//     */

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int count = 1;
    // METHOD: 1
    for (row = 1; row <= 5; row = row + 1)
    {

        for (col = 1; col <= 5; col = col + 1)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }

    // METHOD: 2
    for (row = 1; row <= 5; row = row + 1)
    {

        for (col = 1; col <= 5; col = col + 1)
        {
            cout << ((row - 1) * 5 + col) << " ";
        }
        cout << endl;
    }
}