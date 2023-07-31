/*
    author    : MishkatIT
    created   : Monday 2023-07-31-18.00.21
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int inf = 1e9;
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
        vector<int> pref(n), suf(n);
        int sheep = (str.front() == '*');
        for (int i = 1; i < n; i++) {
            if(str[i] == '*') {
                sheep++;
                pref[i] = pref[i - 1];
            } else {
                pref[i] = pref[i - 1] + sheep;
            }
        }
        sheep = (str.back() == '*');
        for (int i = n - 2; i >= 0; i--) {
            if(str[i] == '*') {
                sheep++;
                suf[i] = suf[i + 1];
            } else {
                suf[i] = suf[i + 1] + sheep;
            }
        }
        int ans = 1e18;
        for (int i = 0; i < n; i++) {
            ans = min(ans, pref[i] + suf[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}
