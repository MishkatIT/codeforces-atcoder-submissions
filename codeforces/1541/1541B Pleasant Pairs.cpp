/*
    author    : MishkatIT
    created   : Tuesday 2023-04-18-19.23.04
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define int long long
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
        const int N = 2e5 + 10;
        int index[N];
        memset(index, 0, sizeof index);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            index[arr[i]] = i + 1;
        }
        int ans = 0;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int temp = arr[i] * arr[j];
                if(temp > N) break;
                if(temp == index[arr[i]] + index[arr[j]])
                    ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
