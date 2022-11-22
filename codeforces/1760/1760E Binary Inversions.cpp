/*
    author    : MishkatIT
    created   : Monday 2022-11-21-21.51.20
    problem   : 1760 E. Binary Inversions
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
        vector<int> boss(n), v(n), cp(n);
        for(int i = 0; i < n; i++)

        {
            cin >> v[i];
            cp[i] = v[i];
            boss[i] = v[i];
        }
//            for (auto i: cp)
//                cout << i << ' ' ;
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
//                if(cp[i] == 1)
//                    break;
            /*12
            1 0 1 0 0 1 1 0 1 1 0 0*/
            if(cp[i] == 0)
            {
                cp[i] = 1;
                break;
                ok = true;
            }
        }
//          if(!ok)
        {
            for(int i = n - 1; i >= 0; i--)
            {
                if(v[i] == 1)
                {
                    v[i] = 0;
                    break;
                }
            }
        }
        int cnt = 0;
        int ans = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            if(v[i] == 0)
                cnt++;
            if(v[i] == 1)
                ans += cnt;
        }

        cnt = 0;
        int bns = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            if(cp[i] == 0)
                cnt++;
            if(cp[i] == 1)
                bns += cnt;
        }

        cnt = 0;
        int cns = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            if(boss[i] == 0)
                cnt++;
            if(boss[i] == 1)
                cns += cnt;
        }
        cout << max (ans, max(bns, cns)) << '\n';
    }

    return 0;
}



