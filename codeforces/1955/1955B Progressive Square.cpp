/*
    author    : MishkatIT
    created   : Wednesday 2024-04-10-00.32.39
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
        int n, c, d;
        cin >> n >> c >> d;
        vector<ll> v(n * n);
        for (auto& i : v) cin >> i;
        sort(v.begin(), v.end());
        vector<ll> temp;
        temp.push_back(v.front());
        for (int i = 1; i < n; i++) {
            temp.push_back(temp.back() + c);
        }
        for (int i = 0; i < n; i++) {
            ll cur = temp[i];
            for (int j = 1; j < n; j++) {
                cur += d;
                temp.push_back(cur);
            }
        }
        sort(temp.begin(), temp.end());
        cout << (v == temp ? "YES" : "NO") << '\n';
    }
    return 0;
}

