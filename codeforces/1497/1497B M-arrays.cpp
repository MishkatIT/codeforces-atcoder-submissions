/*
    author    : MishkatIT
    created   : Sunday 2023-07-09-20.40.38
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
        int n, m;
        cin >> n >> m;
        vector<int> freq(m + 10);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x % m]++;
        }

        int ans = (freq[0] > 0);
        int l = 1, r = m - 1;
        while(l <= r) {
            if(max(freq[l], freq[r]) == 0) {
                l++, r--;
                continue;
            }
            if(freq[l] < freq[r]) {
                swap(freq[l], freq[r]);
            }
            if(freq[r] > 0) {
                freq[l] -= (freq[r] + 1);
                ans++;
            }
            ans += max(0, freq[l]);
            l++, r--;
        }
        cout << ans << '\n';
    }
    return 0;
}
