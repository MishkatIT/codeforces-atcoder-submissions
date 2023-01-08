/*
    author    : MishkatIT
    created   : Monday 2023-01-09-00.15.38
    problem   : C. Letters Cyclic Shift
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
    for(auto& x: str)
    {
        if(x != 'a')
            x = --x, cnt++;
        else if(cnt)
            break;
    }
    if(!cnt)
        str.back() = 'z';
    cout << str;
    return 0;
}

