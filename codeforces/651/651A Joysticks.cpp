/*
    author    : MishkatIT
    created   : Friday 2023-01-13-03.19.07
    problem   : A. Joysticks
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b;
    cin >> a >> b;
    if(a == max(a, b))
        swap(a, b);
    int ans = 0;
    while(a > 1 || b > 1)
    {
        if(a <= 2 && b <= 2)
        {
            ans++;
            break;
        }
        if(b & 1)
        {
            ans += (b / 2);
            b = a + (b / 2);
            a = 1;
        }
        else
        {
            ans += (b / 2) - 1;
            b = a + (b / 2) -1;
            a = 2;
        }
    }
    cout << ans;
    return 0;
}
