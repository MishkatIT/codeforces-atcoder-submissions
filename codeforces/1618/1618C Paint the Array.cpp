/*
    author    : MishkatIT
    created   : Thursday 2023-04-27-23.41.56
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
        for(int x: {0, 1})
        {
            int gc = 0;
            for (int i = x ^ 1; i < n; i += 2)
            {
                gc = __gcd(gc, v[i]);
            }
            bool divisible = false;
            for (int i = x ^ 0; i < n; i += 2)
            {
                divisible |= (v[i] % gc == 0);
            }
            if(!divisible)
            {
                ans = gc;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
