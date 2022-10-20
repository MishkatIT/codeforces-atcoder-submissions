/*
    author    : MishkatIT
    created   : Friday 2022-10-21-01.00.35
    problem   : 580 A. Kefa and First Steps
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n, cnt=1, ans=1;
    bool ok = true;
    cin >> n;
    int a;
    n--;
    cin >> a;
    int cmp = a;
    while(n--)
    {
        cin >> a;
        if(a>=cmp)
            cnt++;
        else
          cnt=1;
        cmp = a;
        ans = max(ans, cnt);
    }
    cout << ans;
}



