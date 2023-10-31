/*
    author    : MishkatIT
    created   : Tuesday 2023-10-31-11.46.11
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
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(q);
        for (auto& i : a) {
            cin >> i;
        }
        for (auto& i : b) {
            cin >> i;
        }
        vector<int> smallerIdx(35, inf);
        for (int i = 0; i < q; i++) {
            if (smallerIdx[b[i]] == inf) {
                smallerIdx[b[i]] = i;
            }
        }
        for (int i = 0; i < n; i++) {
            int firstIdx = inf;
            for (int j = 1; j <= 30; j++) {
                if (a[i] % (1 << j) == 0) {
                    firstIdx = min(firstIdx, smallerIdx[j]);
                }
            }
            while (firstIdx < q) {
                a[i] += (1 << (b[firstIdx] - 1));
                int x = b[firstIdx] - 1;
                int xx = inf;
                while(x >= 0) {
                    if(smallerIdx[x] != inf && smallerIdx[x] > firstIdx) {
                        xx = min(xx, smallerIdx[x]);
                    }
                    x--;
                }
                firstIdx = xx;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}

