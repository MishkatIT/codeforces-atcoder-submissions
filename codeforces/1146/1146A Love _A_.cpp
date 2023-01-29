/*
    author    : MishkatIT
    created   : Monday 2023-01-30-01.18.53
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    int cnt = 0;
    cnt = count(str.begin(), str.end(), 'a');
    if(cnt <= (int)str.length() / 2)
        cout << cnt + cnt - 1;
    else
        cout << (int)str.length();
    return 0;
}
