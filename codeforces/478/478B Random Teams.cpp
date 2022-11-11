/*
    author    : MishkatIT
    created   : Friday 2022-11-11-17.53.05
    problem   : 478 B. Random Teams
*/
#include<iostream>
#include<cmath>
#include<iomanip>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long n, m;
    cin >> n >> m;
    long long div = (n / m);
    long long rem = (n % m);
    long long x = (m - rem);
    cout << setprecision(1000) << (long long)(x * ((div * (div - 1)) / 2) + rem * ((div + 1) * ((div + 1) - 1)) / 2);
    cout << ' ' << setprecision(1000) << (long long) (((n - m + 1) * ((n - m + 1) - 1)) / 2);

    return 0;
}



