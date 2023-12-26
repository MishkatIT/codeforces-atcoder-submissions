/*
    author    : MishkatIT
    created   : Tuesday 2023-12-26-18.29.45
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
    string str;
    cin >> str;
    stack<char> s;
    int player = 0;
    for (auto& i : str) {
        if (s.empty()) {
            s.push(i);
            continue;
        }
        if (s.top() == i) {
            s.pop();
            player ^= 1;
        } else {
            s.push(i);
        }
    }
    if (player == 0) {
        cout << "No" << '\n';
    } else {
        cout << "Yes" << '\n';
    }
    return 0;
}


