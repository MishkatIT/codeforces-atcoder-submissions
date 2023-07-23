/*
    author    : MishkatIT
    created   : Sunday 2023-07-23-20.23.55
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
    string a, b;
    cin >> a >> b;
    string x, y;
    // equalizing the length by adding some leading zeros if require.
    x = string(a.length(), '0') + b;
    y = string(b.length(), '0') + a;
    if(x > y) {
        cout << '<';
    } else if(x < y) {
        cout << '>';
    } else {
        cout << '=';
    }
    return 0;
}

