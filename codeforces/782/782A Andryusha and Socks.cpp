/*
    author    : MishkatIT
    created   : Friday 2023-07-28-22.53.56
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
    int n;
    cin >> n;
    n *= 2;////////////
    int ans = 0;
    map<int, bool> mp;
    int xx = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(!mp[x]) {
        mp[x] = true;
        xx++;
      } else {
        mp[x] = false;
        xx--;
      }
      ans = max(ans, xx);
    }
    cout << ans;
    return 0;
}

