/*
    author    : MishkatIT
    created   : Friday 2023-09-08-21.53.52
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
    string str;
    cin >> str;
    int n = str.size();
    int ans = inf;
    for (char i = 'a'; i <= 'z'; i++) {
        int mx = 0;
        int last = -1;
        for (int j = 0; j < n; j++) {
            if(str[j] == i) {
                mx = max(mx, j - last);
                last = j;
            }

        }
        mx = max(mx, n - last);
        ans = min(ans, mx);
    }
    cout << ans;
    return 0;
}

