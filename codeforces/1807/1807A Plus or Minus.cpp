/*
    author    : MishkatIT
    created   : Sunday 2023-03-19-20.30.06
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
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + b == c ? '+' : '-') << '\n';
    }

    return 0;
}
