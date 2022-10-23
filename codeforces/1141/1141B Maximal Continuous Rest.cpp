/*
    author    : MishkatIT
    created   : Monday 2022-10-24-04.05.38
    problem   : 1141 B. Maximal Continuous Rest
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    int cnt = 0;
    int ini, tar;
    bool ok = false;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        ini=arr[0];
        tar=arr[n-1];
        if(arr[i]==1)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            ok = true;
            cnt = 0;
        }
    }
    int temp = 0;
    if((ini == 1 and tar == 1) and ok)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]) temp++;
            else break;
        }
        for(int i=n-1; i>=0; i--)
            if(arr[i]) temp++;
            else break;
    }
    ans = max(ans, temp);
    cout << ans ;
    return 0;
}


