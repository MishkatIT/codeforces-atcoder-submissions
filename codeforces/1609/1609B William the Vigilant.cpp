/*
    author    : MishkatIT
    created   : Sunday 2023-05-28-01.18.20
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    int abc = 0;
    for (int i = 0; i + 2 < n; i++)
    {
        string temp = "";
        for (int j = i; j < (i + 3) ; j++)
        {
            temp += str[j];
        }
        if(temp == "abc")
        {
            abc++;
            i += 2;
        }
    }
    while(q--)
    {
        int pos;
        cin >> pos;
        --pos;
        char c;
        cin >> c;
        if(str[pos] == c)
        {
            cout << abc << '\n';
            continue;
        }
        if(c == 'a' && pos + 2 < n && str[pos + 1] == 'b' && str[pos + 2] == 'c')abc++;
        else if(c == 'b' && pos - 1 >= 0 && pos + 1 < n && str[pos - 1] == 'a' && str[pos + 1] == 'c')abc++;
        else if(c == 'c' && pos - 2 >= 0 && str[pos - 1] == 'b' && str[pos - 2] == 'a')abc++;

        if(str[pos] == 'a' && pos + 2 < n && str[pos + 1] == 'b' && str[pos + 2] == 'c')abc--;
        else if(str[pos] == 'b' && pos - 1 >= 0 && pos + 1 < n && str[pos - 1] == 'a' && str[pos + 1] == 'c')abc--;
        else if(str[pos] == 'c' && pos - 2 >= 0 && str[pos - 1] == 'b' && str[pos - 2] == 'a')abc--;

        str[pos] = c;

        cout << abc << '\n';
    }
    return 0;
}



