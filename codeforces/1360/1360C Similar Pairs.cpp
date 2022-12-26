/*
    author    : MishkatIT
    created   : Monday 2022-12-26-20.52.34
    problem   : C. Similar Pairs
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
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] & 1)
                odd++;
        }
        int even = v.size() - odd;
        bool ok = false;
        if(!(even & 1) & !(odd & 1))
            ok = true;
        if(!ok)
        {
            sort(v.begin(), v.end());
            for (int i = 1; i < n; i++)
            {
                if(v[i] - v[i - 1] == 1)
                {
                    ok = true;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

