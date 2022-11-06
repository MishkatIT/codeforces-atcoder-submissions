/*
    author    : MishkatIT
    created   : Sunday 2022-11-06-00.12.15
    problem   : 977 C. Less or Equal
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for(long long i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    long long i, cnt = 0;
    for (i = 0; i < k; i++)
    {
        cnt++;
    }
    if(n > 1 && i < n && k != 0)
        cout << (arr[i] != arr[i - 1] ? arr[i - 1] : -1) << '\n';
    else if(k == n)
        cout << arr[n - 1] << '\n';
    else if(arr[0] > 1 && k == 0)
        cout << 1 << '\n';
    else
        cout << -1 << '\n';


    return 0;
}

