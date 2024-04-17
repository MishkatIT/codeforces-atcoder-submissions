/*
    author    : MishkatIT
    created   : Wednesday 2024-04-17-14.10.09
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
        long long x, y, k;
        cin >> x >> y >> k;
        long long req = k + (k * y) - 1;
        long long op = (req + x - 2) / (x - 1);
        op += k;
        cout << op << '\n';
    }

    return 0;
}

