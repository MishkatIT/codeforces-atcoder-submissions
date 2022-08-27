#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int leng = word.length();
    int hello = 0;

    for (int i = 0; i<leng; i++)
    {
        if(word[i] == 'h')
        {
            for (i++; i<leng; i++)
            {
                if(word[i] == 'e')
                {
                    for (i++; i<leng; i++)
                    {
                        if(word[i] == 'l')
                        {
                            for (i++; i<leng; i++)
                            {
                                if(word[i] == 'l')
                                {
                                    for (i++; i<leng; i++)
                                    {
                                        if(word[i] == 'o')
                                        {
                                            hello++;
                                            goto ending;

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

    }
    ending:
    if(hello == 1)
        cout << "YES";
    else
        cout << "NO";


}
