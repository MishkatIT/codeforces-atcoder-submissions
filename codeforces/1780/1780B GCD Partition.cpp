/*
    author    : MishkatIT
    created   : Wednesday 2023-01-25-21.25.01
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> pre(n + 1), post(n + 1);
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + arr[i - 1];
//        for(auto i: pre)
//                        cout << i << ' '; cout << '\n';
        for (int i = n - 1; i >= 0; i--)
            post[i] = post[i + 1] + arr[i];
//            for(auto i: post)
//                            cout << i << ' '; cout << '\n';
        int ans = 0;
        for (int i = 1; i < n ; i++)
            ans = max(ans, __gcd(pre[i], post[i]));
        cout << ans << '\n';
    }
    return 0;
}
