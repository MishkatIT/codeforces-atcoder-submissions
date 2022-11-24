/*
    author    : MishkatIT
    created   : Thursday 2022-11-24-19.49.47
    problem   : 1373 A. Donut Shops
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, c, ans, bns;
        cin >> a >> b >> c;
        if(a < c)
            ans = 1;
        else if((b + 1) * a < c * 2)
            ans = b + 1;
        else
            ans = -1;
        if(a * b > c)
            bns = b;
        else
            bns = -1;
        cout << ans << ' ' << bns << '\n';

    }

    return 0;
}



