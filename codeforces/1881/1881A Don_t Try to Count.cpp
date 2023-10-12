/*
    author    : MishkatIT
    created   : Thursday 2023-10-12-20.34.27
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
        string a, b;
        cin >> a >> b;
        bool ok = false;
        for (int i = 1; i <= 8; i++) {
            if(a.find(b) != string::npos) {
                cout << --i << '\n';
                ok = true;
                break;
            }
            a += a;
        }
        if(!ok) {
            cout << -1 << '\n';
        }
    }
    return 0;
}
