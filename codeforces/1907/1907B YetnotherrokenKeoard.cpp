/*
    author    : MishkatIT
    created   : Saturday 2023-12-09-22.27.23
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
        string str;
        cin >> str;
        stack<pair<char, int>> lower, upper;
        for (int i = 0; i < str.size(); i++) {
            if (islower(str[i])) {
                if (str[i] == 'b') {
                    if (!lower.empty()) {
                        lower.pop();
                    }
                } else {
                    lower.push({str[i], i});
                }
            } else {
                if (str[i] == 'B') {
                    if (!upper.empty()) {
                        upper.pop();
                    }
                } else {
                    upper.push({str[i], i});
                }
            }
        }
        vector<pair<char, int>> ans;
        while(!lower.empty() && !upper.empty()) {
            if (lower.top().second < upper.top().second) {
                ans.push_back(lower.top());
                lower.pop();
            } else {
                ans.push_back(upper.top());
                upper.pop();
            }
        }
        while(!lower.empty()) {
            ans.push_back(lower.top());
            lower.pop();
        }
        while(!upper.empty()) {
            ans.push_back(upper.top());
            upper.pop();
        }

        sort(ans.begin(), ans.end(), [&](auto& a, auto& b) {
            return (a.second < b.second);
        });

        for (auto& i : ans) {
            cout << i.first;
        }
        cout << '\n';
    }
    return 0;
}


