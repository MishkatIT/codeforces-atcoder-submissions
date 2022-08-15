#include<iostream>
using namespace std;
int main()
{
    int t, arr[4];
    cin >> t;
    while(t--)
    {
        int cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            if(arr[i] > arr[0])
                cnt++;
        }
        cout << cnt << endl;
    }
}
