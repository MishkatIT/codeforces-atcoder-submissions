/*
    author    : MishkatIT
    created   : Saturday 2023-05-13-20.12.14
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int one = 0, two = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x == 100)
            one++;
        else
            two++;
    }
    two %= 2;
    if(two && one >= 2)
        one -= 2, two--;
    one %= 2;
    if(one || two)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';

    return 0;
}

