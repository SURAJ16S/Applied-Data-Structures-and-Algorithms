/*3)Problem Statement : Given an M x N grid filled with
 non-negative integers , find a path from the top-left to
 the bottom-right corner that minimizes the sum of all
 numbers along its path. you can only move right or down
 Input Format :
 M N
 grid values(M lines, N integers each)
 Output Format:
 Minimum path sum
 Constraints:
1<=M, N<= 1000
 0<= grid[i][j]<=1000
 Program :
 */
 #include <iostream>
 using namespace std;
 int main() {
 int M, N;
 cin >> M >> N;
 int grid[1000][1000];
 int dp[1000][1000];
 // input grid
 for (int i = 0; i < M; i = i + 1) {
 for (int j = 0; j < N; j = j + 1) {
 cin >> grid[i][j];
 }
 }
 // calculate minimum path sums
 for (int i = 0; i < M; i = i + 1) {
 for (int j = 0; j < N; j = j + 1) {
 if (i == 0 && j == 0)
 dp[i][j] = grid[i][j];
 else if (i == 0)
 dp[i][j] = dp[i][j - 1] + grid[i][j];
 else if (j == 0)
 dp[i][j] = dp[i - 1][j] + grid[i][j];
 else
 dp[i][j] = (dp[i - 1][j] < dp[i][j - 1] ? dp[i - 1][j] :
 dp[i][j - 1]) + grid[i][j];
 }
 }
 cout << dp[M - 1][N - 1];
 return 0;
}