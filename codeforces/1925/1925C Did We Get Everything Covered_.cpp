/*
    author    : MishkatIT
    created   : Sunday 2024-01-28-14.05.20
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;


int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;
        string str;
        cin >> str;
        vector<char> seg;
        set<char> s;
        for (int i = 0; i < m; i++) {
            if (str[i] >= char('a' + k)) continue;
            s.insert(str[i]);
            if (s.size() == k) {
                s.clear();
                seg.push_back(str[i]);
            }
        }
        if (seg.size() >= n) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
            string ans;
            for (auto& i : seg) {
                ans += i;
            }
            char c = 'a';
            if (s.size() > 0) {
                for (int i = 0; i < k; i++) {
                    if (s.find('a' + i) == s.end()) {
                        c = 'a' + i;
                        break;
                    }
                }
            }
            ans += string(n - ans.size(), c);
            cout << ans << '\n';
        }
    }
    return 0;
}

