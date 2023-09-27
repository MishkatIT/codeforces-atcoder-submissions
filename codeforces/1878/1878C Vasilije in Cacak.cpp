/*
    author    : MishkatIT
    created   : Tuesday 2023-09-26-20.46.35
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
    while(t--)
    {
      ll n, k, x;
      cin >> n >> k >> x;
      ll temp = n * (n + 1) / 2;
      ll zz = (n - k) * (n - k + 1) / 2;
      if(temp < x || (k * (k + 1) / 2 > x) || temp - x < zz) {
        cout << "NO" << '\n';
      } else {
        cout << "YES" << '\n';
      }

    }
    return 0;
}