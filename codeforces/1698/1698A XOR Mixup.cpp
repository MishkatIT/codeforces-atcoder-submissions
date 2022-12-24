/*
    author    : MishkatIT
    created   : Saturday 2022-12-24-20.23.26
    problem   : A. XOR Mixup
*/
#include<bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i, j;
        for (i = 0; i < n; i++)
        {
            int temp = 0;
            for (j = 0; j < n; j++)
            {
                if(i != j)
                    temp ^= arr[j];
            }
            if(temp == arr[i])
            {
                cout << arr[i] << '\n';
                break;
            }
        }
    }

    return 0;
}

