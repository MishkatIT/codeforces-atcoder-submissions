/*
    author    : MishkatIT
    created   : Wednesday 2023-08-09-13.39.06
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
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int l = 0, r = n - 1;
    while(l <= r) {
        cout << v[l++] << ' ';
        if(l <= r) {
            cout << v[r--] << ' ';
        }
    }
    return 0;
}