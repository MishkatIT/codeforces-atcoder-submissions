/*
    author    : MishkatIT
    created   : Wednesday 2022-11-30-19.08.10
    problem   : 520 B. Two Buttons
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m, cnt = 0;
    cin >> n >> m;
    if(m <= n)
        cout << n - m;
    else
    {
        while (m > n)
        {
            if (m & 1)
            {
                cnt++;
                m++;
            }
            m /= 2;
            cnt++;
        }
        cout << cnt + (n - m);
    }
    return 0;
}
