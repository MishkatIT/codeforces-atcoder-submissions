/*
    author    : MishkatIT
    created   : Monday 2023-10-02-15.28.06
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
      vector<ll> v(n);
      for (auto& i : v) {
          cin >> i;
      }
      sort(v.begin(), v.end());
      ll ans = v.front() * v.back();
      for (auto& i : v) {
        if(ans % i != 0) {
          ans = -1;
          break;
        }
      }
      if(ans != -1) {
        int cnt = 0;
        for (ll i = 2; i * i <= ans; i++) {
          if(ans % i == 0) {
            cnt++;
            if(ans / i != i) {
              cnt++;
            }
          }
        }
        if(cnt != n) ans = -1;
      }
      cout << ans << '\n';
    }
    return 0;
}

