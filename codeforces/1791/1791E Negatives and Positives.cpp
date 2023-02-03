/*
    author    : MishkatIT
    created   : Friday 2023-02-03-21.09.49
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
        int inisum = 0, sum = 0, x = 0;
        int mn = (int)-1e18;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            inisum += arr[i];
            sum += abs(arr[i]);
            x += arr[i] < 0;
            mn = max(mn, -abs(arr[i]));
        }
        int ans = max(inisum, sum + (2 * ((x & 1)) * mn));
        cout << ans << '\n';
    }
    return 0;
}
