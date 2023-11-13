/*
    author    : MishkatIT
    created   : Sunday 2023-10-15-23.50.22
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            for (int j = 2; j * j <= v[i]; j++) {
                if(v[i] % j == 0) {
                    int cnt = 0;
                    while(v[i] % j == 0) {
                        cnt++;
                        v[i] /= j;
                    }
                    mp[j] = max(mp[j], cnt);
                }
            }
        }
        for (auto & i: v) {
            if(i > 1) {
                mp[i] = max(mp[i], 1);
            }
        }
        int sum = 0;
        for (auto& i: mp) {
            sum += i.second;
        }

        if(sum & 1) {
            cout << "Alice" << '\n';
        } else {
            cout << "Bob" << '\n';
        }
    }
    return 0;
}