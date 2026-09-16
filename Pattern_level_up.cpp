//#include<iostream>
//using namespace std;

//int main()
//{
    //int row, col;
    
    //for(row=1;row<=5;row=row+1)
   // {
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<"*" <<"";
       // }
        //cout<<endl;
    //}
//}
//#include<iostream>
//using namespace std;

//int main()
//{
    //int row, col;

    //for(row = 1; row <= 5; row = row + 1)
    //{
       // for(col = 1; col <= row; col = col + 1)
        //{
            //cout << col  <<"  ";
        //}

        //cout << endl;
   // }

    //return 0;
//}
//#include<iostream>
//using namespace std;

//int main()
//{
    //int row, col;
    //for(row = 1; row <= 20; row = row + 1)
    //{
        //for(col = 1; col <= row; col = col + 1)
        //{
            //cout << row << " ";
        //}
        //cout << endl;
    //}
    //return 0;
//}
//#include<iostream>
//using namespace std;

//int main()
//{
    //int row, col;
    //for(row = 1; row <= 5; row = row + 1)
    //{
        //for(col = row; col >= 1; col = col - 1)
        //{
            //cout<<col<<"  ";
       // }
       // cout<<endl;
   // }
//}
//#include<iostream>
//using namespace std;

//int main()
//{
    //int row,col;
    //for(row=1;row<=5;row=row+1)
    //{
        //char name='a'+(row-1);
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<name <<" ";
        //}
        //cout<<endl;
    //}

//}
//#include <iostream>
//using namespace std;

//int main()
//{
    //int row, col;

    // METHOD 1:
    //for (row = 1; row <= 5; row = row + 1)
    //{
       // for (col = 1; col <= (5 - (row - 1)); col = col + 1)
        //{
            //cout << "* ";
        //}
        //cout << endl;
   // }

    // METHOD 2:
    //for (row = 5; row >= 1; row = row - 1)
     // {
        //for (col = 1; col <= row; col = col + 1)
        //{
            //cout << "* ";
        //}
        //cout << endl;
    //}
//}
//#include <iostream>
//using namespace std;

//int main()
//{
    //int row, col;

    // METHOD 1:
    //for (row = 1; row <= 5; row = row + 1)
    //{
        //for (col = 1; col <= (5 - (row - 1)); col = col + 1)
        //{
            //cout << col << " ";
        //}
        //cout << endl;
    //}

    // METHOD 2:
    //for (row = 5; row >= 1; row = row - 1)
    //{
        //for (col = 1; col <= row; col = col + 1)
        //{
            //cout << col << " ";
        //}
        //cout << endl;
    //}
//}
#include <iostream>
using namespace std;

int main()
{
    int row, col;

    // METHOD 1: My one
    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 1; col <= row; col = col + 1)
        {
            cout << (5 - (col - 1)) << " ";
        }
        cout << endl;
    }

    // METHOD 2: Sir one
    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 5; col >= (5 - row + 1); col = col - 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
