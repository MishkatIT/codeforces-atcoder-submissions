/*
    author    : MishkatIT
    created   : Monday 2022-11-21-21.27.28
    problem   : 1760 D. Challenging Valleys
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        bool ok = true;
        for(int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
                for(i++; i < n; i++)
                    if(arr[i] < arr[i - 1])
                    {
                        ok = false;
                        goto en;
                    }

            if (arr[i] < arr[i - 1])
            {
                for(i++; i < n; i++)
                {
                    if(arr[i] > arr[i - 1])
                    {
                        for(i++; i < n; i++)
                        {
                            if(arr[i] < arr[i -1])
                            {
                                ok = false;
                                goto en;
                            }
                        }

                    }
                }
            }
        }
en:
        cout << (ok ? "YES" : "NO") << '\n';


    }
    return 0;
}


