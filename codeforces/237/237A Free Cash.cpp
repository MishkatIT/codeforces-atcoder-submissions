/*
    author    : MishkatIT
    created   : Friday 2022-11-11-14.42.38
    problem   : 237 A. Ela Sorting Books v2
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long arr[24][60]; // solving by using 2D array
int main()
{
    fio;
    int n;
    cin >> n;
    long long h, m;
    long long mx = 0;
    while(n--)
    {
        cin >> h >> m;
        arr[h][m]++;
        if(arr[h][m] > mx)
            mx = arr[h][m];
    }
    cout << mx << '\n';

    return 0;
}



