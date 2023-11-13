/*
    author    : MishkatIT
    created   : Wednesday 2023-08-02-00.59.07
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
    ll n;
    cin >> n;
    ll row = n / 4;
    ll col = n % 4;
    if(row & 1) col = 3 - col;
    cout << row << ' ' << col;
    return 0;
}