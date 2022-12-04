/*
    author    : MishkatIT
    created   : Sunday 2022-12-04-17.31.31
    problem   : 1699 B. Almost Ternary Matrix
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
        int row, col;
        cin >> row >> col;
        string s1 = "", s2 = "";
        int temp = 1;
        for (int i = 1; i <= (col / 2); i++)
        {
            if(temp == 1)
            {
                s1 += "1 0 ";
                temp++;
            }
            else
            {
                s1 += "0 1 ";
                temp++;
            }
            if(temp == 3)
                temp = 1;
        }
        for (int i = 0; i < s1.length(); i++)
        {
            if(s1[i] != ' ')
                if(s1[i]-'0')
                    s2 += "0 ";
                else
                    s2 += "1 ";
        }
        temp = 1;
        for (int i = 1; i <= row; i++)
        {
            if(temp == 1 || temp == 4)
            {
                cout << s1 << '\n';
                temp++;
            }
            else
            {
                cout << s2 << '\n';
                temp++;
            }
            if(temp == 5)
                temp = 1;
        }
    }
    return 0;
}

