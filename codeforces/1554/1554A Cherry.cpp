/*
    author    : MishkatIT
    created   : Wednesday 2023-01-04-02.17.50
    problem   : A. Cherry
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
        int ans = 0;
        for (int i = 1; i < n; i++)
            ans = max(ans, arr[i] * arr[i - 1]);
        cout << ans << '\n';
    }
    return 0;
}

