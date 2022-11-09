/*
    author    : MishkatIT
    created   : Wednesday 2022-11-09-21.21.24
    problem   : 472 A. Design Tutorial Learn from Math
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n ;
    cin >> n;
    if(n%2)
        cout << n - 9 << " 9" << '\n';
    else
        cout << n-4 << " 4" << '\n';

    return 0;
}



