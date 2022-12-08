/*
    author    : MishkatIT
    created   : Friday 2022-12-09-01.30.05
    problem   : 478 A. Initial Bet
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int input;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        sum += input;
    }
    if(sum % 5 == 0 && sum != 0)
        cout << sum / 5;
    else
        cout << -1;
    return 0;
}

