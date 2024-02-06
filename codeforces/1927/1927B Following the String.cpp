/*
    author    : MishkatIT
    created   : Tuesday 2024-02-06-20.54.39
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }

        map<int, deque<char>> x;
        for (int i = 0; i < 26; i++) {
            x[0].push_back('a' + i);
        }

        for (auto& i : v) {
            cout << x[i].back();
            x[i + 1].push_back(x[i].back());
            x[i].pop_back();
        }
        cout << '\n';
    }
    return 0;
}
