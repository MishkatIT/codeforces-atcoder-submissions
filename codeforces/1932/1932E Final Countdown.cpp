/*
    author    : MishkatIT
    created   : Friday 2024-03-22-23.21.01
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<int> suf(n + 1);
        for (int i = 1; i <= n; i++) {
            suf[i] = suf[i - 1] + str[i - 1] - '0';
        }
        vector<int> ans;
        ll carry = 0;
        for (int i = n; i > 0; i--) {
            ans.push_back((suf[i] + carry) % 10);
            carry = (suf[i] + carry ) / 10;
        }
        if (carry > 0) {
            ans.push_back(carry);
        }
        int i = ans.size() - 1;
        while(ans[i] == 0) i--;
        while(i >=0) {
            cout << ans[i--];
        }
        cout << '\n';
    }
    return 0;
}


