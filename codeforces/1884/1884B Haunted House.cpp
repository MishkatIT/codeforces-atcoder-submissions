/*
    author    : MishkatIT
    created   : Sunday 2023-10-22-13.42.41
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

#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        str = '#' + str;
        vector<int> ans;
        int r = n;
        int ex = 0;

        auto chk = [&] (int pos) {
            r = min(r, pos);
            while(r > 0) {
                if(str[r] == '0') {
                    ex += (pos - r);
                    str[r] = '1';
                    str[pos] = '0';
                    break;
                }
                r--;
            }

        };

        int xx = n - 1;
        for (int i = n; i > 0; i--) {
            if(str[i] == '1') {
                chk(i);
            }
            if(r > 0) {
                ans.push_back(ex);
            } else {
                break;
            }
        }

        for(auto& i: ans) {
            cout << i << ' ';
        }

        int rem = n - ans.size();
        while(rem--) {
            cout << -1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}
