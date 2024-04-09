/*
    author    : MishkatIT
    created   : Wednesday 2024-04-10-03.54.09
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int zero = 0, one = zero;
        for (auto& i : v) {
            cin >> i;
            zero += i == 0, one += i == 1;
        }
        cout << ((1LL << zero) * 1LL * one) << '\n';
    }
    return 0;
}


