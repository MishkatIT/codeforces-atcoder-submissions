/*
    author    : MishkatIT
    created   : Monday 2023-06-05-00.26.04
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
        int n, k;
        cin >> n >> k;
        int x = 1, cnt = 0;
        while(x <= n)
        {
            cnt++;
            if(x == n)break;
            x += k;
        }
        if(x > n)cnt++;
        cout << cnt << '\n';
    }

    return 0;
}

