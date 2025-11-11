/*Problem statement : you are given a list of N coin
 denominations and a total amount . find the minimum
 number of coins required to make up that amount. if it is
 not possible return -1.
 Input Format:
 N
 coin1 coin2 coin3 ... coin
 amount
 Output Format:
 Minimum number of coins (or -1 if not possible)
 Constraints :
 1<= N <= 100
 1<=coin value <= 10^4
 1<= amount <= 10^4
 Program :
 */
 #include <iostream>
 using namespace std;
 int main() {
 int N;
 cin >> N;
 int coins[100];
 for (int i = 0; i < N; i++)
 cin >> coins[i];
 int amount;
 cin >> amount;
 int dp[10001];
 for (int i = 0; i <= amount; i++)
 dp[i] = 100000;   // a large value instead of INT_MAX
 dp[0] = 0;
for (int i = 1; i <= amount; i++) {
 for (int j = 0; j < N; j++) {
 if (coins[j] <= i && dp[i - coins[j]] + 1 < dp[i])
 dp[i] = dp[i - coins[j]] + 1;
 }
 }
 if (dp[amount] >= 100000)
 cout << -1;
 else
 cout << dp[amount];
 return 0;
 }