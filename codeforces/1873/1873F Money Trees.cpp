/*
    author    : MishkatIT
    created   : Thursday 2023-09-21-21.52.57
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
        vector<int>a(n);
        for (auto& x: a) {
            cin >> x;
        }
        vector<int>b(n);
        for (auto& x: b) {
            cin >> x;
        }
        int l, r;
        l = r = 0;
        int ans = 0;
        int cnt = 1;
        int sum = 0;
        while(r < n) {
            if(l == r) {
                if(a[r] <= k) {
                    ans = max(ans, 1);
                    sum = a[l];
                    r++;
                    cnt = 1;
                }
                else {
                  l++;
                  r = l;
                }
                continue;
            }
            if(b[r - 1] % b[r] == 0) {
                if(sum + a[r] <= k) {
                    sum += a[r];
                    cnt++;
                    r++;
                    ans = max(ans, cnt);
                } else {
                    cnt--;
                    sum -= a[l];
                    l++;
                }
            } else {
                sum = 0;
                l = r;
                cnt = 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}