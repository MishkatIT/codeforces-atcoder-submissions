/*
    author    : MishkatIT
    created   : Monday 2023-08-07-21.42.02
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
    map<string, int> mp;
    map<int, vector<string>> track;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        int score;
        cin >> score;
        mp[name] += score;
        track[mp[name]].push_back(name);
        for (int i = 0; i < mp[name]; i++) {
            track[i].push_back(name);
        }
    }
//    cout << '\n' << '\n';
//    for (auto i: track) {
//      cout << i.first << ' ';
//      for (auto& x: i.second) {
//        cout << x << ' ';
//      }
//      cout << '\n';
//    }

    int mx = 0;
    for (auto& i: mp) {
        mx = max(mx, i.second);
    }
//    debug(mx)
    string ans = "";
    for (auto it = track.rbegin(); it != track.rend(); it++) {
        if(it -> first == mx) {
            for(auto& x: it -> second) {
                if(mp[x] == mx) {
                    ans = x;
                    break;
                }
            }
            break;
        }
    }
    cout << ans;
}
