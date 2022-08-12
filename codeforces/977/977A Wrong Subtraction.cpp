#include<iostream>
using namespace std;
int main()
{
    long long  int n, k, cnt = 0;
    cin >> n >> k;

    while(cnt<k)
    {
        if (( n % 10) != 0)
            n--;
        else if(( n % 10) == 0)
            n/=10;

        cnt++;
    }
    cout << n ;
}
