/*
    author    : MishkatIT
    created   : Tuesday 2022-11-08-03.36.46
    problem   : 1624 C. Division by Two and Permutation
*/
#include<iostream>
#include<algorithm>
#include<queue>
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
        int x;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            pq.push(x);
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            while(pq.top() > n - i)
            {
                int x;
                x = pq.top();
                pq.pop();
                pq.push(x / 2);
            }
            if(pq.top() != n - i)
            {
                ok = false;
                break;
            }
            else
                pq.pop();
        }

        /*** TLE ***/
//        for (int i = 0; i < n; i++)
//        {
//            sort(arr, arr + n, greater<>());
//            while(arr[i] > n - i)
//            {
//                arr[i] /= 2;
//                sort(arr, arr + n, greater<>());
//            }
//            if(arr[i] != n - i)
//            {
//                ok = false;
//                break;
//            }
//        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
