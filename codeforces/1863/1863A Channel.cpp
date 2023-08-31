/*
    author    : MishkatIT
    created   : Wednesday 2023-08-30-20.35.08
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
        int n, a, c;
        cin >> n >> a >> c;
        string str;
        cin >> str;
        int x = 0, y = 0;
        bool yes = (a >= n);
        for (auto& i: str) {
            x += (i == '+');
            y += (i == '-');
            if(a + x - y >= n) yes = true;
        }
        if(yes) {
            cout << "YES" << '\n';
        } else {
            if(a + x >= n) {
                cout << "MAYBE" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}
