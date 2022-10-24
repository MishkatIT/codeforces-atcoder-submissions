/*
    author    : MishkatIT
    created   : Monday 2022-10-24-23.52.18
    problem   : 536 C. Lunar New Year and Number Division
*/
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    long double ans = 0;
    for(long long i=0; i<=n/2-1; i++)
        ans+= (long double)pow((arr[i]+arr[n-i-1]), 2);
    cout << setprecision(1000) << ans;

    return 0;
}

