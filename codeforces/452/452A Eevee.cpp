/*
    author    : MishkatIT
    created   : Saturday 2022-12-24-00.45.04
    problem   : A. Eevee
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> pos;
    for (int i = 0; i < n; i++)
    {
        if(str[i] != '.')
            pos.push_back(i);
    }
    vector<string> v {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    if(pos.size())
        for (int i = 0; i < v.size(); i++)
        {
            int x = 0;
            if(v[i].size() == n)
            {
                while(true)
                {
                    if(v[i][pos[x]] == str[pos[x]])
                    {
                        if(x + 1 == pos.size())
                        {
                            cout << v[i];
                            return 0;
                        }
                        x++;
                    }
                    else
                        break;
                }
            }
        }
    if(n == 8)
        cout << v[0];
    else
        cout << v[3];
    return 0;
}

