/*
    author    : MishkatIT
    created   : Monday 2024-01-08-23.54.40
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
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto& i : v) {
        cin >> i;
    }
    map<int, int> mp;
    for (auto& i : v) {
        mp[i]++;
        if (mp.size() == n) {
            cout << 1;
            for (auto it = mp.begin(); it != mp.end(); ) {
                it -> second--;
                if (!it -> second) {
                    it = mp.erase(it);
                } else {
                    it++;
                }
            }
        } else {
            cout << 0;
        }
    }
    return 0;
}


