/*
    author    : MishkatIT
    created   : Monday 2023-10-09-20.32.57
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
        int n;
        cin >> n;
        bool ok = false;
        int x = 2, y = n - 3;
        while(x < y) {
            if((x% 3) != 0 && (y % 3) != 0) {
                ok = true;
                cout << "YES" << '\n';
                cout << 1 << ' ' << x << ' ' << y  << '\n';
                break;
            }
            x++, y--;
        }
        if(!ok) cout << "NO" << '\n';
    }
    return 0;
}

