/*
    author    : MishkatIT
    created   : Monday 2023-07-10-12.17.30
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2) {
        int dif = abs(y1 - y2);
        cout << x1 + dif << ' ' << y1 << ' ' << x2 + dif << ' ' << y2;
    } else if(y1 == y2) {
        int dif = abs(x1 - x2);
        cout << x1 << ' ' << y1 + dif << ' ' << x2 << ' ' << y2 + dif;
    } else {
        if(x1 < x2) {
            swap(x1, x2);
            swap(y1, y2);
        }
        if(abs(x2 - x1) == abs(y2 - y1)) {
            cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1;
        } else {
            cout << -1;
        }
    }
    return 0;
}

