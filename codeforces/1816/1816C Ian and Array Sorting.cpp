/*
    author    : MishkatIT
    created   : Sunday 2023-04-09-21.39.03
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        bool ok = true;
        if(n == 2)
        {
            if(v[0] > v[1])
                ok = false;
        }
        if(ok)
        {
            for (int i = n - 1; i > 0; i--)
            {
                if(v[i - 1] > v[i])
                {
                    if(i - 2 >= 0)
                    {
                        v[i - 2] -= (v[i - 1] - v[i]);
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else if(i - 2 >= 0)
                {
                    v[i - 2] += abs(v[i - 1] - v[i]);
                }
                i--;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

