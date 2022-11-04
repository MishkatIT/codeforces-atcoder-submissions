/*
    author    : MishkatIT
    created   : Saturday 2022-11-05-02.58.14
    problem   : 189 A. Cut Ribbon
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;
    for (int x = 0; x <= n; x++)
        for (int y = 0; y <= n; y++)
        {
            int cz = n - (a * x + b * y); // ax + by + cz = n
            if(cz < 0) break;
            double z = (cz / (double) c );
            if(z == (int)z)
                ans = max(ans, x + y +(int)z);
        }

    cout << ans;
    return 0;
}

