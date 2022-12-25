/*
    author    : MishkatIT
    created   : Sunday 2022-12-25-19.20.53
    problem   : A. Sum of Odd Integers
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if((n >= k * k) & (n & 1) == (k & 1))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

    }
    return 0;
}

