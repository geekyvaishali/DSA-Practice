//#include<iostream>
//using namespace std;

//int main()
//{
    // int i;
    // for(i=1;i<=100;i++)
    // {
    //     cout<<i<<endl;
    // }

    // char name;
    // for(name='a';name<='z';name++)
    // {
    //     cout<<name<<endl;
    // }

    // int n,i;
    // cout<<"enter a number:";
    // cin>>n;
    // for(i=n;i>=1;i=i-1)
    // {
    //     cout<<i<<endl;
    // }

    // int n;
    // for(n=1;n<=100;n=n+3)
    // {
    //     cout<<n<<endl;
    // }

    // int n,i;
    // cout<<"enter a number:";
    // cin>>n;
    // for(i=1;i<=10;i=i+1)
    // {
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    // }

    // int n,i;
    // cout<<"enter a number:";
    // cin>>n;
    // for(i=n;i<=10*n;i=i+n)
    // {
    //     cout<<i<<endl;
    // }

    //int n=2;
    //int pow=5;
    //int i;
    //int num=n;

    //for(i=1;i<pow;i=i+1)
    //{
        //num=num*n;
   // }

    //cout<<num<<endl;

   // return 0;
//}
//#include<iostream>
//using namespace std;

//int main()
//{
    //int n, pow, i, num;

    //cout << "enter a number: ";
    //cin >> n;

   // cout << "enter a power: ";
    //cin >> pow;

   // num = n;

    //for(i = 1; i < pow; i = i + 1)
    //{
       // num = num * n;
   // }

   // cout << num << endl;

   // return 0;
//}
//#include<iostream>
//using namespace std;

//int main()
//{
    //int n;

    //cout << "Enter a number: ";
    //cin >> n;

    //cout << "Sum of first " << n << " natural numbers is: "
         //<< (n * (n + 1)) / 2;

    //return 0;
//}
//#include<iostream>
//using namespace std;

//int main()
//{
    //int n,i,fact=1;
    //cout<<"enter a number:";
    //cin>>n;
    //for(i=1;i<=n;i=i+1)
    //{
        //fact=fact*i;
    //}
    //cout<<"factorial of "<<n<<" is "<<fact;
//}
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    if (n < 2)
    {
        cout << "Not Prime";
        return 0;
    }

    for (int i = 2; i < n; i = i + 1)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
    }

    cout << "Prime";

    return 0;
}