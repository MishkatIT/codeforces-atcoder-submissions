/*
    author    : MishkatIT
    created   : Thursday 2022-12-08-20.48.14
    problem   : 476 A. Dreamoon and Stairs
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    if(n >= m)
    {
        for (int i = m; ; i += m)
        {
            if(i * 2 >= n)
            {
                cout << i << '\n';
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}

