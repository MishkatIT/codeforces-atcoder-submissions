/*
    author    : MishkatIT
    created   : Wednesday 2023-05-03-23.41.14
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x & 1)
                odd++;
            else
                even++;
        }
        if(odd == n)
            cout << 0 << '\n';
        else if(even == n)
            cout << -1 << '\n';
        else
            cout << even << '\n';
    }
    return 0;
}