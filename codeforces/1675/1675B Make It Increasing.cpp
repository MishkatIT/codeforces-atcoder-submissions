/*
    author    : MishkatIT
    created   : Saturday 2022-10-29-19.17.47
    problem   : 1675 B. Make It Increasing
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
st:
    while(t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        long long cnt = 0;
        for (int i = n-1; i >0; )
        {
            if(arr[i] <= arr[i-1] and arr[i-1] > 0)
            {
                arr[i-1] /= 2;
                cnt++;
                continue;
            }
            else if(arr[i] == 0)
            {
                cout << "-1" << '\n';
                goto st;
            }
            else i--;
        }
        cout << cnt << '\n';
    }

    return 0;
}



