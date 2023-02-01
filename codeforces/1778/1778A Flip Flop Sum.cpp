/*
    author    : MishkatIT
    created   : Wednesday 2023-02-01-20.35.13
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int cnt = 0;
        bool ok = false;
        bool neg = false;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
            if(temp == -1)
            {
                cnt++;
                neg = true;
            }
            else
                cnt = 0;
            if(cnt == 2)
                ok = true;
        }
        if(ok)
            sum += 4;
        else if(!neg)
            sum -= 4;
        cout << sum << '\n';
    }
    return 0;
}
