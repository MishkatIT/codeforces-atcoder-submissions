/*
    author    : MishkatIT
    created   : Friday 2024-01-12-17.06.21
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int ans = n;
    for (int i = n - 1; i > 0; i--) {
        if (v[i - 1] < v[i]) ans--;
        else break;
    }
    cout << ans - 1;
    return 0;
}


