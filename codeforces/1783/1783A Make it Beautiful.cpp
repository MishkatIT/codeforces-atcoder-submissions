/*
    author    : MishkatIT
    created   : Sunday 2023-01-08-20.34.33
    problem   : A
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool ok = false;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        if(s.size() > 1)
            ok = true;

        if(ok)
        {
            cout << "YES" << '\n';
            sort(arr, arr + n, greater<>());
//            for (int i = 0; i < n; i++)
//                cout << arr[i] << ' ';
            int x = 0;
            int y = n - 1;
            for (int i = 0; i < n; i++)
            {
                if(!(i & 1))
                    cout << arr[x++] << ' ';
                else
                    cout << arr[y--] << ' ';
            }
            cout << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}
