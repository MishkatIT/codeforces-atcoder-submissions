/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-20.49.07
    problem   : 432 A. Choosing Teams
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    int cnt = 0;
    for(int i=n-1; i>1;)
    {
        if(5-(arr[i]) >= k )
        {
            cnt++;
            i-=3;
        }
        else
            i--;
    }
    cout << cnt;
    return 0;
}

