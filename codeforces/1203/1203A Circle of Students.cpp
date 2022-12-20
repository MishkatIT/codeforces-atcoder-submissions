/*
    author    : MishkatIT
    created   : Tuesday 2022-12-20-23.50.03
    problem   : A. Circle of Students
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            v.push_back(v[i]);
//        for(auto i: v)
//                        cout << i << ' '; cout << '\n';
        int cnt = 0;
        bool ok = false;
        for(int i = 0; i < v.size() - 1; i++)
        {
            if(v[i] == v[i + 1] - 1)
            {
                cnt++;
                if(cnt + 1 == n)
                {
                    ok = true;
                    break;
                }
            }
            else
            {
                cnt = 0;
            }
        }
//        cout << cnt << '\n';
        cnt = 0;
        if(!ok)
        {
            for(int i = 0; i < v.size() - 1; i++)
            {
                if(v[i] == v[i + 1] + 1)
                {
                    cnt++;
                    if(cnt + 1 == n)
                    {
                        ok = true;
                        break;
                    }
                }
                else
                {
                    cnt = 0;
                }
            }
        }
        if(n == 1)
            ok = true;
        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}

