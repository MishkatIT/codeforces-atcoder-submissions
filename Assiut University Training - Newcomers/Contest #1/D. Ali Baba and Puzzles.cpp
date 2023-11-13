/*
    author    : MishkatIT
    created   : Friday 2023-01-20-18.02.09
    problem   : D. Ali Baba and Puzzles
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a + b - c == d || a + b * c == d || a - b + c == d || a - b * c == d || a * b + c == d|| a * b - c == d)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}