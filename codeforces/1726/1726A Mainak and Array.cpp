/*
    author    : MishkatIT
    created   : Thursday 2022-12-01-00.23.52
    problem   : 1746 A. Mainak and Array
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
        int arr[n + 10];
        memset(arr, 0, sizeof (arr));
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mx = 0;
        for (int i = 1; i < n; i++)
            mx = max (mx, arr[n - 1] - arr[i]);
        for (int i = 0; i < n - 1; i++)
            mx = max (mx, arr[i + 1] - arr[0]);
        for (int i = 0; i < n - 1; i++)
            mx = max (mx, arr[i] - arr[i + 1]);
        cout << mx << '\n';
    }
    return 0;
}

