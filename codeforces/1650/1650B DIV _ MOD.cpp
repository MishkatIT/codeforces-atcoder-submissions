/*
    author    : MishkatIT
    created   : Wednesday 2022-10-26-04.10.10
    problem   : 1650 B. DIV + MOD
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
        long long l, r, a, mx = 0;
        cin >> l >> r >> a;
        if(l/a == r/a)
            cout << r/a+r%a << '\n';
        else
            cout << max(r/a + r%a, r/a + a - 2) << '\n';
    }

    return 0;
}




