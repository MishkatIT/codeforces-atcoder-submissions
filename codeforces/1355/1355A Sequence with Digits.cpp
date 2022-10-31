/*
    author    : MishkatIT
    created   : Tuesday 2022-11-01-02.48.24
    problem   : 1355 A. Sequence with Digits
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
        long long a, k;
        cin >> a >> k;
        k--;
        while (k--)
        {
            int mn = 9, mx = 0;
            long long temp = a;
            while (temp)
            {
                int x = temp % 10;
                mn = min(mn, x);
                mx = max(mx, x);
                temp /= 10;
            }
            if (mn * mx == 0)
                break;
            a += mn * mx;
        }
        cout << a << '\n';
    }
    return 0;
}

