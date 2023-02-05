/*
    author    : MishkatIT
    created   : Sunday 2023-02-05-23.16.30
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long a, b, c;
    cin >> a >> b >> c;
    long long temp = sqrt(a * b * c);
    int ans = 0;
    ans += (temp / a);
    ans += (temp / b);
    ans += (temp / c);
    cout << 4 * ans << '\n';
    return 0;
}

