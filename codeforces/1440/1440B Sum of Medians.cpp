/*
    author    : MishkatIT
    created   : Saturday 2023-07-15-22.06.22
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
        vector<int>v(n * k + 10);
        for (int i = 1; i <= n * k; i++) {
            cin >> v[i];
        }
        ll sum = 0;
        int x = n / 2;
        int r = n * k - x;
        for (int i = 0; i < k; i++) {
            sum += v[r];
            r -= (x + 1);
        }
        cout << sum << '\n';
    }
    return 0;
}

