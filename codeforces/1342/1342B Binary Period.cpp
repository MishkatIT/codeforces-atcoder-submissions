/*
    author    : MishkatIT
    created   : Tuesday 2023-01-31-19.44.47
    problem   : B. Binary Period
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
        string str;
        cin >> str;
        int one = 0;
        one = count(str.begin(), str.end(), '1');
        if(one == 0 || one == (int)str.length())
        {
            cout << str << '\n';
            continue;
        }
//        int x = str[0] == '1';
        for (int i = 0; i < (int)str.length(); i++)
            {
                cout << "01";
//                x ^= 1;
            }
        cout << '\n';

    }
    return 0;
}

