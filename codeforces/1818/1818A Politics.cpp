/*
    author    : MishkatIT
    created   : Saturday 2023-04-29-21.28.46
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string x;
        cin >> x;
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            string temp;
            cin >> temp;
            if(temp == x)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}

