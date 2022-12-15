/*
    author    : MishkatIT
    created   : Friday 2022-12-16-04.46.28
    problem   : A. Game
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a <= b)
        cout << "Second";
    else
        cout << "First";
    return 0;
}

