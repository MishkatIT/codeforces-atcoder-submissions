/*
    author    : MishkatIT
    created   : Friday 2022-11-04-20.46.17
    problem   : 1747 A. Two Groups
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans += arr[i];
        }
        cout << abs(ans) << '\n';
    }

    return 0;
}

