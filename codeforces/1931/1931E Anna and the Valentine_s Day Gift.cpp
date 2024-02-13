/*
    author    : MishkatIT
    created   : Wednesday 2024-02-14-00.47.16
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
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (auto& i : v) cin >> i;
        vector<pair<int, string>> z;
        for (int i = 0; i < n; i++) {
            string x = to_string(v[i]);
            int zero = 0;
            while(x.back() == '0') {
                zero++;
                x.pop_back();
            }
            z.push_back({zero, x});
        }
        sort(z.begin(), z.end());
        string temp = "";
        bool ok = true;
        for (int i = z.size() - 1; i >= 0; i -= 2) {
            temp += z[i].second;
            if (i > 0) {
                temp += z[i - 1].second;
                temp += string(z[i - 1].first, '0');
            }
            if (temp.size() > m) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Anna" : "Sasha") << '\n';
    }
    return 0;
}


