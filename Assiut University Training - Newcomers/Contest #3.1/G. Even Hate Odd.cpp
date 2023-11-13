/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-19.15.50
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
        if(n & 1) {     // if number of elements are not even, then we can divide them equally.
          cout << -1 << '\n';
          continue;
        }
        int odd = 0;
        for (auto& i: v) {
          odd += (i & 1);
        }
        int even = n - odd;
        cout << (abs(n / 2 - odd) + abs(n / 2 - even)) / 2 << '\n';
    }
    return 0;
}