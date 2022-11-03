/*
    author    : MishkatIT
    created   : Friday 2022-11-04-03.32.09
    problem   : 785 A. Anton and Polyhedrons
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
int    ans = 0;
    while(t--)
    {
        string str;
        cin >> str;
        switch(str[0] - '0') // converting to int, because switch case eat only int ;D
        {
        case 'T' - '0':
            ans += 4;
            break;
        case 'C' - '0':
            ans += 6;
            break;
        case 'O' - '0':
            ans += 8;
            break;
        case 'D' - '0':
            ans += 12;
            break;
        case 'I' - '0':
            ans += 20;
            break;
        }
    }
    cout << ans;

    return 0;
}

