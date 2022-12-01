/*
    author    : MishkatIT
    created   : Friday 2022-12-02-01.51.36
    problem   : 1691 A. Beat The Odds
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
        int a;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a & 1)
                odd++;
            else
                even++;
        }
        cout << min (odd, even) << '\n';
    }
    return 0;
}

