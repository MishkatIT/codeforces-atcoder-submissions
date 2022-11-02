/*
    author    : MishkatIT
    created   : Wednesday 2022-11-02-01.41.10
    problem   : 1743 C. Save the Magazines
*/
#include<iostream>
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
        string str;
        cin >> str;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        priority_queue<int> pq;
        int cnt = 0, ans = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == '0')
            {
                while(!pq.empty())
                {
                    if(cnt > 0)
                    {
                        ans += pq.top();
                        cnt--;
                    }
                    pq.pop();
                }
            }
            else
            {
                if(i - 1 >= 0 && str[i - 1] == '0')
                    pq.push(arr[i - 1]);
                pq.push(arr[i]);
                cnt++;
            }
        }
        while(!pq.empty())
        {
            if(cnt > 0)
            {
                ans += pq.top();
                cnt--;
            }
            pq.pop();
        }
        cout << ans << '\n';
    }


//        int n;
//        cin >> n;
//        string str;
//        cin >> str;
//        int arr[n];
//        for(int i = 0; i < n; i++)
//            cin >> arr[i];
//
//        int ans = 0;
//        if(n == 1)
//            ans = arr[0];
//
//        for (int i = 1; i < n ; i++)
//        {
//            if (str[i - 1] == '0' && str[i] == '1' && arr[i-1] > arr[i])
//            {
//                ans += arr[i - 1];
//                str[i] = '0';
//            }
//            else if(str[i] == '1')
//            {
//                ans += arr[i];
//            }
//
//        }
    /*
    4
    0111
    5 4 5 1  >>greedy failed here.
    */
//        int ans = 0;
//        if(str[0] == '1')
//            ans += arr[0];
//        int ok = 0;
//        for(int i = 1; i < n; i++)
//        {
//            if(str[i - 1] == '0' && str[i] == '1')
//            {
//              if(arr[i] < arr[i - 1])
//              {
//                  if(arr[i + 1] > arr[i - 1])
//                {
//                    ans += arr[i - 1];
//                    swap(str[i], str[i - 1]);
//                }
//
//                else if(str[i] == '1')
//                    ans += arr[i];
//              }
//            }
//
//            else if(str[i] == '1')
//                ans += arr[i];
////            else
////                ans += arr[i];
////            if(ok == 1 )
////            {
////                str[i] = '0';
////                ok = 0;
////            }
//        cout << ans << '\n';





    return 0;
}

