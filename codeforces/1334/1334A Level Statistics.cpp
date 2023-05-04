/*
    author    : MishkatIT
    created   : Thursday 2023-05-04-14.41.04
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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v[i] = {x, y};
        }
        int a = 0, b = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if(i > 0)
            {
                if(v[i].first < v[i - 1].first)
                {
                    ok = false;
                }
                if(v[i].second < v[i - 1].second)
                {
                    ok = false;
                }
                if(v[i].first - v[i - 1].first < v[i].second - v[i - 1].second)
                {
                    ok = false;
                }
            }
            a += v[i].first;
            b += v[i].second;
            if(a < b)
                ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

