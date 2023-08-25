/*
    author    : MishkatIT
    created   : Saturday 2023-08-05-20.49.29
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
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto& i : v) {
            cin >> i;
        }
        if (n == 1) {
          cout << "NO" << '\n';
          continue;
        }
        int one = 0;
        ll s = 0;
        for(auto& i : v) {
            if(i > 1) {
              s += (i - 1);
            } else {
              one++;
            }
        }
        if(!one || s >= one) {
          cout << "YES" << '\n';
        } else {
          cout << "NO" << '\n';
        }
    }
    return 0;
}