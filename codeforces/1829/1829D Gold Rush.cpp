/*
    author    : MishkatIT
    created   : Saturday 2023-05-06-21.42.22
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long

int possible(int a, int b)
{
    if(a == b)
        return 1;
    if(b > a)
        return 0;
    if(a % 3)
        return 0;
    return possible(a / 3, b) || possible(a - (a / 3), b);
}

signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        if(possible(n, m))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
