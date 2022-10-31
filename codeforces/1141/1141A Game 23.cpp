/*
    author    : MishkatIT
    created   : Monday 2022-10-31-18.12.54
    problem   : 1141 A. Game 23
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    int ans = -1;
    int temp = ( m / n);
    if(m % n == 0)
    {
        ans = 0;
        while(!(temp % 3)) temp /= 3, ans++;
        while(!(temp % 2)) temp /= 2, ans++;
    }
    cout << ( temp == 1 ? ans : -1);

    return 0;
}

