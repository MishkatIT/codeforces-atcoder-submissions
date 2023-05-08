/*
    author    : MishkatIT
    created   : Monday 2023-05-08-19.27.21
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int sz = n * m;
        vector<int> v(sz);
        for (int i = 0; i < sz; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int mna = v[0], mnb = v[1];
        int mxa = v[sz - 1], mxb = v[sz - 2];

        int ans = (max(n, m) - 1) * min(n, m) * mxa;
        ans += (min(n, m) - 1) * mxb;
        ans -= (sz - 1) * mna;

        int bns = (max(n, m) - 1) * (min(m, n)) * mna;
        bns += (min(n, m) - 1) * mnb;
        bns = (mxa * (sz - 1)) - bns;

        cout << max(ans, bns) << '\n';
    }

    return 0;
}
