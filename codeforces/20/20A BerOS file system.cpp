/*
    author    : MishkatIT
    created   : Friday 2023-04-07-20.36.39
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    string ans, x;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '/')
        {
            if(x.size() == 0)
                x += str[i];
        }
        else
        {
            ans += (x + str[i]);
            x = "";
        }
    }
    if(ans.size() == 0)
        ans = "/";
    cout << ans;
    return 0;
}

