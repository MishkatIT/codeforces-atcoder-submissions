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
    if ((a[0] + a[1] > a[2]) ||(a[1] + a[2] > a[3]))
        cout << "TRIANGLE";
    else if ((a[0] + a[1] == a[2]) ||(a[1] + a[2] == a[3]))
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";

    return 0;
}



