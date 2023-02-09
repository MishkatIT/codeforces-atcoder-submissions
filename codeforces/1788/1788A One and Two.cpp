/*
    author    : MishkatIT
    created   : Thursday 2023-02-09-23.18.57
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
        vector<int> v;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp == 2)
                v.push_back(i + 1);
        }
        if(!(int)v.size())
            cout << 1 << '\n';
        else if(!((int)v.size() & 1))
            cout << v[(int)v.size() / 2 - 1] << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}
