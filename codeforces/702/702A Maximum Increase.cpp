/*
    author    : MishkatIT
    created   : Tuesday 2022-12-27-01.26.20
    problem   : A. Maximum Increase
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
    bool ok = false;
    int mx = 1;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            ok = true;
            cnt++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    if(ok)
        mx++;
    cout << mx;
    return 0;
}

