/*
    author    : MishkatIT
    created   : Monday 2023-04-03-00.27.56
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
void LesGo (void)
{
    string str;
    cin >> str;
    string temp;
    map<char, int> mp;
    for (auto &i: str)
    {
        if(!mp[i])
            temp += i;
        mp[i]++;
    }
    if(mp[temp[1]] + mp[temp[2]] <= mp[temp[0]])
        replace(str.begin(), str.end(), temp[1], temp[2]);
    else if(mp[temp[0]] + mp[temp[1]] <= mp[temp[2]])
        replace(str.begin(), str.end(), temp[1], temp[0]);
    else
        replace(str.begin(), str.end(), temp[2], temp[0]);

    int f = 0;
    bool ok = true;
    for (auto &i : str)
    {
        if(i == str[0])
            f++;
        else if(f)
            f--;
        else
        {
            ok = false;
            break;
        }
    }
    if(f)
        ok = false;
    cout << (ok ? "YES" : "NO") << '\n';
    return;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        LesGo();
    return 0;
}
