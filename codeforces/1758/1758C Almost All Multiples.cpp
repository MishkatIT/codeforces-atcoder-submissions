/*
    author    : MishkatIT
    created   : Wednesday 2023-08-09-23.32.00
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
        int n, x;
        cin >> n >> x;
        if(n % x == 0) {
            cout << x << ' ';
            vector<bool> taken(2e5 + 10);
            taken[1] = taken[x] = true;
            for (int i = 2; i < n; i++) {
                for (int j = i; j <= n; j += i) {
                    if(i == j && !taken[j]) {
                        cout << j << ' ';
                        taken[j] = true;
                        break;
                    } else {
                        if(n % j == 0 && !taken[j]) {
                            cout << j << ' ';
                            taken[j] = true;
                            break;
                        }
                    }
                }
            }
            cout << 1 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
