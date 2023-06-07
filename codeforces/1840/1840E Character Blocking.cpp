/*
    author    : MishkatIT
    created   : Wednesday 2023-06-07-19.04.14
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
    int t;
    cin >> t;
    while(t--)
    {
        string sa, sb;
        cin >> sa >> sb;
        int n = sa.length();
        int t, query;
        cin >> t >> query;
        int mismatches = 0;
        for (int i = 0; i < n; i++)
        {
            mismatches += (sa[i] != sb[i]);
        }
        queue<pair<int, bool>> q;

        for (int i = 0; i < query; i++)
        {
            int type;
            cin >> type;
            if(type == 1)
            {
                int x;
                cin >> x;
                --x;
                if(sa[x] != sb[x])
                {
                    mismatches--;
                    q.push({i, true});
                }
                else
                    q.push({i, false});
            }
            else if(type == 2)
            {
                int a, b, c, d;
                cin >> a >> b >> c >> d;
                --b, --d;
                if(sa[b] != sb[b])mismatches--;
                if(sa[d] != sb[d])mismatches--;
                if(a == 1 && c == 1)
                {
                    swap(sa[b], sa[d]);
                }
                else if(a == 1 && c == 2)
                {
                    swap(sa[b], sb[d]);
                }
                else if(a == 2 && c == 2)
                {
                    swap(sb[b], sb[d]);
                }
                else
                {
                    swap(sb[b], sa[d]);
                }
                if(sa[b] != sb[b])mismatches++;
                if(sa[d] != sb[d])mismatches++;
            }
            else
            {
                cout << (mismatches == 0 ? "YES" : "NO") << '\n';
            }
            if(!q.empty() && i - q.front().first + 1 == t)
            {
                if(q.front().second)
                    mismatches++;
                q.pop();
            }
        }
    }
    return 0;
}

