/*
    author    : MishkatIT
    created   : Wednesday 2023-05-31-18.53.08
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    string x = "", y = "";
    int n = str.length();
    int r, l;
    for(r = n - 1; r >= 0 && str[r] != 'a'; r--)
        y = str[r] + y;
    for (l = 0; l <= r; l++)
    {
        if(str[l] != 'a')
            x += str[l];
    }
    string ans = ":(";
    if(x.size() == 0 && y.size() == 0)
        ans = str;
    for (int i = l; i < n; i++)
    {
        if(x == y)
        {
            ans = str.substr(0, i);
            break;
        }
        x += y.front();
        y.erase(y.begin());
    }
    cout << ans;
    return 0;
}

// possible bug
