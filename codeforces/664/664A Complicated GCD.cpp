/*
    author    : MishkatIT
    created   : Friday 2022-12-16-03.45.37
    problem   : A. Complicated GCD
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string a, b;
    cin >> a >> b;
    if(a == b)
        cout << a;
    else
        cout << 1;
    return 0;
}

