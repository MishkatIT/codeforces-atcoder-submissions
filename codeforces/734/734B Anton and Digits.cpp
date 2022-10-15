/*
    author    : MishkatIT
    created   : Sunday 2022-10-16-01.32.56
    problem   : 734 B. Anton and Digits
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = min(min(a, c), d);
    int y = min((a-x), b);
    cout << x*256 + y*32;


    return 0;
}

