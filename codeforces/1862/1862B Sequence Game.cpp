/*
    author    : MishkatIT
    created   : Thursday 2023-08-24-20.47.22
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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto& i : v) {
            cin >> i;
        }
        vector<int> ans;
        ans.push_back(v.front());
        for (int i = 1; i < n; i++) {
            if(v[i] < v[i - 1]) {
                ans.push_back(v[i]);
            }
            ans.push_back(v[i]);
        }
        cout << ans.size() << '\n';
        for (auto& i: ans) {
          cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}

