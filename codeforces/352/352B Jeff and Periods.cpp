/*
    author    : MishkatIT
    created   : Tuesday 2023-06-06-01.56.07
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v[N];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x]. push_back(i);
    }
    vector<pair<int, int>> ans;
    for (int i = 1; i < N; i++)
    {
        if(v[i].size() == 1)
        {
            ans.push_back({i, 0});
        }
        else if(v[i].size() > 1)
        {
            int dif = v[i][1] - v[i][0];
            bool same = true;
            for (int j = 0; j + 1 < v[i].size(); j++)
            {
                if((v[i][j + 1] - v[i][j]) != dif)
                {
                  same = false;
                  break;
                }
            }
            if(same)
            {
                ans.push_back({i, dif});
            }
        }
    }
    cout << ans.size() << '\n';
    for(auto& i: ans)
    {
        cout << i.first << ' ' << i.second << '\n';
    }
    return 0;
}

