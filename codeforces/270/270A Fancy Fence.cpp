/*
    author    : MishkatIT
    created   : Thursday 2022-11-10-01.07.13
    problem   : 270 A. Fancy Fence
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
        int a;
        cin >> a;
        double n = 360.00 / (180 - a);
        cout << (n == (int)n ? "YES" : "NO") << '\n';
    }

    return 0;
}



