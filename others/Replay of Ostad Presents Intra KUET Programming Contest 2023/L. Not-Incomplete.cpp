/*
    author    : MishkatIT
    created   : Tuesday 2023-10-10-19.55.12
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
    ld x, y, z, n;
    cin >> x >> y >> z >> n;
    ld att = ceil(x * y * 6.0 / 10.0);
    ld rem = (x - z) * y;
    if(att - n - rem > 0) {
        cout << "No" << '\n';
    } else {
        cout << "Yes" << '\n';
        ld todo = att - n;
        vector<int> v(x - z);
        for (int i = 0; i < (x - z); i++) {
            v[i] = max((ld)0, min(y, todo));
            todo -= y;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
          cout << v[i] << " \n"[i == v.size() - 1];
        }
    }
    return 0;
}