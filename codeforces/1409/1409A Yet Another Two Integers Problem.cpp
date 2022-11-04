/*
    author    : MishkatIT
    created   : Saturday 2022-11-05-02.47.51
    problem   : 1409 A. Yet Another Two Integers Problem
*/
#include<iostream>
#include<cmath>
#include<iomanip>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << setprecision(10000) << ceil((abs(a - b) / 10.00)) << '\n';
    }

    return 0;
}

