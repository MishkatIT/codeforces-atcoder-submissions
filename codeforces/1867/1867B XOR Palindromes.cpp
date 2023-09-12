/*
    author    : MishkatIT
    created   : Monday 2023-09-11-21.10.26
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        string ans;
        int bad = 0;
        for (int i = 0; i < n / 2; i++) {
            bad += (str[i] != str[n - i - 1]);
        }
        for (int i = 0; i <= n / 2; i++) {
            if(i >= bad) {
                if(i == bad) {
                    ans += "1";
                } else {
                    int x = i - bad;
                    if(x % 2 == 0) {
                        ans += "1";
                    } else if(n & 1) {
                        ans += "1";
                    } else {
                        ans += "0";
                    }
                }
            } else {
                ans += "0";
            }
        }
        cout << ans;
        if(!(n & 1)) {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}