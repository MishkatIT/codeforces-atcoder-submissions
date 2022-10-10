/*
    author    : MishkatIT
    created   : Monday 2022-10-10-06.04.36
    problem   : 1385 B. Restore the Permutation by Merger
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n*2], cnt=1, j;
        cin >> arr[0];
        for (int i=1, x=1; x<n*2; x++)
        {
            cin >> arr[i];
            if(cnt==n)
                continue;
            for ( j=0; j<i; j++)
            {
                if(arr[i]!=arr[j])
                    continue;
                else break;
            }
            if(j==i)
            {
                i++;
                cnt++;
            }
        }
        for (int i=0; i<n; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    return 0;
}



