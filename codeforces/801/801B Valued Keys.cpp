/*
    author    : MishkatIT
    created   : Wednesday 2023-10-18-22.15.25
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
    string x, y;
    cin >> x >> y;
    string ans = x;
    for (int i = 0; i < x.length(); i++) {
        if(x[i] < y[i]) {
            ans = "-1";
            break;
        }
        ans[i] = min(ans[i], y[i]);
    }
    cout << ans;
    return 0;
}

