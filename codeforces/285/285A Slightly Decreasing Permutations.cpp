/*
    author    : MishkatIT
    created   : Thursday 2023-10-19-13.12.44
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
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    reverse(v.begin() + n - k - 1, v.end());
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    return 0;
}

