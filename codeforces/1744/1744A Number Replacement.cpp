/*
    author    : MishkatIT
    created   : Sunday 2022-10-16-21.08.00
    problem   : 1744 A. Number Replacement
*/
#include<bits/stdc++.h>
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
        for(int i=0; i<n; i++)
            cin >> arr[i];
        string s1, s2;
        cin >> s1;
        s2=s1;
        for(int i=0; i<n; i++)
            if(arr[i] != 0)
            {
                int temp = arr[i];
                char tmp =s1[i];
                for(int j=0; j<i; j++)
                {

                    if(arr[j]!=0)
                    {
                        if(arr[j]==temp)
                        {
                            s2[j]=tmp;
                            arr[j]=0;
                        }

                    }
                }
            }
        if(s1==s2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

    }

    return 0;
}

