/*
    author    : MishkatIT
    created   : Monday 2022-12-19-03.35.27
    problem   : A. Gotta Catch Em' All!
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    string s = "Bulbasaur";
    map<char, int> temp;
    for (auto &i: s)
    {
        temp[i] = 1;
    }
    map<char, int> mp;
    for (auto &i: str)
    {
        if(temp[i])
            mp[i]++;
    }
    if (mp.size() < 7)
    {
        cout << 0 << '\n';
        return 0;
    }
    int mn = (int)1e6;
    for (auto &i: mp)
    {
        if(i.first == 'a' || i.first == 'u')
            i.second /= 2;
        mn = min(mn, i.second);
    }
    cout << mn;
    return 0;
}

