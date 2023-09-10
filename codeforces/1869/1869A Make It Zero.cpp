/*
    author    : MishkatIT
    created   : Sunday 2023-09-10-20.04.29
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
        vector<int>v(n);
        for (auto& i : v) {
            cin >> i;
        }
        if(n % 2 == 0) {
            cout << 2 << '\n';
            cout << 1 << ' ' << n << '\n';
            cout << 1 << ' ' << n << '\n';
            continue;
        }
        cout << 5 << '\n';
        cout << 2 << ' ' << 2 << '\n';
        cout << 1 << ' ' << 2 << '\n';
        cout << 1 << ' ' << 2 << '\n';
        cout << 2 << ' ' << n << '\n';
        cout << 2 << ' ' << n << '\n';
    }

    return 0;
}
