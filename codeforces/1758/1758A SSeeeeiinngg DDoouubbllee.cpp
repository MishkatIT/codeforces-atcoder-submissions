/*
    author    : MishkatIT
    created   : Friday 2022-11-25-21.36.34
    problem   : A. SSeeeeiinngg DDoouubbllee
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
        cout << str;
        for(int i = str.length() - 1; i >= 0; i--)
            cout << str[i];
        cout << '\n';
    }
    return 0;
}


