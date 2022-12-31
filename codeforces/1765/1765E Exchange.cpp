/*
    author    : MishkatIT
    created   : Saturday 2022-12-31-23.14.16
    problem   : E. Exchange
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if(a > b)
            cout << 1 << '\n';
        else
            cout << setprecision(1000) << ceil((double)n / a) << '\n';
    }
    return 0;
}

