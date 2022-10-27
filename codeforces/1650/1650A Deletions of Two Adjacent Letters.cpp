/*
    author    : MishkatIT
    created   : Friday 2022-10-28-00.34.40
    problem   : 1650 A. Deletions of Two Adjacent Letters
*/
#include<iostream>
#include<string>
#include<vector>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int i ;
        vector<int>v;
        bool ok = false;
        string str, s;
        cin >> str >> s;
        if(str[str.length()-1] == s[0] or str[0] == s[0])
        {
            ok = true;
            goto en;
        }
        else
        {
            for(i = 0; i < str.length(); i++)
                if(str[i] == s[0])
                    v.push_back(i);

        }
        for(int i = 0; i < v.size(); i++)
            if((v[i]  % 2 == 0))
            {
                ok = true;
                break;
            }
en:
        cout << (ok ? "YES" : "NO") << '\n';;


    }

    return 0;
}



