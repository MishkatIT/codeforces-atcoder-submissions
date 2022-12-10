/*
    author    : MishkatIT
    created   : Saturday 2022-12-10-21.35.49
    problem   : 334 A. Candy Bags
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int x = 1;
    int y = n * n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j += 2)
        {
            cout << x++ << ' ' << y-- << ' ';
        }
        cout << '\n';
    }
    return 0;
}

