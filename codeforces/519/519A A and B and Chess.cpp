/*
    author    : MishkatIT
    created   : Tuesday 2022-11-15-23.35.15
    problem   : 519 A. A and B and Chess
*/
#include<iostream>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int line = 8;
    int w = 0, b = 0;
    map<char, int> mp {{'q', 9}, {'r', 5}, {'b', 3}, {'n', 3}, {'p', 1}};
    while(line--)
    {
        int chr = 8;
        while(chr--)
        {
            char c;
            cin >> c;
            if (c != '.' && towlower(c) != 'k')
            {
                if(c < 97)
                {
                    c += 32;
                    w += mp[c];
                }
                else
                    b += mp[c];
            }
        }
    }
    cout << (w == b ? "Draw" : (w > b ? "White" : "Black")) << '\n';
    return 0;
}



