/*
    author    : MishkatIT
    created   : Sunday 2022-11-20-00.35.44
    problem   : C. Lucky Numbers
*/
#include<iostream>
#include<cmath>
#include<iomanip>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    cout << (long long)pow(2, n + 1) - 2;

    return 0;
}



