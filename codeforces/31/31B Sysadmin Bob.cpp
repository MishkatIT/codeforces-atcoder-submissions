/*
    author    : MishkatIT
    created   : Monday 2023-03-13-21.34.28
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
    bool ok = true;
    int len = str.length();
    vector<int> pos;
    for(int i = 0; i + 1 < len; i++)
    {
        if(str[i] == '@')
        {
            pos.push_back(i);
            if(str[i + 1] == str[i]) ok = false;
        }
    }
    if(pos.size() == 0) ok = false;
    if(str.front() == '@' || str.back() == '@') ok = false;
    else
    {
        for (int i = 0; i + 2 < len; i++)
            ok &= !((str[i] == str[i + 2]) && (str[i] == '@'));
    }
    if(!ok)
    {
        cout << "No solution";
    }
    else
    {
        int x = 0;
        for(int i = 1; i < (int)pos.size(); i++)
        {
            str.insert(str.begin() + pos[i] - 1 + x++, ',');
        }
        cout << str;
    }
    return 0;
}

