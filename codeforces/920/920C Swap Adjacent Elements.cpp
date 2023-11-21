/*
    author    : MishkatIT
    created   : Tuesday 2023-11-21-18.29.44
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
    int n;
    cin >> n;
    vector<int> v(n + 5);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    string str;
    cin >> str;
    str = "#" + str;
    bool ok = true;
    int cur = 1;
    for (int i = 1; i < n; i++) {
        cur = max(cur, v[i]);
        if (str[i] == '0' && cur > i) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}


