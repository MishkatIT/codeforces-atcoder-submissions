
#include<iostream>
using namespace std;

int main()
{
    int a, k, i, score[1000], cnt = 0, kscore;
    cin >> a >> k;
    for (i = 0; i < a; i++)
    {
        cin >> score[i];
        cnt++;
        if (cnt == k)
        {
            kscore = score[i];
        }

    }

    cnt = 0;

    for (i = 0; i < a; i++)
    {
        if (score[i] >= kscore && score[i] > 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
