/*
    author    : MishkatIT
    created   : Tuesday 2023-09-26-14.46.27
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        bool ok = true;
        ok &= (n > 2 * k);
        for (int i = 0; i < k; i++) {
            ok &= (str[i] == str[n - i - 1]);
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

