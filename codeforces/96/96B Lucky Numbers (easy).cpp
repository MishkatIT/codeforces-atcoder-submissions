#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e11;
const ll linf   = 1e18;

ll n;
ll ans = 0;

bool ok(ll x) {
    string str = to_string(x);
    int four = count(str.begin(), str.end(), '4');
    return (four == (str.length() - four) && four);
}

void solve(ll x) {
    if (x > inf) {
        return;
    }
    if (ok(x) && x >= n) {
        if (ans == 0 || x < ans) {
            ans = x;
        }
    }
    solve(x * 10 + 4);
    solve(x * 10 + 7);
}

int main() {
    fio;
    cin >> n;
    solve(0);
    cout << ans;
    return 0;
}
