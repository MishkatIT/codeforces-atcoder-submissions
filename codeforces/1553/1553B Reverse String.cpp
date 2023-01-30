/*
    author    : MishkatIT
    created   : Monday 2023-01-30-20.19.58
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
        string str, target;
        cin >> str >> target;
        int n = (int)str.length();
        int x = 0;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            string temp;
            for (int j = 0; j <= i; j++)
                temp += str[j];
            for (int j = i - 1; j >= 0; j--)
                temp += str[j];
//            static int tt = 0;
//            cout << ++tt << ' ' << temp << '\n';
            if(temp.find(target) != string::npos)
            {
                cout << "YES" << '\n';
                ok = true;
            }
            if(ok)
                break;
        }
        if(!ok)
            cout << "NO" << '\n';
    }
    return 0;
}

