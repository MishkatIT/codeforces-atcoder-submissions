/*
    author    : MishkatIT
    created   : Saturday 2022-12-17-19.14.46
    problem   : A. Drazil and Date
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    int a, b, s;
    cin >> a >> b >> s;
    a = abs(a);
    b = abs(b);
    s -= (a + b);
    bool ok = false;
    if(s >= 0)
    if(s % 2 == 0)
        ok = true;
    cout << (ok ? "YES" : "NO");
    return 0;
}

