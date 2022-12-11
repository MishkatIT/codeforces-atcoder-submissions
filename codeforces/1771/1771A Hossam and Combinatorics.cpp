/*
    author    : MishkatIT
    created   : Sunday 2022-12-11-21.40.38
    problem   : A. Hossam and Combinatorics
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
        int n;
        cin >> n;
        vector<int> v(n);
        int mx = -1;
        int mn = 1e7;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
            mx = max(mx, v[i]);
        }
        int a = 0, b = 0;
        a = count (v.begin(), v.end(), mn);
        b = count(v.begin(), v.end(), mx);
        int ans = 0;
        if (mx == mn)
            ans = n * (n - 1);
        else
            ans = 2 * (a * b);

        cout << ans << '\n';
    }
    return 0;
}

