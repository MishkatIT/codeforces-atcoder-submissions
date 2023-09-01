/*
    author    : MishkatIT
    created   : Friday 2023-09-01-14.23.01
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
        string a, b;
        cin >> a >> b;
        bool ok = false;
        for (int i = 0; i + 1 < a.size(); i++) {
            if((a[i] == b[i] && a[i] == '0') && (a[i + 1] == b[i + 1] && a[i + 1] == '1')) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

