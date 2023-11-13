/*
    author    : MishkatIT
    created   : Friday 2023-01-20-17.59.25
    problem   : C. Next Alphabet
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    char c;
    cin >> c;
    if(c == 'z')
        cout << 'a';
    else cout << ++c;
    return 0;
}