//#include <iostream>
//using namespace std;

//int main()
//{
    //int row, col, n;
    //cout << "Input the number: ";
    //cin >> n;

    //for (row = 1; row <= n; row = row + 1)
    //{
        // space print
        //for (col = 1; col <= (n - row); col = col + 1)
           // cout << "  ";

        // star print
        //for (col = 1; col <= ((2*row)-1); col = col + 1)
           // cout << "* ";

       // cout << endl;
    //}
//} 

//#include <iostream>
//using namespace std;

//int main()
//{
   // int row, col, n;
   // cout << "Input the number: ";
    //cin >> n;

    //for (row = 1; row <= n; row = row + 1)
    //{
        // space print
        //for (col = 1; col <= (n - row); col = col + 1)
            //cout << "  ";

        // no's ( 1 to row ) Print
        //for (col = 1; col <= row; col = col + 1)
           // cout << col << " ";

        // no's ( row-1 to 1 ) Print
       // for (col = row - 1; col >= 1; col = col - 1)
          //  cout << col << " ";
        //cout << endl;
    //}
//}

//#include <iostream>
//using namespace std;

//int main()
//{
    //int row, col, n;

    //cout << "Input the number: ";
    //cin >> n;

    //for(row = 1; row <= n; row = row + 1)
    //{
        // Space
       // for(col = 1; col <= row - 1; col = col + 1)
        //{
           // cout << "  ";
        //}

        // Stars
        //for(col = 1; col <= 2 * (n - row) + 1; col = col + 1)
        //{
           // cout << "* ";
        //}

       // cout << endl;
   // }

    //return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
   // int row, col, n, space, starRange;
   // cout << "Input the number: ";
    //cin >> n;

    // Method 1:
    //for (row = 1; row <= n; row = row + 1)
    //{
        // space print
        //space = row - 1;
       // for (col = 1; col <= space; col = col + 1)
          //  cout << "  ";

        // star Print
        //starRange = (2 * n - 1) - (space * 2);
        //for (col = 1; col <= starRange; col = col + 1)
           // cout << "* ";

        //cout << endl;
    //}

    // Method 2:
    //for (row = n; row >= 1; row = row - 1)
   // {
        // space print
        //space = n - row;
        //for (col = 1; col <= space; col = col + 1)
           // cout << "  ";

        // star Print
        //starRange = 2 * row - 1;
        //for (col = 1; col <= starRange; col = col + 1)
          //  cout << "* ";

        //cout << endl;
    //}
//}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col, n, space;
//     cout << "Input the number: ";
//     cin >> n;

//     for (row = n; row >= 1; row = row - 1)
//     {
//         // star print
//         for (col = 1; col <= row; col = col + 1)
//             cout << "* ";

//         // space print
//         space = 2 * (n - row);
//         for (col = 1; col <= space; col = col + 1)
//             cout << "  ";

//         // star print
//         for (col = 1; col <= row; col = col + 1)
//             cout << "* ";

//         cout << endl;
//     }

//     for (row = 1; row <= n; row = row + 1)
//     {
//         // star print
//         for (col = 1; col <= row; col = col + 1)
//             cout << "* ";

//         // space print
//         space = 2 * (n - row);
//         for (col = 1; col <= space; col = col + 1)
//             cout << "  ";

//         // star print
//         for (col = 1; col <= row; col = col + 1)
//             cout << "* ";

//         cout << endl;
//     }
// }


#include <iostream>
using namespace std;

int main()
{
    int row, col, n, space;
    cout << "Input the number: ";
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        // space print
        space = 2 * (n - row);
        for (col = 1; col <= space; col = col + 1)
            cout << "  ";

        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        cout << endl;
    }
    for (row = n-1; row >= 1; row = row - 1)
    {
        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        // space print
        space = 2 * (n - row);
        for (col = 1; col <= space; col = col + 1)
            cout << "  ";

        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        cout << endl;
    }
}