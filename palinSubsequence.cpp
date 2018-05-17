#include <iostream>
#include <vector>
using namespace std;

int findLongPalinRecur(string inp, int i, int j)
{
  if (s[i] == s[j])
    return findLongPalinRecur(inp, i+1, j-1) + 2;

  if (i == j)
    return 1;

  if (s[i] == s[j] && i + 1 == j)
    return 2;

  return max(findLongPalinRecur(inp, i+1, j), findLongPalinRecur(inp, i,j-1));

}

int findLongPalinDP(string inp)
{
  int s = inp.size();
  int dp[s][s];
  for (int i =0;i<s;i++)
  {
    dp[i][i] = 1;
  }

  for (int l = 2; l<s;l++)
  {
    for (int i = 1;i<s;i++)
    {
      j = l+i-1;
      if (inp[i] == inp[j])
      {
        dp[i][j] = dp[i+1][j-1] + 2;
      }
      else
      {
        dp[i][j] = max (dp[i][j-1], dp[i+1][j])
      }
    }
  }
  return dp[0][n-1];
}
int main()
{
  string inp = "GEEKSFORGEEKS";
  findLongPalinDP(inp);
  findLongPalinRecur(inp, 0, inp.size()-1);
}
