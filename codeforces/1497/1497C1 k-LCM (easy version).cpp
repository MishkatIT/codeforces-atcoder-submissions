/*
    author    : MishkatIT
    created   : Tuesday 2023-06-27-17.04.23
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
        int n, k;
        cin >> n >> k;
        int a, b, c;
        if(n & 1)
        {
            a = n / 2;
            b = a;
            c = 1;
        }
        else
        {
            if((n / 2) & 1)
            {
                a = (n / 2) - 1;
                b = a;
                c = n - 2 * b;
            }
            else
            {
                a = n / 2;
                b = n / 4;
                c = b;
            }
        }
        cout << a << ' ' << b << ' ' << c << '\n';
    }
    return 0;
}

