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
        vector<int> v(n + 10);
        for (int i = 1; i <= n; i++) cin >> v[i];
        map<int, pair<int, int>> track;
        set<int> s;
        for (int i = 1; i <= n; i++)
        {
            if(track[v[i]].first == 0)
            {
                track[v[i]].first = i;
                track[v[i]].second = 1;
            }
            else
            {
                if(v[i] != v[i - 1])
                    track[v[i]].second++;
                track[v[i]].first = i;
            }
            s.insert(v[i]);
        }
        int ans = 1e9;
        for (auto& i: s)
        {
            pair<int, int> x = track[i];
            if(i != v[1] && i != v[n])
                x.second++;
            else if(i == v[1] && i == v[n])
                x.second--;
            ans = min(ans, x.second);
        }
        cout << ans << '\n';
    }
    return 0;
}
