/*
    author    : MishkatIT
    created   : Friday 2022-10-28-01.15.13
    problem   : 1368 A. C+=
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, c, ans = 0;
        cin >> a >> b >> c;
        while(a <= c and b <= c)
        {
            if(a<b)
                swap(a, b);
            b+=a;
            ans++;
        }
        cout << ans << '\n';

    }

    return 0;
}



