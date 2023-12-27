/*
    author    : MishkatIT
    created   : Wednesday 2023-12-27-22.53.39
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
    int n, s;
    cin >> n >> s;
    map<int, int> sell;
    map<int, int, greater<int>> buy;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        int x, y;
        cin >> x >> y;
        if (c == 'S') {
            sell[x] += y;
        } else {
            buy[x] += y;
        }
    }
    vector<pair<int, int>> temp;
    int cnt = s;
    for (auto& i : sell) {
        if (!cnt) break;
        --cnt;
        temp.push_back({i.first, i.second});
    }
    reverse(temp.begin(), temp.end());
    for (auto& i : temp) {
        cout << "S " << i.first << ' ' << i.second << '\n';
    }

    cnt = s;
    for (auto& i : buy) {
        if(!cnt) break;
        --cnt;
        cout << "B " << i.first << ' ' << i.second << '\n';
    }

    return 0;
}


