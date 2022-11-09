/*
    author    : MishkatIT
    created   : Thursday 2022-11-10-04.23.00
    problem   : 1374 A. Required Remainder
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
        long long x, y, n;
        cin >> x >> y >> n;
        cout << ((n - y) / x ) * x + y << '\n';
    }

    return 0;
}


