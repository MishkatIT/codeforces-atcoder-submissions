/*
    author    : MishkatIT
    created   : Tuesday 2022-11-01-17.45.05
    problem   : 716 A. Crazy Computer
*/
#include<iostream>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
signed main()
{
    fio;
   long n, c;
   cin >> n >> c;
   long arr[n];
   cin >> arr[0];
   long cnt = 1;
   for(long i = 1; i < n ; i++)
       {
           cin >> arr[i];
           if(arr[i] - arr[i-1] <= c)
           {
               cnt++;
           }
           else
           {
               cnt = 1;
           }
       }
       cout << cnt;
    return 0;
}

