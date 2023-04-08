/*
    author    : MishkatIT
    created   : Saturday 2023-04-08-20.51.35
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define int long long
using namespace std;
void LesGo (void)
{
    int n, k;
    cin >> n >> k;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;

    for (int i = 0; i <  n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] != arr[n - 1 - i][n - 1 - j])cnt++;
        }
    }
    cnt /= 2;
    if(cnt <= k)
    {
        k -= cnt;
        if(k % 2 == 0 || n % 2 == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        return;
    }
    cout << "NO" << '\n';
    return;
}

signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        LesGo();
    return 0;
}
