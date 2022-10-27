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
        long long a, b, c, ans, i, temp;
        cin >> a >> b >> c;
        ans = a+b;
        a = max(a, b);
        for(i=1; ans <= c; i++)
        {
            temp = ans;
            ans  += a;
            a = temp;
        }
        cout << i << '\n';

    }

    return 0;
}



