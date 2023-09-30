/*
    author    : MishkatIT
    created   : Saturday 2023-09-30-18.17.26
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 10);
    for (int i = 0; i < m; i++) {
      int x;
      cin >> x;
      v[x] = x;
    }
    int last;
    for (int i = n; i > 0; i--) {
      if(v[i]) last = i;
      v[i] = max(v[i] - i, last - i);
    }
    for (int i = 1; i <= n; i++) {
      cout << v[i] << '\n';
    }
    return 0;
}
