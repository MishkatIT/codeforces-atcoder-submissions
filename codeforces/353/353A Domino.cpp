/*
    author    : MishkatIT
    created   : Sunday 2023-04-16-00.22.32
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    int u = 0, l = 0;
    bool dif = false;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a % 2 != b % 2)
            dif = true;
        u += a;
        l += b;
    }
    if(u % 2 == 0 && l % 2 == 0)
        cout << 0;
    else if((u & 1) & (l & 1) && dif)
        cout << 1;
    else
        cout << -1;

    return 0;
}
