/*
    author    : MishkatIT
    created   : Tuesday 2023-12-26-18.39.48
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
    int cnt = 0;
    for (auto& i : str) {
        if (i == '(') {
            s.push(i);
        } else if(!s.empty() && s.top() == '(') {
            s.pop();
        } else {
            cnt++;
        }
    }
    if ((cnt + s.size() == 0) || (cnt == 1 && s.size() == 1)) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}


