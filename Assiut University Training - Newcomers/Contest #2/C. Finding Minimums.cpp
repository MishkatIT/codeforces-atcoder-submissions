/*
    author    : MishkatIT
    created   : Wednesday 2023-08-02-00.35.52
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
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    for (auto& i : v) {
        cin >> i;
    }
    for (int i = 0; i < n; i += k) {
        cout << *min_element(v.begin() + i, v.begin() + min(i + k, n)) << ' ';

    }
    return 0;
}