/*
    author    : MishkatIT
    created   : Friday 2023-06-16-21.07.10
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
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
        for (auto& i : v)
        {
            cin >> i;
        }
        if(n == 1)
        {
            if(v[0] == 0)cout << 0 << '\n';
            else cout << v[0] << '\n';
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                if(v[1] < v[0])
                {
                    ans += (v[0] - v[1]);
                    v[0] = v[1];
                }
            }
            else if(i == n - 1)
            {
                if(v[n - 2] < v[n - 1])
                {
                    ans += (v[n - 1] - v[n - 2]);
                    v[n - 1] = v[n - 2];
                }
            }
            else
            {
                if(v[i] > v[i - 1] && v[i] > v[i + 1])
                {
                    int mx = max(v[i - 1], v[i + 1]);
//                    debug(mx)
                    ans += (v[i] - mx);
                    v[i] = mx;
                }
            }
        }
//        ans += *max_element(v.begin(), v.end()) * 2;
        ans += v.front();
        for (int i = 0; i + 1 < n; i++)
            ans += abs(v[i] - v[i + 1]);
        ans += v.back();
        cout << ans << '\n';
    }
    return 0;
}

