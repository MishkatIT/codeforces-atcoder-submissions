/*
    author    : MishkatIT
    created   : Tuesday 2023-10-17-19.24.41
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());
    map<int, int> mp;
    for (auto& i: v) {
        if(i <= v[2]) {
            mp[i]++;
        } else {
            break;
        }
    }

    ll ans = 0;
    if(v[0] == v[2]) { // elements are equal
        int x = mp[v[0]];
        ans = 1LL * x * (x - 1) * (x - 2) / (3 * 2 * 1); // nCr
    } else if(v[0] == v[1]) {
        int x = mp[v[0]];
        ans = 1LL * x * (x - 1) / 2;
        ans *= mp[v[2]];
    } else if(v[1] == v[2]) {
        int x = mp[v[1]];
        ans = 1LL * x * (x - 1) / 2;
        ans *= mp[v[0]];
    } else {
        ans = 1;
        for (auto& i: mp) {
            ans *= i.second;
        }
    }
    cout << ans << '\n';
    return 0;
}

