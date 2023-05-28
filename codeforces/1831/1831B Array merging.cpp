/*
    author    : MishkatIT
    created   : Sunday 2023-05-28-20.54.19
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 4e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for (auto& x: a)
        {
            cin >> x;
        }
        vector<int>b(n);
        for (auto& x: b)
        {
            cin >> x;
        }
        int cnt = 1;
        unordered_map<int, int> af;
        for (int i = 0; i + 1 < n; i++)
        {
            if(a[i] == a[i + 1])
                cnt++;
            else
                cnt = 1;
            af[a[i]] = max(af[a[i]], cnt);
        }
        af[a[n - 1]] = max(af[a[n - 1]], 1);
        cnt = 1;

        unordered_map<int, int> bf;
        for (int i = 0; i + 1 < n; i++)
        {
            if(b[i] == b[i + 1])
                cnt++;
            else
                cnt = 1;
            bf[b[i]] = max(bf[b[i]], cnt);
        }
        bf[b[n - 1]] = max(bf[b[n - 1]], 1);

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max({ans, af[a[i]] + bf[a[i]], af[b[i]] + bf[b[i]]});
        }
        cout << ans << '\n';

    }
    return 0;
}

