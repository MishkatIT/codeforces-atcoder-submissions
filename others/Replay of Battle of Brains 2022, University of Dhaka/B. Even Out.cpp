/*
    author    : MishkatIT
    created   : Sunday 2023-10-15-22.56.39
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
      vector<int> v(n);
      int sum = 0;
      for (auto& i : v) {
          cin >> i;
          sum += i;
      }
      int ans = 0;
      for (int i = 0; i < n; i++) {
        sum -= (2 * i);
        ans += !(sum & 1);
        sum += (2 * i);
      }
      cout << ans << '\n';
    }
    return 0;
}