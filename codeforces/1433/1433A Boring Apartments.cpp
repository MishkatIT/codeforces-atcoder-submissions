/*
    author    : MishkatIT
    created   : Thursday 2022-10-27-23.06.15
    problem   : 1433 A. Boring Apartments
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        int ans = ((num % 10) - 1) * 10;
        for(int i = 1; num != 0 ; i++)
        {
            ans += i;
            num /= 10;
        }
        cout << ans << '\n';

    }

    return 0;
}



