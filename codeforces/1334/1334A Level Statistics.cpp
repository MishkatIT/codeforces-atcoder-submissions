/*
    author    : MishkatIT
    created   : Thursday 2023-05-04-14.41.04
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
        int a = 0, b = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if(a > x || b > y || x - a < y - b)
                ok = false;
            a = x, b = y;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

