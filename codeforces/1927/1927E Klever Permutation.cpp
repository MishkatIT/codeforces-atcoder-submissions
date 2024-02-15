/*
    author    : MishkatIT
    created   : Thursday 2024-02-15-17.01.22
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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<int> ans(n + 5);
        int l = 1, r = n;
        for (int i = 1; i <= k; i++) {
            if (i & 1) {
                for (int j = i; j <= n; j += k) {
                    ans[j] = l++;
                }
            } else {
                for (int j = i; j <= n; j += k) {
                    ans[j] = r--;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " \n"[i == n];
        }

    }
    return 0;
}


