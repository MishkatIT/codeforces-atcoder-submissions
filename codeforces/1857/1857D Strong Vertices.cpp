/*
    author    : MishkatIT
    created   : Friday 2024-04-05-16.19.39
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
        vector<int> a(n), b(n);
        for (auto& i : a) cin >> i;
        for (auto& i : b) cin >> i;
        vector<pair<int, int>> temp(n); // val, idx
        for (int i = 0; i < n; i++) {
            temp[i] = {a[i] - b[i], i + 1};
        }
        sort(temp.begin(), temp.end());
        vector<int> ans;
        for (auto& i : temp) {
            if (i.first == temp.back().first) {
                ans.push_back(i.second);
            }
        }
        cout << ans.size() << '\n';
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " \n"[i == ans.size() - 1];
        }
    }
    return 0;
}


