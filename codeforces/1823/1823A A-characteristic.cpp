/*
    author    : MishkatIT
    created   : Saturday 2023-04-29-18.47.42
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
        int n, k;
        cin >> n >> k;
        bool ok = false;
        int one;
        for (int i = n; i >= 0; i--)
        {
            if(i * (i - 1) + (n - i) * (n - i - 1) == 2 * k)
            {
                ok = true;
                one = i;
                break;
            }
        }
        if(ok)
        {
            cout << "YES" << '\n';
            for (int i = 0; i < one; i++)
                cout << 1 << ' ';
            for (int i = 0; i < (n - one); i++)
                cout << -1 << ' ';
            cout << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}


