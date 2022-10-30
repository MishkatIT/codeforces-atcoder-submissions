/*
    author    : MishkatIT
    created   : Monday 2022-10-31-00.43.06
    problem   : 124 A. The number of positions
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n-a, b+1);

    return 0;
}

