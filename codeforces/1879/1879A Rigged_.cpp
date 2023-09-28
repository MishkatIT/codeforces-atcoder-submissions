/*
    author    : MishkatIT
    created   : Sunday 2023-09-24-20.33.49
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
      int n;
      cin >> n;
      ll a, b;
      cin >> a >> b;
      n--;
      ll mx = a * b;
      ll ans = a;
      for (int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        if(min(a, x) * min(b, y) >= mx) {
          ans = -1;
        }
      }
      cout << ans << '\n';
    }
    return 0;
}