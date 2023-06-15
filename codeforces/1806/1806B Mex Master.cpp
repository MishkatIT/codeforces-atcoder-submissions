/*
    author    : MishkatIT
    created   : Thursday 2023-06-15-14.41.44
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
        int zero = 0, notZero = 0;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x == 0) zero++;
            else notZero++;
            mx = max(mx, x);
        }
        int ans;
        if(notZero >= zero - 1)
        {
            ans = 0;
        }
        else if(mx == 1)
            ans = 2;
        else
            ans = 1;
        cout << ans << '\n';
    }
    return 0;
}

