/*
    author    : MishkatIT
    created   : Sunday 2022-10-30-01.12.12
    problem   : 1537 A. Arithmetic Array
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        int arr[n];
        long long sum = 0;
        for(long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        cout << ((sum < n) ? 1 : sum - n) << '\n';
    }

    return 0;
}


