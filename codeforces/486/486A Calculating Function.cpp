#include<iostream>
#include<cmath>
using namespace std;
typedef  long  long int lli;
int main()
{
    lli range;
    cin >> range;
    if(range%2==0)
    {
        cout << range/2;
    }
    else
    {
        cout << -(range+1)/2;

    }
}
