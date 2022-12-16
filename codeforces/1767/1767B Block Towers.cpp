/*
    author    : MishkatIT
    created   : Friday 2022-12-16-22.20.12
    problem   : b
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed  main()
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
        int mx = arr[0];
        sort(arr + 1, arr + n);
//        if(arr[ n - 1] == mx)
//        {
//            cout << mx << '\n';
//            continue;
//        }
        int ans = arr[0];
        for (int i = 1; i < n ; i++)
        {
            if (ans < arr[i])
            {
                ans = (ceil((ans + arr[i]) / 2.00));
            }

        }
        cout << ans << '\n';
    }
    return 0;
}

