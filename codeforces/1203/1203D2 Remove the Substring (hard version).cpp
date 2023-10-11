/*
    author    : MishkatIT
    created   : Wednesday 2023-10-11-22.22.28
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
    string s, t;
    cin >> s >> t;

    int slen = s.length();
    int tlen = t.length();

    vector<int> right(tlen);
    for (int i = tlen - 1; i >= 0; i--) {
        int pos;
        if (i == tlen - 1) {
            pos = slen - 1;
        } else {
            pos = right[i + 1] - 1;
        }
        while (s[pos] != t[i]) {
            pos--;
        }
        right[i] = pos;
    }

    int tpos = 0;
    int ans = 0;
    for (int i = 0; i < slen; i++) {
        int r = slen - 1;
        if(tpos < tlen) {
            r = right[tpos] - 1;
        }
        ans = max(ans, r - i + 1);
        if(tpos < tlen && t[tpos] == s[i]) {
            tpos++;
        }

    }
    cout << ans;
    return 0;
}

