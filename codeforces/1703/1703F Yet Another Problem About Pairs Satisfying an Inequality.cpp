/*
    author    : MishkatIT
    created   : Wednesday 2024-03-13-19.44.11
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        vector<pair<int, int>> temp; // value, index
        for (int i = 0; i < n; i++) {
            if (v[i] < i + 1) {
                temp.emplace_back(v[i], i + 1);
            }
        }
        sort(temp.begin(), temp.end());
        ll ans = 0;
        for (int i = 0; i < temp.size(); i++) {
            int low = 0, high = temp.size() - 1;
            int target = temp[i].second;
            while(low < high) {
                int mid = low + (high - low) / 2;
                if (temp[mid].first <= target) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            }
            if (temp[low].first <= target) low++;
            ans += temp.size() - low;
        }
        cout << ans << '\n';
    }
    return 0;
}


