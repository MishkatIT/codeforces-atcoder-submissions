/*
    author    : MishkatIT
    created   : Saturday 2023-04-29-21.19.00
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
        if(n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        else if((n * (n + 1) / 2) % n == 0)
        {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
                cout << i + 2 << ' ';
            else
                cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}

