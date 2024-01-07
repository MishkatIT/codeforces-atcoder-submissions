/*
    author    : MishkatIT
    created   : Sunday 2024-01-07-22.25.13
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


int h[N], dp[N];
int n;
int k;
int solve(int cur) {
    if (cur == n - 1) return 0;
    int& ans = dp[cur];
    if (ans != inf) return ans;
    for (int i = 1; i <= k; i++) {
        int j = cur + i;
        if (j < n) {
            ans = min(ans, solve(j) + abs(h[j] - h[cur]));
        }
    }
    return ans;
}

int main()
{
    fio;
    fill(dp, dp + N, inf);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    cout << solve(0);
    return 0;
}

