/*
    author    : MishkatIT
    created   : Tuesday 2024-03-05-20.52.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b;
    cin >> a >> b;
    int g = __gcd(a, b);
    if (g == 1) {
        cout << max(a, b) + 1 << ' ' << max(a, b) + 2;
    } else {
        int gg = g;
        while(gg <= max(a, b)) gg += gg;
        cout << gg << ' ' << gg + g;

    }

    return 0;
}

