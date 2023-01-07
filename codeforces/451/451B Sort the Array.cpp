/*
    author    : MishkatIT
    created   : Saturday 2023-01-07-20.52.10
    problem   : B. Sort the Array
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int cnt = 0;
        int ini = 0, ter = 0;
        bool ok = false;
        for (int i = 1; i < n; i++)
        {
            if(arr[i] < arr[i - 1])
            {
                if(!ok)
                {
                    ok = true;
                    ini = i - 1;
                    ter = i;
                }
                else
                    ter++;

            }
            else if(ter != 0)
                break;
        }
        reverse(arr + ini, arr + ter + 1);
        if(is_sorted(arr, arr + n))
        {
            cout << "yes" << '\n';
            cout << ++ini << ' ' << ++ter;
        }
        else
        {
            cout << "no" << '\n';
        }
    }
    return 0;
}

