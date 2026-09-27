// sum,mul and void functions call

//#include<iostream>
//using namespace std;

//int sum(int a, int b)
//{
   // int ans=a+b;
   // return ans;
//}
//int mul(int a, int b)
//{
    //int ans=a*b;
   // return ans;
//}

//void fun()
//{
    //cout<<"hello sir\n";
//}

//int main()
//{
   // int a,b;
    //cout<<"enter the two number:";
    //cin>>a>>b;

    //cout<<sum(a,b);
    //cout<<endl;
    //cout<<mul(a,b);
    //cout<<endl;
    //fun();
//}

//#include<iostream>
//using namespace std;

//bool prime(int n)
//{
    //if(n < 2)
       // return 0;

    //for(int i = 2; i < n; i++)
    //{
        //if(n % i == 0)
       //     return 0;
    //}

    //return 1;
//}

//int Fact(int n) // default parameter
//{
    //int ans = 1;

    //for(int i = 1; i <= n; i++)
        //ans = ans * i;

    //return ans;
//}

//int main()
//{
    //int a, b;

    //cout << "Enter the number: ";
   // cin >> a >> b;

    // A is prime or not
   // cout << prime(a) << endl;

    // A ka Factorial
   // cout << Fact(a) << endl;

    // B is prime or not
    //cout << prime(b) << endl;

    // B ka Factorial
    //cout << Fact(b) << endl;

    // B-A is prime or not
    //cout << prime(b-a) << endl;

    // B-A ka factorial
    //cout << Fact(b-a) << endl;
//}

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{ // pass by reference
    int c;
    c = a;
    a = b;
    b = c;
}

void swap(float &c, float &d)
{ // function overloading
    float r = c;
    c = d;
    d = r;
}

int main()
{
    int a, b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;

    cout << "int type: " << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    cout << "float type: " << endl;
    float f1 = 4.6, f2 = 6.5;
    swap(f1, f2);
    cout << f1 << " " << f2 << endl;

    return 0;
}