/*
    author    : MishkatIT
    created   : Thursday 2022-11-24-00.20.27
    problem   : A. Red and Blue Beans
*/
#include<iostream>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int l, r, d;
        cin >> l >> r >> d;
        if(l > r)
            swap(l, r);
        int rem = r % l;
        int div = r / l;
        if((d + 1) * l >= r)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}



