/*
    author    : MishkatIT
    created   : Thursday 2022-10-20-22.07.29
    problem   : 1749 A. Cowardly Rooks
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int sz, rock, temp;
        cin >> sz >> rock;
        for(int i=0; i<rock*2; i++)
            cin >> temp;
        if(sz == rock)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}

