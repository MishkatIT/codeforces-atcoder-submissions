/*
    author    : MishkatIT
    created   : Monday 2022-10-10-18.12.05
    problem   : 1385 A. Three Pairwise Maximums
*/
#include<iostream>
#include<algorithm>
#include<functional>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t, arr[3];
    cin >> t;
    while(t--)
    {
        for (int i=0; i<3; i++)
            cin >> arr[i];
        sort(arr, arr+3,greater<>());
        if(arr[0]==arr[1])
            cout << "YES" << '\n' << arr[0] << ' ' << arr[2] << ' ' << arr[2] << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}



