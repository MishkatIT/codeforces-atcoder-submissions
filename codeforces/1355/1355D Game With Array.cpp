/*
    author    : MishkatIT
    created   : Sunday 2022-12-04-20.40.04
    problem   : D. Game With Array
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, s;
    cin >> n >> s;
    if((n > s) || (s < 2 * n))
        cout << "NO" << '\n';
    else
    {
        cout << "YES" << '\n';
        for(int i = 1; i < n; i++)
            cout << "2 ";
        cout << s - 2 * (n - 1) << '\n';
        cout << 1;
    }
    return 0;
}

