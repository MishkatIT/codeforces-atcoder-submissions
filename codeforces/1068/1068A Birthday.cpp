/*
    author    : MishkatIT
    created   : Monday 2022-12-05-22.09.41
    problem   : 1068 A. Birthday.cpp]
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long solve(void)
{
    long long n, m, k, l;
    cin >> n >> m >> k >> l;
    long long x = ceil((k + l) / (double)m);
    long long y = n / m;
    if(x > y)
        return -1;
    else
        return x;
}

int main()
{
    fio;
    cout << solve();
    return 0;
}

