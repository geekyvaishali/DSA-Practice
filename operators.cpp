// #include <iostream>
// using namespace std;

// int main()
// {
//     // ================= ASSIGNMENT OPERATOR =================

//     int value = 10;

//     // Subtract 15 from value
//     value = value - 15;

//     cout << "Value after operation: " << value;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     // ================= BINARY OPERATORS =================

//     // Integer divided by integer gives an integer result
//     cout << "13 / 2 = " << 13 / 2 << endl;

//     // Decimal number gives a decimal result
//     cout << "13.6 / 2 = " << 13.6 / 2 << endl;

//     // Multiplication of decimal and integer
//     cout << "13.2 * 4 = " << 13.2 * 4 << endl;

//     // Multiplication is commutative
//     cout << "4 * 13.2 = " << 4 * 13.2 << endl;


//     // ================= PRACTICE =================

//     int answer = 10 - 5 + 6 / 10 - 8 * 20;

//     /*
//         Let's solve the expression step by step:
//
//         10 - 5 + 6 / 10 - 8 * 20
//
//         Division and multiplication first:
//
//         10 - 5 + 0 - 160
//
//         Now solve from left to right:
//
//         5 + 0 - 160
//
//         5 - 160
//
//         -155
//     */

//     cout << "Answer = " << answer;

//     return 0;
// }



//#include<iostream>
//using namespace std;

//int main()
//{
    //------COMPARISON OP -------// return 0 or 1

    //int a,b;
    //cout<<"enter the value of a ";
    //cin>>a;
    //cout<<"enter the value of b ";
    //cin>>b;

    //if(a==b)
    //cout<<"yes";
    //else
    //cout<<"no";

    //if(a<b)
    //cout<<"yes";
    //else
    //cout<<"no";


    //if(a>b)
    //cout<<"yes";
    //else
    //cout<<"no";

    //if(a<=b)
    //cout<<"yes";
    //else
   // cout<<"no";

   //if(a!=b)
   //cout<<"yes";
   //else
   //cout<<"no";
//}


// #include <iostream>
// using namespace std;

// int main()
// {
//     // -------- LOGICAL OPERATORS --------

//     int a, b, c;
//     cin >> a >> b >> c;

//     // 1. AND (&&) operator
//     if (a > b && a > c)
//         cout << "yes";
//     else
//         cout << "no";


//     // 2. OR (||) operator
//     char ch;
//     cout << "Enter the character: ";
//     cin >> ch;

//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         cout << "Vowel";
//     else
//         cout << "Consonant";


//     // 3. NOT (!) operator
//     cout << !123 << endl;
//     cout << !0 << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // ================= BITWISE OPERATORS =================

    // &  -> AND
    // |  -> OR
    // ^  -> XOR
    // << -> Left Shift
    // >> -> Right Shift
    // ~  -> Complement


    // ================= AND (&) =================

    int a = 5;
    int b = 3;

    int andResult = a & b;

    cout << "5 & 3 = " << andResult << endl;


    // ================= OR (|) =================

    int orResult = a | b;

    cout << "5 | 3 = " << orResult << endl;


    // ================= XOR (^) =================

    int xorResult = a ^ b;

    cout << "5 ^ 3 = " << xorResult << endl;


    // ================= LEFT SHIFT (<<) =================

    int leftResult = 5 << 2;

    cout << "5 << 2 = " << leftResult << endl;


    // ================= RIGHT SHIFT (>>) =================

    int rightResult = 20 >> 2;

    cout << "20 >> 2 = " << rightResult << endl;


    // ================= COMPLEMENT (~) =================

    int number = 22;

    int complementResult = ~number;

    cout << "~22 = " << complementResult << endl;


    return 0;
}