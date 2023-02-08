/*
    author    : MishkatIT
    created   : Wednesday 2023-02-08-22.36.17
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
        int mx = 0;
        char c;
        for (int i = 1; i <= n; i++)
        {
            cin >> c;
            if(c - '0')
                mx = max(mx, max(i, n - i + 1));
        }
        cout << max(n, mx * 2) << '\n';
    }
    return 0;
}

