/*
    author    : MishkatIT
    created   : Tuesday 2022-10-25-02.31.39
    problem   : 1617 B. GCD Problem
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int32_t main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n, c = 1;
        cin >> n;
        for(long long i=2; i<=n; i++)
            if((__gcd(i, (n - i - 1))) == 1)
            {
                cout << i << ' ' << n - i - 1 << ' ' << c << '\n';
                break;
            }
    }
    return 0;
}

