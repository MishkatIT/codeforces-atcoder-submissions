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
vector<int> divisors[N];
void sieve()
{
    for (int i = 2; i < N; i++) {
        for (int j = i; j < N; j += i) {
            divisors[j].push_back(i);
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
        bool ok = true;
        if(n > m) {
            for (auto& i: divisors[n]) {
                if(i <= m) {
                    ok = false;
                    break;
                }
            }
        } else {
            ok = false;
        }
        ok |= (n == 1);
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
