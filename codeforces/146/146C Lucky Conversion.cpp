/*
    author    : MishkatIT
    created   : Sunday 2024-02-04-01.54.05
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
    string a, b;
    cin >> a >> b;
    int seven = 0, four = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            seven += (a[i] == '7');
            four += (a[i] == '4');
        }
    }
    cout << min(seven, four) + abs(seven - four);
    return 0;
}


