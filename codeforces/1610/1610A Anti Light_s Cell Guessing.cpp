/*
    author    : MishkatIT
    created   : Sunday 2023-07-16-19.39.10
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
        int n, m;
        cin >> n >> m;
        int ans = 0;
        if(n > 1 && m > 1) {
            ans = 2;
        } else if(n == 1 && m == 1) {
            ans = 0;
        } else {
            ans = 1;
        }
        cout << ans << '\n';
    }
    return 0;
}

