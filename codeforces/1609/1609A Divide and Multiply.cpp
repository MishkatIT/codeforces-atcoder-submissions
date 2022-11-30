/*
    author    : MishkatIT
    created   : Wednesday 2022-11-30-13.39.24
    problem   : 1609 A. Divide and Multiply
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long long temp;
long long power(long long n)
{
    long long cnt = 0;
    temp = n;
    while(temp % 2 == 0)
    {
        temp /= 2;
        cnt++;
    }
    return cnt;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n, pwr = 0;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            pwr += power(arr[i]);
            arr[i] = temp;;
        }
        long long sum = 0;
        sum = accumulate(arr, arr + n, sum);
        long long mx = *max_element(arr, arr + n);
        cout << setprecision(1000) << mx * pow(2, (int) pwr) + sum - mx << '\n';

    }
    return 0;
}


