/*
    author    : MishkatIT
    created   : Thursday 2023-10-05-00.33.07
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    ld a, b, c, d;
    cin >> a >> b >> c >> d;

    // Calculate the probability of SmallR hitting the target on each turn (p)
    ld p = a / b;

    // Calculate the probability of Zanoes hitting the target on each turn (q)
    ld q = c / d;

    // Explanation of the Probability Calculation:
    // We are calculating the probability that SmallR wins the match.
    // To do this, we use the concept of complementary probabilities:
    // SmallR wins when one of the following events happens:
    // 1. SmallR hits the target on any of their turns.
    // 2. Zanoes misses on all of their turns, and then SmallR hits.
    //
    // Probability of SmallR hitting the target on any turn = p
    // Probability of Zanoes missing on all of their turns, and then SmallR hitting = (1 - q) * (1 - p)
    //
    // We can express the probability that SmallR wins as an infinite geometric progression:
    // P(SmallR wins) = p * q^0 + p * q^1 + p * q^2 + ...
    //
    // The formula for the sum of an infinite geometric progression is:
    // S = a / (1 - r)
    //
    // Where:
    // S is the sum of the geometric progression.
    // a is the first term of the progression, which is p.
    // r is the common ratio, which is q.
    //
    // So, in our case:
    // P(SmallR wins) = p / (1 - q)

    // Calculate the probability that SmallR wins the match using the derived formula
    ld probability = p / (1.0 - (1 - p) * (1 - q));

    cout << fixed << setprecision(18) << probability << '\n';

    return 0;
}
