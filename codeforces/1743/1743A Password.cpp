/*
    author    : MishkatIT
    created   : Monday 2022-10-17-20.51.58
    problem   : 1743 A. Password
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, temp;
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> temp;
        cout << (10-n) * (9-n) * 3 << '\n';
    }
    return 0;
}

