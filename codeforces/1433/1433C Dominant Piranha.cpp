/*
    author    : MishkatIT
    created   : Thursday 2022-12-22-03.58.50
    problem   : C. Dominant Piranha
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
        int mx =  - 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        int i;
        int ans = -1;
        bool ok = false;
        for (i = 0; i < n - 1; i++)
        {
            if(arr[i] < mx && arr[i + 1] == mx)
            {
                ok = true;
                ans = i + 2;
                break;
            }
        }
        if(!ok)
        {
            for (int i = n - 1; i > 0; i--)
            {
                if(arr[i] < mx && arr[i - 1] == mx)
                {
                    ok = true;
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

