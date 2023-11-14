/*
    author    : MishkatIT
    created   : Tuesday 2023-11-14-23.26.18
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
    vector<pair<ll, ll>> v(3), temp;
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }

    int dx[] = {0, 1, -1, 0, 0};
    int dy[] = {0, 0, 0, -1, 1};
    int attempt = -1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            temp = v;
            temp[i].first += dx[j];
            temp[i].second += dy[j];
            set<pair<int, int>> s(temp.begin(), temp.end());
            if (s.size() != 3) continue;
            vector<ll> len;
            for (int z = 0; z < 3; z++) {
                ll xx = (temp[(z + 1) % 3].first - temp[z].first);
                ll yy = (temp[(z + 1) % 3].second - temp[z].second);
                len.push_back(xx * xx + yy * yy);
            }
            sort(len.begin(), len.end());
            if (len[0] + len[1] == len[2]) {
                attempt = j;
//            debug(j)
                break;
            }
        }
    }

    if (attempt == -1) {
        cout << "NEITHER";
    } else if (attempt == 0) {
        cout << "RIGHT";
    } else {
        cout << "ALMOST";
    }
    return 0;
}


