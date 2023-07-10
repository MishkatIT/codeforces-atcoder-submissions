/*
    author    : MishkatIT
    created   : Monday 2023-07-10-14.06.59
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    if(n & 1) {
        cout << 0;
    } else {
        cout << (1 << (n >> 1));
    }
    return 0;
}

