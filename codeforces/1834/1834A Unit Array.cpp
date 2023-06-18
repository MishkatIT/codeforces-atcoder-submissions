/*
    author    : MishkatIT
    created   : Sunday 2023-06-18-14.09.01
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
        int n;
        cin >> n;
        int neg = 0, pos = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x < 0) neg++;
            else pos++;
        }
        while(pos < neg)
        {
            neg--;
            pos++;
            ans++;
        }
        if(neg & 1)
            ans++;
        cout << ans << '\n';
    }
    return 0;
}
