/*
    author    : MishkatIT
    created   : Monday 2023-09-25-23.41.35
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        set<int> ss;
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            vector<int> temp(m);
            for (auto& i: temp) {
                cin >> i;
                ss.insert(i);
            }
            v[i] = temp;
        }
        int ans = 0;
        for (int i = 1; i <= 50; i++) {
            set<int> s;
            for (auto& x: v) {
                if(find(x.begin(), x.end(), i) != x.end())continue;
                for (auto& val: x) {
                    s.insert(val);
                }
                if(s.size() != ss.size())
                    ans = max(ans, (int)s.size());
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

