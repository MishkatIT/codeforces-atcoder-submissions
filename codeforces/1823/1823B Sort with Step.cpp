/*
    author    : MishkatIT
    created   : Saturday 2023-04-29-19.54.49
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
        int n, k;
        cin >> n >> k;
        int needed = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if(x % k != i % k)
                needed++;
        }
        if(needed == 2)
        {
            cout << 1 << '\n';
        }
        else if(needed == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}
