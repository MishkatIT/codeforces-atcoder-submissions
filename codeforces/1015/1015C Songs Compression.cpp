/*
    author    : MishkatIT
    created   : Wednesday 2022-12-28-00.54.27
    problem   : C. Songs Compression
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int n, m;
    cin >> n >> m;
    int a, b;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i] = abs(a - b);
        sum += a;
    }
    sum = max((long long)0, sum - m);
    sort(v.rbegin(), v.rend());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(sum > 0)
        {
            cnt++;
            sum -= v[i];
        }
    }
    int ans = cnt;
    if(sum > 0)
        ans = -1;
    cout << ans;
    return 0;
}

