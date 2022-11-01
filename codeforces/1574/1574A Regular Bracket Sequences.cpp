/*
    author    : MishkatIT
    created   : Tuesday 2022-11-01-18.22.18
    problem   : 15 74 A. Regular Bracket Sequences
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << '(';
            for (int j = 1; j <= i; j++)
                cout << ')';
            for (int j = 1; j <= n - i; j++)
                cout << "()";
            cout << '\n';
        }
    }

    return 0;
}

