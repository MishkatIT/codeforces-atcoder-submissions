/*
    author    : MishkatIT
    created   : Sunday 2022-10-30-05.10.31
    problem   : 1303 A. Erasing Zeroes
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
        while(str.length() != 0)

        {
            if(str[0] != '1')
            {
                str.erase(0, 1);
            }
            else break;
        }
        while(str.length() != 0)

        {
            if(str[str.length() - 1] != '1')
            {
                str.pop_back();
            }
            else break;
        }
        cout << count(str.begin(), str.end(), '0') << '\n';

    }

    return 0;
}



