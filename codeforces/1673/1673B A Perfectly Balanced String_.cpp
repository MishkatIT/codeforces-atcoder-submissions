/*
    author    : MishkatIT
    created   : Sunday 2023-03-12-21.50.06
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    while(n--)
    {
        string str;
        cin >> str;
        set<char> st(str.begin(), str.end());
        map<char, int> mp;
        str = '#' + str;
        int minGap = INT_MAX;
        for(int i = 1; i <= str.length(); i++)
        {
            if(mp[str[i]])
            {
                minGap = min(minGap, i - mp[str[i]] - 1);
                mp[str[i]] = i;
            }
            else
            {
                mp[str[i]] = i;
            }
        }
        if((int)st.size() - 1 > minGap)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
    return 0;
}

