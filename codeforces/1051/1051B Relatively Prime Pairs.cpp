/*
    author    : MishkatIT
    created   : Sunday 2022-12-18-18.53.55
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long l, r;
    cin >> l >> r;
    long long n = (r - l + 1);
    cout << "YES" << '\n';
    long long cnt = l;
    for (long long i = 1; i <= n; i += 2)
    {
        cout << cnt++ << ' ' << cnt++ << '\n';
    }
    return 0;
}

