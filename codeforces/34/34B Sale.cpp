/*
    author    : MishkatIT
    created   : Monday 2022-10-24-02.31.34
    problem   : 34 B. Sale
*/
#include<iostream>
#include<algorithm>
#include<numeric>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    t=1;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        int sum = 0;
        for(int i=0; i<m; i++)
            if(arr[i]<0)
                sum+=arr[i];
            else
                break;

        cout << -sum;
    }

    return 0;
}

