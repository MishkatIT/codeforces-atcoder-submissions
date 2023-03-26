/*
    author    : MishkatIT
    created   : Sunday 2023-03-26-21.08.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define inf (int)1e5 + 10
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        int m;
        int zz = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            zz += m;
            vector<int> tt(m);
            for (int i = 0; i < m; i++)
            {
                cin >> tt[i];
            }
            v[i] = (tt);
        }
        int arr[inf];
        memset(arr, 1, sizeof arr);
        vector<int> ans;

        for (int i = n - 1; i >= 0; i--)
        {
            bool ok = false;
            for (auto &x : v[i])
            {
                if(!ok && arr[x])
                {
                    ok = true;
                    ans.push_back(x);
                    arr[x] = 0;
                    zz--;
                }
                else if(zz)
                {
                    arr[x] = 0;
                    zz--;
                }
                else break;
            }
        }
        if(ans.size() != n)
            cout << -1 << '\n';
        else
        {
            for (int i = n - 1; i >= 0; i--)
                cout << ans[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}
