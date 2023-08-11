/*
    author    : MishkatIT
    created   : Friday 2023-08-11-15.56.43
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
        ll s = 0, sOddPos = 0, sEvenPos = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s += v[i];
            if(i % 2 == 0) {
                sEvenPos += v[i];
            }
        }
        sOddPos = s - sEvenPos;
        for (int i = 0; i < n; i++) {
            if(sEvenPos >= sOddPos) {
                if(i & 1) {
                    v[i] = 1;
                }
            } else {
                if(!(i & 1)) {
                    v[i] = 1;
                }
            }
            cout << v[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}

