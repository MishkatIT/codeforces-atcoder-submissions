/*
    author    : MishkatIT
    created   : Saturday 2023-03-11-21.43.40
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
    string str;
    cin >> str;
    map<char, char> mp;
    for(char i = '1'; i <= '9'; i++)
    {
        char c;
        cin >> c;
        mp[i] = c;
    }
    bool ok = false;
    for(int i = 0; i < n; i++)
    {
        if(ok)
        {
            if(mp[str[i]] >= str[i])
                str[i] = mp[str[i]];
            else break;
        }
        else if(mp[str[i]] > str[i] && !ok)
        {
            str[i] = mp[str[i]];
            ok = true;
        }
    }
    cout << str;
    return 0;
}

