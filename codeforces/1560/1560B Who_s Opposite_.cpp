/*
    author    : MishkatIT
    created   : Sunday 2022-12-04-00.14.37
    problem   : 1560 B. Who's Opposite
*/
#include<iostream>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long mx = abs(a - b) * 2;
        if(a > mx || b > mx || c > mx)
        {
            cout << - 1 << '\n';
            continue;
        }
        long long dif = abs(a - b);
        if((c + dif) > mx)
            cout << c - dif << '\n';
        else
            cout << c + dif << '\n';
    }
    return 0;
}
