/*
    author    : MishkatIT
    created   : Monday 2023-06-26-17.38.10
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
        for(auto& i: v) cin >> i;
        v.resize(unique(v.begin(), v.end()) - v.begin());
        n = v.size();
        v.insert(v.begin(), 0);
//        const int N = 2e5 + 10;
//        vector<pair<int, int>> track(N, {-1, 0});
        map<int, pair<int, int>> track;
        for (int i = 1; i <= n; i++)
        {
            if(track[v[i]].first == 0)
            {
                track[v[i]].first = i;
                track[v[i]].second = 1;
            }
            else
            {
                if(i - track[v[i]].first > 1)
                    track[v[i]].second++;
                track[v[i]].first = i;
            }
        }
        int ans = 1e9;
        for (int i = 1; i <= n; i++)
        {
            pair<int, int> x = track[v[i]];
            if(x.second > 0)
            {
                if(v[i] != v[1] && v[i] != v[n])
                    x.second++;
                else if(v[i] == v[1] && v[i] == v[n])
                    x.second--;
                ans = min(ans, x.second);
                x.second = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
