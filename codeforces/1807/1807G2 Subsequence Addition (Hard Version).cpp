/*
    author    : MishkatIT
    created   : Sunday 2023-03-19-22.28.44
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int sum = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] <= sum)
                sum += arr[i];
            else if(arr[i] == 1 && i == 0)
                sum++;
            else
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}

