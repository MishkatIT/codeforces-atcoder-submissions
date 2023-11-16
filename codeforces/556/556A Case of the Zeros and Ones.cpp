/*
    author    : MishkatIT
    created   : Thursday 2023-11-16-23.22.15
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
    int n;
    cin >> n;
    string str;
    cin >> str;
    stack<char> s;
    for (int i = 0; i < n; i++) {
        if (s.size()) {
            int a = s.top() - '0';
            int b = str[i] - '0';
            if (b == (a ^ 1)) {
                s.pop();
            } else {
                s.push(str[i]);
            }
        } else {
            s.push(str[i]);
        }
    }
    cout << s.size();
    return 0;
}

