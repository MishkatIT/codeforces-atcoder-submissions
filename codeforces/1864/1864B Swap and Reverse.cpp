/*
    author    : MishkatIT
    created   : Saturday 2023-08-26-20.57.26
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
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        if(m % 2 == 0) {
          sort(str.begin(), str.end());
          cout << str << '\n';
          continue;
        }
        string a, b;
        for (int i = 0; i < n; i += 2) {
          a += str[i];
        }
        for (int i = 1; i < n; i += 2) {
          b += str[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int x = a.size(), y = b.size();
        for (int i = 0; i < max(x, y); i++) {
          if(i < x) {
            cout << a[i];
          }
          if(i < y) {
            cout << b[i];
          }
        }
        cout << '\n';
    }
    return 0;
}

