/*
    author    : MishkatIT
    created   : Monday 2022-11-07-05.21.45
    problem   : 1520 A. Do Not Be Distracted!
*/
#include<iostream>
#include<string>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        map<char, int>mp;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if(mp[str[i]] < 1 || str[i - 1] == str[i])
                mp[str[i]]++;
            else
                ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n';



    }

    return 0;
}

