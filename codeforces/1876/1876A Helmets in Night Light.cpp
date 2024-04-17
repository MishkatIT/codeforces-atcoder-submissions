/*
    author    : MishkatIT
    created   : Wednesday 2024-04-17-12.41.00
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        for (auto& i : a) cin >> i;
        for (auto& i : b) cin >> i;
        vector<pair<int, int>> v(n); //  man, cost
        for (int i = 0; i < n; i++) {
            v[i] = {a[i], b[i]};
        }
        long long ans = p;
        v.emplace_back(n - 1, p);
        sort(v.begin(), v.end(),[&] (auto& x, auto& y) {
            return (x.second < y.second || (x.second == y.second && x.first > y.first));
        });
        int nn = n;
        nn--;
        for (int i = 0; i <= n && nn > 0; i++) {
            int cur = min(nn, v[i].first);
            ans += (1LL * v[i].second * cur);
            nn -= cur;
        }
        cout << ans << '\n';
    }

    return 0;
}

