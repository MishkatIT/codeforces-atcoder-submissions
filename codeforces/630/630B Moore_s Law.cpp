/*
    author    : MishkatIT
    created   : Saturday 2022-11-19-23.57.37
    problem   : 630 B. Moore's Law
*/
#include<iostream>
#include<cmath>
#include<iomanip>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;

    long double n, t;
    cin >> n >> t;
    cout << setprecision(45) << n * pow(1.000000011, t);

    return 0;
}



