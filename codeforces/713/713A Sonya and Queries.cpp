/*
    author    : MishkatIT
    created   : Monday 2024-01-08-21.14.15
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
    map<string, int> pattern;
    while (t--) {
        string op, x;
        cin >> op >> x;
        string temp;
        for (auto& i : x) {
            temp += (((i - '0') & 1) ? '1' : '0');
        }
        temp = string(19 - x.size(), '0') + temp;
        if (op == "+") {
            pattern[temp]++;
        } else if (op == "-") {
            pattern[temp]--;
        } else {
            cout << pattern[temp] << '\n';
        }
    }
    return 0;
}


