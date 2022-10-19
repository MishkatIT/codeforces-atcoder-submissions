/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-21.39.07
    problem   : 408 A. Line to Cashier
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int minimum(int);
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int ans=minimum(arr[0]);
    for(int i=1; i<n; i++)
        ans = min(ans, minimum(arr[i]));
    cout << ans;

    return 0;
}
int minimum(int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        sum+=(temp*5)+15;
    }
    return sum;

}

