/*
    author    : MishkatIT
    created   : Monday 2023-05-29-02.15.09
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
        int n, m;
        cin >> n >> m;
        vector<int>v(m);
        for (auto& i : v)
        {
            cin >> i;
        }
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for(auto& k: mp)
            {
                if(k.first < v[i])
                    ans += k.second;
            }
            mp[v[i]]++;
        }
        cout << ans << '\n';
    }
    return 0;
}

