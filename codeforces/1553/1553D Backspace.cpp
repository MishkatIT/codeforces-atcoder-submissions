/*
    author    : MishkatIT
    created   : Saturday 2023-08-19-18.47.06
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
        string s, t;
        cin >> s >> t;

        int j = t.length() - 1;
        for (int i = s.length() - 1; i >= 0;) {
            if(j >=0 && s[i] == t[j]) {
                j--;
                i--;
            } else {
                i -= 2;
            }
        }
        cout << (j < 0 ? "YES" : "NO") << '\n';
    }
    return 0;
}

