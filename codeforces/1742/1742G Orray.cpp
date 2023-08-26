/*
    author    : MishkatIT
    created   : Thursday 2023-08-24-18.25.23
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
        vector<int> ans;
        int mx = 0;
        for (int i = 0; i < min(32, n); i++) {
            int tempMax = mx;
            int idx = -1;
            for (int j = 0; j < n; j++) {
                if(v[j] != -1) {
                    if((mx | v[j]) > tempMax) {
                        tempMax = (mx | v[j]);
                        idx = j;
                    }
                }
            }
            if(idx != -1) {
                mx = tempMax;
                ans.push_back(v[idx]);
                v[idx] = -1;
            }
        }
        for (auto& i: v) {
            if(i != -1) {
                ans.push_back(i);
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}
