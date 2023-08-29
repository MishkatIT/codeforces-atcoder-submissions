/*
    author    : MishkatIT
    created   : Tuesday 2023-08-29-23.46.44
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
    cin>>t;
    while(t--) {
        cout << setprecision(30);
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if(b >= a) {
            cout << b << '\n';
        } else if(c <= d) {
            cout << -1 << '\n';
        } else {
            ld x = a - b;
            ld y = c - d;
            ld z = ceil(x / y);
            cout << (c * z) + b << '\n';
        }
    }
}
