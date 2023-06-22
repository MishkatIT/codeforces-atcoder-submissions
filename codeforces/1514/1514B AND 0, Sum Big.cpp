/*
    author    : MishkatIT
    created   : Friday 2023-06-23-01.43.29
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int exp(ll n, ll k)
{
    int ans = 1;
    while(k)
    {
        if(k & 1)
            ans = (ans % mod * n % mod) % mod;
        k >>= 1;
        n = (n % mod * n % mod) % mod;
    }
    return ans;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << exp(n, k) << '\n';
    }
    return 0;
}

