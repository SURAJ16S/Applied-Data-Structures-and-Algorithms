/*2)Problem Statement : given two strings A and B , find the
 length of their longest common subsequence(LCS).
 a subsequence is a sequence that appears in the same relative
 order , but not necessarily contiguous.**
 Input Format :
 A
 B
 Output format:
 Length of LCS
 Constraints:
 1 <= |A| , |B|<=1000
 Program :
 */
  #include <iostream>
 using namespace std;
 int main() {
 string A, B;
 cin >> A >> B;
 int n = A.length();
 int m = B.length();
int dp[1001][1001];
 // Initialize first row and column to 0
 for (int i = 0; i <= n; i = i + 1) {
 for (int j = 0; j <= m; j = j + 1) {
 if (i == 0 || j == 0)
 dp[i][j] = 0;
 }
 }
 // Build LCS table
 for (int i = 1; i <= n; i = i + 1) {
 for (int j = 1; j <= m; j = j + 1) {
 if (A[i - 1] == B[j - 1])
 dp[i][j] = dp[i - 1][j - 1] + 1;
 else {
 if (dp[i - 1][j] > dp[i][j - 1])
 dp[i][j] = dp[i - 1][j];
 else
 dp[i][j] = dp[i][j - 1];
 }
 }
 }
 cout << dp[n][m];
 return 0;
 }