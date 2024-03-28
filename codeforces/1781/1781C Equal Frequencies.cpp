/*
    author    : MishkatIT
    created   : Thursday 2024-03-28-18.03.51
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
        vector<int> f(26);
        for (auto& i : str) {
            f[i - 'a']++;
        }
        vector<pair<int, int>> sorted(26);
        for (int i = 0; i < 26; i++) {
            sorted[i] = {f[i], i};
        }
        sort(sorted.rbegin(), sorted.rend());
//        for (int i = 0; i < 26; i++) {
//            cout << char(sorted[i].second + 'a') << ' ' << sorted[i].first << '\n';
//        }
        int mn = inf;
        int mxChar = 1;
        for (int i = 1; i <= 26; i++) {
            if (n % i == 0) {
                int temp = 0;
                int cur = n / i;
//                debug(i)
//                debug(cur)
                int a = 0, b = 0;
                for (int j = 0; j < i; j++) {
                    if (sorted[j].first < cur) {
                        a += cur - sorted[j].first;
                    } else {
                        b += sorted[j].first - cur;
                    }
                }
                temp = max(a, b);
                if (temp < mn) {
                    mn = temp;
                    mxChar = i;
                }
//                debug(temp)
            }

        }
//        debug(mxChar)
        vector<char> ans(n);
        vector<int> finall(26);
        string goribs;
        for (int i = 0; i < mxChar; i++) {
            finall[sorted[i].second] = min(n / mxChar, sorted[i].first);
            if (sorted[i].first < n / mxChar) {
                goribs += string(n / mxChar - sorted[i].first, (char)(sorted[i].second + 'a'));
            }
        }
        int changes = 0;
        for (int i = 0; i < n; i++) {
            if (finall[str[i] - 'a']) {
                ans[i] = str[i];
                finall[str[i] - 'a']--;
            } else {
                ans[i] = goribs.back();
                goribs.pop_back();
                changes++;
            }
        }
        cout << changes << '\n';
        for (auto& i : ans) cout << i;
        cout << '\n';
    }
    return 0;
}


