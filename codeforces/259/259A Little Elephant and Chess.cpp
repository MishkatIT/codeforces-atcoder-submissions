/*
    author    : MishkatIT
    created   : Tuesday 2023-05-02-21.10.30
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    string str;
    bool ok = true;
    for (int i = 0; i < 8; i++)
    {
        cin >> str;
        for (int j = 1; j < 8; j++)
        {
            if(str[j] == str[j - 1])
            {
                ok = false;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

