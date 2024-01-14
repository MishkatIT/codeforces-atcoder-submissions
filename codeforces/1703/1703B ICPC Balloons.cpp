/*
    author    : MishkatIT
    created   : Sunday 2024-01-14-23.40.21
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
        string str;
        cin >> str;
        set<char> s;
        for (auto& i : str) {
            s.insert(i);
        }
        cout << n * 2 - (n - s.size()) << '\n';
    }
    return 0;
}


