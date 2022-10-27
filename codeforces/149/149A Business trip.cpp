/*
    author    : MishkatIT
    created   : Friday 2022-10-28-02.06.35
    problem   : 149 A. Business trip
*/
#include<iostream>
#include<algorithm>
#include<functional>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int k, ans = 0, cnt = 0;
    cin >> k;
    int arr[12];
    for(int i=0; i<12; i++)
        cin >> arr[i];
    sort(arr, arr+12, greater<>());
    for(int i = 0; i < 12; i++)
    {
        if(ans >= k)
            break;
        ans += arr[i];
        cnt++;
    }
    if(ans < k)
        cout << "-1" << '\n';
    else
        cout << cnt << '\n';
    return 0;
}



