/*
    author    : MishkatIT
    created   : Sunday 2023-08-20-19.46.10
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
        vector<pair<array<int, 5>, int>> v(n); // {occurrence of (a, b, c, d, e), total}
        for (int i = 0; i < n; i++) {
            string str;
            cin >> str;
            array<int, 5> freq;
            freq.fill(0);
            for (auto& x: str) {
                freq[x - 'a']++;
            }
            int total = 0;
            for (int x = 0; x < 5; x++) {
                total += freq[x];
            }
            v[i] = {freq, total};
        }

        auto check = [&](int i) -> int {
            sort(v.begin(), v.end(), [&](auto a, auto b)
            {
                int diff_a = a.first[i] - (a.second - a.first[i]);
                int diff_b = b.first[i] - (b.second  - b.first[i]);
                if(diff_a == diff_b) {
                    if(a.first[i] == b.first[i]) {
                        return a.second < b.second;
                    }
                    return a.first[i] > b.first[i];
                }
                return diff_a > diff_b;
            });
            int choosen = 0;
            int rest = 0;
            int cnt = 0;
            for (auto& j: v)
            {
                if(choosen + j.first[i] > rest + j.second - j.first[i]) {
                    choosen += j.first[i];
                    rest += j.second - j.first[i];
                    cnt++;
                }
            }
            return cnt;

        };

        int ans = 0;
        for (int i = 0; i < 5; i++) {
            ans = max(ans, check(i));
        }
        cout << ans << '\n';
    }
    return 0;
}

