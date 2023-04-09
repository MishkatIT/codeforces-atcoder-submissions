/*
    author    : MishkatIT
    created   : Monday 2023-04-10-03.44.30
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if(x & 1)
        {
            cout << -1 << '\n';
            continue;
        }
        int a = x + x / 2;
        int b = x / 2;
        if((a ^ b) == x)
            cout << a << ' ' << b << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}

