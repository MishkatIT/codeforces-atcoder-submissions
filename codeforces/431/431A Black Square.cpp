/*
    author    : MishkatIT
    created   : Monday 2023-06-05-01.45.16
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int arr[5];
    for (int i = 1; i <= 4; i++)
        cin >> arr[i];
    string str;
    cin >> str;
    long long ans = 0;
    for(auto& i: str)
        ans += arr[i - '0'];
    cout << ans;
    return 0;
}

