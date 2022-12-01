/*
    author    : MishkatIT
    created   : Friday 2022-12-02-03.16.40
    problem   : 1697 A. Parkway Walk
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
        int n, m;
        cin >> n >> m;
        int x, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        cout << (sum - m) * ((sum - m) > 0) << '\n';
    }
    return 0;
}

