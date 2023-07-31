/*
    author    : MishkatIT
    created   : Monday 2023-07-31-19.11.34
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    int stackk = 0;
    int bad = 0;
    for(auto& i: str) {
        if(i == '(') {
            stackk++;
        } else if (stackk) {
            stackk--;
        } else {
            bad++;
        }
    }
    cout << str.length() - (stackk + bad);
    return 0;
}

