/*
    author    : MishkatIT
    created   : Monday 2024-01-15-00.05.38
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
    int n, m;
    cin >> n >> m;
    set<string> s;
    for (int i = 0; i < n + m; i++) {
        string x;
        cin >> x;
        s.insert(x);
    }
    m = min((int)s.size(), m);
    n = min((int)s.size(), n);
    if (m == n) {
        cout << (((int)s.size() & 1) ? "YES" : "NO") << '\n';
    } else {
        cout << ((n > m)? "YES" : "NO") << '\n';
    }
    return 0;
}

