/*
    author    : MishkatIT
    created   : Wednesday 2023-05-10-20.54.20
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
        int arr[3];
        arr[0] = arr[1] = arr[2] = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[x % 3]++;
        }
        int ans = arr[0];
        int mn = min(arr[1], arr[2]);
        ans += mn;
        arr[1] -= mn;
        arr[2] -= mn;
        ans += arr[1] / 3;
        ans += arr[2] / 3;
        cout << ans << '\n';
    }
    return 0;
}

