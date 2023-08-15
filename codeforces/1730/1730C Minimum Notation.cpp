/*
    author    : MishkatIT
    created   : Wednesday 2023-08-16-00.47.24
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
        string str;
        cin >> str;
        string ans;
        ans += str.back();
        for (int i = str.length() - 2; i >= 0; i--) {
            if(str[i] > ans.front()) {
                char x = str[i];
                if(x != '9') ++x;
                ans += x;
            } else {
                ans = str[i] + ans;
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}

