/*
    author    : MishkatIT
    created   : Thursday 2022-11-17-23.45.37
    problem   : 499 B. Lecture
*/
#include<iostream>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    string sa, sb;
    map<string, string> mp;
    while(m--)
    {
        cin >> sa >> sb;
        if(sa.length() <= sb.length())
            mp[sa] = sa;
        else
            mp[sa] = sb;
    }
    string s;
    while(n--)
    {
        cin >> s;
        cout << mp[s] << ' ';
    }

    return 0;
}



