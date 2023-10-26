/*
    author    : MishkatIT
    created   : Thursday 2023-10-26-21.46.59
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
    string me;
    cin >> me;
    int n;
    cin >> n;
    map<string, int> mp;
    while(n--) {
        string first, second, action, skip;
        cin >> first >> action;

        auto check = [&](int x) {
            if(first == me) {
                mp[second] += x;
            } else if(second == me) {
                mp[first] += x;
            } else {
                mp[second] += 0;
                mp[first] += 0;
            }
        };

        if(action == "likes") {
            cin >> second;
            second = second.substr(0, second.length() - 2);
            check(5);
        } else {
            cin >> skip;
            cin >> second;
            second = second.substr(0, second.length() - 2);
            if (action == "posted") {
                check(15);
            } else {
                check(10);
            }
        }
        cin >> skip;
    }

    vector<pair<int, string>> v;
    for (auto& i: mp) {
        v.push_back({i.second, i.first});
    }

    sort(v.begin(), v.end(), [](auto a, auto b) {
        if(a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    });

    for (auto& i: v) {
        cout << i.second << '\n';
    }

    return 0;
}

