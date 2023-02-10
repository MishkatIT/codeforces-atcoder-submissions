/*
    author    : MishkatIT
    created   : Friday 2023-02-10-14.28.16
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
        if(n & 1)
        {
            cout << "YES" << '\n';
            int b = n * 2;
            for (int i = 1; i <= n; i += 2)
            {
                cout << i << ' ' << b-- << '\n';
            }
            for (int i = 2; i <= n; i+= 2)
            {
                cout << i << ' ' << b-- << '\n';
            }
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

