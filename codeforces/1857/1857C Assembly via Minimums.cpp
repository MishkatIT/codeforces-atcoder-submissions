/*
    author    : MishkatIT
    created   : Tuesday 2023-08-08-01.14.17
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
        map<int, int, greater<int>> mp;
        for (int i = 0; i < n * (n - 1) / 2; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        int x = 0;
        for (auto& i: mp) {
            while(i.second > 0) {
                cout << i.first << ' ';
                i.second -= x;
                x++;
            }
        }
        cout << '\n';
    }
    return 0;
}
