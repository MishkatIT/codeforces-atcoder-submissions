/*
    author    : MishkatIT
    created   : Tuesday 2023-10-10-20.54.15
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using namespace __gnu_pbds;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
    fio;
    int n, q;
    cin >> n >> q;
    ordered_set s;
    vector<int> freq(11);
    auto add = [&] (int x) {
        while (x) {
            freq[x % 10]++;
            x /= 10;
        }
    };
    auto rem = [&] (int x) {
        while (x) {
            freq[x % 10]--;
            x /= 10;
        }
    };
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
        add(x);
    }
    while (q--) {
        char c;
        int x;
        cin >> c >> x;
        if (c == '+') {
            if (s.find(x) == s.end()) {
                s.insert(x);
                add(x);
            } else {
                s.erase(x);
                rem(x);
            }
        } else if (c == '-') {
            if (s.size() >= x) {
                int val = *s.find_by_order(s.size() - x);
                rem(val);
                s.erase(val);
            }
        } else {
            if (s.find(x) != s.end()) {
                int sum = 0;
                while (x) {
                    sum += (freq[x % 10]);
                    x /= 10;
                }
                cout << sum << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}