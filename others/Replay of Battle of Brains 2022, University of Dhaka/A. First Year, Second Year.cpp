/*
    author    : MishkatIT
    created   : Sunday 2023-10-15-22.52.52
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
        int a, b;
        cin >> a >> b;
        int x = (a - b);
        cout << x / 2 + b << ' ' << x / 2 << '\n';
    }
    return 0;
}