/*
    author    : MishkatIT
    created   : Wednesday 2023-03-01-01.39.53
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
        vector<int> v (n + 10, -1);
        map<int, int> mp;
        int mx = n, track = n;
        vector<int> nxt(m + 10);
        for (int i = 1; i <= m; i++)
            cin >> nxt[i];
        for (int i = 1; i <= m; i++)
        {
            if(!mp[nxt[i]])
            {
                v[track--] = i;
                mp[nxt[i]]++;
                mx--;
            }
            if(!mx)
                break;
        }
        for (int i = 1; i <= n; i++)
            cout << v[i] << " \n"[i == n];

    }
    return 0;
}
