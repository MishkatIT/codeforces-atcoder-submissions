#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;

using ll = long long;
using ld = long double;

const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main()
{
    fio;
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<bool> f(26);
    for (int i = 1; i <= k; i++) {
        char c;
        cin >> c;
        f[c - 'a'] = true;
    }

    ll cnt = 0, ans = 0;
    for (auto i: s) {
        if (f[i - 'a']) {
            cnt++;
            ans += cnt;
        } else {
            cnt = 0;
        }
    }
    cout << ans;

    return 0;
}
