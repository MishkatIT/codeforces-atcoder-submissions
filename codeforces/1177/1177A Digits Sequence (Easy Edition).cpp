/*
    author    : MishkatIT
    created   : Thursday 2023-06-08-02.14.21
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string s;
    for (int i = 1; i <= 3000; i++)
        s += to_string(i);
    int n;
    cin >> n;
    cout << s[--n];
    return 0;
}

