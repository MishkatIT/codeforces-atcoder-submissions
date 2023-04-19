/*
    author    : MishkatIT
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
void LesGo (void)
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans = abs(x1 - x2) + abs(y1 - y2);
    if(x1 != x2 && y1 != y2) ans += 2;
    cout << ans << '\n';
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        LesGo();
    return 0;
}
