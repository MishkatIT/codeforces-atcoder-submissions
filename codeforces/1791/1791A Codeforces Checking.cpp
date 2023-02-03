/*
    author    : MishkatIT
    created   : Friday 2023-02-03-20.35.26
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    string s = "codeforces";
    while(t--)
    {
        string str;
        cin >> str;
        bool ok = false;
        if(s.find(str) != string::npos)
            ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
