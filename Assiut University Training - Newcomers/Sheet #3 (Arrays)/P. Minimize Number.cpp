/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-18.49.39
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
    int ans = inf;
    for (auto& i: v) {
        int operations = 0;
        while(!(i & 1)) {         // checking even or not.
            operations++;
            i >>= 1;              // dividing by 2
        }
        ans = min(ans, operations);
    }
    cout << ans;
    return 0;
}