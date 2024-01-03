/*
    author    : MishkatIT
    created   : Wednesday 2024-01-03-19.49.02
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
    int n, m;
    cin >> n >> m;
    while (n > 0) {
        int x = 0;
        int mid = (m + 1) / 2;
        int turn = (m & 1);
        while(x < m && n > 0) {
            if (turn) {
                mid += x;
            } else {
                mid -= x;
            }
            cout << mid << '\n';
            x++;
            n--;
            turn ^= 1;
        }
    }
    return 0;
}


