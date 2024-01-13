/*
    author    : MishkatIT
    created   : Saturday 2024-01-13-20.22.29
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
        string a, b;
        cin >> a >> b;
        vector<int> ans;
        bool rev = false;
        for (int i = n - 1; i >= 0; i--) {
            if (rev) {
                if (a[i] == b[i]) {
                    if (a.front() != b[i]) {
                        ans.push_back(1);
                    }
                    ans.push_back(i + 1);
                    rev ^= 1;
                    reverse(a.begin(), a.begin() + i + 1);
                }
            } else {
                if (a[i] != b[i]) {
                    if (a.front() == b[i]) {
                        ans.push_back(1);
                    }
                    ans.push_back(i + 1);
                    rev ^= 1;
                    reverse(a.begin(), a.begin() + i + 1);
                }
            }
        }
        cout << ans.size();
        for (auto& i : ans) {
            cout << ' ' << i;
        }
        cout << '\n';
    }
    return 0;
}


