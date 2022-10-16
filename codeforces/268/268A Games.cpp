/*
    author    : MishkatIT
    created   : Monday 2022-10-17-03.33.18
    problem   : 268 A. Games
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t=1;
    while(t--)
    {
        int n;
        int cnt = 0;
        cin >> n;
        int arr[n][2];
        for(int i=0; i<n; i++)
            for(int j=0; j<2; j++)
                cin >> arr[i][j];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                if(arr[i][0]==arr[j][1])
                    cnt++;
            }
        cout << cnt;
    }
    return 0;
}

