/*
    author    : MishkatIT
    created   : Thursday 2023-05-04-13.59.12
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
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        int ans = 0;
        for (int i = n - 1; i > 0; i--)
        {
            ans += max(0LL, v[i - 1] - v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}

