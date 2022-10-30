/*
    author    : MishkatIT
    created   : Monday 2022-10-31-00.58.35
    problem   : 450 A. Jzzhu and Children
*/
#include<iostream>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    int arr[n];
    int pos = n;
    int temp = 0;
    for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            int x = ceil((double)arr[i] / m);
            if(x > 0)
            {
                if(x >= temp)
                {
                    pos = i + 1;
                    temp = x;
                }
            }
        }
        cout << pos;


    return 0;
}

