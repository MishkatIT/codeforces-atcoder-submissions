/*
    author    : MishkatIT
    created   : Friday 2022-11-11-16.21.09
    problem   : 237 A. Free Cash v3
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int h, m;
    n--;
    int x, y;
    cin >> x >> y;
    int temp = 1;
    int mx = 1;
    while(n--)
    {
        cin >> h >> m;
        if(h == x && y == m)
        {
            temp++;
            mx = max(temp, mx); // recording the max occurrence 
        }
        else
        {
            temp = 1;
            x = h;
            y = m;
        }
    }
    cout << mx;
    return 0;
}



