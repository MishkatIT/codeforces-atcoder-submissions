/*
    author    : MishkatIT
    created   : Friday 2022-12-16-21.13.07
    problem   : A. Cut the Triangle
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
        int n = 6;
        vector<int> v;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        bool chk = false;
        for (int i = 0; i < n; i += 2)
            for (int j = i + 2; j < n; j += 2)
            {
                if (v[i] == v[j])
                    chk = true;
            }
        if(chk)
        {
            chk = false;
            for (int i = 1; i < n; i += 2)
                for (int j = i + 2; j < n; j += 2)
                {
                    if (v[i] == v[j])
                        chk = true;
                }
        }
        bool ok = true;
        if(chk)
            ok = false;
        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}

