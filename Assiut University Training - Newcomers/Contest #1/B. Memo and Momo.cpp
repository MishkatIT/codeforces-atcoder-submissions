/*
    author    : MishkatIT
    created   : Friday 2023-01-20-17.55.02
    problem   : B. Memo and Momo
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
        cout << "Both";
    else if(a % k == 0)
        cout << "Memo";
    else if(b % k == 0)
        cout << "Momo";
    else
        cout << "No One";
    return 0;
}