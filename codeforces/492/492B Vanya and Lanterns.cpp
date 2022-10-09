/*
    author    : MishkatIT
    created   : Monday 2022-10-10-05.05.30
    problem   : 432 B. Vanya and Lanterns
*/
#include<iostream>
#include<algorithm>
#include<iomanip>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int lantern, street;
    cin >> lantern >> street;
    int arr[lantern];
    for (int i=0; i<lantern; i++)
        cin >> arr[i];
    sort(arr,arr+lantern);
    int mx=0;
    for (int i=1; i<lantern; i++)
        if(arr[i]-arr[i-1]>mx)
            mx=arr[i]-arr[i-1];
    double iniDist=arr[0];
    double terDist=street-arr[lantern-1];
    double ans = max ((max(iniDist, terDist)), (double)mx/2);
    cout << fixed << setprecision(10) << ans;
    return 0;
}



