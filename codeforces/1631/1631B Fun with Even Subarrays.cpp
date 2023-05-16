/*
    author    : MishkatIT
    created   : Tuesday 2023-05-16-18.19.03
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
        int ans = 0;
        int same = 1;
        int i = n - 2;
        while(i >= 0)
        {
            bool ok = true;
            while(arr[i] == arr[n - 1])
            {
                same++;
                i--;
                if(i < 0)
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
                ans++;
            i -= same;
            same += same;
        }
        cout << ans << '\n';
    }

    return 0;
}

