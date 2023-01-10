/*
    author    : MishkatIT
    created   : Wednesday 2023-01-11-02.05.46
    problem   : B - Bad Prices
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
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
        int mn = 1e9;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > mn)
                ans++;
            else
                mn = arr[i];
        }
        cout << ans << '\n';
    }
    return 0;
}

