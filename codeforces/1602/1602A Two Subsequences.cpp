/*
    author    : MishkatIT
    created   : Monday 2022-12-05-02.28.27
    problem   : A. Two Subsequences
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str, s;
        cin >> str;
        s = str;
        sort(s.begin(), s.end());
        cout << s[0] << ' ';
        int i;
        for(i = 0; i < str.length(); i++)
        {
            if(str[i] == s[0])
                break;
        }
        str.erase(str.begin() + i);
        cout << str << '\n';

    }
    return 0;
}

