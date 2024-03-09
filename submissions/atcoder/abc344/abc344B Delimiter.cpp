/*
    author    : MishkatIT
    created   : Saturday 2024-03-09-18.05.12
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
    vector<int> v;
    while(true) {
        int x;
        cin >> x;
        if (x == 0) break;
        v.push_back(x);
    }
    cout << 0 << '\n';
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << '\n';
    }
    return 0;
}

