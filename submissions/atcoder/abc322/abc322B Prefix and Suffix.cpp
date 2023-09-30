/*
    author    : MishkatIT
    created   : Saturday 2023-09-30-18.05.04
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
    string a, b;
    cin >> a >> b;
    bool x = false, y = false;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      cnt += (a[i] == b[i]);
    }
    x |= (cnt == n);

    cnt = 0;
    for (int i = n - 1, j = m - 1; i >= 0; i--, j--) {
      cnt += (a[i] == b[j]);
    }
    y |= (cnt == n);

    if(x & y) {
      cout << 0;
    } else if(x) {
      cout << 1;
    } else if(y) {
      cout << 2;
    } else {
      cout << 3;
    }
    return 0;
}

