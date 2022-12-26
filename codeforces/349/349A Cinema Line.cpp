/*
    author    : MishkatIT
    created   : Tuesday 2022-12-27-00.57.53
    problem   : A. Cinema Line
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[55];
    memset(arr, 0, sizeof arr);
    int temp;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 25)
            arr[25]++;
        else if(temp == 50)
        {
            if(arr[25] >= 1)
                arr[25]--, arr[50]++;
            else
            {
                ok = false;
                break;
            }
        }
        else
        {
            if ((arr[25] >= 1 && arr[50] >= 1)) // reordered 
                arr[25] --, arr[50]--;
            else if (arr[25] >= 3)
                arr[25] -= 3;
            else
            {
                ok = false;
                break;
            }
        }
//        cout << arr[25] << ' ' << arr[50] << '\n';
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

