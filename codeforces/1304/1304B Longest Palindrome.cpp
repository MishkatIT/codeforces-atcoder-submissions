/*
    author    : MishkatIT
    created   : Thursday 2023-02-23-14.03.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    map<string, int>mp;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }
    string selfPalindrome;
    string ans;
    for (auto& i: mp)
    {
        string x = i.first;
//        debug(x);
        reverse(x.begin(), x.end());
        if(x == i.first)
        {
            if(!selfPalindrome.size())
            {
                selfPalindrome += i.first;
            }
        }
        else if(mp[x])
        {
            ans += i.first;
        }
        i.second--;
    }
    int sz = (ans.size() * 2 + selfPalindrome.size());
    cout << sz << '\n';
    if(sz)
    {
        cout << ans << selfPalindrome;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    return 0;
}

