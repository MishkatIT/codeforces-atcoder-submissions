/*
    author    : MishkatIT
    created   : Sunday 2023-01-01-19.06.01
    problem   : A. Problem About Equation
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, b;
    cin >> n >> b;
    int arr[n];
    int mx = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        sum += arr[i];
    }
    int minCheck = 0;
    for (int i = 0; i < n; i++)
    {
        minCheck += (mx - arr[i]);
    }
    if( b < minCheck)
    {
        cout << -1;
        return 0;
    }
    double avg = (double)(sum + b) / n;
    for (int i = 0; i < n; i++)
    {
        cout << setprecision(10) << avg - arr[i] << '\n';
    }
    return 0;
}

