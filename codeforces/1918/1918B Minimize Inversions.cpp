/*
    author    : MishkatIT
    created   : Tuesday 2024-01-30-20.42.43
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
        vector<int> a(n), b(n);
        for (auto& i : a) {
            cin >> i;
        }
        for (auto& i : b) {
            cin >> i;
        }
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = {a[i], b[i]};
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            cout << v[i].first << ' ';
        }
        cout << '\n';
        for (int i = 0; i < n; i++) {
            cout << v[i].second<< ' ';
        }
        cout << '\n';
//        int axx = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                if (v[i].second > v[j].second)axx++;
//            }
////    cout << v[i].second << ' ';
//        }
//        cout << axx << '\n';
    }
    return 0;
}

