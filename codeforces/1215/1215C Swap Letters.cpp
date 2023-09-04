/*
    author    : MishkatIT
    created   : Monday 2023-09-04-20.31.18
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
    string s, t;
    cin >> s >> t;

    int cnta = 0;
    cnta += count(s.begin(), s.end(), 'a');
    cnta += count(t.begin(), t.end(), 'a');
    if(cnta % 2 != 0 || (2 * n - cnta) % 2 != 0) {
        cout << -1;
        return 0;
    }

    map<string, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        if(s[i] != t[i]) {
            string temp = "";
            temp += s[i];
            temp += t[i];
            mp[temp].push_back(i + 1);
        }
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i + 1 < mp["ab"].size(); i += 2) {
        ans.push_back({mp["ab"][i], mp["ab"][i + 1]});
    }
    for (int i = 0; i + 1 < mp["ba"].size(); i += 2) {
        ans.push_back({mp["ba"][i], mp["ba"][i + 1]});
    }
    if(mp["ab"].size() & 1) {
        ans.push_back({mp["ab"].back(), mp["ab"].back()});
        ans.push_back({mp["ab"].back(), mp["ba"].back()});

    }
    cout << ans.size() << '\n';
    for (auto& i: ans) {
        cout << i.first << ' ' << i.second << '\n';
    }
    return 0;
}

