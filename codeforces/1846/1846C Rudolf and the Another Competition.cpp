/*
    author    : MishkatIT
    created   : Friday 2023-07-07-21.15.46
*/
#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        int pos = 1;
        int pen = 0;
        int pnt = 0;
        for (int i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].end());
            int point = 0;
            int tpen = 0;
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                if (sum + v[i][j] <= h)
                {
                    tpen += v[i][j] + sum;
                    sum += v[i][j];
                    point++;
                }
                else
                {
                    break;
                }
            }
            if (i == 0)
            {
                pen = tpen;
                pnt = point;
            }
            else
            {
                if (point > pnt)
                {
                    pos++;
                }
                else if(point == pnt)
                {
                    if (tpen < pen)
                    {
                        pos++;
                    }
                }
            }
//            debug(point);
//            debug(tpen)
        }
        cout << pos << '\n';
    }
    return 0;
}
