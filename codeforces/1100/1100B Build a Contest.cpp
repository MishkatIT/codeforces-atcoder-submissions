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
    vector<int> d(N);
    set<int> s;
    for (auto& i : v) {
        s.insert(i);
        d[i]++;
        if (s.size() == n) {
            cout << 1;
            for (auto it = s.begin(); it != s.end();) {
                d[*it]--;
                if (d[*it] == 0) {
                    it = s.erase(it);
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


