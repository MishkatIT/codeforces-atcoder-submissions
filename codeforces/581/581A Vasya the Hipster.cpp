/*
    author    : MishkatIT
    created   : Saturday 2022-11-05-01.56.34
    problem   : 581 A. Vasya the Hipster
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int r, b;
    cin >> r >> b;
    cout << min(r, b) << ' ' << (max(r, b) - min(r, b)) / 2;

    return 0;
}

