/*
    author    : MishkatIT
    created   : Saturday 2023-04-29-21.55.10
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
signed main()
{
    fio;
    int n, q;
    cin >> n >> q;
    vector<int>v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre (n + 10, 0);
    pre[1] = 1;
    for (int i = 2; i < n; i++)
    {
        if(v[i] <= v[i - 1] && v[i - 1] <= v[i - 2])
            pre[i + 1] = pre[i];
        else
            pre[i + 1] = pre[i] + 1;
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        if(r - l < 2)
        {
            cout << r - l + 1 << '\n';
            continue;
        }
        cout << pre[r] - pre[l + 1] + 2 << '\n';
    }
    return 0;
}
