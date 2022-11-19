/*
    author    : MishkatIT
    created   : Saturday 2022-11-19-12.42.05
    problem   : 1401 A. Distance and Axis
*/
#include<iostream>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if(k > n)
            cout << k - n << '\n';
        else if(((n & 1) && (k & 1)) || (!(n & 1) && !(k & 1)))
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }

    return 0;
}


