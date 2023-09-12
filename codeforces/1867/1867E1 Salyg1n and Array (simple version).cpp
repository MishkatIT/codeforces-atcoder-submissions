/*
    author    : MishkatIT
    created   : Tuesday 2023-09-12-20.47.44
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
        auto ask = [&](int x) {
            cout << "? " << x << endl;
            int response;
            cin >> response;
            return response;
        };
        int n, k;
        cin >> n >> k;
        int Xor = 0;
        for (int i = 1; (i + k - 1) <= n; i += k) {
            Xor ^= ask(i);
        }
        if(n % k != 0) {
            int i = n - (n % k) + 1 - k + 1;
            for (; i + k - 1 <= n; i++) {
                Xor ^= ask(i);
            }
        }
        cout << "! " << Xor << endl;
    }
    return 0;
}
