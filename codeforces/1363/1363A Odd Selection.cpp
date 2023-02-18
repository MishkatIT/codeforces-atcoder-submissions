/*
    author    : MishkatIT
    created   : Saturday 2023-02-18-22.18.03
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
        int n, x;
        cin >> n >> x;
        int temp;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp & 1)
                odd++;
            else
                even++;
        }
        bool ok = true;
        if((odd == 0)|| (x == n && odd % 2 == 0) || (n == odd && x % 2 == 0))
            ok = false;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

