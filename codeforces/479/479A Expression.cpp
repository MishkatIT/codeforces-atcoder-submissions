/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-04.26.00
    problem   : 479 A. Expression
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a+b+c;
    ans = max(ans, (a+b)*c);
    ans = max(ans, a*(b+c));
    ans = max(ans, a*b*c);
    cout << ans;

    return 0;
}

