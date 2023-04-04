/*
    author    : MishkatIT
    created   : Tuesday 2023-04-04-21.52.30
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        a--;
        b--;
        c--;
        d--;
        int x = min({a, n - a - 1, b, n - b - 1});
        int y = min({c, n - c - 1, d, n - d - 1});

        cout << abs(x - y) << '\n';
    }
    return 0;
}
