/*
    author    : MishkatIT
    created   : Saturday 2023-04-15-17.46.25
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n, [](int x, int y)
        {
            return (x & 1) < (y & 1);
        });
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                ans += __gcd(arr[i], arr[j] * 2) > 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}

