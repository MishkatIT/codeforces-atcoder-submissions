/*
    author    : MishkatIT
    created   : Friday 2023-05-19-20.51.43
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>>a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = {x, i};
        }
        sort(a.begin(), a.end());

        vector<int>b(n);
        for (auto& x: b)
        {
            cin >> x;
        }
        sort(b.begin(), b.end());
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i];
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}

