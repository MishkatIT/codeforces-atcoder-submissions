/*
    author    : MishkatIT
    created   : Thursday 2022-12-29-22.41.28
    problem   : B. T-shirts from Sponsor
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int x;
    vector<string>str {"S", "M", "L", "XL", "XXL"};
    map<string, int> mp;
    for (int i = 0; i < 5; i++)
    {
        mp[str[i]] = i;
    }
    vector<int> v(5);
    for (auto& i: v)
        cin >> i;
    int k;
    cin >> k;
    while(k--)
    {
        string temp;
        cin >> temp;
        int x = mp[temp];
        int a = x, b = x;
        if(v[x])
        {
            cout << str[x] << '\n';
            v[x]--;
        }
        else
        {
            while(true)
            {
                if(a != 0)
                    a--;
                if(b != 4)
                    b++;
                if(v[b])
                {
                    cout << str[b] << '\n';
                    v[b]--;
                    break;
                }
                else if(v[a])
                {
                    cout << str[a] << '\n';
                    v[a]--;
                    break;
                }
            }
        }
    }
    return 0;
}

