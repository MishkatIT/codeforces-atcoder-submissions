/*
    author    : MishkatIT
    created   : Sunday 2023-01-29-23.56.09
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long a, b;
    cin >> a >> b;
    cout << max((long long)0, a - b);
    return 0;
}