/*
    author    : MishkatIT
    created   : Monday 2022-12-26-23.17.00
    problem   : B. Substrings Sort
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;

    int n;
    cin >> n;
    multimap<int, string> mp;
    vector<string> v(n);
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        mp.insert({str.length(), str});
    }
    int x = 0;
    for (auto& i: mp)
    {
        v[x++] = i.second;
    }
    bool ok = true;
    for (int i = 1; i < n; i++)
    {
        if(v[i].find(v[i - 1]) == string::npos)
        {
            ok = false;
            break;
        }
    }
    if(ok)
    {
        cout << "YES" << '\n';
        for (auto& i: mp)
            cout << i.second<< '\n';
    }
    else
        cout << "NO" << '\n';
    return 0;
}

