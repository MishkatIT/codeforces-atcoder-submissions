/*
    author    : MishkatIT
    created   : Friday 2022-12-30-19.14.31
    problem   : B. Mirror in the String
*/
#include<bits/stdc++.h>
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
        string str;
        cin >> str;
        if(n == 1 || (str[0] == str[1]))
        {
            cout << str[0] << str[0] << '\n';
        }
        else
        {
            int pos = 0;
            for (int i = 1; i < n; i++)
            {
                if(str[i] <= str[pos])
                    pos = i;
                else
                    break;
            }
            for (int i = 0; i <= pos; i++)
                cout << str[i];
            for (int i = pos; i >= 0; i--)
                cout << str[i];
            cout << '\n';
        }
    }
    return 0;
}

