/*
    author    : MishkatIT
    created   : Monday 2023-04-24-21.57.27
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
        int n;
        cin >> n;
        if(n&1)
        {
            int ans = -1;
            if(n == 1)
                ans = 1;
            cout << ans << '\n';
            continue;
        }
        cout << n << ' ';
        int x = 0, y = n - 1;
        for (int i = 0; i + 1 < n; i++)
        {
            if(i % 2 == 0)
                cout << (y - x + n) % n << ' ', x++;
            else
                cout << (x - y + n) % n << ' ', y--;
        }
        cout << '\n';
    }
    return 0;
}
