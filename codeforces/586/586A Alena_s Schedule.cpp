/*
    author    : MishkatIT
    created   : Thursday 2024-02-22-21.20.31
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
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int ans = 0;
    for (int i = 0; i + 2 < n; i++) {
        if (v[i] == 1 && v[i + 2] == 1) {
            v[i + 1] = 1;
        }
    }
    cout << count(v.begin(), v.end(), 1);
    return 0;
}

