#include<iostream>
using namespace std;
int main()
{
    int n = 5, arr[5], cnt1 = 0, cnt2 = 1;
    while (n--)
    {
        for (int i = 0; i< 5; i++)
        {
            cnt1++;
            cin >> arr[i];

            if(arr[i] == 1)
            {
                cout << abs(cnt1-3) + abs(3- cnt2)<< endl;
                break;
            }

        }
        cnt1 = 0;
        cnt2+=1;
    }
}

