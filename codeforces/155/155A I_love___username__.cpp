/*
    author    : MishkatIT
    created   : Saturday 2022-11-05-01.32.09
    problem   : 155 A
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, mn, mx;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    mn = mx = arr[0];
    int cnt = 0;
    for(int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if(mx < arr[i])
        {
            mx = arr[i];
            cnt++;
        }
        else if(mn > arr[i])
        {
            mn = arr[i];
            cnt++;
        }
    }
    cout << cnt << '\n';


    return 0;
}

