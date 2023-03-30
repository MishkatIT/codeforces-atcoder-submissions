/*
    author    : MishkatIT
    created   : Thursday 2023-03-30-22.33.02
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
        vector<vector<int>> v(m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int temp;
                cin >> temp;
                v[j].push_back(temp);
            }
        }
        long long ans = 0;
        for (int j = 0; j < m; j++)
        {
            sort(v[j].rbegin(), v[j].rend());
            for (int i = 1; i <= n; i++)
            {
                ans += v[j][i - 1] * 1LL * (n - i);
                ans -= v[j][i - 1] * 1LL * (i - 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
