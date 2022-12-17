/*
    author    : MishkatIT
    created   : Saturday 2022-12-17-18.59.21
    problem   : B. Water Lily
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    long double h, l;
    cin >> h >> l;
    cout << setprecision(18) << ((l * l) - (h * h)) / (2 * h);
    return 0;
}

