/*
    author    : MishkatIT
    created   : Thursday 2023-08-03-00.29.13
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
    int n, q;
    cin >> n >> q;
    vector<int>v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    while(q--) {
        int x;
        cin >> x;
        if (binary_search(v.begin(), v.end(), x)) {
            cout << "found" << '\n';
        } else {
            cout << "not found" << '\n';
        }
    }
    return 0;
}