/*
    author    : MishkatIT
    created   : Thursday 2024-02-29-02.43.01
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
        if (n & 1) {
            cout << "Bob" << '\n';
        } else if((n & (n - 1)) == 0) { // checking power of  2 or not
            if ((int)log2(n) & 1) {
                cout << "Bob" << '\n';
            } else {
                cout << "Alice" << '\n';
            }
        } else {
            cout << "Alice" << '\n';
        }

    }
    return 0;
}


