/*
    author    : MishkatIT
    created   : Saturday 2024-03-23-23.44.03
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
        vector<int> one, zero, ans;
        int cur = 1;
        for (auto& i : str) {
            if (i == '0') {
                if (one.empty()) {
                    zero.push_back(cur++);
                    ans.push_back(zero.back());
                } else {
                    ans.push_back(one.back());
                    zero.push_back(one.back());
                    one.pop_back();
                }
            } else {
                if (zero.empty()) {
                    one.push_back(cur++);
                    ans.push_back(one.back());
                } else {
                    ans.push_back(zero.back());
                    one.push_back(zero.back());
                    zero.pop_back();
                }
            }
        }
        cout << cur - 1 << '\n';
        for (auto& i : ans) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}


