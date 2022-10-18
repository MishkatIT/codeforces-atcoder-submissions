/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-02.19.21
    problem   : 208 A. Dubstep
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    bool ok = false;
    cin >> str;
    for(int i=0; i<str.length(); i++)
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            if(ok)
                cout << ' ';
        }
        else
        {
            cout << str[i];
            ok = true;
        }


    return 0;
}
