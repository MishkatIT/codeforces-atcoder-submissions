/*
    author    : MishkatIT
    created   : Tuesday 2023-10-31-21.50.28
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int ans = 0;
        int mx = v.back();
        for (int i = n - 1; i >= 0; i--) {
            if(v[i] > mx) {
                mx = v[i];
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

