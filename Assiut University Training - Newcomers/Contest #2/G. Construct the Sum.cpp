/*
    author    : MishkatIT
    created   : Wednesday 2023-08-02-01.06.10
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
        ll n, s;
        cin >> n >> s;
        if(s > n * (n + 1) / 2) {
            cout << -1 << '\n';
            continue;
        }
        while(s) {
            if(s - n >= 0) {
                s -= n;
                cout << n << ' ';
            }
            n--;
        }
        cout << '\n';
    }
    return 0;
}