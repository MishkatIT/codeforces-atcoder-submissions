#include<iostream>
using namespace std;
int main()

{
    long int t, N;
    cin >> t;

    while(t--)
    {
        cin >> N;
        long int num2inN = 0, num3inN = 0;

        while (N % 2 == 0)
        {
            num2inN++;
            N /= 2;
        }

        while(N % 3 == 0)
        {
            num3inN++;
            N /= 3;
        }


        if(N!=1 || num2inN > num3inN)
            cout << -1 <<endl;
        else
            cout<< (num3inN - num2inN) + num3inN <<endl;



    }


}
