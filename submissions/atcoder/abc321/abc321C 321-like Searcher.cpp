/*
    author    : MishkatIT
    created   : Monday 2023-10-02-12.54.26
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


vector<ll> v;

void calc()
{
    for (int i = 2; i < (1 << 10); i++) {
        ll cur = 0;
        ll x = 1;
        for (int j = 0; j <= 9; j++) {
            if(i & (1 << j)) {
                cur = x * j + cur;
                x *= 10;
            }
        }
        v.push_back(cur);
    }
    sort(v.begin(), v.end());
}

int main()
{
    calc();
    fio;
    int n;
    cin >> n;
    cout << v[n - 1];
    return 0;
}

