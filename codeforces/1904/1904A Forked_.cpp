/*
    author    : MishkatIT
    created   : Tuesday 2023-12-12-19.49.25
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

int dx[] = {1, 1, -1, -1};
int dy[] = {1, -1, 1, -1};

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int kx, ky;
        cin >> kx >> ky;
        int qx, qy;
        cin >> qx >> qy;

        map<pair<int, int>, int> mp;
        for (int x = 0; x < 2; x++) {
            for (int i = 0; i < 4; i++) {
                int nx = kx + dx[i] * a;
                int ny = ky + dy[i] * b;
                mp[ {nx, ny}]++;
            }
            for (int i = 0; i < 4; i++) {
                int nx = qx + dx[i] * a;
                int ny = qy + dy[i] * b;
                mp[ {nx, ny}]++;
            }
            if (a != b) {
                swap(a, b);
            } else break;
        }
        int ans = 0;
        for (auto& i : mp) {
            ans += (i.second == 2);
        }
        cout << ans << '\n';
    }
    return 0;
}


