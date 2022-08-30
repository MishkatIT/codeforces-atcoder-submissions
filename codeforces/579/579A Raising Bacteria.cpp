#include<iostream>
using namespace std;
int main()
{
    int bacteria, cnt = 0;
    cin >> bacteria;
    while(bacteria != 0)
    {
        if(bacteria %2 ==1)
        {
            cnt++;
            bacteria -= 1;
        }
        else
            bacteria /= 2;
    }
    cout << cnt;
}
