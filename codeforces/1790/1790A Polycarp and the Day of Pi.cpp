/*
    author    : MishkatIT
    created   : Friday 2023-01-27-20.44.33
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
     string pi = "31415926535897932384626433832795028841971";
    while(t--)
    {
        string str;
        cin >> str;
        int ans = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == pi[i])
                ans++;
            else
                break;
        }
        cout << ans << '\n';
    }
    return 0;
}
