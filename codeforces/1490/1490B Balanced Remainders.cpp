/*
    author    : MishkatIT
    created   : Monday 2023-05-01-18.24.40
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
        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            if(arr[i % 3] > n / 3)
            {
                int x = arr[i % 3] - n / 3;
                ans += x;
                arr[(i + 1) % 3] += x;
                arr[i % 3] = n / 3;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
