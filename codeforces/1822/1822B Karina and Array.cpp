/*
    author    : MishkatIT
    created   : Monday 2023-04-24-20.48.16
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      vector<int>v(n);
      for (auto &i : v)
      {
          cin >> i;
      }
      sort(v.begin(), v.end());
      int ans = max(v[0] * v[1], v[n - 1] * v[n - 2]);
      cout << ans << '\n';
    }
    return 0;
}
