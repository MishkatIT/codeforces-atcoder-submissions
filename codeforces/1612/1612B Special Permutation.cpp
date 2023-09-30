/*
    author    : MishkatIT
    created   : Saturday 2023-09-30-23.50.58
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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> p(n + 5, 1);
        vector<int> ans;
        ans.push_back(a);
        p[a]--;
        int cnt = n / 2 - 1;
        for (int i = b + 1; i <= n && cnt; i++) {
            if(i == a)continue;
            ans.push_back(i);
            cnt--;
            p[i]--;
        }
        if(cnt) {
            for (int i = b - 1; i > 0 && cnt; i--) {
                if (i == a) continue;
                ans.push_back(i);
                p[i]--;
            }
        }
        ans.push_back(b);
        p[b]--;
        for (int i = 1; i <= n; i++) {
            if(p[i]) {
                ans.push_back(i);
            }
        }

        if((ans.size() == n) && *min_element(ans.begin(), ans.begin() + n / 2) == a && *max_element(ans.begin() + n / 2, ans.end()) == b) {
            for (auto& i: ans) {
                cout << i << ' ';
            }
        } else {
            cout << -1;
        }
        cout << '\n';
    }
    return 0;
}

