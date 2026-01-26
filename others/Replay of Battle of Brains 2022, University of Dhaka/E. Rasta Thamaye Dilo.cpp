/*
    author    : MishkatIT
    created   : Monday 2023-10-16-00.25.28
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e7 + 5;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<bool> prime(N, true);
vector<int> pref(N);

void sieve()
{
    for (int i = 2; i * i < N; i++) {
        for (int j = i * i; j < N; j += i) {
            prime[j] = false;
        }
    }
    for (int i = 2; i < N; i++) {
        pref[i] = prime[i] + pref[i - 1];
//        cout << i << ' ' << prime[i] << '\n';
    }
}

int main()
{
    fio;
    sieve();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n == 2) {
            cout << 0 << '\n';
            continue;
        }
        if(n == 3) {
            cout << 1 << '\n';
            continue;
        }
        int x = n / 2;
        if(prime[x])x++;
        cout << pref[n] - pref[x - 1] << '\n';
    }
    return 0;
}