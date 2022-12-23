/*
    author    : MishkatIT
    created   : Friday 2022-12-23-23.44.34
    problem   : A. Minimum Integer
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
        long long l, r, d;
        cin >> l >> r >> d;
        if(d < l)
            cout << d << '\n';
        else
            cout << r + d - (r % d) << '\n';
    }
    return 0;
}

