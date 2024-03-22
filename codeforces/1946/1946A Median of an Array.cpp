/*
    author    : MishkatIT
    created   : Saturday 2024-03-23-00.38.51
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        int mid = (n - 1) / 2;
        int cnt = 0;
        for (int i = mid; i < n; i++) {
            cnt += (v[i] == v[mid]);
        }
        cout << cnt  << '\n';
    }
    return 0;
}


