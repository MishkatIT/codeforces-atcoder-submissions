/*
    author    : MishkatIT
    created   : Wednesday 2023-05-31-18.31.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c > 0)
    {
        if(a > 0 && d > 0)
        {
            a--, d--;
            c = 0;
        }
    }
    int mn = min(a, d);
    a -= mn;
    d -= mn;
    if(a == 0 && c == 0 && d == 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}

