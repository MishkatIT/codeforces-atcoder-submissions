/*
    author    : MishkatIT
    created   : Wednesday 2023-07-26-00.17.31
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i: v) {
            cin >> i;
        }
        int s = 0, e = 0;
        int l = 0, r = n - 1;
        while(s < k && l < n) {
            s += (v[l] == v.front());
            l++;
        }
        while(e < k && r >= l) {
            e += (v[r] == v.back());
            r--;
        }
//        debug(s)debug(e)
        if((s == k && e == k) || (v.front() == v.back() && (s + e) >= k)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

