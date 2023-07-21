/*
    author    : MishkatIT
    created   : Friday 2023-07-21-20.51.40
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
        int n, k;
        cin >> n >> k;
        vector<int>v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        int mx = 1;
        int temp = 1;
        for (int i = 0; i + 1 < n; i++) {
            if(abs(v[i] - v[i + 1]) <= k) {
                temp++;
                mx = max(mx, temp);
            } else {
                temp = 1;
            }
//            debug(temp)
        }
        cout << n - mx << '\n';
    }
    return 0;
}

