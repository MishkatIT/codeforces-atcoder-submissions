/*
    author    : MishkatIT
    created   : Wednesday 2023-09-13-18.03.53
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const int N      = 1e7 + 5;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<int> divisors(N, -1);

void sieve()
{
    for (int i = 2; i * i < N; i++) {
        if(divisors[i] == -1) {
            for (int j = i * i; j < N; j += i) {
                divisors[j] = i;
            }
        }
    }
}

void solve ()
{
    int l, r;
    cin >> l >> r;
    if(r <= 3) {
        cout << -1 << '\n';
        return;
    }
    if(l % 2 == 0 && l != 2) {
        cout << l / 2 << ' ' << l / 2 << '\n';
        return;
    }
    if(r % 2 == 0 && r != 2) {
        cout << r / 2 << ' ' << r / 2 << '\n';
        return;
    }
    if(l != r) {
        cout << 2 << ' ' << r - 3 << '\n';
        return;
    }
    if(divisors[l] != -1) {
        cout << divisors[l] << ' ' << l - divisors[l] << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main()
{
    fio;
    sieve();
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
