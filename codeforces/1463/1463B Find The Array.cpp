/*
    author    : MishkatIT
    created   : Friday 2023-08-11-15.56.43
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
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cout << (1 << (int)(log2(x))) << ' ';
        }
        cout << '\n';
    }
    return 0;
}

// 2^a % 2^b == 0 if(a >= b && a >= 0)