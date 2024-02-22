/*
    author    : MishkatIT
    created   : Thursday 2024-02-22-18.12.23
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
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        n -= 3;
        cout << 169 << string(n, '0') << '\n';
        cout << 196 << string(n, '0') << '\n';
        cout << 961 << string(n, '0') << '\n';
        string a = "10609";
        string b = "90601";
        while(n) {
            cout << a << string(n - 2, '0') << '\n';
            cout << b << string(n - 2, '0') << '\n';
            a.insert(a.begin() + 1, '0');
            a.insert(a.end() - 2, '0');
            b.insert(b.begin() + 1, '0');
            b.insert(b.end() - 2, '0');
            n -= 2;
        }
    }
    return 0;
}


