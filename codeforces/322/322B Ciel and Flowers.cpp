/*
    author    : MishkatIT
    created   : Friday 2023-04-28-00.57.54
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int r, g, b;
    cin >> r >> g >> b;
    int ans = 0;
    for (int i = 0; i <= 3; i++)
    {
        int temp = i;
        if(i > min({r, g, b}))
            break;
        temp += (r - i) / 3;
        temp += (g - i) / 3;
        temp += (b - i) / 3;
        ans = max(ans, temp);
    }
    cout << ans;
    return 0;
}

