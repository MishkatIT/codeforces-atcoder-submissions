/*
    author    : MishkatIT
    created   : Tuesday 2022-11-08-01.41.16
    problem   : 1624 B. Make AP
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
        bool ok = false;
        int a, b, c;
        cin >> a >> b >> c;
        if (((2 * b - c) % a == 0 && 2 * b > c) || ((2 * b - a) % c == 0 && 2 * b > a) || ((a + c) % (2 * b) == 0))
            ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}

