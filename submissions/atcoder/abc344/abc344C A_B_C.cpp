/*
    author    : MishkatIT
    created   : Saturday 2024-03-09-18.07.45
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
    vector<vector<int>> v;
    for (int i = 0; i < 4; i++) {
        int n;
        cin >> n;
        vector<int> temp(n);
        for (auto& i : temp) cin >> i;
        v.push_back(temp);
    }
    set<int> s;
    for (int i = 0; i < v[0].size(); i++) {
        for (int j = 0; j < v[1].size(); j++) {
            for (int k = 0; k < v[2].size(); k++) {
                int sum = v[0][i] + v[1][j] + v[2][k];
                s.insert(sum);
            }
        }
    }
    for (auto& i : v[3]) {
        if (s.find(i) != s.end()) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}

