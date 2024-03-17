/*
    author    : MishkatIT
    created   : Sunday 2024-03-17-19.31.34
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
        int n, k;
        cin >> n >> k;
        map<int,int> a, b;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[x]++;
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            b[x]++;
        }

        vector<int> aa, bb;
        for (int i = 1; i <= n; i++) {
            if (a[i] == 0) {
                bb.push_back(i);
            } else if (a[i] == 2) {
                aa.push_back(i);
            }
        }
        vector<int> ans, bns;
//        debug(bb.size())
        for (int i = 0; i < min(k, (int)aa.size()); i++) {
            ans.push_back(aa[i]);
            ans.push_back(aa[i]);
            bns.push_back(bb[i]);
            bns.push_back(bb[i]);
        }

        for (int i = 1; i <= n && 2 * k > (int)ans.size(); i++) {
            if (a[i] == 1 && b[i] == 1) {
                ans.push_back(i);
                bns.push_back(i);
            }
        }
        for (auto& i : ans) cout << i << ' ';
        cout << '\n';
        for (auto & i : bns) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}

