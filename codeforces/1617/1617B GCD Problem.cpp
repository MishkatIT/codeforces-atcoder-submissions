/*
    author    : MishkatIT
    created   : Tuesday 2022-10-25-02.31.39
    problem   : 1617 B. GCD Problem
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n, a, b, c = 1;
        cin >> n;
        for(long long i=2; i<=n; i++)
        {
            b = n - i - 1;
            long long g = __gcd(i, b);
            if(g==1)
            {
                a = i;
                break;
            }
        }
        cout << a << ' ' << b << ' ' << c << '\n';

    }


    return 0;
}

