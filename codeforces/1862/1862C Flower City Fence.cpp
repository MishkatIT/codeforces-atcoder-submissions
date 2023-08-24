/*
    author    : MishkatIT
    created   : Thursday 2023-08-24-21.16.05
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
        vector<int>v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int taken = 0;
        int x = 0;
        bool ok = true;
        for (int i = n - 1; i >= 0;) {
            while(i >= 0 && v[i] <= taken) {
                i--;
            }
            taken++;
            if(i >= 0 && x < n) {
                ok &= (v[x] == i + 1);
                x++;
                if(!ok) break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

