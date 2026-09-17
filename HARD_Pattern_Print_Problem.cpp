//#include<iostream>
//using namespace std;

//int main()
//{
    //int row,col,n;
    //cout<<"enter the number of rows:";
    //cin>>n;
    //n = 5; // Example value, replace with actual input
    //for(row=1;row<=n;row=row+1)
    //{
        //for(col=1;col<=n-row;col=col+1)
        //{
            //cout<<"  " ;
        //}
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<"* ";
        //}
        //cout<<endl;
    //}
//}

//#include<iostream>
//using namespace std;

//int main()
//{
   // int row,col,n;
    //cout<<"enter the number of row:";
    //cin>>n;
    //for(row=1;row<=n;row=row+1)
    //{
        //for(col=1;col<=n-row;col=col+1)
        //{
            //cout<<"  ";
        //}
       // for(col=1;col<=row;col=col+1)
       // {
            //cout<<row <<" ";
       // }
        //cout<<endl;
    //}
//}

//#include<iostream>
//using namespace std;

//int main()
//{
   // int row, col, n;
    //cout<<"enter the number of rows:";
    //cin>>n;
   // for(row=1;row <=n;row=row+1)
    //{
        //for(col=1;col<=n-row;col=col+1)
        //{
           // cout<<"  ";
        //}
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<col<<" ";
       // }
        //cout<<endl;
  //}
//}

//#include <iostream>
//using namespace std;

//int main()
//{
    //int row, col, n;
    //cout << "Input the number: ";
    //cin >> n;

    //char name;

    // METHOD 1;
    //for (row = 1; row <= n; row = row + 1)
    //{
        // space print
       // for (col = 1; col <= (n - row); col = col + 1)
            //cout << "  ";

        // Number print
        //for (col = 1; col <= row; col = col + 1)
        //{
           // name = 'A' + col - 1;
           // cout << name << " ";
        //}

       // cout << endl;
    //}

    // METHOD 2:
    //for (row = 1; row <= n; row = row + 1)
    //{
        // space print
        //for (col = 1; col <= (n - row); col = col + 1)
            //cout << "  ";

        // Number print
        //for (name = 'A'; name <= ('A' + row - 1); name = name + 1)
           // cout << name << " ";

        //cout << endl;
   // }
//}

#include <iostream>
using namespace std;

int main()
{
    int row, col, n;

    cout << "Enter the input: ";
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        // spaces
        for (col = 1; col <= n - row; col = col + 1)
        {
            cout << "  ";
        }

        // numbers
        for (col = row; col >= 1; col = col - 1)
        {
            cout << col << " ";
        }

        cout << endl;
    }

    return 0;
}