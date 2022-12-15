/*
    author    : MishkatIT
    created   : Friday 2022-12-16-04.05.12
    problem   : A. Interview
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    long long temp, a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a |= temp;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        b |= temp;
    }
    cout << (long long) a + b;
    return 0;
}

