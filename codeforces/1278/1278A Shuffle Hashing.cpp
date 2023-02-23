/*
    author    : MishkatIT
    created   : Friday 2023-02-24-00.49.27
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str, hashed;
        cin >> str >> hashed;
        sort(str.begin(), str.end());
        int len = hashed.length() - str.length();
        bool ok = false;
        for (int i  = 0; i <= len; i++)
        {
            string temp = hashed.substr(i, str.length());
            sort(temp.begin(), temp.end());
            if(temp == str)
            {
                ok = true;
                break;
            }
//            cout << hashed.substr(i, str.length()) << '\n';
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

