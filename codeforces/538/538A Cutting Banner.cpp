/*
    author    : MishkatIT
    created   : Sunday 2023-01-01-19.51.34
    problem   : A. Cutting Banner
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    string s = "CODEFORCES";
    bool ok = false;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j <= str.length(); j++)
        {
            string temp = str;
            temp.erase(i, j - i);
            if(temp == s)
            {
                ok = true;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}




