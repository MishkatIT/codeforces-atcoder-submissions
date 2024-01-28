/*
    author    : MishkatIT
    created   : Sunday 2024-01-28-15.20.32
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

        auto cmp = [&](const pair<int, int>& a, const pair<int, int>& b) {
            return (a.first < b.first || (a.first == b.first && a.second > b.second));
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            x = k * ((x / k) > 0) + x % k;
            pq.push({x, i});
        }

        while(!pq.empty()) {
            int x = pq.top().first;
            x -= k;
            int pos = pq.top().second;
            pq.pop();
            if (x > 0) {
                pq.push({x, pos});
            } else {
                cout << pos << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}


