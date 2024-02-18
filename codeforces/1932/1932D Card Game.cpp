/*
    author    : MishkatIT
    created   : Sunday 2024-02-18-20.01.10
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
        char c;
        cin >> c;
        map<char, vector<int>> mp;
        for (int i = 0; i < n * 2; i++) {
            string temp;
            cin >> temp;
//            debug(temp[1])
            mp[temp[1]].push_back((temp[0] - '1') + 1);
        }
        vector<pair<int, char>> ans;
        vector<pair<char, int>> rem, mm;
        int cnt = 0;
        for (auto& i : mp) {
//                debug(i.first)
            sort(i.second.begin(), i.second.end());
            for (int x = 0; x + 1 < i.second.size(); x += 2) {
                if (i.first != c) {
                    ans.push_back({i.second[x], i.first});
                    ans.push_back({i.second[x + 1], i.first});
                } else {
                    mm.push_back({i.first, i.second[x]});
                    mm.push_back({i.first, i.second[x + 1]});

                }
            }
            if ((int)i.second.size() % 2 == 1) {
//                    debug(i.first)
                if (i.first == c) mm.push_back({i.first, i.second.back()});
                else rem.push_back({i.first, i.second.back()});
            }
        }
//        cout << '\n' << '\n';
//        debug(mm.size())
        if ((mm.size() < rem.size()) && (rem.size() > 0)) {
            cout << "IMPOSSIBLE" << '\n';
        } else {
            for (int i = 0; i < rem.size(); i++) {
                cout << rem[i].second << rem[i].first << ' ';
                cout << mm[i].second << mm[i].first << ' ';
                cout << '\n';
            }
            for (int i = 0; i < ans.size(); i++){
                cout << ans[i].first << ans[i].second << ' ';
                if (i & 1) cout << '\n';
            }
            for (int i = rem.size(); i + 1 < mm.size(); i += 2) {
                    cout << mm[i].second << mm[i].first << ' ';
                    cout << mm[i + 1].second << mm[i + 1].first << ' ';
                    cout << '\n';
            }
        }
    }
    return 0;
}

