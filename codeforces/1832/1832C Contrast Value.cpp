/*
    author    : MishkatIT
    created   : Monday 2023-07-17-23.55.45
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
        vector<int>v;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(i == 0) {
                v.push_back(x);
                continue;
            }
            if(v.back() != x) {
                v.push_back(x);
            }
        }
        int ans = v.size();
        for (int i = 0; i + 2 < v.size(); i++) {
            ans -= (v[i] < v[i + 1] && v[i + 1] < v[i + 2]);
            ans -= (v[i] > v[i + 1] && v[i + 1] > v[i + 2]);
        }
        cout << ans << '\n';
    }
    return 0;
}

