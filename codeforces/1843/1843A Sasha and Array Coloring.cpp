/*
    author    : MishkatIT
    created   : Tuesday 2023-06-20-20.35.11
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
int main()
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
        sort(v.begin(), v.end());
        int l = 0, r = n - 1;
        ll ans = 0;
        while(l < r)
        {
            ans += (v[r--] - v[l++]);
        }
        cout << ans << '\n';
    }
    return 0;
}

