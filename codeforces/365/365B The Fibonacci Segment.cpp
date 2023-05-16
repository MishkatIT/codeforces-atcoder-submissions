/*
    author    : MishkatIT
    created   : Tuesday 2023-05-16-19.38.55
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 1;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
//        cout << "tt" << temp << '\n';
        if(temp < 2)
        {
            temp++;
            ans = max(ans, temp);
        }
        else
        {
            if(arr[i] == (arr[i - 1] + arr[i - 2]))
            {
                temp++;
                ans = max(ans, temp);
            }
            else
            {
                temp = 0;
                i -= 2;
            }
        }
    }
    cout << ans;
    return 0;
}

