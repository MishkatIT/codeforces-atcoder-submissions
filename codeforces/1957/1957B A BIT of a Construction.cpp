/*
    author    : MishkatIT
    created   : Tuesday 2024-04-23-19.17.30
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        if (n == 1) {
            cout << k << '\n';
            continue;
        }
        int sum = 0;
        vector<int> ans;
        using ll = long long;
        ll x = 0;
        while((1LL << x) <= k) {
            x++;
        }
        x--;
        ans.push_back((1LL << x) - 1);
        ans.push_back(k - ans.back());
        while(ans.size() < n) {
            ans.push_back(0);
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " \n"[i == ans.size() - 1];
        }
    }

    return 0;
}

