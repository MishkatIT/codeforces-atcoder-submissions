/*
    author    : MishkatIT
    created   : Sunday 2023-10-22-17.17.36
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
      int n, k;
      cin >> n >> k;
      string str;
      cin >> str;
      vector<int> freq(26);
      for (auto& i: str) {
        freq[i - 'a']++;
      }

      int cnt = 0;
      for (auto& i: freq) {
        cnt += (i & 1);
      }
      cnt -= k;
      bool ok = true;
      if(cnt > 1) {
        ok = false;
      }

      cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}