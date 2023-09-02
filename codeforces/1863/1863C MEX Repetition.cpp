/*
    author    : MishkatIT
    created   : Saturday 2023-09-02-20.41.20
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
        int n, k;
        cin >> n >> k;
        set<int> s;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
            s.insert(i);
        }
        k %= (n + 1); // we're getting the initial array after n + 1 moves.
        if(k == 0) {
            for (int i = 0; i < n; i++) {
                cout << v[i] << " \n"[i == n - 1];
            }
        } else {
            int mex = 0;
            for (auto& i: s) {
              if(i == mex) mex++;
              else break;
            }

            for (int i = n - (k - 1); i < n; i++) {
                cout << v[i] << ' ';
            }
            cout << mex << ' ';
            for (int i = 0; i < n - k; i++) {
                cout << v[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}

