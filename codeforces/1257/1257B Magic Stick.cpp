/*
    author    : MishkatIT
    created   : Sunday 2022-12-18-13.57.12
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
        long long x, y;
        cin >> x >> y;
        bool ok = true;
        if(x < y)
        {
            if (x & 1 && (x != y))
            {
                x--;
                long long temp = ((3 * x) / 2);
                if(temp <= x + 1)
                    ok = false;
            }
            else
            {
                long long temp = ((3 * x) / 2);
                if(temp != y)
                    if (temp - 1 == x)
                        ok = false;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

