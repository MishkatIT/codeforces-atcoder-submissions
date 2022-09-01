#include<iostream>
using namespace std;
int main()
{
    int i, j, cnt = 0;
    int arr[4];
    for (i=0; i<4; i++)
    {
        cin >>arr[i];
    }
    for (
        i = 0; i < 4; i++)
    {
        for (j = i+1; j < 4; j++)
        {

            if(arr[i] == arr[j] && arr[i] != 0 && arr[j] != 0)
            {
                cnt++;
                arr[j] = 0;
            }
        }
    }
    cout << cnt << endl;


}
