/*
    author    : MishkatIT
    created   : Sunday 2024-02-18-17.04.12
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
        string str;
        cin >> str;

        vector<pair<char, int>> largest; //char, position
        vector<bool> taken(n, false);
        for (int i = 0; i < n; i++) {
            while(!largest.empty() && largest.back().first < str[i]) {
                largest.pop_back();
            }
            largest.push_back({str[i], i});
        }

        int same = 1;
        for (int i = 0; i + 1 < largest.size(); i++) {
            same += largest[0].first == largest[i + 1].first;
        }

        reverse(largest.begin(), largest.end());
        for (int i = 0; i < largest.size(); i++) {
            str[largest[largest.size() - 1 - i].second] = largest[i].first;
        }

        if (is_sorted(str.begin(), str.end())) {
            cout << largest.size() - same << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}


