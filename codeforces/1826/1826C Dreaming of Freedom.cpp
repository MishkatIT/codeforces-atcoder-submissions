/*
    author    : MishkatIT
    created   : Wednesday 2023-08-30-18.23.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e6 + 5;
const ll inf    = 1e9;
const ll linf   = 1e18;
int minDiv[N];
void sieve()
{
    iota(minDiv, minDiv + N, 0);
    for (int i = 2; i < N; i++) {
        if(minDiv[i] == i) {
            for (int j = i + i; j < N; j += i) {
                minDiv[j] = min(minDiv[j], i);
            }
        }
    }
}
int main()
{
    fio;
    sieve();
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if(n != 1 && minDiv[n] <= m) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}
