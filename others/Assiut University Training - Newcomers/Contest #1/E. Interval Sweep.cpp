/*
    author    : MishkatIT
    created   : Friday 2023-01-20-18.09.00
    problem   : E. Interval Sweep
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b;
    cin >> a >> b;
    if(abs(a - b) <= 1 && (a > 0 || b > 0))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}