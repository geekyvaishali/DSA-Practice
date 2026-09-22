//#include<iostream>
//using namespace std;

//int main()
//{
    //int n;
    //cout<<"enter the number :";
    //cin>>n;
    //int i =1;

    //while(i<=n)
    //{
       // cout<<i<<endl;
       // i++;
    //}
//}

//table

//#include<iostream>
//using namespace std;

//int main()
//{
    //int n;
    //cout<<"enter the number: ";
    //cin>>n;
    //int i=1;

    //while(i<=10)
    //{
        //cout<<n*i<<endl;
        //i++;
   // }
//}

//#include <iostream>
//using namespace std;

//int main()
//{

    //int i = 1; // initialize

    //do
    //{
      //  cout << i << " ";
       // i++;           // update
    //} while (i <= 10); // break

   // return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
    //int i = 1, sum = 0, n;
    //cout << "Enter a number: ";
    //cin >> n;

    //do
    //{
       // sum += i;
        //i++;
    //} while (i <= n);

    //cout << "Sum: " << sum << endl;

    //return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
    // Break;
   // for (int i = 1; i <= 10; i++)
   // {
       // if (i == 4)
         //   break;
        //cout << i << " ";
    //}

    //cout << endl;

    // continue
   // for (int i = 0; i <= 100; i++)
    //{
       // if (i % 4 == 0)
           // continue;
        //cout << i << " ";
    //}
//}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i;
//     cout<<"enter the number:";
//     cin>>i;

//     switch(i)
//     {
//         case 1:
//             cout<<"Mohit";
//             break;

//         case 2:
//             cout<<"Rohit";
//             break;

//         default:
//             cout<<"Sohit";
//             break;
//     }
// }


// #include <iostream> 
// using namespace std; 
//  
// int main() 
// { 
//     int i; 
//     cout << "Enter the number: "; 
//     cin >> i; 
//  
//     switch (i) 
//     { 
//     case 1: 
//         cout << "Mon"; 
//         break; 
//     case 2: 
//         cout << "Tue"; 
//         break; 
//     case 3: 
//         cout << "Wed"; 
//         break; 
//     case 4: 
//         cout << "Thurs"; 
//         break; 
//     case 5: 
//         cout << "Fri"; 
//         break; 
//     case 6: 
//         cout << "Sat"; 
//         break; 
//     case 7: 
//         cout << "Sun"; 
//         break; 
//     default: 
//         cout << "Enter a valid day"; 
//     } 
// }

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int i = 20;

    // EXAMPLE 1;
    if (i == 30)
    {
        int n = 20;
        cout << n;
    }

    // EXAMPLE 2;
    for (; i <= 30; i++)
        cout << i << " ";
}