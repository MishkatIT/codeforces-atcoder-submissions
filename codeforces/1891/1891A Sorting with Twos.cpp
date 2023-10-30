/*
    author    : MishkatIT
    created   : Monday 2023-10-30-20.43.02
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        bool ok = true;
        int x = 1;
        int i;
        for (i = 0; i < n; i++) {
            int temp = x;
            while(temp - i > 1) {
                ok &= (v[i] <= v[i + 1]);
                i++;
            }
            x *= 2;
            if(x > n) break;
        }

        i++;
        while(i + 1 < n) {
            ok &= (v[i] <= v[i + 1]);
            i++;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
