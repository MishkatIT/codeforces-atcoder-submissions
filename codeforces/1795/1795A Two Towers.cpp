/*
    author    : MishkatIT
    created   : Thursday 2023-02-16-20.29.13
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
        int a, b;
        cin >> a >> b;
        string x, y;
        cin >> x >> y;
        reverse(y.begin(), y.end());
        x += y;
        bool ok = true;
        int cnt = 1, dbl = 0;
        for (int i = 1; i < (a + b); i++)
        {
            if(x[i] == x[i - 1])
            {
                cnt++;
                dbl++;
                if(cnt == 3 || dbl == 2)
                {
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

