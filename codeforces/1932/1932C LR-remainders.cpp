/*
    author    : MishkatIT
    created   : Sunday 2024-02-18-18.46.43
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
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        string str;
        cin >> str;
        vector<int> temp(n), ans(n);
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'R') {
                temp[i] = v[r--];
            } else {
                temp[i] = v[l++];
            }
        }
        reverse(temp.begin(), temp.end());
        ll mul = 1;
        for (int i = 0; i < n; i++) {
            mul = (mul % m * temp[i] % m ) % m;
            ans[i] = mul;
        }
        for (int i = n - 1; i >= 0; i--) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

