/*
    author    : MishkatIT
    created   : Sunday 2022-11-20-21.43.33
    problem   : B. Elimination of a Ring
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
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        if(s.size() == 1)
            cout << 1 << '\n';
        else if(s.size() > 2)
            cout << n << '\n';
        else
            cout << (2 + (n - 2) / 2) << '\n';
    }
    return 0;
}


