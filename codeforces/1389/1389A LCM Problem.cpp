/*
    author    : MishkatIT
    created   : Thursday 2022-11-03-00.34.42
    problem   : 1389 A. LCM Problem
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
        long long l, r;
        cin >> l >> r;
        if(l * 2 > r )
            cout << "-1 -1" << '\n';
        else
        {
            cout << l << ' ' << l *2 << '\n';
        }
    }

    return 0;
}

