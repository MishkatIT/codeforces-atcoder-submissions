/*
    author    : MishkatIT
    created   : Thursday 2022-12-15-01.18.32
    problem   : C. A and B and Team Training
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long n, m;
    cin >> n >> m;
    int ans = 0;
    while(n > 1 || m > 1)
    {
        if(n >= m && m != 0)
            n -= 2, m--, ans++;
        else if(m >= n && n != 0)
            m -= 2, n--, ans++;
        else
            break;
    }
    cout << ans;
    return 0;
}

