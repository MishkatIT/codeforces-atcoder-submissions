/*
    author    : MishkatIT
    created   : Saturday 2022-12-24-00.25.09
    problem   : A. Odds and Ends
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n & 1 & arr[0] & arr[n - 1])
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}

