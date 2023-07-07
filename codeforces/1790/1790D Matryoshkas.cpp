/*
    author    : MishkatIT
    created   : Friday 2023-07-07-16.40.42
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
        map<int, int> mp;
        int ans = 0;
        for(auto& i: v)
        {
            if(mp[i - 1])
            {
                mp[i - 1]--;
            }
            else
                ans++;
            mp[i]++;
        }
        cout << ans << '\n';
    }
    return 0;
}
