/*
    author    : MishkatIT
    created   : Thursday 2022-10-13-20.41.44
    problem   : 1742 A. Sum
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
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b==c || a+c==b || b+c==a)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

    }
     return 0;
}



