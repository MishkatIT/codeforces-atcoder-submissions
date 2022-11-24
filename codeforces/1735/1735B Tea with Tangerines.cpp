/*
    author    : MishkatIT
    created   : Thursday 2022-11-24-14.08.09
    problem   : 1735 B. Tea with Tangerines
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int cnt = 0;
        int threshold = (arr[0] * 2) - 1;
        for (int i = 0; i < n; i++)
        {
            cnt += ((arr[i] - 1) / threshold);
        }
        cout << cnt << '\n';
    }

    return 0;
}
