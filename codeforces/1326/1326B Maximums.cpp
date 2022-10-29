/*
    author    : MishkatIT
    created   : Sunday 2022-10-30-00.54.45
    problem   : 1326 B. Maximums
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{

    int n;
    cin >> n;
    int temp = 0;
    while(n--)
    {
        int x;
        cin >> x;
        cout << temp + x << " ";
        temp = max(temp, temp + x);
    }

    return 0;
}



