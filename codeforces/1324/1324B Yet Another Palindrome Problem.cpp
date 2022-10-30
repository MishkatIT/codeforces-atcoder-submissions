/*
    author    : MishkatIT
    created   : Sunday 2022-10-30-21.27.55
    problem   : 1324 B. Yet Another Palindrome Problem
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
        bool ok = false;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n - 2; i++)
        {
            for(int j = i + 2; j < n; j++)
            {

                if(arr[i] == arr[j])
                {
                    ok = true;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}

