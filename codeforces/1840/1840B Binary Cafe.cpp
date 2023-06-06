/*
    author    : MishkatIT
    created   : Tuesday 2023-06-06-21.22.49
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
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if(k <= log2(n))
            cout << (1 << k) << '\n';
        else
            cout << n + 1 << '\n';
    }
    return 0;
}
