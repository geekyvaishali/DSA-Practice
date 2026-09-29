//#include<iostream>
//using namespace std ;


//char convert(char name)
//{
    //char ans=name-'a'+'A';
    //return ans;
//}
//int main()
//{
   // char name;
    //cin>>name;

    //cout<<convert(name)<<endl;
//}


#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int n)
{
    int count = 0;

    while (n)
    {
        count++;
        n = n / 10;
    }

    return count;
}

bool Armstrong(int num, int digit)
{
    int n = num;
    int ans = 0;
    int rem;

    while (n)
    {
        rem = n % 10;
        n = n / 10;

        ans = ans + pow(rem, digit);
    }

    if (ans == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cin >> num;

    // count digit
    int digit = countdigit(num);

    // Armstrong number
    cout << Armstrong(num, digit);

    return 0;
}