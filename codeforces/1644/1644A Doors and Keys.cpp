/*
    author    : MishkatIT
    created   : Thursday 2023-02-02-21.27.18
    problem   : A. Doors and Keys
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
        string str;
        cin >> str;
        bool ok = true;
        string s;
        for (auto& i: str)
        {
            if(i >= 'a' && i <= 'z')
                s.push_back(i);
            else if(s.find(tolower(i)) == string::npos)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
