/*
    author    : MishkatIT
    created   : Friday 2023-01-27-02.25.52
    problem   : M. The Pleasant Walk
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    int arr[n];
    int ans = 1, temp = 1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n ; i++)
    {
        if(arr[i] != arr[i - 1])
        {
            temp++;
            ans = max(ans, temp);
        }
        else
        {
            temp = 1;
        }
    }
    cout << ans;
    return 0;
}

