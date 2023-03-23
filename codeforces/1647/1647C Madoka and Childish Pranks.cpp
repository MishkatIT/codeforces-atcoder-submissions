/*
    author    : MishkatIT
    created   : Thursday 2023-03-23-18.54.07
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
        int n, m;
        cin >> n >> m;
        char arr[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> arr[i][j];
            }
        }
        bool ok = true;
        vector<pair<pair<int, int>, pair<int, int>>> v;
        for (int i = n; i > 0; i--)
        {
            for (int j = m; j > 0; j--)
            {
                if(arr[i][j] == '1')
                {
                    if(j - 1 > 0)
                    {
                        v.push_back({{i, j - 1}, {i, j}});
                    }
                    else if(i - 1 > 0)
                    {
                        v.push_back({{i - 1, j}, {i, j}});
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if(ok)
        {
            cout << v.size() << '\n';
            for(auto &i : v)
            {
                cout << i.first.first << ' ' << i.first.second << ' ' << i.second.first << ' ' << i.second.second << '\n';
            }
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}
