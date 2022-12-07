/*
    author    : MishkatIT
    created   : Wednesday 2022-12-07-14.00.00
    problem   : 147 A. Punctuation
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end());
    string ans;
    bool sOK = true;
    bool pOK = true;
    for (auto i: str)
    {
        if (i == ' ')
        {
            if(sOK && pOK)
            {
                ans.push_back(i);
                sOK = false;
            }
        }
        else if (i == '.' || i == ',' || i == '!' || i == '?')
        {
            if(sOK)
            {
                ans.push_back(' ');
                sOK = false;
            }
            ans.push_back(i);
            pOK = false;
        }
        else
        {
            ans.push_back(i);
            sOK = true;
            pOK = true;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}

