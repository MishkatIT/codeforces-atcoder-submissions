/*
    author    : MishkatIT
    created   : Monday 2022-11-14-01.16.42
    problem   : 1272 A. Three Friends
*/
#include<iostream>
#include<cmath>
#include<algorithm>
#include<numeric>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int arr[3];
        for(int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr, arr + 3);
        cout << max(2 *(arr[2] - arr[0] - 2), 0) << '\n';
    }


    return 0;
}



