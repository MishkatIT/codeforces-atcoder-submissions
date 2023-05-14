/*
    author    : MishkatIT
    created   : Sunday 2023-05-14-16.43.40
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }
        sort(v.begin(), v.end());
        int mex;
        for (mex = 0; mex < n; mex++)
        {
            if(v[mex] != mex)break;
        }
        int ans = mp.size();
        if(mex < n)
        {
            if(!mp[ceil((double)(mex + v.back()) / 2)] && k)
                ans++;
        }
        else
        {
            ans += k;
        }
        cout << ans << '\n';
    }
    return 0;
}

