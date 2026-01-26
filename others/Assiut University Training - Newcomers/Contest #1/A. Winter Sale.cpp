/*
    author    : MishkatIT
    created   : Friday 2023-01-20-17.38.08
    problem   : A. Winter Sale
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int x, p;
    cin >> x >> p;
    cout << fixed << setprecision(2) << (double)(p * 100) / (100 - x);
    return 0;
}