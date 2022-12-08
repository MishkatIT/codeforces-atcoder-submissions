/*
    author    : MishkatIT
    created   : Friday 2022-12-09-01.12.04
    problem   : 327 A. Flipping Game
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int a;
    int cnt = 0;
    int mx = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(a & 1)
        {
            res++;
            cnt--;
        }
        else
            cnt++;
        cnt = max(cnt, 0);
        mx = max(mx, cnt);
    }
    if(mx)
        cout << mx + res;
    else
        cout << --res;
    return 0;
}

