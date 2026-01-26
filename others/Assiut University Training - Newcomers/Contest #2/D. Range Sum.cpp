/*
    author    : MishkatIT
    created   : Friday 2023-08-25-18.06.43
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
        ll l, r;
        cin >> l >> r;
        if(l > r) {
          swap(l, r);
        }
        l--;
        cout << r * (r + 1LL) / 2LL - l * (l + 1LL) / 2LL << '\n';
    }
    return 0;
}