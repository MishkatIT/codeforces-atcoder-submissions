/*
    author    : MishkatIT
    created   : Monday 2023-10-16-01.22.30
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
    while(t--) {
        int a, b;
        cin >> a >> b;
        bool ok = true;
        int cnt = 0;
        for (int i = 0; i < 31; i++) {
            int x = (1 << i);
            if(!(a & x) && (b & x)) {
                ok = false;
            }

        }

        if(b == 0 && __builtin_popcount(a) == 1) {
          ok = false;
        }

        if(!ok) {
            cout << -1 << '\n';
            continue;
        }

        if(a == 0 && b == 0) {
          cout << 1 << '\n';
          cout << 0 << '\n';
          continue;
        }

        if(__builtin_popcount(a) == 1 && (a == b)) {
          cout << 2 << '\n';
          cout << "0 " << a << '\n';
          continue;
        }

        set<int> s;
        for (int i = 0; i <= a; i++) {
            bool ok = true;
            for (int j = 0; j < 31; j++) {
                int x = (1 << j);
                if(!(a & x) && (i & x)) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
              if(b == 0) {
                s.insert(i);
              } else {
                if(i != b) {
                  s.insert(i);
                }
              }
            }
        }

        int n = s.size();
        cout << n << '\n';
        for (auto& i: s) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}