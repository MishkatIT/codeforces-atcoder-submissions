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
        int arr[n + 1];
        int mx = -1;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            if(arr[i] == mx)
            {
                bool ok = false;
                if(i != 1 && arr[i - 1] != mx)
                    ok = true;
                else if(i != n && arr[i + 1] != mx)
                    ok = true;
                if(ok)
                {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

