/*
    author    : MishkatIT
    created   : Thursday 2024-03-14-00.17.31
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        vector<int> f(10);
        for (int i = 0; i < n; i++) {
            f[v[i] % 10]++;
        }
        vector<int> temp;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < min(3, f[i]); j++) {
                temp.push_back(i);
            }
        }
        bool ok = false;
        for (int i = 0; i < temp.size(); i++) {
            for (int j = i + 1; j < temp.size(); j++) {
                for (int k = j + 1; k < temp.size(); k++) {
                    int s = temp[i] + temp[j] + temp[k];
                    ok |= ((s % 10) == 3);
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


