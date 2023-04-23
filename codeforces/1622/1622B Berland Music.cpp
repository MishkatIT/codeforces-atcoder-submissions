/*
    author    : MishkatIT
    created   : Sunday 2023-04-23-18.32.27
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
        int n;
        cin >> n;
        vector<int>v(n), src(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            src[i] = v[i];
        }
        string str;
        cin >> str;
        const int N = 2e5 + 10;
        int ans[N];
        memset(ans, 0, sizeof ans);
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                temp.push_back(v[i]);
                v[i] = 1e8;
            }
        }
        sort(temp.begin(), temp.end());
        int x = 1;
        for(auto &i : temp)
        {
            ans[i] = x++;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n - temp.size(); i++)
        {
            ans[v[i]] = x++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[src[i]] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

