/*
    author    : MishkatIT
    created   : Wednesday 2023-01-18-02.26.46
    problem   : B. Phone numbers
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, i;
    cin >> n;
    string str;
    cin >> str;
    if(n & 1)
        i = 3, cout << str[0] << str[1] << str[2];
    else
        i = 2, cout << str[0] << str[1];
    for (; i < n; i += 2)
        cout << '-' << str[i] << str[i + 1];
    return 0;
}

