/*
    author    : MishkatIT
    created   : Wednesday 2022-11-16-00.14.10
    problem   : 621 A. Wet Shark and Odd and Even
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    long long cnt = 0;
    long long sum = 0;
    long long mn = 1e10;
    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        if (temp & 1)
        {
            cnt++;
            mn = min(mn, temp);
        }
        sum += temp;
    }
    if(cnt & 1)
        sum -= mn;
    cout << sum;

    return 0;
}



