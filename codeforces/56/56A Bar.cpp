/*
    author    : MishkatIT
    created   : Friday 2022-12-16-19.10.41
    problem   : A. Bar
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    map<string, bool> mp;
    string temp = "ABSINTH, BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE,..";
    int i = 0;
    while(temp[i] != '.')
    {
        string s;
        while(temp[i] != ',')
        {
            s.push_back(temp[i]);
            i++;
        }
        mp[s] = true;
        i += 2;
    }
    for (int i = 0; i < 18; i++)
    {
        string s = to_string(i);
        mp[s] = true;
    }
    string str;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(mp[str] == true)
            cnt++;
    }
    cout << cnt;
    return 0;
}
