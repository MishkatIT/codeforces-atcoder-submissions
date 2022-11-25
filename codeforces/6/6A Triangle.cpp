/*
    author    : MishkatIT
    created   : Friday 2022-11-25-20.03.01
    problem   : 6 A. Triangle
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n = 4;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int mx = -200;
    for (int i = 0; i < 2; i++)
        mx = max (mx ,(a[i] + a[i + 1] - a[i + 2]));
    cout << (mx > 0 ? "TRIANGLE" :(mx == 0 ? "SEGMENT" : "IMPOSSIBLE"));
    return 0;
}



