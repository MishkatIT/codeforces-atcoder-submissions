/*
    author    : MishkatIT
    created   : Monday 2023-05-29-23.04.48
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
vector<int> v[N];
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 1; i < N; i++)
          v[i].clear();
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x].push_back(i);
        }
        int ans = -1;
        for (int i = 1; i < N; i++)
        {
            for (int j = 0; j + 1 < v[i].size(); j++)
            {
              ans = max(ans, v[i][j] + n - v[i][j + 1]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

