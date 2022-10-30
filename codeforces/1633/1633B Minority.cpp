/*
    author    : MishkatIT
    created   : Sunday 2022-10-30-21.55.33
    problem   : 1633 B. Minority
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int zero = count(begin(str), end(str), '0');
        int one = count(begin(str), end(str), '1');
        if(zero == one)
        {
            cout << one - 1 << '\n';
        }
        else
        {
            cout << min( one, zero) << '\n';
        }
    }

    return 0;
}

