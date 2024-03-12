/*
    author    : MishkatIT
    created   : Wednesday 2024-03-13-00.22.42
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
        int n, m, x;
        cin >> n >> m >> x;
        set<int> pos;
        pos.insert(x);
        for (int i = 0; i < m; i++) {
            int dist;
            char dir;
            cin >> dist >> dir;
            set<int> temp;
            if (dir == '?' || dir == '0') {
                for (auto& i : pos) {
                    int x = i + dist;
                    if (x > n) {
                        x -= n;
                    }
                    temp.insert(x);
                }
            }
            if(dir == '?' || dir == '1') {
                for (auto& i : pos) {
                    int x = i - dist;
                    if (x <= 0) {
                        x += n;
                    }
                    temp.insert(x);
                }
            }
            pos = temp;
        }
        cout << pos.size() << '\n';
        for (auto& i : pos) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}

