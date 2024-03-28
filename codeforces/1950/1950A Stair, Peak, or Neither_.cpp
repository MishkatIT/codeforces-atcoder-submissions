/*
    author    : MishkatIT
    created   : Friday 2024-03-29-03.02.57
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
        int n = 3;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        if (v[0] < v[1] && v[1] < v[2]) {
            cout << "STAIR" << '\n';
        } else if (v[0] < v[1] && v[1] > v[2]) {
            cout << "PEAK" << '\n';
        } else {
            cout << "NONE" << '\n';
        }
    }
    return 0;
}

