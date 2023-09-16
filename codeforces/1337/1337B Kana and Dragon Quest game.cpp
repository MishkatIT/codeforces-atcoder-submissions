/*
    author    : MishkatIT
    created   : Saturday 2023-09-16-23.47.50
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
        int x, n, m;
        cin >> x >> n>> m;
        int zz = n + m;
        bool ok = false;
        for(int i = 1; i <= zz; i++) {
            if(x / 2 + 10 < x - 10 && n > 0) {
                x = x / 2 + 10;
                n--;
            } else if(x / 2 + 10 >= x - 10 && n > 0 && x > 20) {
                x = x/2 + 10;
                n--;
            } else if( m > 0) {
                x -= 10;
                m--;
            }
            if(x <= 0) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }

}
