/*
    author    : MishkatIT
    created   : Friday 2023-07-07-20.56.10
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
char row(const vector<string>& board)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] != '.' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
            return board[i][0];
    }
    return '.';
}

char col(const vector<string>& board)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] != '.' && board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return board[0][i];
    }
    return '.';
}

char diag(const vector<string>& board)
{
    if (board[0][0] != '.' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return board[0][0];
    if (board[0][2] != '.' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return board[0][2];
    return '.';
}

char win(const vector<string>& board)
{
    char winner = row(board);
    if (winner != '.')
        return winner;

    winner = col(board);
    if (winner != '.')
        return winner;

    winner = diag(board);
    if (winner != '.')
        return winner;

    return '.';
}

int main()
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> board(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> board[i];
        }

        char winner = win(board);
        if (winner != '.')
            cout << winner << '\n';
        else
            cout << "DRAW" << '\n';
    }

    return 0;
}
