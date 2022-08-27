#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t, cnt;
    cin >> t;
    while(t--)
    {
        cnt = 0;
        string x;
        for(int i=0; i <= 3; i++)
            cin >> x[i];
        for(int i=0;i <= 3;i++)
        {
            for(int j=i+1; j <= 4; j++)
            {
                if(x[i] == x[j] && x[i] != 0)
                {
                    cnt++;
                    x[j] = 0;
                }
            }
        }

        cout << 3-cnt << endl;

    }
}



