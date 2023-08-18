/*
    author    : MishkatIT
    created   : Friday 2023-08-18-19.22.05
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

        vector<int> prefixXor(n + 10);
        for (int i = 1; i <= n; i++) {
            prefixXor[i] = (prefixXor[i - 1] ^ v[i - 1]);
        }
        bool ok = false;
        for (int i = 1; i < n; i++) {
            int part1 = prefixXor[i];
            for (int j = i + 1; j <= n; j++) {
                int part2 = (prefixXor[j] ^ prefixXor[i]);
                int part3 = (prefixXor[j] ^ prefixXor[n]);
                if(part1 == part2 && part2 == part3) {
                    ok = true;
                }
                if(j == n && part1 == part2) {
                    ok = true;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
