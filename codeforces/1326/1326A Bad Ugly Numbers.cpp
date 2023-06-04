/*
    author    : MishkatIT
    created   : Sunday 2023-06-04-21.23.30
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
        int n;
        cin >> n;
        if(n == 1)
            cout << -1 << '\n';
        else
        {
            string x = string(n, '5');
            x.back() = '4';
            cout << x << '\n';
        }
    }
    return 0;
}
