/*
    author    : MishkatIT
    created   : Saturday 2024-04-13-13.04.38
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        bool taken = false;
        for (int i = 0; i < n; i++) {
            if (!taken) {
                if (a[i] == b[i]) continue;
                if (a[i] < b[i]) {
                    swap(a[i], b[i]);
                }
                taken = true;
            } else {
                if (a[i] > b[i]) {
                    swap(a[i], b[i]);
                }
            }
        }
        cout << a << '\n' << b << '\n';;
    }
    return 0;
}


