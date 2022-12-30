/*
    author    : MishkatIT
    created   : Friday 2022-12-30-17.01.48
    problem   : B. GCD Length
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
        long long a, b, c;
        cin >> a >> b >> c;
        long long x = pow(10, c - 1);
        long long y = x;
        while(x < (long long)pow(10, a - 1))
            x *= 2;
        while(y < (long long)pow(10, b - 1))
            y *= 5;
        cout << x << ' ' << y << '\n';
    }
    return 0;
}

