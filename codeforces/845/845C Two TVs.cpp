/*
    author    : MishkatIT
    created   : Friday 2023-08-04-18.27.33
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
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        v[i] = {l, r};
    }

    auto cmp = [&](auto x, auto y) -> bool {
        return (x.first < y.first || (x.first == y.first && x.second < y.second));
    };
    sort(v.begin(), v.end(), cmp);

    vector<pair<int, int>> taken(2, {-1, -1});
    bool possible = true;
    for (auto& i: v) {
        bool ok = false;
        for (int x = 0; x < 2; x++) {
            if(taken[x].first == -1 && taken[x].second == -1) {
                taken[x] = i;
                ok = true;
                break;
            } else if(i.first > taken[x].second) {
                taken[x] = i;
                ok = true;
                break;
            }
        }
        if(!ok) {
            possible = false;
            break;
        }
    }
    cout << (possible ? "YES" : "NO") << '\n';
    return 0;
}

