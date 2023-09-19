/*
    author    : MishkatIT
    created   : Tuesday 2023-09-19-21.22.21
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
        int n, k, x;
        cin >> n >> k >> x;
        if(k > n || x < k - 1) {
            cout << -1 << '\n';
            continue;
        }
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += i;
        }
        for (int i = k; i < n; i++) {
            sum += (x == k ? x - 1: x);
        }
        cout << sum << '\n';
    }
    return 0;
}

