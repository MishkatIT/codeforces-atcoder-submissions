/*
    author    : MishkatIT
    created   : Wednesday 2023-10-11-18.28.39
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
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int tpos = 0;
            for (int k = 0; k < n; k++) { // check if it possible to create the string 't' from the remaining characters. (except from i to j).
                if(k < i || k > j) { // since we're removing the substring from i to j. 
                    if(tpos < t.size() && t[tpos] == s[k]) {
                        tpos++;
                    }
                }
            }
            if(tpos == t.size()) {
                ans = max(ans, j - i + 1);
            }
        }
    }
    cout << ans;
    return 0;
}

