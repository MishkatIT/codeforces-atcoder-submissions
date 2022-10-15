/*
    author    : MishkatIT
    created   : Sunday 2022-10-16-03.30.35
    problem   : 1398 A. Bad Triangle
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
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
        cin >> arr[0] >> arr[1];
        int sum = arr[0]+arr[1];
        bool bol = false;
        for(int i=2; i<n; i++)
        {
            cin >> arr[i];
            if(bol)
                continue;
            else if(arr[i]>=sum)
            {
                cout << "1 2 " << i+1 << '\n';
                bol=true;
            }
        }
        if(!bol)
            cout << "-1" << '\n';;
    }

    return 0;
}

