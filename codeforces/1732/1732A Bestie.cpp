/*
    author    : MishkatIT
    created   : Saturday 2023-06-03-02.22.09
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
        int g = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            g = __gcd(g, x);
        }
        int ans;
        if(g == 1) ans = 0;
        else if(__gcd(g, n) == 1) ans = 1;
        else if(__gcd(g, n - 1) == 1) ans = 2;
        else ans = 3;
        cout << ans << '\n';
    }

    return 0;
}

