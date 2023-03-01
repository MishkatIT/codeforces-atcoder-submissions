/*
    author    : MishkatIT
    created   : Wednesday 2023-03-01-23.13.00
    problem   : A. Two Substrings
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string x;
    cin >> x;
    string str = x;
    size_t checkAB = str.find("AB");
    int cnt = 0;
    if(checkAB != string::npos)
    {
        str[checkAB] = '#', str[checkAB + 1] = '#';
        cnt++;
    }
    if(str.find("BA") != string::npos)
        cnt++;
    if(cnt < 2)
    {
        str = x;
        size_t checkBA = str.find("BA");
        cnt = 0;
        if(checkBA!= string::npos)
        {
            str[checkBA] = '#', str[checkBA + 1] = '#';
            cnt++;
        }
        if(str.find("AB") != string::npos)
            cnt++;
    }
    cout << (cnt > 1? "YES" : "NO") << '\n';

    return 0;
}

