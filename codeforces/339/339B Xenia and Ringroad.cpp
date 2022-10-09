/*
    author    : MishkatIT
    created   : Sunday 2022-10-09-21.18.56
    problem   : B. Xenia and Ringroad
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    long long int  house, task;
    cin >> house >> task;
    long long int  arr[task];
    for (int i=0; i<task; i++)
        cin >> arr[i];
    long long int  ans = arr[0]-1;
    for (int i=1; i<task; i++)
    {
        if(arr[i]>arr[i-1])
            ans+=(arr[i]-arr[i-1]);
        else if(arr[i]==arr[i-1])
            ans+=0;
        else
            ans+=((house+1-arr[i-1]) + (arr[i]-1));
    }
    cout << ans;



    return 0;
}


