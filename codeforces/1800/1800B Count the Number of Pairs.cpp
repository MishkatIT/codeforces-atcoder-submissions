/*
    author    : MishkatIT
    created   : Thursday 2023-03-02-20.45.38
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        map<char, int> c, s;
        for(auto& i: str)
        {
            if( i >= 'a' && i <= 'z')
                s[i]++;
        }
        for(auto& i: str)
        {
            if( i >= 'A' && i <= 'Z')
                c[i]++;
        }
//        for (auto i: s)
//                cout << i.first << ' ' << i.second << '\n';
        int ans = 0;
        char a = 'a';
        char b = 'A';
        for (int i = 0; i < 26; i++)
        {
            int x =  min(s[a], c[b]);
            ans += x;
            c[b] -= x;
            s[a] -= x;
            if(s[a])
            {
                int tt = s[a] / 2;
                ans += min(tt, k);
                k -= min(tt, k);
            }
            if(c[b])
            {
                int tt = c[b] / 2;
                ans += min(tt, k);
                k -= min(tt, k);
            }
            a++;
            b++;
        }
        cout << ans << '\n';
    }
    return 0;
}

