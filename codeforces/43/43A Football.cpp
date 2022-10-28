/*
    author    : MishkatIT
    created   : Saturday 2022-10-29-02.07.10
    problem   : 43 A. Football
*/
#include<iostream>
//#include <bits/stdc++.h>
#include<string>
#include<map>
#include<algorithm>

#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string s, ans;
    map<string, int>str;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        str[s]++;
    }
    int temp = 0;
    for(auto i: str)
    {
        if(i.second > temp)
        {
            temp = i.second;
            ans = i.first;
        }
    }
    cout << ans;

}



