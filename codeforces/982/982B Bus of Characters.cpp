/*
    author    : MishkatIT
    created   : Thursday 2024-01-11-21.18.17
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
    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    string str;
    cin >> str;
    sort(v.begin(), v.end());
    int cur = 1;
    stack<int> s;
    for (auto& i : str) {
        if (i == '0') {
            cout << v[cur].second << ' ';
            s.push(v[cur].second);
            cur++;
        } else {
            cout << s.top() << ' ';
            s.pop();
        }
    }
    return 0;
}
