/*
    author    : MishkatIT
    created   : Thursday 2023-12-28-17.53.57
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
        vector<int> v(101);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[x]++;
        }
        for (int i = 0; i < 101; i++) {
            if (v[i]) {
                cout << i << ' ';
                v[i]--;
            }
        }
        for (int i = 0; i < 101; i++) {
            while(v[i]--) {
                cout << i << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}


