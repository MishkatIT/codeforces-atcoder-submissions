#include<iostream>
using namespace std;
int main()
{
    int frnds, fence, cnt=0;
    cin >> frnds >> fence;
    int arr[frnds];
    for(int i=0; i<frnds; i++)
    {
        cin >> arr[i];
        if(arr[i]>fence)
            cnt++;
    }
    cout << frnds+cnt;

    return 0;
}
